#ifndef method_2D_midrange_5F_instruction_2D_instructionUsesGOTOorCALL_1_DEFINED
#define method_2D_midrange_5F_instruction_2D_instructionUsesGOTOorCALL_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                          Category method '@midrange_instruction instructionUsesGOTOorCALL'                          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_midrange_5F_instruction_instructionUsesGOTOorCALL) (const class cPtr_midrange_5F_instruction * inObject,
                                                                                           class GALGAS_bool & ioArgument0,
                                                                                           class C_Compiler * inCompiler
                                                                                           COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_instructionUsesGOTOorCALL (const int32_t inClassIndex,
                                                    categoryMethodSignature_midrange_5F_instruction_instructionUsesGOTOorCALL inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_instructionUsesGOTOorCALL (const class cPtr_midrange_5F_instruction * inObject,
                                                   GALGAS_bool & io_ioUsesGOTOorCALL,
                                                   C_Compiler * inCompiler
                                                   COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

