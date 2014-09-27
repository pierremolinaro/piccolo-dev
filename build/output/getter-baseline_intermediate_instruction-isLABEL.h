#ifndef getter_2D_baseline_5F_intermediate_5F_instruction_2D_isLABEL_1_DEFINED
#define getter_2D_baseline_5F_intermediate_5F_instruction_2D_isLABEL_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                            Category reader '@baseline_intermediate_instruction isLABEL'                             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef class GALGAS_bool (*categoryReaderSignature_baseline_5F_intermediate_5F_instruction_isLABEL) (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                      C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryReader_isLABEL (const int32_t inClassIndex,
                                  categoryReaderSignature_baseline_5F_intermediate_5F_instruction_isLABEL inReader) ;

//---------------------------------------------------------------------------------------------------------------------*

class GALGAS_bool callCategoryReader_isLABEL (const cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                              class C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

