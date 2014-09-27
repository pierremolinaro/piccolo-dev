#ifndef method_2D_baseline_5F_intermediate_5F_CALL_2D_optimizeCALL_1_DEFINED
#define method_2D_baseline_5F_intermediate_5F_CALL_2D_optimizeCALL_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                             Category method '@baseline_intermediate_CALL optimizeCALL'                              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_baseline_5F_intermediate_5F_CALL_optimizeCALL) (const class cPtr_baseline_5F_intermediate_5F_CALL * inObject,
                                                                                       const class GALGAS_baselineSymbolTableForOptimizations constinArgument0,
                                                                                       const class GALGAS_uint constinArgument1,
                                                                                       class GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument2,
                                                                                       class GALGAS_string & ioArgument3,
                                                                                       class GALGAS_bool & ioArgument4,
                                                                                       class C_Compiler * inCompiler
                                                                                       COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_optimizeCALL (const int32_t inClassIndex,
                                       categoryMethodSignature_baseline_5F_intermediate_5F_CALL_optimizeCALL inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_optimizeCALL (const class cPtr_baseline_5F_intermediate_5F_CALL * inObject,
                                      const GALGAS_baselineSymbolTableForOptimizations constin_inSymbolTable,
                                      const GALGAS_uint constin_inLineIndex,
                                      GALGAS_baseline_5F_intermediate_5F_instructionList & io_ioGeneratedInstructionList,
                                      GALGAS_string & io_ioListFileContents,
                                      GALGAS_bool & io_ioOptimizationsDone,
                                      C_Compiler * inCompiler
                                      COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

