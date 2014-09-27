#ifndef getter_2D_baseline_5F_intermediate_5F_instruction_2D_length_1_DEFINED
#define getter_2D_baseline_5F_intermediate_5F_instruction_2D_length_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Abstract category reader '@baseline_intermediate_instruction length'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_uint (*categoryReaderSignature_baseline_5F_intermediate_5F_instruction_length) (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                     class C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_length (const int32_t inClassIndex,
                                 categoryReaderSignature_baseline_5F_intermediate_5F_instruction_length inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_uint callCategoryReader_length (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

