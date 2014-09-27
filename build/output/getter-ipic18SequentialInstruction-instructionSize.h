#ifndef getter_2D_ipic_31__38_SequentialInstruction_2D_instructionSize_1_DEFINED
#define getter_2D_ipic_31__38_SequentialInstruction_2D_instructionSize_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category reader '@ipic18SequentialInstruction instructionSize'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_uint (*categoryReaderSignature_ipic_31__38_SequentialInstruction_instructionSize) (const class cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                        C_Compiler * inCompiler
                                                                                                        COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_instructionSize (const int32_t inClassIndex,
                                          categoryReaderSignature_ipic_31__38_SequentialInstruction_instructionSize inReader) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint callCategoryReader_instructionSize (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                      class C_Compiler * inCompiler
                                                      COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

