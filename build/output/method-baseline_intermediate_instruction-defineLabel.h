#ifndef method_2D_baseline_5F_intermediate_5F_instruction_2D_defineLabel_1_DEFINED
#define method_2D_baseline_5F_intermediate_5F_instruction_2D_defineLabel_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category method '@baseline_intermediate_instruction defineLabel'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_baseline_5F_intermediate_5F_instruction_defineLabel) (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                             class GALGAS_baselineSymbolTableForOptimizations & ioArgument0,
                                                                                             const class GALGAS_uint constinArgument1,
                                                                                             class C_Compiler * inCompiler
                                                                                             COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_defineLabel (const int32_t inClassIndex,
                                      categoryMethodSignature_baseline_5F_intermediate_5F_instruction_defineLabel inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_defineLabel (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                     GALGAS_baselineSymbolTableForOptimizations & io_ioRoutineSymbolTable,
                                     const GALGAS_uint constin_inLineIndex,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

