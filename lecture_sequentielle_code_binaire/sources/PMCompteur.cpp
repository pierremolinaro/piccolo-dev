/*
 *  PMCompteur.cpp
 *  Last modified: 10/03/2009 Alain Giorla, Sebastien Cetin  
 *
 */
//---------------------------------------------------------------------------*

#include "PMCompteur.h"

//---------------------------------------------------------------------------*

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//---------------------------------------------------------------------------*

// constructor
PMCompteur::PMCompteur (const char * inFileName, const bool bv) :
codeImage (NULL),
uncheckAddress (NULL),
instructionList (0),
pos (0),
v (false) {
	codeImage = new PMCodeImage (inFileName);
	const unsigned long first = codeImage->firstAddress () ;
	const unsigned long last = codeImage->lastAddress () ;
	const unsigned long size = last - first ;
	uncheckAddress = new bool [size] ;
	instructionList = new unsigned short [size] ;
	for(unsigned long i=0; i<size; i++) {
		uncheckAddress [i] = true ;
		instructionList [i] = 0 ;  }
	v = bv ;
}


// destructor
PMCompteur::~PMCompteur (void) {
	delete codeImage ;
}


// method checkPMCodeImage
// check main program of binary code
void PMCompteur::checkPMCodeImage (unsigned long pcstart) {
	// initialize PC
//	unsigned long pcstart = codeImage->firstAddress () ;
	this->checkProgram (pcstart) ;
}


// method checkProgram
// check program starting at address start  
void PMCompteur::checkProgram (unsigned long start) {
	const unsigned long first = codeImage->firstAddress () ;
	unsigned long localPC = start ;
	// main loop
	while(codeImage->byteIsDefinedAtAddress (localPC) && uncheckAddress [localPC/2 - first/2]) {
		// the address localPC is being checked
		uncheckAddress [localPC/2 - first/2] = false ;
		// get instruction and convert it to big endian
		unsigned short instruction = codeImage->byteAtAddress (localPC) ;
		instruction <<= 8 ;
		instruction |= codeImage->byteAtAddress (localPC + 1) ;
		// evaluate the next address to check
		unsigned long step = 0 ;
		step = evalInstructionStep (instruction, localPC, start) ;
		localPC = localPC + step ; 
	}
}


