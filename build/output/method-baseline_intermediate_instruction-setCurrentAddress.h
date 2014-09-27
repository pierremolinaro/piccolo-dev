#ifndef method_2D_baseline_5F_intermediate_5F_instruction_2D_setCurrentAddress_1_DEFINED
#define method_2D_baseline_5F_intermediate_5F_instruction_2D_setCurrentAddress_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                       Category method '@baseline_intermediate_instruction setCurrentAddress'                        *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_baseline_5F_intermediate_5F_instruction_setCurrentAddress) (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                                                                                   class GALGAS_uint & ioArgument0,
                                                                                                   class C_Compiler * inCompiler
                                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_setCurrentAddress (const int32_t inClassIndex,
                                            categoryMethodSignature_baseline_5F_intermediate_5F_instruction_setCurrentAddress inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_setCurrentAddress (const class cPtr_baseline_5F_intermediate_5F_instruction * inObject,
                                           GALGAS_uint & io_ioCurrentWordAdress,
                                           C_Compiler * inCompiler
                                           COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

