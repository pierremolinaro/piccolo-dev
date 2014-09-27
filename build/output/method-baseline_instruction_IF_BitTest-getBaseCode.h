#ifndef method_2D_baseline_5F_instruction_5F_IF_5F_BitTest_2D_getBaseCode_1_DEFINED
#define method_2D_baseline_5F_instruction_5F_IF_5F_BitTest_2D_getBaseCode_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Category method '@baseline_instruction_IF_BitTest getBaseCode'                            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode) (const class cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inObject,
                                                                                              class GALGAS_uint & outArgument0,
                                                                                              class C_Compiler * inCompiler
                                                                                              COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_getBaseCode (const int32_t inClassIndex,
                                      categoryMethodSignature_baseline_5F_instruction_5F_IF_5F_BitTest_getBaseCode inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_getBaseCode (const class cPtr_baseline_5F_instruction_5F_IF_5F_BitTest * inObject,
                                     GALGAS_uint & out_outBaseCode,
                                     C_Compiler * inCompiler
                                     COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