// method evalInstructionStep
// identifies instruction and change address properly  
unsigned long PMCompteur::evalInstructionStep (unsigned short instruction, unsigned long localPC, unsigned long goToStart) {
	// initialize local variables
	unsigned short shortInstruction = instruction ;
	unsigned short stepSign = instruction & 1024 ;
	unsigned long step1 = 0 ;
	unsigned long step2 = 0 ;
	unsigned short temporaryStep = 0 ;
	char * instructionName ;
	instructionName = (char *) malloc (sizeof (char) * 256) ;	
	strcpy (instructionName,"------") ;


	// evaluate if BRA
	// instruction == 1101.0nnn.nnnn.nnnn
	shortInstruction >>= 11 ;
	if(shortInstruction == 26) {
		// get step value (10 last bytes)
		temporaryStep = instruction & 1023 ;
		// get step sign (get 11th last byte)
		if(stepSign == 1024) {
			temporaryStep = ~temporaryStep ;
			temporaryStep &= 1023 ;
			step2 = 2 - 2 * temporaryStep ;
		} else {step2 = 2 + 2 * temporaryStep ; }
		if (v) { 
				strcpy (instructionName,"BRA   ") ;
				this->verbose (localPC, instruction, instructionName, localPC+step2, 0) ; 
		}		
		return step2 ;
	}
  
	// evaluate if GOTO
	// instruction = 1110.1111.kkkk.kkkk
	// next instruction should be 1111.kkkk.kkkk.kkkk
	shortInstruction = instruction ;
	shortInstruction >>= 8 ;
	if(shortInstruction == 239) {
		// get next instruction
		unsigned short nextInstruction = codeImage->byteAtAddress (localPC + 2) ;
		nextInstruction <<= 8 ;
		nextInstruction |= codeImage->byteAtAddress (localPC + 3) ;
		unsigned short shortNextInstruction = nextInstruction ;
		shortNextInstruction >>= 12 ;
		if(shortNextInstruction == 15) {
			// get new address
			unsigned long newAddress = 0 ;
			newAddress = instruction & 255 ;
			newAddress <<= 12 ;
			newAddress += nextInstruction & 2047 ;
			step2 = newAddress - localPC ;
			if (v) { 
				strcpy (instructionName,"GOTO  ") ;
				this->verbose (localPC, instruction, instructionName, newAddress, 0) ; 
			}		
			return step2 ;
		}
	}
	
	// evaluate if RCALL
	// instruction = 1101.1nnn.nnnn.nnnn
	shortInstruction = instruction ;
	shortInstruction >>= 11 ;
	if(shortInstruction == 27) {
		// get step value (10 last bytes)
		temporaryStep = instruction & 1023 ;
		// get step sign (get 11th last byte)
		if(stepSign == 1024) {
			temporaryStep = ~temporaryStep ;
			temporaryStep &= 1023 ; 
			step2 = 2 - 2 * temporaryStep ; 
		} else {step2 = 2 + 2 * temporaryStep ; }
		// add localPC + 2 ro the TOS
		unsigned long newLocalPC = localPC + 2 ;
		if (v) { 
			strcpy (instructionName,"RCALL ") ;
			this->verbose (localPC, instruction, instructionName, newLocalPC, localPC + step2) ; 
		}		
		this->checkProgram (newLocalPC) ;
		return step2 ;
	}
	
	// evaluate if CALL
	// instruction = 1110.110s.kkkk.kkkk
	// next instruction should be 1111.kkkk.kkkk.kkkk
	shortInstruction = instruction ;
	shortInstruction >>= 9 ;
	if(shortInstruction == 120) {
		// get next instruction
		unsigned short nextInstruction = codeImage->byteAtAddress (localPC + 2) ;
		nextInstruction <<= 8 ;
		nextInstruction |= codeImage->byteAtAddress (localPC + 3) ;
		unsigned short shortNextInstruction = nextInstruction ;
		shortNextInstruction >>= 12 ;
		if(shortNextInstruction == 15) {
			// get new address
			unsigned long newAddress = 0 ;
			newAddress = instruction & 255 ;
			newAddress <<= 12 ;
			newAddress += nextInstruction & 2047 ;
			step2 = newAddress - localPC ;
			// add localPC + 4 ro the TOS
			unsigned long newLocalPC = localPC + 4 ;
			if (v) { 
				strcpy (instructionName,"CALL  ") ;
				this->verbose (localPC, instruction, instructionName, newLocalPC, newAddress) ; 
			}		
			this->checkProgram (newLocalPC) ;
			return step2 ;
		}
	}

	// evaluate if RETURN
	// instruction = 0000.0000.0001.001s
	shortInstruction = instruction ;
	shortInstruction >>= 1 ;
	if(shortInstruction == 9) {
		// break program checking by returning to first address of program checking
		step2 = localPC - goToStart ;
		if (v) { 
			strcpy (instructionName,"RETURN") ;
			this->verbose (localPC, instruction, instructionName, goToStart, 0) ; 
		}		
		return step2 ;
	}

  //--- Added by PM
	// evaluate if RETFIE
	// instruction = 0000.0000.0001.000s
	shortInstruction = instruction ;
	shortInstruction >>= 1 ;
	if(shortInstruction == 8) {
		// break program checking by returning to first address of program checking
		step2 = localPC - goToStart ;
		if (v) { 
			strcpy (instructionName,"RETFIE") ;
			this->verbose (localPC, instruction, instructionName, goToStart, 0) ; 
		}		
		return step2 ;
	}
	
	// evaluate if RETLW
	// instruction = 0000.1100.kkkk.kkkk
	shortInstruction = instruction ;
	shortInstruction >>= 8 ;
	if(shortInstruction == 12) {
		// break program checking by returning to first address of program checking
		step2 = localPC - goToStart ;
		// add RETLW (as MOVLW) in instruction list
		instructionList [pos] = instruction + 512 ;
		pos++ ;
		if (v) { 
			strcpy (instructionName,"RETLW ") ;
			this->verbose (localPC, instruction, instructionName, goToStart, 0) ; 
		}		
		return step2 ;
	}
  
	// evaluate if BC or BNC
	// instruction = 1110.0010.nnnn.nnnn | 1110.0011.nnnn.nnnn
	shortInstruction = instruction ;
	shortInstruction >>= 9 ;
	if(shortInstruction == 113) {
		// get step value (7 last bytes)
		temporaryStep = instruction & 127 ;
		// get step sign (get 8th last byte)
		if(stepSign == 128) {
			temporaryStep = ~temporaryStep ;
			temporaryStep &= 127 ;
			step1 = 2 - 2 * temporaryStep ; 
		} else {step1 = 2 + 2 * temporaryStep ; }
		step2 = 2;
		// invert step1 and step2 if BNC
		if((instruction & 256) == 256) {
			step2 = step1 ;
			step1 = 2 ;
		}
		if (v) { 
			if((instruction & 256) == 256) {
				strcpy (instructionName,"BNC   ") ; 
			} else {strcpy (instructionName,"BC    ") ; }
			this->verbose (localPC, instruction, instructionName, localPC+step1, localPC+step2) ; 
		}		
		// add BC (or BNC as BC) in instruction list
		instruction |= 256 ;	
		instructionList [pos] = instruction ;
		pos++ ;
		// jump to nnnn.nnnn or to next instruction
		this->checkProgram (localPC + step1) ;
		// continue with next instruction or jump to nnnn.nnnn
		return step2 ;
	}

	// evaluate if BN or BNN
	// instruction = 1110.0110.nnnn.nnnn | 1110.0111.nnnn.nnnn
	shortInstruction = instruction ;
	shortInstruction >>= 9 ;
	if(shortInstruction == 115) {
		// get step value (7 last bytes)
		temporaryStep = instruction & 127 ;
		// get step sign (get 8th last byte)
		if(stepSign == 128) {
			temporaryStep = ~temporaryStep ;
			temporaryStep &= 127 ;
			step1 = 2 - 2 * temporaryStep ; 
		} else {step1 = 2 + 2 * temporaryStep ; }
		step2 = 2 ;
		// invert step1 and step2 if BNN
		if((instruction & 256) == 256) {
			step2 = step1 ;
			step1 = 2 ;
		}
		if (v) { 
			if((instruction & 256) == 256) {
				strcpy (instructionName,"BNN   ") ; 
			} else {strcpy (instructionName,"BN    ") ; }
			this->verbose (localPC, instruction, instructionName, localPC+step1, localPC+step2) ; 
		}		
		// add BN (or BNN as BN) in instruction list
		instruction |= 256 ;	
		instructionList [pos] = instruction ;
		pos++ ;
		// jump to nnnn.nnnn address or with next instruction
		this->checkProgram (localPC + step1) ;
		// continue with next instruction or jump to nnnn.nnnn address
		return step2 ; 
	}

	// evaluate if BOV or BNOV
	// instruction = 1110.0100.nnnn.nnnn | 1110.0101.nnnn.nnnn
	shortInstruction = instruction ;
	shortInstruction >>= 9 ;
	if(shortInstruction == 114) {
		// get step value (7 last bytes)
		temporaryStep = instruction & 127 ;
		// get step sign (get 8th last byte)
		if(stepSign == 128) {
			temporaryStep = ~temporaryStep ;
			temporaryStep &= 127 ;
			step1 = 2 - 2 * temporaryStep ; 
		} else {step1 = 2 + 2 * temporaryStep ; }
		step2 = 2 ;
		// invert step1 and step2 if BNOV
		if((instruction & 256) == 256) {
			step2 = step1 ;
			step1 = 2 ;
		}
		if (v) { 
			if((instruction & 256) == 256) {
				strcpy (instructionName,"BNOV   ") ; 
			} else {strcpy (instructionName,"BOV   ") ; }
			this->verbose (localPC, instruction, instructionName, localPC+step1, localPC+step2) ; 
		}		
		// add BOV (or BNOV as BOV) in instruction list
		instruction |= 256 ;	
		instructionList [pos] = instruction ;
		pos++ ;
		// jump to nnnn.nnnn address
		this->checkProgram (localPC + step1) ;
		// continue with next instruction
		return step2 ;
	}
    

	// evaluate if BZ or BNZ
	// instruction = 1110.0000.nnnn.nnnn | 1110.0001.nnnn.nnnn
	shortInstruction = instruction ;
	shortInstruction >>= 9 ;
	if(shortInstruction == 112) {
		// get step value (7 last bytes)
		temporaryStep = instruction & 127 ;
		// get step sign (get 8th last byte)
		if(stepSign == 128) {
			temporaryStep = ~temporaryStep ;
			temporaryStep &= 127 ;
			step1 = 2 - 2 * temporaryStep ; 
		} else {step1 = 2 + 2 * temporaryStep ; }
		step2 = 2 ;
		// invert step1 and step2 if BNZ
		if((instruction & 256) == 256) {
			step2 = step1 ;
			step1 = 2 ;
		}
		if (v) { 
			if((instruction & 256) == 256) {
				strcpy (instructionName,"BNZ   ") ; 
			} else {strcpy (instructionName,"BZ    ") ; }
			this->verbose (localPC, instruction, instructionName, localPC+step1, localPC+step2) ; 
		}		
		// add BZ (or BNZ as BZ) in instruction list
		instruction |= 256 ;	
		instructionList [pos] = instruction ;
		pos++ ;
		// jump to nnnn.nnnn address or with next instruction
		this->checkProgram (localPC + step1) ;
		// continue with next instruction or jump to nnnn.nnnn address
		return step2 ;
	}
  
	// evaluate if CPFSEQ
	// instruction = 0110.001a.ffff.ffff
	shortInstruction = instruction ;
	shortInstruction >>= 9 ;
	if (shortInstruction == 49) {
		step1 = 2 ;
		step2 = 4 ;
		if (v) { 
			strcpy (instructionName,"CPFSEQ") ;
			this->verbose (localPC, instruction, instructionName, localPC+step1, localPC+step2) ; 
		}		
		this->checkProgram (localPC + step1) ;
		return step2 ; 
	}


	// evaluate if CPFSGT
	// instruction = 0110.010a.ffff.ffff
	shortInstruction = instruction ;
	shortInstruction >>= 9 ;
	if (shortInstruction == 50) {
		step1 = 2 ;
		step2 = 4 ;
		if (v) { 
			strcpy (instructionName,"CPFSGT") ;
			this->verbose (localPC, instruction, instructionName, localPC+step1, localPC+step2) ; 
		}		
		this->checkProgram (localPC + step1) ;
		return step2 ; 
	}

	// evaluate if CPFSLT
	// instruction = 0110.000a.ffff.ffff
	shortInstruction = instruction ;
	shortInstruction >>= 9 ;
	if (shortInstruction == 48) {
		step1 = 2 ;
		step2 = 4 ;
		if (v) { 
			strcpy (instructionName,"CPFSLT") ;
			this->verbose (localPC, instruction, instructionName, localPC+step1, localPC+step2) ; 
		}		
		this->checkProgram (localPC + step1) ;
		return step2 ; 
	}


	// evaluate if DECFSZ
	// instruction = 0010.11da.ffff.ffff
	shortInstruction = instruction ;
	shortInstruction >>= 10 ;
	if (shortInstruction == 11) {
		step1 = 2 ;
		step2 = 4 ;
		if (v) { 
			strcpy (instructionName,"DECFSZ") ;
			this->verbose (localPC, instruction, instructionName, localPC+step1, localPC+step2) ; 
		}		
		// add to instruction list
		instructionList [pos] = instruction ;
		pos++ ;
		this->checkProgram (localPC + step1) ;
		return step2 ; 
	}

	// evaluate if DCFSNZ
	// instruction = 0100.11da.ffff.ffff
	shortInstruction = instruction ;
	shortInstruction >>= 10 ;
	if (shortInstruction == 19) {
		// invert step1 and step2 to simulate DECFSZ
		step1 = 4 ;
		step2 = 2 ;
		if (v) { 
			strcpy (instructionName,"DCFSNZ") ;
			this->verbose (localPC, instruction, instructionName, localPC+step1, localPC+step2) ; 
		}		
		// add to instruction list as DECFSZ
		instructionList [pos] = (instruction + 8192 -16384) ;
		pos++ ;
		this->checkProgram (localPC + step1) ;
		return step2 ; 
	}

	// evaluate if INCFSZ
	// instruction = 0011.11da.ffff.ffff
	shortInstruction = instruction ;
	shortInstruction >>= 10 ;
	if (shortInstruction == 15) {
		step1 = 2 ;
		step2 = 4 ;
		if (v) { 
			strcpy (instructionName,"INCFSZ") ;
			this->verbose (localPC, instruction, instructionName, localPC+step1, localPC+step2) ; 
		}		
		// add to instruction list
		instructionList [pos] = instruction ;
		pos++ ;
		this->checkProgram (localPC + step1) ;
		return step2 ; 
	}

	// evaluate if INFSNZ
	// instruction = 0100.10da.ffff.ffff
	shortInstruction = instruction ;
	shortInstruction >>= 10 ;
	if (shortInstruction == 18) {
		// invert step1 and step2 to siumulate INCFSZ
		step1 = 4 ;
		step2 = 2 ;
		if (v) { 
			strcpy (instructionName,"INFSNZ") ;
			this->verbose (localPC, instruction, instructionName, localPC+step1, localPC+step2) ; 
		}		
		// add to instruction list as INCFSZ
		instructionList [pos] = (instruction + 13312 - 16384) ;
		pos++ ;
		this->checkProgram (localPC + step1) ;
		return step2 ; 
	}

	// evaluate if TSTFSZ
	// instruction = 0110.011a.ffff.ffff
	shortInstruction = instruction ;
	shortInstruction >>= 9 ;
	if (shortInstruction == 51) {
		step1 = 2 ;
		step2 = 4 ;
		if (v) { 
			strcpy (instructionName,"TSTFSZ") ;
			this->verbose (localPC, instruction, instructionName, localPC+step1, localPC+step2) ; 
		}		
		// add to instruction list
		instructionList [pos] = instruction ;
		pos++ ;
		this->checkProgram (localPC + step1) ;
		return step2 ; 
	}

	// evaluate if BTFSC
	// instruction = 1011.bbba.ffff.ffff
	shortInstruction = instruction ;
	shortInstruction >>= 12 ;
	if (shortInstruction == 11) {
		step1 = 2 ;
		step2 = 4 ;
		if (v) { 
			strcpy (instructionName,"BTFSC ") ;
			this->verbose (localPC, instruction, instructionName, localPC+step1, localPC+step2) ; 
		}		
		// add to instruction list
		instructionList [pos] = instruction ;
		pos++ ;
		this->checkProgram (localPC + step1) ;
		return step2 ; 
	}

	// evaluate if BTFSS
	// instruction = 1010.bbba.ffff.ffff
	shortInstruction = instruction ;
	shortInstruction >>= 12 ;
	if (shortInstruction == 10) {
		// invert to simulate as if BTFSC
		step1 = 4 ;
		step2 = 2 ;
		if (v) { 
			strcpy (instructionName,"BTFSS ") ;
			this->verbose (localPC, instruction, instructionName, localPC+step1, localPC+step2) ; 
		}		
		// add to instruction list as BTFSC
		instructionList [pos] = instruction + 4096 ;
		pos++ ;
		this->checkProgram (localPC + step1) ;
		return step2 ; 
	}


	// evaluate if MOVLW
	// instruction = 0000.1110.kkkk.kkk
	shortInstruction = instruction ;
	shortInstruction >>= 8 ;
	if (shortInstruction == 14) {
		step2 = 2 ;	    
		instructionList [pos] = instruction ;
		pos++ ;
		if (v) { 
			strcpy (instructionName,"MOVLW ") ;
			this->verbose (localPC, instruction, instructionName, localPC+step2, 0) ; 
		}		
		return step2 ; 
	}


	
	// if no special instruction detected
	step2 = 2 ;
	instructionList [pos] = instruction ;
	pos++ ;
	if (v) { this->verbose (localPC, instruction, instructionName, localPC+step2, 0) ; }		
	return step2 ; 
}


