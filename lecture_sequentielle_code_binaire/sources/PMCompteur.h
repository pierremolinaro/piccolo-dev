/*
 *  PMCompteur.h
 *  Last modified: 10/03/2009 Alain Giorla, Sebastien Cetin  
 *
 */

//---------------------------------------------------------------------------*

#ifndef PM_COMPTEUR_CLASS_DEFINED
#define PM_COMPTEUR_CLASS_DEFINED

//---------------------------------------------------------------------------*

#include "PMCodeImage.h"

//---------------------------------------------------------------------------*

#include <stdio.h>
using namespace std;

//---------------------------------------------------------------------------*

class PMCompteur {
//--- Default constructor
	public : PMCompteur (const char * inFileName, const bool bv) ;
  
//--- Virtual destructor
	public : virtual ~ PMCompteur (void) ;
  
//--- No copy
	private : PMCompteur (PMCompteur &) ;
	private : void operator = (PMCompteur &) ;

// -- Public Methods
	public : void checkPMCodeImage (void) ; // check main programm
	public : inline bool getV (void) const { return v ; } // get verbose boolean
	public : inline unsigned short * getInstructionList (void) const { return instructionList ; } // get instructionList
	public : inline unsigned short getPos (void) const { return pos ; } // get position in instructionList
	public : bool compareInstructionList (PMCompteur &) ; // compare binary code with another binary code
	public : void dumpFile (void) ; // print binary code

// -- Private Methods
	private : void checkProgram (unsigned long) ; // check a single programm in the binary file
	private : unsigned long evalInstructionStep (unsigned short, unsigned long, unsigned long) ; // get next step
	private : void verbose (unsigned long, unsigned short, char *, unsigned long, unsigned long) ; // print out instruction
	
  
// -- Private Attributes
	private : PMCodeImage * codeImage ; // byte file access
	private : bool * uncheckAddress ; // list of address that have already been read
	private : unsigned short * instructionList ; // list of relevant instructions
	private : unsigned short pos ; // position in instructionList
	private : bool v ; // indicate if the results are to be printed
  
} ;

//---------------------------------------------------------------------------*

#endif
