/*
 *  cCodeImage.cpp
 *  stack-calculator
 *
 *  Created by Pierre Molinaro on 24/05/08.
 *  Last modified: 10/03/2009. Alain Giorla, Sebastien Cetin.
 *
 *  Copyright 2008 __MyCompanyName__. All rights reserved.
 *
 */
//---------------------------------------------------------------------------*

#include "PMCodeImage.h"
#include "PMCompteur.h"

//---------------------------------------------------------------------------*

#include <stdio.h>
#include <string.h>

//---------------------------------------------------------------------------*

int main (int inArgumentCount, char * inArgumentString []) {
	int error = 0 ;	
	if (inArgumentCount < 3) {
		printf ("Usage: %s file1.hex file2.hex [-v] [--dump] [-L] (-H] \n", inArgumentString [0]) ;
    printf ("  -v: verbose output.\n") ;
    printf ("  --dump: dump hex files.\n") ;
    printf ("  -L: check also from low interrupt entry point (at 0x18).\n") ;
    printf ("  -H: check also from high interrupt entry point (at 0x8).\n") ;
		error = 1 ;
  }else{
		printf ("Comparing:\n") ;
		printf ("  - ") ;
		printf ("%s", inArgumentString [1]) ;
		printf ("\n") ;
		printf ("  - ") ;
		printf ("%s", inArgumentString [2]) ;
		printf ("\n") ;

		bool verbose = false ;
		bool dump = false ;
		bool checkLowInterrupt = false ;
		bool checkHighInterrupt = false ;
    for (int i=3 ; i<inArgumentCount ; i++) {
		  if (strcmp (inArgumentString [i], "-v") == 0) {
        verbose = true ;
		  }else if (strcmp (inArgumentString [i], "--dump") == 0) {
        dump = true ;
		  }else if (strcmp (inArgumentString [i], "-L") == 0) {
        checkLowInterrupt = true ;
		  }else if (strcmp (inArgumentString [i], "-H") == 0) {
        checkHighInterrupt = true ;
   		}
    }
  //--- Dump files
    if (dump) {
      PMCompteur compteur1 (inArgumentString [1], false) ;
      printf ("*** %s (--dump option) ***\n", inArgumentString [1]) ;
      compteur1.dumpFile () ;
      PMCompteur compteur2 (inArgumentString [2], false) ;
      printf ("*** %s (--dump option) ***\n", inArgumentString [2]) ;
      compteur2.dumpFile () ;
    }
  //--- Check from boot (address 0)
		{ PMCompteur compteur1 (inArgumentString [1], verbose) ;
      compteur1.checkPMCodeImage (0) ;
      PMCompteur compteur2 (inArgumentString [2], verbose) ;
      compteur2.checkPMCodeImage (0) ;
      const bool equivalent = compteur1.compareInstructionList (compteur2) ;
      printf ("The two main routines are ") ;
      if (equivalent) {
        printf ("equivalent.\n") ;
      }else{
        printf ("NOT EQUIVALENT.\n") ;
        error = 1 ;
      }
    }
  //--- Check from high interrupt entry point (address 0x8)
		if (checkHighInterrupt) {
      PMCompteur compteur1 (inArgumentString [1], verbose) ;
      compteur1.checkPMCodeImage (0x8) ;
      PMCompteur compteur2 (inArgumentString [2], verbose) ;
      compteur2.checkPMCodeImage (0x8) ;
      const bool equivalent = compteur1.compareInstructionList (compteur2) ;
      printf ("The two high interrupt routines are ") ;
      if (equivalent) {
        printf ("equivalent.\n") ;
      }else{
        printf ("NOT EQUIVALENT.\n") ;
        error = 1 ;
      }
    }
  //--- Check from low interrupt (address 0x18)
		if (checkLowInterrupt){
      PMCompteur compteur1 (inArgumentString [1], verbose) ;
      compteur1.checkPMCodeImage (0x18) ;
      PMCompteur compteur2 (inArgumentString [2], verbose) ;
      compteur2.checkPMCodeImage (0x18) ;
      const bool equivalent = compteur1.compareInstructionList (compteur2) ;
      printf ("The two low interrupt routines are ") ;
      if (equivalent) {
        printf ("equivalent.\n") ;
      }else{
        printf ("NOT EQUIVALENT.\n") ;
        error = 1 ;
      }
    }
	}
	return error ;
}

//---------------------------------------------------------------------------*
