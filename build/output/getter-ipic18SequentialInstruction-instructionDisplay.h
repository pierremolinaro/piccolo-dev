#ifndef getter_2D_ipic_31__38_SequentialInstruction_2D_instructionDisplay_1_DEFINED
#define getter_2D_ipic_31__38_SequentialInstruction_2D_instructionDisplay_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Abstract category reader '@ipic18SequentialInstruction instructionDisplay'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_stringlist (*categoryReaderSignature_ipic_31__38_SequentialInstruction_instructionDisplay) (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                 class C_Compiler * inCompiler
                                                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_instructionDisplay (const int32_t inClassIndex,
                                             categoryReaderSignature_ipic_31__38_SequentialInstruction_instructionDisplay inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_stringlist callCategoryReader_instructionDisplay (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                               C_Compiler * inCompiler
                                                               COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

