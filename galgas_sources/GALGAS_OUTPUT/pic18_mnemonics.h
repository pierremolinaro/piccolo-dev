//---------------------------------------------------------------------------*
//                                                                           *
//                         File 'pic18_mnemonics.h'                          *
//                        Generated by version 2.4.3                         *
//                       june 15th, 2013, at 21h9'12"                        *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef pic18_mnemonics_ENTITIES_DEFINED
#define pic18_mnemonics_ENTITIES_DEFINED

//---------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------*

#include "pic18_metamodel.h"
#include "generic_metamodel.h"

//---------------------------------------------------------------------------*


//---------------------------------------------------------------------------*
//                                                                           *
//                       Routine 'getComplementaryBcc'                       *
//                                                                           *
//---------------------------------------------------------------------------*

void routine_getComplementaryBcc (const GALGAS_conditional_5F_branch constinArgument0,
                                  GALGAS_conditional_5F_branch & outArgument1,
                                  C_Compiler * inCompiler
                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//           Category Reader '@instruction_FDA_base_code mnemonic'           *
//                                                                           *
//---------------------------------------------------------------------------*

GALGAS_string categoryReader_mnemonic (const GALGAS_instruction_5F_FDA_5F_base_5F_code & inObject,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//           Category Reader '@FA_instruction_base_code mnemonic'            *
//                                                                           *
//---------------------------------------------------------------------------*

GALGAS_string categoryReader_mnemonic (const GALGAS_FA_5F_instruction_5F_base_5F_code & inObject,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//                Category Reader '@bit_oriented_op mnemonic'                *
//                                                                           *
//---------------------------------------------------------------------------*

GALGAS_string categoryReader_mnemonic (const GALGAS_bit_5F_oriented_5F_op & inObject,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//              Category Reader '@conditional_branch mnemonic'               *
//                                                                           *
//---------------------------------------------------------------------------*

GALGAS_string categoryReader_mnemonic (const GALGAS_conditional_5F_branch & inObject,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//          Category Reader '@literal_instruction_opcode mnemonic'           *
//                                                                           *
//---------------------------------------------------------------------------*

GALGAS_string categoryReader_mnemonic (const GALGAS_literal_5F_instruction_5F_opcode & inObject,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//               Category Reader '@tableAccessOption mnemonic'               *
//                                                                           *
//---------------------------------------------------------------------------*

GALGAS_string categoryReader_mnemonic (const GALGAS_tableAccessOption & inObject,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

#endif