bool PMCompteur::compareInstructionList (PMCompteur & reference) {
	unsigned short * referenceInstructionList ;
	referenceInstructionList = reference.getInstructionList() ;
	bool b = true ;
	unsigned short i = 0 ;
	unsigned short s1 = sizeof(instructionList) ;
	unsigned short s2 = sizeof(referenceInstructionList) ;
	unsigned short s = s1 ;
	if (s2 < s1) {s = s2 ; }
	while (b && i<s ) {
		b = (instructionList [i] == referenceInstructionList [i]);
		i++ ; 
	}
	return b ;
}


void PMCompteur::dumpFile() {
	codeImage->dumpCodeImage () ;
}
    

void PMCompteur::verbose (unsigned long address, unsigned short instructionCode, char * instructionName, unsigned long nextStep1, unsigned long nextStep2) {
	printf ("%04lX_%04lX:", address >> 16 , address & 0xFFFF) ;
	printf ("    ") ;
	printf ("%04hX", instructionCode) ;
	printf ("      ") ;
	printf ("%s", instructionName) ;
	printf ("    ") ;
	printf ("%04lX_%04lX", nextStep1 >> 16 , nextStep1 & 0xFFFF) ; 
	printf ("    ") ; 
	if (nextStep2 > 0) { printf ("%04lX_%04lX", nextStep2 >> 16 , nextStep2 & 0xFFFF) ; }
	printf ("\n") ;
}
  
	
	
  
