#ifndef method_2D_baseline_5F_instruction_2D_shouldNotContinueInSequence_1_DEFINED
#define method_2D_baseline_5F_instruction_2D_shouldNotContinueInSequence_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Category method '@baseline_instruction shouldNotContinueInSequence'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_baseline_5F_instruction_shouldNotContinueInSequence) (const class cPtr_baseline_5F_instruction * inObject,
                                                                                             const class GALGAS_string constinArgument0,
                                                                                             class C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_shouldNotContinueInSequence (const int32_t inClassIndex,
                                                      categoryMethodSignature_baseline_5F_instruction_shouldNotContinueInSequence inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_shouldNotContinueInSequence (const class cPtr_baseline_5F_instruction * inObject,
                                                     const GALGAS_string constin_inErrorMessage,
                                                     C_Compiler * inCompiler
                                                     COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

