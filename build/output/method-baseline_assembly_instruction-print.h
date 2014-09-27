#ifndef method_2D_baseline_5F_assembly_5F_instruction_2D_print_1_DEFINED
#define method_2D_baseline_5F_assembly_5F_instruction_2D_print_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                           Abstract category method '@baseline_assembly_instruction print'                           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_baseline_5F_assembly_5F_instruction_print) (const class cPtr_baseline_5F_assembly_5F_instruction * inObject,
                                                                                   class GALGAS_string & ioArgument0,
                                                                                   class C_Compiler * inCompiler
                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_print (const int32_t inClassIndex,
                                categoryMethodSignature_baseline_5F_assembly_5F_instruction_print inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_print (const class cPtr_baseline_5F_assembly_5F_instruction * inObject,
                               GALGAS_string & io_ioListFileContents,
                               C_Compiler * inCompiler
                               COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

