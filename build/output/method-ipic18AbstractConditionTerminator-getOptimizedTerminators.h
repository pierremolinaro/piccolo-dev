#ifndef method_2D_ipic_31__38_AbstractConditionTerminator_2D_getOptimizedTerminators_1_DEFINED
#define method_2D_ipic_31__38_AbstractConditionTerminator_2D_getOptimizedTerminators_1_DEFINED

//---------------------------------------------------------------------------------------------------------------------*

#include "galgas2/predefined-types.h"

//---------------------------------------------------------------------------------------------------------------------*

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Category method '@ipic18AbstractConditionTerminator getOptimizedTerminators'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

typedef void (*categoryMethodSignature_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators) (const class cPtr_ipic_31__38_AbstractConditionTerminator * inObject,
                                                                                                         const class GALGAS_symbolTableForBlockOptimization constinArgument0,
                                                                                                         const class GALGAS_optimizeFlagStruct constinArgument1,
                                                                                                         const class GALGAS_ipic_31__38_BlockList constinArgument2,
                                                                                                         const class GALGAS_string constinArgument3,
                                                                                                         class GALGAS_bool & ioArgument4,
                                                                                                         class GALGAS_string & ioArgument5,
                                                                                                         class GALGAS_ipic_31__38_SingleInstructionTerminator & outArgument6,
                                                                                                         class GALGAS_ipic_31__38_SingleInstructionTerminator & outArgument7,
                                                                                                         class GALGAS_bool & outArgument8,
                                                                                                         class C_Compiler * inCompiler
                                                                                                         COMMA_LOCATION_ARGS) ;

//---------------------------------------------------------------------------------------------------------------------*

void enterCategoryMethod_getOptimizedTerminators (const int32_t inClassIndex,
                                                  categoryMethodSignature_ipic_31__38_AbstractConditionTerminator_getOptimizedTerminators inMethod) ;

//---------------------------------------------------------------------------------------------------------------------*

void callCategoryMethod_getOptimizedTerminators (const class cPtr_ipic_31__38_AbstractConditionTerminator * inObject,
                                                 const GALGAS_symbolTableForBlockOptimization constin_inSymbolTable,
                                                 const GALGAS_optimizeFlagStruct constin_inOptimizeFlagStruct,
                                                 const GALGAS_ipic_31__38_BlockList constin_inBlockList,
                                                 const GALGAS_string constin_inBlockLabel,
                                                 GALGAS_bool & io_ioOptimizationDone,
                                                 GALGAS_string & io_ioListFileContents,
                                                 GALGAS_ipic_31__38_SingleInstructionTerminator & out_outOptimizedTrueTerminator,
                                                 GALGAS_ipic_31__38_SingleInstructionTerminator & out_outOptimizedFalseTerminator,
                                                 GALGAS_bool & out_outIdenticalTerminators,
                                                 C_Compiler * inCompiler
                                                 COMMA_LOCATION_ARGS) ;


//---------------------------------------------------------------------------------------------------------------------*

#endif

