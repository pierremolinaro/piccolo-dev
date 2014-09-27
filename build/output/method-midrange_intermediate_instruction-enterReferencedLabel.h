#ifndef method_2D_midrange_5F_intermediate_5F_instruction_2D_enterReferencedLabel_1_DEFINED
#define method_2D_midrange_5F_intermediate_5F_instruction_2D_enterReferencedLabel_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                      Category method '@midrange_intermediate_instruction enterReferencedLabel'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_midrange_5F_intermediate_5F_instruction_enterReferencedLabel) (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                                                                                      class GALGAS_stringset & ioArgument0,
                                                                                                      class C_Compiler * inCompiler
                                                                                                      COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_enterReferencedLabel (const int32_t inClassIndex,
                                               categoryMethodSignature_midrange_5F_intermediate_5F_instruction_enterReferencedLabel inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_enterReferencedLabel (const class cPtr_midrange_5F_intermediate_5F_instruction * inObject,
                                              GALGAS_stringset & io_ioReferencedLabelSet,
                                              C_Compiler * inCompiler
                                              COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

