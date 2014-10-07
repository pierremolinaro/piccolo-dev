#include "galgas2/C_Compiler.h"
#include "galgas2/C_galgas_io.h"
#include "galgas2/C_galgas_CLI_Options.h"
#include "utilities/C_PrologueEpilogue.h"

//---------------------------------------------------------------------------------------------------------------------*

#include "class-byteDeclarationInRam.h"
#include "class-ipic18AbstractBlockTerminator.h"
#include "class-ipic18AbstractConditionTerminator.h"
#include "class-ipic18ComputedBraTerminator.h"
#include "class-ipic18ComputedGotoTerminator.h"
#include "class-ipic18ComputedRETLWTerminator.h"
#include "class-ipic18ConditionalJumpTerminator.h"
#include "class-ipic18IncDecRegisterTerminator.h"
#include "class-ipic18JumpTerminator.h"
#include "class-ipic18RetfieTerminator.h"
#include "class-ipic18RetlwTerminator.h"
#include "class-ipic18ReturnTerminator.h"
#include "class-ipic18SequentialInstruction.h"
#include "class-ipic18SingleInstructionTerminator.h"
#include "class-ipic18_condition_skip_instruction.h"
#include "class-ipic18_intermediate_JSR.h"
#include "class-ipic18_intermediate_instruction_computed_rcall.h"
#include "class-ipic18_skip_instruction_FDA.h"
#include "class-ipic18_skip_instruction_compare_register.h"
#include "class-pic18BitTestTerminator.h"
#include "class-pic18RegisterComparisonTerminator.h"
#include "class-pic18TestRegisterTerminator.h"
#include "enum-ipic18_compare_register_instruction_base_code.h"
#include "enum-skip_instruction_FDA_base_code.h"
#include "getter-ipic18AbstractBlockTerminator-needToInsertJumpInstruction.h"
#include "graph-blockInvocationGraph.h"
#include "list-ipic18BlockList.h"
#include "list-ipic18SequentialInstructionList.h"
#include "map-bitSliceTable.h"
#include "map-declaredByteMap.h"
#include "map-ramBankTable.h"
#include "map-registerTable.h"
#include "map-symbolTableForBlockOptimization.h"
#include "method-declarationInRam-handleDeclaration.h"
#include "method-ipic18AbstractBlockTerminator-buildTerminatorInvocationGraph.h"
#include "method-ipic18AbstractBlockTerminator-buildTerminatorOrderedGraph.h"
#include "method-ipic18AbstractBlockTerminator-exploreAccessibleBlocks.h"
#include "method-ipic18SequentialInstruction-buildCalledRoutineSet.h"
#include "method-ipic18SequentialInstruction-buildInstructionInvocationGraph.h"
#include "method-ipic18SequentialInstruction-optimizeInstruction.h"
#include "struct-ipic18_intermediate_registerExpression.h"
#include "struct-optimizeFlagStruct.h"


