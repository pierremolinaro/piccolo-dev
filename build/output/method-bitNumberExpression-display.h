#ifndef method_2D_bitNumberExpression_2D_display_1_DEFINED
#define method_2D_bitNumberExpression_2D_display_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                               Abstract category method '@bitNumberExpression display'                               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_bitNumberExpression_display) (const class cPtr_bitNumberExpression * inObject,
                                                                     class GALGAS_string & ioArgument0,
                                                                     class C_Compiler * inCompiler
                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_display (const int32_t inClassIndex,
                                  categoryMethodSignature_bitNumberExpression_display inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_display (const class cPtr_bitNumberExpression * inObject,
                                 GALGAS_string & io_ioString,
                                 C_Compiler * inCompiler
                                 COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

