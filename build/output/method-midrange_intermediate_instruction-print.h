#ifndef method_2D_midrange_5F_intermediate_5F_instruction_2D_print_1_DEFINED
#define method_2D_midrange_5F_intermediate_5F_instruction_2D_print_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                         Abstract category method '@midrange_intermediate_instruction print'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_midrange_5F_intermediate_5F_instruction_print) (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                       class GALGAS_string & ioArgument0,
                                                                                       class C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_print (const int32_t inClassIndex,
                                categoryMethodSignature_midrange_5F_intermediate_5F_instruction_print inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_print (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                               GALGAS_string & io_ioListFileContents,
                               C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

