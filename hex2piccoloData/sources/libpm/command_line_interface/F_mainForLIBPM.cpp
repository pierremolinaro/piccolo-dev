//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//  Routine 'main' (call user supplied 'mainForLIBPM' routine).                                                        *
//                                                                                                                     *
//  This file is part of libpm library                                                                                 *
//                                                                                                                     *
//  Copyright (C) 2002, ..., 2012 Pierre Molinaro.                                                                     *
//                                                                                                                     *
//  e-mail : pierre.molinaro@irccyn.ec-nantes.fr                                                                       *
//                                                                                                                     *
//  IRCCyN, Institut de Recherche en Communications et Cybernétique de Nantes, ECN, École Centrale de Nantes (France)  *
//                                                                                                                     *
//  This library is free software; you can redistribute it and/or modify it under the terms of the GNU Lesser General  *
//  Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option)  *
//  any later version.                                                                                                 *
//                                                                                                                     *
//  This program is distributed in the hope it will be useful, but WITHOUT ANY WARRANTY; without even the implied      *
//  warranty of MERCHANDIBILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for            *
//  more details.                                                                                                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

#include "C_BDD.h"
#include "F_mainForLIBPM.h"
#include "MF_MemoryControl.h"
#include "F_DisplayException.h"
#include "C_ConsoleOut.h"
#include "C_DateTime.h"
#include "C_SharedObject.h"
#include "cpp-allocation.h"
#include "basic-allocation.h"
#include "C_PrologueEpilogue.h"
#include "F_Analyze_CLI_Options.h"

//---------------------------------------------------------------------------------------------------------------------*

#include <stdio.h>

//---------------------------------------------------------------------------------------------------------------------*

static uint32_t gArgc = 0 ;
static const char ** gArgv ;

//---------------------------------------------------------------------------------------------------------------------*

uint32_t commandLineArgumentCount (void) {
  return gArgc ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_String commandLineArgumentAtIndex (const uint32_t inIndex) {
  const char * result = "" ;
  if (inIndex < gArgc) {
    result = gArgv [inIndex] ;
  }
  return result ;
}

//---------------------------------------------------------------------------------------------------------------------*

// #include "PMUInt128.h"
// #include "C_DirectedGraph.h"

//---------------------------------------------------------------------------------------------------------------------*

int main (int argc, const char * argv []) {
  gArgc = (uint32_t) argc ;
  gArgv = argv ;
  // PMUInt128::example () ;
  // C_DirectedGraph::example () ;
  C_DateTime::enterCurrentToolModificationTime (argv [0]) ;
  int returnCode = 0 ; // No error
//--- Print options
  /* printf ("Command line options:\n") ;
  for (int i=1 ; i<argc ; i++) {
    printf ("  - '%s'\n", argv [i]) ;
  } */
//---
  if (returnCode == 0) {
    try{
      C_PrologueEpilogue::runPrologueActions () ;
      returnCode = mainForLIBPM (argc, argv) ;
      C_PrologueEpilogue::runEpilogueActions () ;
      C_BDD::freeBDDStataStructures () ;
      #ifndef DO_NOT_GENERATE_CHECKINGS
        C_SharedObject::checkAllObjectsHaveBeenReleased () ;
        displayAllocationStats () ;
        displayAllocatedBlockSizeStats () ;
        displayAllocatedBlocksInfo () ;
      #endif
    }catch (const ::std:: exception & e) {
      F_default_display_exception (e) ;
      #ifndef DO_NOT_GENERATE_CHECKINGS
        C_SharedObject::checkAllObjectsHaveBeenReleased () ;
      #endif
      returnCode = 1 ; // Error code
    }catch (char * inExceptionString) {
      printf ("*** Exception: '%s' ***\n", inExceptionString) ;
      #ifndef DO_NOT_GENERATE_CHECKINGS
        C_SharedObject::checkAllObjectsHaveBeenReleased () ;
      #endif
      returnCode = 1 ; // Error code
    }catch (...) {
      F_default_display_unknown_exception () ;
      #ifndef DO_NOT_GENERATE_CHECKINGS
        C_SharedObject::checkAllObjectsHaveBeenReleased () ;
      #endif
      returnCode = 2 ; // Error code
    }
  }
  return returnCode ;
}

//---------------------------------------------------------------------------------------------------------------------*