//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@ipic18_skip_instruction_compare_register optimizeInstruction'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_optimizeInstruction (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                           const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                           const GALGAS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                                                           const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                           const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                                           GALGAS_bool & outArgument_outOptimizationDone,
                                                                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                                                                           GALGAS_ipic_31__38_SequentialInstruction & outArgument_outOptimizedInstruction,
                                                                                                           GALGAS_bool & outArgument_outNOPsubstitution,
                                                                                                           C_Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register) ;
  outArgument_outNOPsubstitution = GALGAS_bool (false) ;
  GALGAS_ipic_31__38_SequentialInstruction var_optimizedEmbeddedInstruction ;
  GALGAS_bool joker_32502_0 ; // Joker input parameter
  callCategoryMethod_optimizeInstruction ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, outArgument_outOptimizationDone, ioArgument_ioListFileContents, var_optimizedEmbeddedInstruction, joker_32502_0, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 835)) ;
  const enumGalgasBool test_0 = outArgument_outOptimizationDone.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outOptimizedInstruction = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::constructor_new (object->mAttribute_mInstructionLocation, var_optimizedEmbeddedInstruction, object->mAttribute_mCompareInstruction, object->mAttribute_mRegisterDescription  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 846)) ;
  }else if (kBoolFalse == test_0) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_1 = object ;
    outArgument_outOptimizedInstruction = temp_1 ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_optimizeInstruction (void) {
  enterCategoryMethod_optimizeInstruction (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register.mSlotID,
                                           categoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_optimizeInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_optimizeInstruction (defineCategoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register_optimizeInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@ipic18_skip_instruction_FDA optimizeInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_optimizeInstruction (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                           const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                           const GALGAS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                                           const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                           const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                           GALGAS_bool & outArgument_outOptimizationDone,
                                                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                                                           GALGAS_ipic_31__38_SequentialInstruction & outArgument_outOptimizedInstruction,
                                                                                           GALGAS_bool & outArgument_outNOPsubstitution,
                                                                                           C_Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA * object = (const cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA) ;
  outArgument_outNOPsubstitution = GALGAS_bool (false) ;
  GALGAS_ipic_31__38_SequentialInstruction var_optimizedEmbeddedInstruction ;
  GALGAS_bool joker_33526_0 ; // Joker input parameter
  callCategoryMethod_optimizeInstruction ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, outArgument_outOptimizationDone, ioArgument_ioListFileContents, var_optimizedEmbeddedInstruction, joker_33526_0, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 869)) ;
  const enumGalgasBool test_0 = outArgument_outOptimizationDone.boolEnum () ;
  if (kBoolTrue == test_0) {
    outArgument_outOptimizedInstruction = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::constructor_new (object->mAttribute_mInstructionLocation, var_optimizedEmbeddedInstruction, object->mAttribute_mInstruction_5F_FDA_5F_base_5F_code, object->mAttribute_mRegisterDescription, object->mAttribute_m_5F_W_5F_isDestination  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 880)) ;
  }else if (kBoolFalse == test_0) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_1 = object ;
    outArgument_outOptimizedInstruction = temp_1 ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_optimizeInstruction (void) {
  enterCategoryMethod_optimizeInstruction (kTypeDescriptor_GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA.mSlotID,
                                           categoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_optimizeInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_optimizeInstruction (defineCategoryMethod_ipic_31__38__5F_skip_5F_instruction_5F_FDA_optimizeInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@ipic18_intermediate_JSR buildInstructionInvocationGraph'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_JSR_buildInstructionInvocationGraph (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                                GALGAS_string & ioArgument_ioGraphVizString,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_JSR * object = (const cPtr_ipic_31__38__5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
  ioArgument_ioGraphVizString.dotAssign_operation (GALGAS_string ("  \"").add_operation (constinArgument_inBlockLabel.reader_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 29)).add_operation (GALGAS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 29)).add_operation (object->mAttribute_mTargetLabel.reader_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 29)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 29)).add_operation (GALGAS_string ("\" [color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 29))  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 29)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_JSR_buildInstructionInvocationGraph (void) {
  enterCategoryMethod_buildInstructionInvocationGraph (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR.mSlotID,
                                                       categoryMethod_ipic_31__38__5F_intermediate_5F_JSR_buildInstructionInvocationGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_JSR_buildInstructionInvocationGraph (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_JSR_buildInstructionInvocationGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//    Overriding category method '@ipic18_intermediate_instruction_computed_rcall buildInstructionInvocationGraph'     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_buildInstructionInvocationGraph (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                             const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                                                             GALGAS_string & ioArgument_ioGraphVizString,
                                                                                                                             C_Compiler * inCompiler
                                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
  ioArgument_ioGraphVizString.dotAssign_operation (GALGAS_string ("  \"").add_operation (constinArgument_inBlockLabel.reader_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 37)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 37)).add_operation (GALGAS_string ("\" -> \"_computed_goto_4\" [color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 37))  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 37)) ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_1326 (object->mAttribute_mTargetInstructions, kEnumeration_up) ;
  while (enumerator_1326.hasCurrentObject ()) {
    callCategoryMethod_buildInstructionInvocationGraph ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_1326.current_mInstruction (HERE).ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 39)) ;
    enumerator_1326.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_buildInstructionInvocationGraph (void) {
  enterCategoryMethod_buildInstructionInvocationGraph (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall.mSlotID,
                                                       categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_buildInstructionInvocationGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_buildInstructionInvocationGraph (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_buildInstructionInvocationGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@ipic18_condition_skip_instruction buildInstructionInvocationGraph'           *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_buildInstructionInvocationGraph (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                             const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                                             GALGAS_string & ioArgument_ioGraphVizString,
                                                                                                             C_Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction * object = (const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;
  callCategoryMethod_buildInstructionInvocationGraph ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 51)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_buildInstructionInvocationGraph (void) {
  enterCategoryMethod_buildInstructionInvocationGraph (kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction.mSlotID,
                                                       categoryMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_buildInstructionInvocationGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_buildInstructionInvocationGraph (defineCategoryMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_buildInstructionInvocationGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@ipic18ReturnTerminator buildTerminatorInvocationGraph'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ReturnTerminator_buildTerminatorInvocationGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                        const GALGAS_lstring /* constinArgument_inBlockLabel */,
                                                                                        GALGAS_string & /* ioArgument_ioGraphVizString */,
                                                                                        const GALGAS_bool /* constinArgument_inDottedArrow */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ReturnTerminator_buildTerminatorInvocationGraph (void) {
  enterCategoryMethod_buildTerminatorInvocationGraph (kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator.mSlotID,
                                                      categoryMethod_ipic_31__38_ReturnTerminator_buildTerminatorInvocationGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ReturnTerminator_buildTerminatorInvocationGraph (defineCategoryMethod_ipic_31__38_ReturnTerminator_buildTerminatorInvocationGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@ipic18RetlwTerminator buildTerminatorInvocationGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_RetlwTerminator_buildTerminatorInvocationGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                       const GALGAS_lstring /* constinArgument_inBlockLabel */,
                                                                                       GALGAS_string & /* ioArgument_ioGraphVizString */,
                                                                                       const GALGAS_bool /* constinArgument_inDottedArrow */,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_RetlwTerminator_buildTerminatorInvocationGraph (void) {
  enterCategoryMethod_buildTerminatorInvocationGraph (kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator.mSlotID,
                                                      categoryMethod_ipic_31__38_RetlwTerminator_buildTerminatorInvocationGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_RetlwTerminator_buildTerminatorInvocationGraph (defineCategoryMethod_ipic_31__38_RetlwTerminator_buildTerminatorInvocationGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@ipic18RetfieTerminator buildTerminatorInvocationGraph'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_RetfieTerminator_buildTerminatorInvocationGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                        const GALGAS_lstring /* constinArgument_inBlockLabel */,
                                                                                        GALGAS_string & /* ioArgument_ioGraphVizString */,
                                                                                        const GALGAS_bool /* constinArgument_inDottedArrow */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_RetfieTerminator_buildTerminatorInvocationGraph (void) {
  enterCategoryMethod_buildTerminatorInvocationGraph (kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator.mSlotID,
                                                      categoryMethod_ipic_31__38_RetfieTerminator_buildTerminatorInvocationGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_RetfieTerminator_buildTerminatorInvocationGraph (defineCategoryMethod_ipic_31__38_RetfieTerminator_buildTerminatorInvocationGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@ipic18ComputedGotoTerminator buildTerminatorInvocationGraph'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ComputedGotoTerminator_buildTerminatorInvocationGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                              const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                              GALGAS_string & ioArgument_ioGraphVizString,
                                                                                              const GALGAS_bool /* constinArgument_inDottedArrow */,
                                                                                              C_Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGraphVizString.dotAssign_operation (GALGAS_string ("  \"").add_operation (constinArgument_inBlockLabel.reader_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 98)).add_operation (GALGAS_string ("\" -> \"_computed_goto_4\" [color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 98))  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 98)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ComputedGotoTerminator_buildTerminatorInvocationGraph (void) {
  enterCategoryMethod_buildTerminatorInvocationGraph (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                                      categoryMethod_ipic_31__38_ComputedGotoTerminator_buildTerminatorInvocationGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedGotoTerminator_buildTerminatorInvocationGraph (defineCategoryMethod_ipic_31__38_ComputedGotoTerminator_buildTerminatorInvocationGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@ipic18ComputedRETLWTerminator buildTerminatorInvocationGraph'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ComputedRETLWTerminator_buildTerminatorInvocationGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                               const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                               GALGAS_string & ioArgument_ioGraphVizString,
                                                                                               const GALGAS_bool /* constinArgument_inDottedArrow */,
                                                                                               C_Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGraphVizString.dotAssign_operation (GALGAS_string ("  \"").add_operation (constinArgument_inBlockLabel.reader_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 107)).add_operation (GALGAS_string ("\" -> \"_computed_goto_2\" [color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 107))  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 107)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ComputedRETLWTerminator_buildTerminatorInvocationGraph (void) {
  enterCategoryMethod_buildTerminatorInvocationGraph (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                                      categoryMethod_ipic_31__38_ComputedRETLWTerminator_buildTerminatorInvocationGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedRETLWTerminator_buildTerminatorInvocationGraph (defineCategoryMethod_ipic_31__38_ComputedRETLWTerminator_buildTerminatorInvocationGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@ipic18ComputedBraTerminator buildTerminatorInvocationGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ComputedBraTerminator_buildTerminatorInvocationGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                             const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                             GALGAS_string & ioArgument_ioGraphVizString,
                                                                                             const GALGAS_bool /* constinArgument_inDottedArrow */,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGraphVizString.dotAssign_operation (GALGAS_string ("  \"").add_operation (constinArgument_inBlockLabel.reader_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 116)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 116)).add_operation (GALGAS_string ("\" -> \"_computed_goto_2\" [color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 116))  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 116)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ComputedBraTerminator_buildTerminatorInvocationGraph (void) {
  enterCategoryMethod_buildTerminatorInvocationGraph (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                                      categoryMethod_ipic_31__38_ComputedBraTerminator_buildTerminatorInvocationGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedBraTerminator_buildTerminatorInvocationGraph (defineCategoryMethod_ipic_31__38_ComputedBraTerminator_buildTerminatorInvocationGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@ipic18AbstractConditionTerminator buildTerminatorInvocationGraph'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_AbstractConditionTerminator_buildTerminatorInvocationGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                   const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                                   GALGAS_string & ioArgument_ioGraphVizString,
                                                                                                   const GALGAS_bool /* constinArgument_inDottedArrow */,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_AbstractConditionTerminator * object = (const cPtr_ipic_31__38_AbstractConditionTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_AbstractConditionTerminator) ;
  callCategoryMethod_buildTerminatorInvocationGraph ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 125)) ;
  callCategoryMethod_buildTerminatorInvocationGraph ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 126)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_AbstractConditionTerminator_buildTerminatorInvocationGraph (void) {
  enterCategoryMethod_buildTerminatorInvocationGraph (kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator.mSlotID,
                                                      categoryMethod_ipic_31__38_AbstractConditionTerminator_buildTerminatorInvocationGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_AbstractConditionTerminator_buildTerminatorInvocationGraph (defineCategoryMethod_ipic_31__38_AbstractConditionTerminator_buildTerminatorInvocationGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//           Overriding category method '@pic18RegisterComparisonTerminator buildTerminatorInvocationGraph'            *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_RegisterComparisonTerminator_buildTerminatorInvocationGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                   const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                                   GALGAS_string & ioArgument_ioGraphVizString,
                                                                                                   const GALGAS_bool /* constinArgument_inDottedArrow */,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_RegisterComparisonTerminator * object = (const cPtr_pic_31__38_RegisterComparisonTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_RegisterComparisonTerminator) ;
  callCategoryMethod_buildTerminatorInvocationGraph ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 135)) ;
  callCategoryMethod_buildTerminatorInvocationGraph ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 136)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_RegisterComparisonTerminator_buildTerminatorInvocationGraph (void) {
  enterCategoryMethod_buildTerminatorInvocationGraph (kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator.mSlotID,
                                                      categoryMethod_pic_31__38_RegisterComparisonTerminator_buildTerminatorInvocationGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_RegisterComparisonTerminator_buildTerminatorInvocationGraph (defineCategoryMethod_pic_31__38_RegisterComparisonTerminator_buildTerminatorInvocationGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@pic18TestRegisterTerminator buildTerminatorInvocationGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_TestRegisterTerminator_buildTerminatorInvocationGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                             const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                             GALGAS_string & ioArgument_ioGraphVizString,
                                                                                             const GALGAS_bool /* constinArgument_inDottedArrow */,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_TestRegisterTerminator * object = (const cPtr_pic_31__38_TestRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_TestRegisterTerminator) ;
  callCategoryMethod_buildTerminatorInvocationGraph ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 145)) ;
  callCategoryMethod_buildTerminatorInvocationGraph ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 146)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_TestRegisterTerminator_buildTerminatorInvocationGraph (void) {
  enterCategoryMethod_buildTerminatorInvocationGraph (kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator.mSlotID,
                                                      categoryMethod_pic_31__38_TestRegisterTerminator_buildTerminatorInvocationGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_TestRegisterTerminator_buildTerminatorInvocationGraph (defineCategoryMethod_pic_31__38_TestRegisterTerminator_buildTerminatorInvocationGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@ipic18JumpTerminator buildTerminatorInvocationGraph'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_JumpTerminator_buildTerminatorInvocationGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                      const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                      GALGAS_string & ioArgument_ioGraphVizString,
                                                                                      const GALGAS_bool constinArgument_inDottedArrow,
                                                                                      C_Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_JumpTerminator * object = (const cPtr_ipic_31__38_JumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_JumpTerminator) ;
  ioArgument_ioGraphVizString.dotAssign_operation (GALGAS_string ("  \"").add_operation (constinArgument_inBlockLabel.reader_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 155)).add_operation (GALGAS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 155)).add_operation (object->mAttribute_mLabel.reader_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 155)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 155)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 155))  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 155)) ;
  const enumGalgasBool test_0 = constinArgument_inDottedArrow.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGraphVizString.dotAssign_operation (GALGAS_string (" [style=dashed]")  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 157)) ;
  }
  ioArgument_ioGraphVizString.dotAssign_operation (GALGAS_string (" ;\n")  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 159)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_JumpTerminator_buildTerminatorInvocationGraph (void) {
  enterCategoryMethod_buildTerminatorInvocationGraph (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                                      categoryMethod_ipic_31__38_JumpTerminator_buildTerminatorInvocationGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_JumpTerminator_buildTerminatorInvocationGraph (defineCategoryMethod_ipic_31__38_JumpTerminator_buildTerminatorInvocationGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//            Overriding category method '@ipic18ConditionalJumpTerminator buildTerminatorInvocationGraph'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ConditionalJumpTerminator_buildTerminatorInvocationGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                 const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                                 GALGAS_string & ioArgument_ioGraphVizString,
                                                                                                 const GALGAS_bool constinArgument_inDottedArrow,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ConditionalJumpTerminator * object = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  ioArgument_ioGraphVizString.dotAssign_operation (GALGAS_string ("  \"").add_operation (constinArgument_inBlockLabel.reader_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 168)).add_operation (GALGAS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 168)).add_operation (object->mAttribute_mTargetLabelWhenTrue.reader_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 168)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 168))  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 168)) ;
  const enumGalgasBool test_0 = constinArgument_inDottedArrow.boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioGraphVizString.dotAssign_operation (GALGAS_string (" [style=dashed]")  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 170)) ;
  }
  ioArgument_ioGraphVizString.dotAssign_operation (GALGAS_string (" ;\n")  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 172)) ;
  ioArgument_ioGraphVizString.dotAssign_operation (GALGAS_string ("  \"").add_operation (constinArgument_inBlockLabel.reader_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 173)).add_operation (GALGAS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 173)).add_operation (object->mAttribute_mTargetLabelWhenFalse.reader_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 173)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 173))  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 173)) ;
  const enumGalgasBool test_1 = constinArgument_inDottedArrow.boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioGraphVizString.dotAssign_operation (GALGAS_string (" [style=dashed]")  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 175)) ;
  }
  ioArgument_ioGraphVizString.dotAssign_operation (GALGAS_string (" ;\n")  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 177)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ConditionalJumpTerminator_buildTerminatorInvocationGraph (void) {
  enterCategoryMethod_buildTerminatorInvocationGraph (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                                      categoryMethod_ipic_31__38_ConditionalJumpTerminator_buildTerminatorInvocationGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ConditionalJumpTerminator_buildTerminatorInvocationGraph (defineCategoryMethod_ipic_31__38_ConditionalJumpTerminator_buildTerminatorInvocationGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category reader '@ipic18ReturnTerminator needToInsertJumpInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_ipic_31__38_ReturnTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                            const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_ReturnTerminator_needToInsertJumpInstruction (void) {
  enterCategoryReader_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator.mSlotID,
                                                   categoryReader_ipic_31__38_ReturnTerminator_needToInsertJumpInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_ReturnTerminator_needToInsertJumpInstruction (defineCategoryReader_ipic_31__38_ReturnTerminator_needToInsertJumpInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category reader '@ipic18RetlwTerminator needToInsertJumpInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_ipic_31__38_RetlwTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                           const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                           C_Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_RetlwTerminator_needToInsertJumpInstruction (void) {
  enterCategoryReader_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator.mSlotID,
                                                   categoryReader_ipic_31__38_RetlwTerminator_needToInsertJumpInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_RetlwTerminator_needToInsertJumpInstruction (defineCategoryReader_ipic_31__38_RetlwTerminator_needToInsertJumpInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category reader '@ipic18RetfieTerminator needToInsertJumpInstruction'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_ipic_31__38_RetfieTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                            const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                            C_Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_RetfieTerminator_needToInsertJumpInstruction (void) {
  enterCategoryReader_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator.mSlotID,
                                                   categoryReader_ipic_31__38_RetfieTerminator_needToInsertJumpInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_RetfieTerminator_needToInsertJumpInstruction (defineCategoryReader_ipic_31__38_RetfieTerminator_needToInsertJumpInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category reader '@ipic18JumpTerminator needToInsertJumpInstruction'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_ipic_31__38_JumpTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                          const GALGAS_string & constinArgument_inNextBlockLabel,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_ipic_31__38_JumpTerminator * object = (const cPtr_ipic_31__38_JumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_JumpTerminator) ;
  result_outResult = GALGAS_bool (kIsNotEqual, object->mAttribute_mLabel.mAttribute_string.objectCompare (constinArgument_inNextBlockLabel)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_JumpTerminator_needToInsertJumpInstruction (void) {
  enterCategoryReader_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                                   categoryReader_ipic_31__38_JumpTerminator_needToInsertJumpInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_JumpTerminator_needToInsertJumpInstruction (defineCategoryReader_ipic_31__38_JumpTerminator_needToInsertJumpInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category reader '@ipic18ComputedGotoTerminator needToInsertJumpInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_ipic_31__38_ComputedGotoTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                                  const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                                  C_Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_ComputedGotoTerminator_needToInsertJumpInstruction (void) {
  enterCategoryReader_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                                   categoryReader_ipic_31__38_ComputedGotoTerminator_needToInsertJumpInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_ComputedGotoTerminator_needToInsertJumpInstruction (defineCategoryReader_ipic_31__38_ComputedGotoTerminator_needToInsertJumpInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category reader '@ipic18ComputedRETLWTerminator needToInsertJumpInstruction'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_ipic_31__38_ComputedRETLWTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                                   const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                                   C_Compiler * /* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_ComputedRETLWTerminator_needToInsertJumpInstruction (void) {
  enterCategoryReader_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                                   categoryReader_ipic_31__38_ComputedRETLWTerminator_needToInsertJumpInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_ComputedRETLWTerminator_needToInsertJumpInstruction (defineCategoryReader_ipic_31__38_ComputedRETLWTerminator_needToInsertJumpInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category reader '@ipic18ConditionalJumpTerminator needToInsertJumpInstruction'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_ipic_31__38_ConditionalJumpTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                                     const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                                     C_Compiler * /* inCompiler */
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_ConditionalJumpTerminator_needToInsertJumpInstruction (void) {
  enterCategoryReader_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                                   categoryReader_ipic_31__38_ConditionalJumpTerminator_needToInsertJumpInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_ConditionalJumpTerminator_needToInsertJumpInstruction (defineCategoryReader_ipic_31__38_ConditionalJumpTerminator_needToInsertJumpInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category reader '@ipic18ComputedBraTerminator needToInsertJumpInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_ipic_31__38_ComputedBraTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                                 const GALGAS_string & /* constinArgument_inNextBlockLabel */,
                                                                                                 C_Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_ComputedBraTerminator_needToInsertJumpInstruction (void) {
  enterCategoryReader_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                                   categoryReader_ipic_31__38_ComputedBraTerminator_needToInsertJumpInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_ComputedBraTerminator_needToInsertJumpInstruction (defineCategoryReader_ipic_31__38_ComputedBraTerminator_needToInsertJumpInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category reader '@ipic18AbstractConditionTerminator needToInsertJumpInstruction'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_ipic_31__38_AbstractConditionTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                       const GALGAS_string & constinArgument_inNextBlockLabel,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_ipic_31__38_AbstractConditionTerminator * object = (const cPtr_ipic_31__38_AbstractConditionTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_AbstractConditionTerminator) ;
  result_outResult = callCategoryReader_needToInsertJumpInstruction ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 260)).operator_and (callCategoryReader_needToInsertJumpInstruction ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 262)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 260)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_ipic_31__38_AbstractConditionTerminator_needToInsertJumpInstruction (void) {
  enterCategoryReader_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator.mSlotID,
                                                   categoryReader_ipic_31__38_AbstractConditionTerminator_needToInsertJumpInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_ipic_31__38_AbstractConditionTerminator_needToInsertJumpInstruction (defineCategoryReader_ipic_31__38_AbstractConditionTerminator_needToInsertJumpInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category reader '@pic18RegisterComparisonTerminator needToInsertJumpInstruction'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_pic_31__38_RegisterComparisonTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                       const GALGAS_string & constinArgument_inNextBlockLabel,
                                                                                                       C_Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_pic_31__38_RegisterComparisonTerminator * object = (const cPtr_pic_31__38_RegisterComparisonTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_RegisterComparisonTerminator) ;
  result_outResult = callCategoryReader_needToInsertJumpInstruction ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 271)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_pic_31__38_RegisterComparisonTerminator_needToInsertJumpInstruction (void) {
  enterCategoryReader_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator.mSlotID,
                                                   categoryReader_pic_31__38_RegisterComparisonTerminator_needToInsertJumpInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_pic_31__38_RegisterComparisonTerminator_needToInsertJumpInstruction (defineCategoryReader_pic_31__38_RegisterComparisonTerminator_needToInsertJumpInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category reader '@pic18TestRegisterTerminator needToInsertJumpInstruction'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static GALGAS_bool categoryReader_pic_31__38_TestRegisterTerminator_needToInsertJumpInstruction (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                 const GALGAS_string & constinArgument_inNextBlockLabel,
                                                                                                 C_Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outResult ; // Returned variable
  const cPtr_pic_31__38_TestRegisterTerminator * object = (const cPtr_pic_31__38_TestRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_TestRegisterTerminator) ;
  result_outResult = callCategoryReader_needToInsertJumpInstruction ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 280)) ;
//---
  return result_outResult ;
}


//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryReader_pic_31__38_TestRegisterTerminator_needToInsertJumpInstruction (void) {
  enterCategoryReader_needToInsertJumpInstruction (kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator.mSlotID,
                                                   categoryReader_pic_31__38_TestRegisterTerminator_needToInsertJumpInstruction) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gReader_pic_31__38_TestRegisterTerminator_needToInsertJumpInstruction (defineCategoryReader_pic_31__38_TestRegisterTerminator_needToInsertJumpInstruction, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                   Overriding category method '@ipic18JumpTerminator buildTerminatorOrderedGraph'                    *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_JumpTerminator_buildTerminatorOrderedGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                   const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                   GALGAS_blockInvocationGraph & ioArgument_ioGraph,
                                                                                   C_Compiler * /* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_JumpTerminator * object = (const cPtr_ipic_31__38_JumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_JumpTerminator) ;
  {
  ioArgument_ioGraph.modifier_addEdge (constinArgument_inBlockLabel, object->mAttribute_mLabel COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 299)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_JumpTerminator_buildTerminatorOrderedGraph (void) {
  enterCategoryMethod_buildTerminatorOrderedGraph (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                                   categoryMethod_ipic_31__38_JumpTerminator_buildTerminatorOrderedGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_JumpTerminator_buildTerminatorOrderedGraph (defineCategoryMethod_ipic_31__38_JumpTerminator_buildTerminatorOrderedGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@ipic18ConditionalJumpTerminator buildTerminatorOrderedGraph'              *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ConditionalJumpTerminator_buildTerminatorOrderedGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                              const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                              GALGAS_blockInvocationGraph & ioArgument_ioGraph,
                                                                                              C_Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ConditionalJumpTerminator * object = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  {
  ioArgument_ioGraph.modifier_addEdge (constinArgument_inBlockLabel, object->mAttribute_mTargetLabelWhenTrue COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 307)) ;
  }
  {
  ioArgument_ioGraph.modifier_addEdge (constinArgument_inBlockLabel, object->mAttribute_mTargetLabelWhenFalse COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 308)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ConditionalJumpTerminator_buildTerminatorOrderedGraph (void) {
  enterCategoryMethod_buildTerminatorOrderedGraph (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                                   categoryMethod_ipic_31__38_ConditionalJumpTerminator_buildTerminatorOrderedGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ConditionalJumpTerminator_buildTerminatorOrderedGraph (defineCategoryMethod_ipic_31__38_ConditionalJumpTerminator_buildTerminatorOrderedGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//             Overriding category method '@pic18RegisterComparisonTerminator buildTerminatorOrderedGraph'             *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_RegisterComparisonTerminator_buildTerminatorOrderedGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                                const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                                GALGAS_blockInvocationGraph & ioArgument_ioGraph,
                                                                                                C_Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_RegisterComparisonTerminator * object = (const cPtr_pic_31__38_RegisterComparisonTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_RegisterComparisonTerminator) ;
  callCategoryMethod_buildTerminatorOrderedGraph ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inBlockLabel, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 316)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_RegisterComparisonTerminator_buildTerminatorOrderedGraph (void) {
  enterCategoryMethod_buildTerminatorOrderedGraph (kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator.mSlotID,
                                                   categoryMethod_pic_31__38_RegisterComparisonTerminator_buildTerminatorOrderedGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_RegisterComparisonTerminator_buildTerminatorOrderedGraph (defineCategoryMethod_pic_31__38_RegisterComparisonTerminator_buildTerminatorOrderedGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@pic18TestRegisterTerminator buildTerminatorOrderedGraph'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_TestRegisterTerminator_buildTerminatorOrderedGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                          const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                          GALGAS_blockInvocationGraph & ioArgument_ioGraph,
                                                                                          C_Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_TestRegisterTerminator * object = (const cPtr_pic_31__38_TestRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_TestRegisterTerminator) ;
  callCategoryMethod_buildTerminatorOrderedGraph ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inBlockLabel, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 327)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_TestRegisterTerminator_buildTerminatorOrderedGraph (void) {
  enterCategoryMethod_buildTerminatorOrderedGraph (kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator.mSlotID,
                                                   categoryMethod_pic_31__38_TestRegisterTerminator_buildTerminatorOrderedGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_TestRegisterTerminator_buildTerminatorOrderedGraph (defineCategoryMethod_pic_31__38_TestRegisterTerminator_buildTerminatorOrderedGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//              Overriding category method '@ipic18IncDecRegisterTerminator buildTerminatorOrderedGraph'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_IncDecRegisterTerminator_buildTerminatorOrderedGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                             const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                             GALGAS_blockInvocationGraph & ioArgument_ioGraph,
                                                                                             C_Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_IncDecRegisterTerminator * object = (const cPtr_ipic_31__38_IncDecRegisterTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_IncDecRegisterTerminator) ;
  callCategoryMethod_buildTerminatorOrderedGraph ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inBlockLabel, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 338)) ;
  callCategoryMethod_buildTerminatorOrderedGraph ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inBlockLabel, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 342)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_IncDecRegisterTerminator_buildTerminatorOrderedGraph (void) {
  enterCategoryMethod_buildTerminatorOrderedGraph (kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator.mSlotID,
                                                   categoryMethod_ipic_31__38_IncDecRegisterTerminator_buildTerminatorOrderedGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_IncDecRegisterTerminator_buildTerminatorOrderedGraph (defineCategoryMethod_ipic_31__38_IncDecRegisterTerminator_buildTerminatorOrderedGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@pic18BitTestTerminator buildTerminatorOrderedGraph'                   *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_pic_31__38_BitTestTerminator_buildTerminatorOrderedGraph (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                     const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                     GALGAS_blockInvocationGraph & ioArgument_ioGraph,
                                                                                     C_Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_pic_31__38_BitTestTerminator * object = (const cPtr_pic_31__38_BitTestTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_pic_31__38_BitTestTerminator) ;
  callCategoryMethod_buildTerminatorOrderedGraph ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), constinArgument_inBlockLabel, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 353)) ;
  callCategoryMethod_buildTerminatorOrderedGraph ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), constinArgument_inBlockLabel, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 357)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_pic_31__38_BitTestTerminator_buildTerminatorOrderedGraph (void) {
  enterCategoryMethod_buildTerminatorOrderedGraph (kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator.mSlotID,
                                                   categoryMethod_pic_31__38_BitTestTerminator_buildTerminatorOrderedGraph) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_pic_31__38_BitTestTerminator_buildTerminatorOrderedGraph (defineCategoryMethod_pic_31__38_BitTestTerminator_buildTerminatorOrderedGraph, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//               Overriding category method '@ipic18AbstractConditionTerminator exploreAccessibleBlocks'               *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_AbstractConditionTerminator_exploreAccessibleBlocks (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                            GALGAS_stringset & ioArgument_ioBlockToExploreSet,
                                                                                            GALGAS_stringset & ioArgument_ioExploredBlockSet,
                                                                                            C_Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_AbstractConditionTerminator * object = (const cPtr_ipic_31__38_AbstractConditionTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_AbstractConditionTerminator) ;
  callCategoryMethod_exploreAccessibleBlocks ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionTrue.ptr (), ioArgument_ioBlockToExploreSet, ioArgument_ioExploredBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 41)) ;
  callCategoryMethod_exploreAccessibleBlocks ((const cPtr_ipic_31__38_SingleInstructionTerminator *) object->mAttribute_mSingleInstructionTerminatorIfConditionFalse.ptr (), ioArgument_ioBlockToExploreSet, ioArgument_ioExploredBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 42)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_AbstractConditionTerminator_exploreAccessibleBlocks (void) {
  enterCategoryMethod_exploreAccessibleBlocks (kTypeDescriptor_GALGAS_ipic_31__38_AbstractConditionTerminator.mSlotID,
                                               categoryMethod_ipic_31__38_AbstractConditionTerminator_exploreAccessibleBlocks) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_AbstractConditionTerminator_exploreAccessibleBlocks (defineCategoryMethod_ipic_31__38_AbstractConditionTerminator_exploreAccessibleBlocks, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                  Overriding category method '@ipic18ComputedBraTerminator exploreAccessibleBlocks'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ComputedBraTerminator_exploreAccessibleBlocks (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                      GALGAS_stringset & ioArgument_ioBlockToExploreSet,
                                                                                      GALGAS_stringset & ioArgument_ioExploredBlockSet,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedBraTerminator * object = (const cPtr_ipic_31__38_ComputedBraTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedBraTerminator) ;
  cEnumerator_lstringlist enumerator_1828 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_1828.hasCurrentObject ()) {
    const enumGalgasBool test_0 = ioArgument_ioExploredBlockSet.reader_hasKey (enumerator_1828.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 51)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 51)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioBlockToExploreSet.addAssign_operation (enumerator_1828.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 52)) ;
    }
    enumerator_1828.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ComputedBraTerminator_exploreAccessibleBlocks (void) {
  enterCategoryMethod_exploreAccessibleBlocks (kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator.mSlotID,
                                               categoryMethod_ipic_31__38_ComputedBraTerminator_exploreAccessibleBlocks) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedBraTerminator_exploreAccessibleBlocks (defineCategoryMethod_ipic_31__38_ComputedBraTerminator_exploreAccessibleBlocks, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@ipic18ComputedGotoTerminator exploreAccessibleBlocks'                  *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ComputedGotoTerminator_exploreAccessibleBlocks (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                       GALGAS_stringset & ioArgument_ioBlockToExploreSet,
                                                                                       GALGAS_stringset & ioArgument_ioExploredBlockSet,
                                                                                       C_Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ComputedGotoTerminator * object = (const cPtr_ipic_31__38_ComputedGotoTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ComputedGotoTerminator) ;
  cEnumerator_lstringlist enumerator_2199 (object->mAttribute_mTargetLabels, kEnumeration_up) ;
  while (enumerator_2199.hasCurrentObject ()) {
    const enumGalgasBool test_0 = ioArgument_ioExploredBlockSet.reader_hasKey (enumerator_2199.current_mValue (HERE).mAttribute_string COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 63)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 63)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioBlockToExploreSet.addAssign_operation (enumerator_2199.current_mValue (HERE).mAttribute_string  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 64)) ;
    }
    enumerator_2199.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ComputedGotoTerminator_exploreAccessibleBlocks (void) {
  enterCategoryMethod_exploreAccessibleBlocks (kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator.mSlotID,
                                               categoryMethod_ipic_31__38_ComputedGotoTerminator_exploreAccessibleBlocks) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedGotoTerminator_exploreAccessibleBlocks (defineCategoryMethod_ipic_31__38_ComputedGotoTerminator_exploreAccessibleBlocks, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@ipic18JumpTerminator exploreAccessibleBlocks'                      *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_JumpTerminator_exploreAccessibleBlocks (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                               GALGAS_stringset & ioArgument_ioBlockToExploreSet,
                                                                               GALGAS_stringset & ioArgument_ioExploredBlockSet,
                                                                               C_Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_JumpTerminator * object = (const cPtr_ipic_31__38_JumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_JumpTerminator) ;
  const enumGalgasBool test_0 = ioArgument_ioExploredBlockSet.reader_hasKey (object->mAttribute_mLabel.mAttribute_string COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 74)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 74)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioBlockToExploreSet.addAssign_operation (object->mAttribute_mLabel.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 75)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_JumpTerminator_exploreAccessibleBlocks (void) {
  enterCategoryMethod_exploreAccessibleBlocks (kTypeDescriptor_GALGAS_ipic_31__38_JumpTerminator.mSlotID,
                                               categoryMethod_ipic_31__38_JumpTerminator_exploreAccessibleBlocks) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_JumpTerminator_exploreAccessibleBlocks (defineCategoryMethod_ipic_31__38_JumpTerminator_exploreAccessibleBlocks, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@ipic18ConditionalJumpTerminator exploreAccessibleBlocks'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ConditionalJumpTerminator_exploreAccessibleBlocks (const cPtr_ipic_31__38_AbstractBlockTerminator * inObject,
                                                                                          GALGAS_stringset & ioArgument_ioBlockToExploreSet,
                                                                                          GALGAS_stringset & ioArgument_ioExploredBlockSet,
                                                                                          C_Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38_ConditionalJumpTerminator * object = (const cPtr_ipic_31__38_ConditionalJumpTerminator *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38_ConditionalJumpTerminator) ;
  const enumGalgasBool test_0 = ioArgument_ioExploredBlockSet.reader_hasKey (object->mAttribute_mTargetLabelWhenTrue.mAttribute_string COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 84)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 84)).boolEnum () ;
  if (kBoolTrue == test_0) {
    ioArgument_ioBlockToExploreSet.addAssign_operation (object->mAttribute_mTargetLabelWhenTrue.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 85)) ;
  }
  const enumGalgasBool test_1 = ioArgument_ioExploredBlockSet.reader_hasKey (object->mAttribute_mTargetLabelWhenFalse.mAttribute_string COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 87)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 87)).boolEnum () ;
  if (kBoolTrue == test_1) {
    ioArgument_ioBlockToExploreSet.addAssign_operation (object->mAttribute_mTargetLabelWhenFalse.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 88)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ConditionalJumpTerminator_exploreAccessibleBlocks (void) {
  enterCategoryMethod_exploreAccessibleBlocks (kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator.mSlotID,
                                               categoryMethod_ipic_31__38_ConditionalJumpTerminator_exploreAccessibleBlocks) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ConditionalJumpTerminator_exploreAccessibleBlocks (defineCategoryMethod_ipic_31__38_ConditionalJumpTerminator_exploreAccessibleBlocks, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                 Overriding category method '@ipic18ComputedRETLWTerminator exploreAccessibleBlocks'                 *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ComputedRETLWTerminator_exploreAccessibleBlocks (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                        GALGAS_stringset & /* ioArgument_ioBlockToExploreSet */,
                                                                                        GALGAS_stringset & /* ioArgument_ioExploredBlockSet */,
                                                                                        C_Compiler * /* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ComputedRETLWTerminator_exploreAccessibleBlocks (void) {
  enterCategoryMethod_exploreAccessibleBlocks (kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator.mSlotID,
                                               categoryMethod_ipic_31__38_ComputedRETLWTerminator_exploreAccessibleBlocks) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ComputedRETLWTerminator_exploreAccessibleBlocks (defineCategoryMethod_ipic_31__38_ComputedRETLWTerminator_exploreAccessibleBlocks, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@ipic18ReturnTerminator exploreAccessibleBlocks'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_ReturnTerminator_exploreAccessibleBlocks (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                 GALGAS_stringset & /* ioArgument_ioBlockToExploreSet */,
                                                                                 GALGAS_stringset & /* ioArgument_ioExploredBlockSet */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_ReturnTerminator_exploreAccessibleBlocks (void) {
  enterCategoryMethod_exploreAccessibleBlocks (kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator.mSlotID,
                                               categoryMethod_ipic_31__38_ReturnTerminator_exploreAccessibleBlocks) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_ReturnTerminator_exploreAccessibleBlocks (defineCategoryMethod_ipic_31__38_ReturnTerminator_exploreAccessibleBlocks, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@ipic18RetlwTerminator exploreAccessibleBlocks'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_RetlwTerminator_exploreAccessibleBlocks (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                GALGAS_stringset & /* ioArgument_ioBlockToExploreSet */,
                                                                                GALGAS_stringset & /* ioArgument_ioExploredBlockSet */,
                                                                                C_Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_RetlwTerminator_exploreAccessibleBlocks (void) {
  enterCategoryMethod_exploreAccessibleBlocks (kTypeDescriptor_GALGAS_ipic_31__38_RetlwTerminator.mSlotID,
                                               categoryMethod_ipic_31__38_RetlwTerminator_exploreAccessibleBlocks) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_RetlwTerminator_exploreAccessibleBlocks (defineCategoryMethod_ipic_31__38_RetlwTerminator_exploreAccessibleBlocks, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                    Overriding category method '@ipic18RetfieTerminator exploreAccessibleBlocks'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38_RetfieTerminator_exploreAccessibleBlocks (const cPtr_ipic_31__38_AbstractBlockTerminator * /* inObject */,
                                                                                 GALGAS_stringset & /* ioArgument_ioBlockToExploreSet */,
                                                                                 GALGAS_stringset & /* ioArgument_ioExploredBlockSet */,
                                                                                 C_Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38_RetfieTerminator_exploreAccessibleBlocks (void) {
  enterCategoryMethod_exploreAccessibleBlocks (kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator.mSlotID,
                                               categoryMethod_ipic_31__38_RetfieTerminator_exploreAccessibleBlocks) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38_RetfieTerminator_exploreAccessibleBlocks (defineCategoryMethod_ipic_31__38_RetfieTerminator_exploreAccessibleBlocks, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                     Overriding category method '@ipic18_intermediate_JSR buildCalledRoutineSet'                     *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_JSR_buildCalledRoutineSet (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                      GALGAS_stringset & ioArgument_ioRoutineCalledSet,
                                                                                      C_Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_JSR * object = (const cPtr_ipic_31__38__5F_intermediate_5F_JSR *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_JSR) ;
  ioArgument_ioRoutineCalledSet.addAssign_operation (object->mAttribute_mTargetLabel.mAttribute_string  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 134)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_JSR_buildCalledRoutineSet (void) {
  enterCategoryMethod_buildCalledRoutineSet (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_JSR.mSlotID,
                                             categoryMethod_ipic_31__38__5F_intermediate_5F_JSR_buildCalledRoutineSet) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_JSR_buildCalledRoutineSet (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_JSR_buildCalledRoutineSet, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//         Overriding category method '@ipic18_intermediate_instruction_computed_rcall buildCalledRoutineSet'          *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_buildCalledRoutineSet (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                                   GALGAS_stringset & ioArgument_ioRoutineCalledSet,
                                                                                                                   C_Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall * object = (const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall) ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_4827 (object->mAttribute_mTargetInstructions, kEnumeration_up) ;
  while (enumerator_4827.hasCurrentObject ()) {
    callCategoryMethod_buildCalledRoutineSet ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_4827.current_mInstruction (HERE).ptr (), ioArgument_ioRoutineCalledSet, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 142)) ;
    enumerator_4827.gotoNextObject () ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_buildCalledRoutineSet (void) {
  enterCategoryMethod_buildCalledRoutineSet (kTypeDescriptor_GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall.mSlotID,
                                             categoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_buildCalledRoutineSet) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_buildCalledRoutineSet (defineCategoryMethod_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall_buildCalledRoutineSet, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                Overriding category method '@ipic18_condition_skip_instruction buildCalledRoutineSet'                *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_buildCalledRoutineSet (const cPtr_ipic_31__38_SequentialInstruction * inObject,
                                                                                                   GALGAS_stringset & ioArgument_ioRoutineCalledSet,
                                                                                                   C_Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction * object = (const cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction *) inObject ;
  macroValidSharedObject (object, cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction) ;
  callCategoryMethod_buildCalledRoutineSet ((const cPtr_ipic_31__38_SequentialInstruction *) object->mAttribute_mEmbeddedInstruction.ptr (), ioArgument_ioRoutineCalledSet, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 150)) ;
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_buildCalledRoutineSet (void) {
  enterCategoryMethod_buildCalledRoutineSet (kTypeDescriptor_GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction.mSlotID,
                                             categoryMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_buildCalledRoutineSet) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_buildCalledRoutineSet (defineCategoryMethod_ipic_31__38__5F_condition_5F_skip_5F_instruction_buildCalledRoutineSet, NULL) ;

//---------------------------------------------------------------------------------------------------------------------*
//                                                                                                                     *
//                        Overriding category method '@byteDeclarationInRam handleDeclaration'                         *
//                                                                                                                     *
//---------------------------------------------------------------------------------------------------------------------*

static void categoryMethod_byteDeclarationInRam_handleDeclaration (const cPtr_declarationInRam * inObject,
                                                                   GALGAS_ramBankTable & ioArgument_ioRamBank,
                                                                   GALGAS_registerTable & ioArgument_ioRegisterTable,
                                                                   const GALGAS_lstring constinArgument_inCurrentRamBank,
                                                                   GALGAS_declaredByteMap & ioArgument_ioDeclaredByteMap,
                                                                   C_Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const cPtr_byteDeclarationInRam * object = (const cPtr_byteDeclarationInRam *) inObject ;
  macroValidSharedObject (object, cPtr_byteDeclarationInRam) ;
  GALGAS_uint var_lastAddressPlusOne ;
  GALGAS_uint var_firstFreeAddress ;
  GALGAS_uintlist var_mirrorOffsetList ;
  GALGAS_uint joker_981_0 ; // Joker input parameter
  ioArgument_ioRamBank.method_searchKey (constinArgument_inCurrentRamBank, joker_981_0, var_firstFreeAddress, var_lastAddressPlusOne, var_mirrorOffsetList, inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 25)) ;
  const enumGalgasBool test_0 = GALGAS_bool (kIsEqual, object->mAttribute_mSize.reader_uint (SOURCE_FILE ("ram_sections.galgas", 26)).objectCompare (GALGAS_uint ((uint32_t) 0U))).boolEnum () ;
  if (kBoolTrue == test_0) {
    GALGAS_location location_1 (object->mAttribute_mSize.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_1, GALGAS_string ("zero size is not allowed")  COMMA_SOURCE_FILE ("ram_sections.galgas", 27)) ;
  }
  GALGAS_uintlist var_addressList = GALGAS_uintlist::constructor_listWithValue (var_firstFreeAddress  COMMA_SOURCE_FILE ("ram_sections.galgas", 29)) ;
  cEnumerator_uintlist enumerator_1210 (var_mirrorOffsetList, kEnumeration_up) ;
  while (enumerator_1210.hasCurrentObject ()) {
    var_addressList.addAssign_operation (var_firstFreeAddress.add_operation (enumerator_1210.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 31))  COMMA_SOURCE_FILE ("ram_sections.galgas", 31)) ;
    enumerator_1210.gotoNextObject () ;
  }
  const enumGalgasBool test_2 = ioArgument_ioDeclaredByteMap.reader_hasKey (object->mAttribute_mName.mAttribute_string COMMA_SOURCE_FILE ("ram_sections.galgas", 33)).operator_not (SOURCE_FILE ("ram_sections.galgas", 33)).boolEnum () ;
  if (kBoolTrue == test_2) {
    {
    ioArgument_ioDeclaredByteMap.modifier_insertKey (object->mAttribute_mName, inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 34)) ;
    }
  }
  {
  ioArgument_ioRegisterTable.modifier_insertKey (object->mAttribute_mName, var_addressList, object->mAttribute_mSize.reader_uint (SOURCE_FILE ("ram_sections.galgas", 36)), object->mAttribute_mBitSliceTable, object->mAttribute_mBitDefinitionString, inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 36)) ;
  }
  var_firstFreeAddress = var_firstFreeAddress.add_operation (object->mAttribute_mSize.reader_uint (SOURCE_FILE ("ram_sections.galgas", 37)), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 37)) ;
  {
  ioArgument_ioRamBank.modifier_setMFirstFreeAddressForKey (var_firstFreeAddress, constinArgument_inCurrentRamBank.reader_string (SOURCE_FILE ("ram_sections.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 38)) ;
  }
  const enumGalgasBool test_3 = GALGAS_bool (kIsStrictSup, var_firstFreeAddress.objectCompare (var_lastAddressPlusOne)).boolEnum () ;
  if (kBoolTrue == test_3) {
    GALGAS_location location_4 (object->mAttribute_mName.reader_location (HERE)) ; // Implicit use of 'location' reader
    inCompiler->emitSemanticError (location_4, GALGAS_string ("overflow in '").add_operation (constinArgument_inCurrentRamBank.reader_string (SOURCE_FILE ("ram_sections.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 40)).add_operation (GALGAS_string ("' ram bank for '"), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 40)).add_operation (object->mAttribute_mName.reader_string (SOURCE_FILE ("ram_sections.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 40)).add_operation (GALGAS_string ("' declaration"), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 40))  COMMA_SOURCE_FILE ("ram_sections.galgas", 40)) ;
  }
}
//---------------------------------------------------------------------------------------------------------------------*

static void defineCategoryMethod_byteDeclarationInRam_handleDeclaration (void) {
  enterCategoryMethod_handleDeclaration (kTypeDescriptor_GALGAS_byteDeclarationInRam.mSlotID,
                                         categoryMethod_byteDeclarationInRam_handleDeclaration) ;
}

//---------------------------------------------------------------------------------------------------------------------*

C_PrologueEpilogue gMethod_byteDeclarationInRam_handleDeclaration (defineCategoryMethod_byteDeclarationInRam_handleDeclaration, NULL) ;

