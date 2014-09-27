#ifndef method_2D_baseline_5F_instruction_2D_addUsedRoutines_1_DEFINED
#define method_2D_baseline_5F_instruction_2D_addUsedRoutines_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Abstract category method '@baseline_instruction addUsedRoutines'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_baseline_5F_instruction_addUsedRoutines) (const class cPtr_baseline_5F_instruction * inObject,
                                                                                 class GALGAS_stringset & ioArgument0,
                                                                                 class C_Compiler * inCompiler
                                                                                 COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_addUsedRoutines (const int32_t inClassIndex,
                                          categoryMethodSignature_baseline_5F_instruction_addUsedRoutines inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_addUsedRoutines (const class cPtr_baseline_5F_instruction * inObject,
                                         GALGAS_stringset & io_ioUsedRoutines,
                                         C_Compiler * inCompiler
                                         COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

