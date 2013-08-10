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
	if ((inArgumentCount < 3) || (inArgumentCount > 5)) {
		printf ("Usage : %s file_a.hex file_b.hex [--dump] [-v] \n", inArgumentString [0]) ;
		error = 1 ;
  	} else {
		printf ("*************************************************\n") ;
		printf ("this is lecture_sequentielle_code_binaire output file\n") ;
		printf ("comparing the following binary .hex files:\n") ;
		printf ("- ") ;
		printf ("%s", inArgumentString [1]) ;
		printf ("\n") ;
		printf ("- ") ;
		printf ("%s", inArgumentString [2]) ;
		printf ("\n") ;
		printf ("result of comparison is shown at the bottom of this file") ;
		printf ("\n") ;
		printf ("\n") ;

		bool v = false ;
		bool dump = false ;
		if (inArgumentCount == 4) { 
			dump = strcmp (inArgumentString [3], "--dump") == 0 ;
			v = strcmp (inArgumentString [3], "-v") == 0 ; 
		}
		if (inArgumentCount == 5) { 
			dump = strcmp (inArgumentString [3], "--dump") == 0 ;
			v = strcmp (inArgumentString [4], "-v") == 0 ; 
		}

		// treat first file
		printf ("************ ") ;
		printf ("%s", inArgumentString [1]) ;
		printf (" ************\n") ;
		printf ("\n") ;
		if (v) {
			printf ("************") ;
			printf (" VERBOSE (option -v) ") ;
			printf ("************\n") ;
		}
		PMCompteur compteur1 (inArgumentString [1], v) ;
		compteur1.checkPMCodeImage () ;
		printf ("\n") ;
		if (dump) {
			printf ("************ DUMP INPUT FILE (option --dump) ************\n") ;
			compteur1.dumpFile () ;
		}

		printf ("\n") ;
		printf ("\n") ;
		printf ("\n") ;
		// treat second file
		printf ("************ ") ;
		printf ("%s", inArgumentString [2]) ;
		printf (" ************\n") ;
		printf ("\n") ;
		if (v) {
			printf ("************") ;
			printf (" VERBOSE (option -v) ") ;
			printf ("************\n") ;
		}
		PMCompteur compteur2 (inArgumentString [2], v) ;
		compteur2.checkPMCodeImage () ;
		printf ("\n") ;
		if (dump) {
			printf ("************ DUMP INPUT FILE (option --dump) ************\n") ;
			compteur2.dumpFile () ;
		}

		// result
		printf ("\n") ;
		printf ("\n") ;
		printf ("\n") ;
		printf ("results of comparison: the two files are ") ;
		bool b = compteur1.compareInstructionList (compteur2) ;
		if (b) {printf ("EQUIVALENT\n") ; } else {printf ("NOT EQUIVALENT\n") ; }
	}
	return error ;
}

//---------------------------------------------------------------------------*
