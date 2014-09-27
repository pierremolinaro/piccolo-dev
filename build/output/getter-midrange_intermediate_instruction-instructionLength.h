#ifndef getter_2D_midrange_5F_intermediate_5F_instruction_2D_instructionLength_1_DEFINED
#define getter_2D_midrange_5F_intermediate_5F_instruction_2D_instructionLength_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Abstract category reader '@midrange_intermediate_instruction instructionLength'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_uint (*categoryReaderSignature_midrange_5F_intermediate_5F_instruction_instructionLength) (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                                class C_Compiler * inCompiler
                                                                                                                COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_instructionLength (const int32_t inClassIndex,
                                            categoryReaderSignature_midrange_5F_intermediate_5F_instruction_instructionLength inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint callCategoryReader_instructionLength (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                        C_Compiler * inCompiler
                                                        COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

