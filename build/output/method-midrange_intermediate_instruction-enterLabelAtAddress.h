#ifndef method_2D_midrange_5F_intermediate_5F_instruction_2D_enterLabelAtAddress_1_DEFINED
#define method_2D_midrange_5F_intermediate_5F_instruction_2D_enterLabelAtAddress_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Category method '@midrange_intermediate_instruction enterLabelAtAddress'                       *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_midrange_5F_intermediate_5F_instruction_enterLabelAtAddress) (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                     class GALGAS_midrange_5F_symbolTable & ioArgument0,
                                                                                                     class GALGAS_uint & ioArgument1,
                                                                                                     class C_Compiler * inCompiler
                                                                                                     COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterLabelAtAddress (const int32_t inClassIndex,
                                              categoryMethodSignature_midrange_5F_intermediate_5F_instruction_enterLabelAtAddress inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterLabelAtAddress (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                             GALGAS_midrange_5F_symbolTable & io_ioRoutineSymbolTable,
                                             GALGAS_uint & io_ioAddress,
                                             C_Compiler * inCompiler
                                             COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

