//---------------------------------------------------------------------------*
//                                                                           *
//                   File 'ipic18_regular_instructions.h'                    *
//                        Generated by version 2.5.0                         *
//                      august 5th, 2013, at 20h4'10"                        *
//                                                                           *
//---------------------------------------------------------------------------*

//--- START OF USER ZONE 1


//--- END OF USER ZONE 1

#ifndef ipic18_regular_instructions_ENTITIES_DEFINED
#define ipic18_regular_instructions_ENTITIES_DEFINED

//---------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------*

#include "ipic18_block_representation.h"
#include "pic18_metamodel.h"
#include "generic_metamodel.h"
#include "pic18_mnemonics.h"

//---------------------------------------------------------------------------*


//---------------------------------------------------------------------------*
//                                                                           *
//      Category reader '@ipic18SequentialInstruction instructionSize'       *
//                                                                           *
//---------------------------------------------------------------------------*

typedef GALGAS_uint (*categoryReaderSignature_ipic_31__38_SequentialInstruction_instructionSize) (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                  C_Compiler * inCompiler
                                                                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*

void enterCategoryReader_instructionSize (const PMSInt32 inClassIndex,
                                          categoryReaderSignature_ipic_31__38_SequentialInstruction_instructionSize inReader) ;

//---------------------------------------------------------------------------*

GALGAS_uint callCategoryReader_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                C_Compiler * inCompiler
                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//  Category method '@ipic18SequentialInstruction checkRelativesResolution'  *
//                                                                           *
//---------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_ipic_31__38_SequentialInstruction_checkRelativesResolution) (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                    const GALGAS_uint constinArgument0,
                                                                                                    const GALGAS_string constinArgument1,
                                                                                                    const GALGAS_symbolTableForRelativesResolution constinArgument2,
                                                                                                    GALGAS_uint & ioArgument3,
                                                                                                    GALGAS_string & ioArgument4,
                                                                                                    GALGAS_ipic_31__38_SequentialInstruction & outArgument5,
                                                                                                    C_Compiler * inCompiler
                                                                                                    COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*

void enterCategoryMethod_checkRelativesResolution (const PMSInt32 inClassIndex,
                                                   categoryMethodSignature_ipic_31__38_SequentialInstruction_checkRelativesResolution inMethod) ;

//---------------------------------------------------------------------------*

void callCategoryMethod_checkRelativesResolution (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                  const GALGAS_uint constin_inAddress,
                                                  const GALGAS_string constin_inBlockLabel,
                                                  const GALGAS_symbolTableForRelativesResolution constin_inSymbolTable,
                                                  GALGAS_uint & io_ioConversionCount,
                                                  GALGAS_string & io_ioListFileContents,
                                                  GALGAS_ipic_31__38_SequentialInstruction & out_outModifiedInstruction,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//Abstract category reader '@ipic18SequentialInstruction instructionDisplay' *
//                                                                           *
//---------------------------------------------------------------------------*

typedef GALGAS_stringlist (*categoryReaderSignature_ipic_31__38_SequentialInstruction_instructionDisplay) (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*

void enterCategoryReader_instructionDisplay (const PMSInt32 inClassIndex,
                                             categoryReaderSignature_ipic_31__38_SequentialInstruction_instructionDisplay inMethod) ;

//---------------------------------------------------------------------------*

GALGAS_stringlist callCategoryReader_instructionDisplay (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                         C_Compiler * inCompiler
                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------*
//                                                                           *
//       Category Reader '@pic18InstructionWithNoOperandKind mnemonic'       *
//                                                                           *
//---------------------------------------------------------------------------*

GALGAS_string categoryReader_mnemonic (const GALGAS_pic_31__38_InstructionWithNoOperandKind & inObject,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;

//--- START OF USER ZONE 2


//--- END OF USER ZONE 2

#endif