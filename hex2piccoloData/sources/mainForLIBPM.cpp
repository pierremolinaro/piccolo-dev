//
//  mainForLIBPM.cpp
//
//  Created by Pierre Molinaro on 20/06/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//
//---------------------------------------------------------------------------*

#include "F_mainForLIBPM.h"
#include "TC_UniqueArray.h"
#include "C_String.h"
#include "command_line_interface/F_Analyze_CLI_Options.h"
#include "command_line_interface/C_BoolCommandLineOption.h"
#include "command_line_interface/C_StringCommandLineOption.h"
#include "files/C_TextFileWrite.h"
#include "PMCodeImage.h"

//---------------------------------------------------------------------------*

#include <stdio.h>

//---------------------------------------------------------------------------*

typedef struct {
  uint32_t mAdresse ;
  uint16_t mData [32] ;
} tDescriptionBloc ;

//---------------------------------------------------------------------------*

static void print_tool_help_message (void) {
  printf ("Utilitaire de conversion fichier hex vers données Piccolo.\n") ;
}

//---------------------------------------------------------------------------*

static void convertHexFile (const C_String & inHexFilePath,
                            int & ioReturnCode) {
  PMCodeImage codeImage (inHexFilePath.cString (HERE)) ;
  codeImage.defineDefaultValue (0xFF) ;
  TC_UniqueArray <tDescriptionBloc> listeDesBlocs ;
//---
  bool ok = true ;
  if (codeImage.firstAddress() != 0) {
    printf ("*** Erreur : le code ne commence pas à 0x0, mais à 0x%X.\n", codeImage.firstAddress()) ;
    ok = false ;
  }
//---
  uint32_t blockAddress = 0 ;
  const uint32_t lastAddress = 0xFFFFF ;
  while (blockAddress < lastAddress) {
  //--- Bloc non vide ?
    bool emptyBlock = true ;
    for (uint32_t i=0 ; (i<63) && emptyBlock ; i++) {
      emptyBlock = !codeImage.byteIsDefinedAtAddress(blockAddress + i) ;
    }
  //--- Écrire le bloc si non vide
    if (! emptyBlock) {
      tDescriptionBloc bloc ;
      bloc.mAdresse = blockAddress ;
      for (uint32_t i=0 ; i<64 ; i+=2) {
        const uint16_t v = codeImage.uint16LE_AtAddress (blockAddress + i) ;
        bloc.mData [i / 2] = v ;
      }
      listeDesBlocs.appendObject (bloc) ;
    }
  //--- Incrémenter l'adresse de bloc
    blockAddress += 64 ;
  }
//--- Écrire le fichier résultat
  if (ok) {
    C_TextFileWrite outputFile (inHexFilePath + ".piccolo") ;
    outputFile << "data16 bootloaderData {\n"
                  "#--- Bloc count\n  "
               << cStringWithUnsigned (listeDesBlocs.count ()) ;
    for (int32_t i=listeDesBlocs.count ()-1 ; i>=0 ; i--) {
      outputFile << ",\n"
                    "#--- Bloc à l'adresse " << cHexStringWithUnsigned (listeDesBlocs (i COMMA_HERE).mAdresse) << "\n  "
                 << cHexStringWithUnsigned (listeDesBlocs (i COMMA_HERE).mAdresse >> 6) ;
      for (uint32_t j=0 ; j<32 ; j++) {
        const uint16_t v = listeDesBlocs (i COMMA_HERE).mData [j] ;
        if ((j % 8) == 0) {
          outputFile << ",\n  " ;
        }else{
          outputFile << ", " ;
        }
        outputFile << cHexStringWithUnsigned (v) ;
      }
    }
    outputFile << "\n}\n" ;
  }
//---
  if (! ok) {
    ioReturnCode = 1 ;
  }
}

//---------------------------------------------------------------------------*

static const char * extensions [] = {
  "hex",
  NULL
} ;    

//---------------------------------------------------------------------------*

static const char * helpMessages [] = {
  "an hex file, that contains PIC18 binary code",
  NULL
} ;    

//---------------------------------------------------------------------------------------* 

const char * projectVersionString (void) {
  return "1.0" ;
}

//---------------------------------------------------------------------------*

int mainForLIBPM (const int argc, const char * argv []) {
  int returnCode = 0 ; // No error
  TC_UniqueArray <C_String> sourceFilesArray ;
//--- Analyze Command Line Options
  F_Analyze_CLI_Options (argc, argv,
                         sourceFilesArray,
                         extensions,
                         helpMessages,
                         print_tool_help_message) ;
//---
  for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {
    const C_String inputFilePath = sourceFilesArray (i COMMA_HERE) ;
    convertHexFile (inputFilePath, returnCode) ;
  }
//---
  if (0 != returnCode) {
    printf ("\7") ; fflush (stdout) ;
  }
  return returnCode ;
}

//---------------------------------------------------------------------------*
