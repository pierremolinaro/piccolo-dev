#ifndef method_2D_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2D_optimizeMOVLW_1_DEFINED
#define method_2D_midrange_5F_intermediate_5F_instruction_5F_literalOperation_2D_optimizeMOVLW_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Category method '@midrange_intermediate_instruction_literalOperation optimizeMOVLW'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_midrange_5F_intermediate_5F_instruction_5F_literalOperation_optimizeMOVLW) (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * inObject,
                                                                                                                   const class GALGAS_uint constinArgument0,
                                                                                                                   class GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument1,
                                                                                                                   class GALGAS_string & ioArgument2,
                                                                                                                   class GALGAS_bool & ioArgument3,
                                                                                                                   class C_Compiler * inCompiler
                                                                                                                   COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_optimizeMOVLW (const int32_t inClassIndex,
                                        categoryMethodSignature_midrange_5F_intermediate_5F_instruction_5F_literalOperation_optimizeMOVLW inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_optimizeMOVLW (const class cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation * inObject,
                                       const GALGAS_uint constin_inLineIndex,
                                       GALGAS_midrange_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                       GALGAS_string & io_ioListFileContents,
                                       GALGAS_bool & io_ioOptimizationsDone,
                                       C_Compiler * inCompiler
                                       COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

