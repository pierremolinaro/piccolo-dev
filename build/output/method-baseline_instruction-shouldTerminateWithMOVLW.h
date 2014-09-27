#ifndef method_2D_baseline_5F_instruction_2D_shouldTerminateWithMOVLW_1_DEFINED
#define method_2D_baseline_5F_instruction_2D_shouldTerminateWithMOVLW_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category method '@baseline_instruction shouldTerminateWithMOVLW'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_baseline_5F_instruction_shouldTerminateWithMOVLW) (const class cPtr_baseline_5F_instruction * inObject,
                                                                                          const class GALGAS_string constinArgument0,
                                                                                          class C_Compiler * inCompiler
                                                                                          COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_shouldTerminateWithMOVLW (const int32_t inClassIndex,
                                                   categoryMethodSignature_baseline_5F_instruction_shouldTerminateWithMOVLW inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_shouldTerminateWithMOVLW (const class cPtr_baseline_5F_instruction * inObject,
                                                  const GALGAS_string constin_inErrorMessage,
                                                  C_Compiler * inCompiler
                                                  COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

