#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-11.h"

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_do_while build_baseline_intermediate_instructionList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_do_5F_while::method_build_5F_baseline_5F_intermediate_5F_instructionList (const GALGAS_uint constinArgument_inCurrentPage,
                                                                                                               const GALGAS_baselineRoutineMap constinArgument_inRoutineMap,
                                                                                                               const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                               const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                               GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                               GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                                                                               GALGAS_bool & ioArgument_ioContinuesInSequence,
                                                                                                               const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                                                               const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                               GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_labelInstructionBegin_25633 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 693)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 693)) ;
  ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 693)) ;
  const GALGAS_baseline_5F_instruction_5F_do_5F_while temp_0 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::class_func_new (GALGAS_lstring::class_func_new (var_labelInstructionBegin_25633, temp_0.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 695))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 695))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 695)) ;
  {
  const GALGAS_baseline_5F_instruction_5F_do_5F_while temp_1 = this ;
  routine_handleBaselineInstructionList_3F__3F__3F__3F__3F__26__26__26__21__3F__3F__26_ (constinArgument_inCurrentPage, temp_1.readProperty_mRepeatedInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 697)) ;
  }
  const GALGAS_baseline_5F_instruction_5F_do_5F_while temp_2 = this ;
  cEnumerator_baseline_5F_partList enumerator_26293 (temp_2.readProperty_mWhilePartList (), EnumerationOrder::up) ;
  while (enumerator_26293.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (ComparisonKind::equal, enumerator_26293.current_mInstructionList (HERE).getter_count (SOURCE_FILE ("baseline_semantic_analysis.galgas", 713)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_baseline_5F_instruction_5F_do_5F_while temp_4 = this ;
        callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((cPtr_baseline_5F_conditionExpression *) enumerator_26293.current_mCondition (HERE).ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (false), temp_4.readProperty_mInstructionLocation (), var_labelInstructionBegin_25633, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 714)) ;
      }
    }
    if (kBoolFalse == test_3) {
      GALGAS_string var_nextBranchLabel_26704 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 726)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 726)) ;
      ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 726)) ;
      const GALGAS_baseline_5F_instruction_5F_do_5F_while temp_5 = this ;
      callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((cPtr_baseline_5F_conditionExpression *) enumerator_26293.current_mCondition (HERE).ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), temp_5.readProperty_mInstructionLocation (), var_nextBranchLabel_26704, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 727)) ;
      {
      routine_handleBaselineInstructionList_3F__3F__3F__3F__3F__26__26__26__21__3F__3F__26_ (constinArgument_inCurrentPage, enumerator_26293.current_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 738)) ;
      }
      const GALGAS_baseline_5F_instruction_5F_do_5F_while temp_6 = this ;
      const GALGAS_baseline_5F_instruction_5F_do_5F_while temp_7 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_GOTO::class_func_new (temp_6.readProperty_mInstructionLocation (), GALGAS_lstring::class_func_new (var_labelInstructionBegin_25633, temp_7.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 754))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 752))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 752)) ;
      const GALGAS_baseline_5F_instruction_5F_do_5F_while temp_8 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::class_func_new (GALGAS_lstring::class_func_new (var_nextBranchLabel_26704, temp_8.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 755))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 755))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 755)) ;
    }
    enumerator_26293.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_instruction_structured_if build_baseline_intermediate_instructionList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_structured_5F_if::method_build_5F_baseline_5F_intermediate_5F_instructionList (const GALGAS_uint constinArgument_inCurrentPage,
                                                                                                                    const GALGAS_baselineRoutineMap constinArgument_inRoutineMap,
                                                                                                                    const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                                    const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                                    GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                                    GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                    GALGAS_bool & ioArgument_ioContinuesInSequence,
                                                                                                                    const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                                                                    const GALGAS_bool constinArgument_inLastInstructionShouldReturn,
                                                                                                                    GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_label_5F_nextCondition_28415 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 775)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 775)) ;
  ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 775)) ;
  GALGAS_string var_label_5F_endOfIfinstruction_28510 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 776)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 776)) ;
  ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 776)) ;
  const GALGAS_baseline_5F_instruction_5F_structured_5F_if temp_0 = this ;
  const GALGAS_baseline_5F_instruction_5F_structured_5F_if temp_1 = this ;
  callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((cPtr_baseline_5F_conditionExpression *) temp_0.readProperty_mIfCondition ().ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), temp_1.readProperty_mInstructionLocation (), var_label_5F_nextCondition_28415, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 778)) ;
  GALGAS_bool var_thenContinuesInSequence_29156 ;
  {
  const GALGAS_baseline_5F_instruction_5F_structured_5F_if temp_2 = this ;
  routine_handleBaselineInstructionList_3F__3F__3F__3F__3F__26__26__26__21__3F__3F__26_ (constinArgument_inCurrentPage, temp_2.readProperty_mThenInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_thenContinuesInSequence_29156, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 790)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_baseline_5F_instruction_5F_structured_5F_if temp_4 = this ;
    test_3 = GALGAS_bool (ComparisonKind::greaterThan, temp_4.readProperty_mElseInstructionList ().getter_count (SOURCE_FILE ("baseline_semantic_analysis.galgas", 805)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (constinArgument_inLastInstructionShouldReturn.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 805)) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 805)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_baseline_5F_instruction_5F_structured_5F_if temp_5 = this ;
      const GALGAS_baseline_5F_instruction_5F_structured_5F_if temp_6 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_GOTO::class_func_new (temp_5.readProperty_mInstructionLocation (), GALGAS_lstring::class_func_new (var_label_5F_endOfIfinstruction_28510, temp_6.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 808))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 806))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 806)) ;
    }
  }
  const GALGAS_baseline_5F_instruction_5F_structured_5F_if temp_7 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::class_func_new (GALGAS_lstring::class_func_new (var_label_5F_nextCondition_28415, temp_7.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 810))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 810))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 810)) ;
  GALGAS_bool var_elseContinuesInSequence_29941 ;
  {
  const GALGAS_baseline_5F_instruction_5F_structured_5F_if temp_8 = this ;
  routine_handleBaselineInstructionList_3F__3F__3F__3F__3F__26__26__26__21__3F__3F__26_ (constinArgument_inCurrentPage, temp_8.readProperty_mElseInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_elseContinuesInSequence_29941, constinArgument_inRoutineKind, constinArgument_inLastInstructionShouldReturn, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 811)) ;
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GALGAS_baseline_5F_instruction_5F_structured_5F_if temp_10 = this ;
    test_9 = GALGAS_bool (ComparisonKind::greaterThan, temp_10.readProperty_mElseInstructionList ().getter_count (SOURCE_FILE ("baseline_semantic_analysis.galgas", 825)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (constinArgument_inLastInstructionShouldReturn.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 825)) COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 825)).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_baseline_5F_instruction_5F_structured_5F_if temp_11 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::class_func_new (GALGAS_lstring::class_func_new (var_label_5F_endOfIfinstruction_28510, temp_11.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 826))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 826))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 826)) ;
    }
  }
  ioArgument_ioContinuesInSequence = var_thenContinuesInSequence_29156.operator_or (var_elseContinuesInSequence_29941 COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 829)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_incDecRegisterInCondition build_intermediate_condition_instructions'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_incDecRegisterInCondition::method_build_5F_intermediate_5F_condition_5F_instructions (const GALGAS_uint /* constinArgument_inCurrentPage */,
                                                                                                            const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                            const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                            GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                            const GALGAS_bool constinArgument_inComplementaryBranch,
                                                                                                            const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                            const GALGAS_string constinArgument_inTargetLabel,
                                                                                                            GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                            GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_31841 ;
  GALGAS_bitSliceTable var_bitSliceTable_31904 ;
  const GALGAS_baseline_5F_incDecRegisterInCondition temp_0 = this ;
  callExtensionMethod_resolveBaselineAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_31841, var_bitSliceTable_31904, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 861)) ;
  const GALGAS_baseline_5F_incDecRegisterInCondition temp_1 = this ;
  const GALGAS_baseline_5F_incDecRegisterInCondition temp_2 = this ;
  const GALGAS_baseline_5F_incDecRegisterInCondition temp_3 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition::class_func_new (constinArgument_inInstructionLocation, var_intermediateRegisterDescription_31841, constinArgument_inTargetLabel, temp_1.readProperty_mIncrement (), temp_2.readProperty_m_5F_W_5F_isDestination (), temp_3.readProperty_mBranchIfZero ().operator_xor (constinArgument_inComplementaryBranch COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 875))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 869))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 869)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_negateCondition build_intermediate_condition_instructions'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_negateCondition::method_build_5F_intermediate_5F_condition_5F_instructions (const GALGAS_uint constinArgument_inCurrentPage,
                                                                                                  const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                  const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                  GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                  const GALGAS_bool constinArgument_inComplementaryBranch,
                                                                                                  const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                  const GALGAS_string constinArgument_inTargetLabel,
                                                                                                  GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                  GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_negateCondition temp_0 = this ;
  callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((cPtr_baseline_5F_conditionExpression *) temp_0.readProperty_mCondition ().ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, constinArgument_inComplementaryBranch.operator_not (SOURCE_FILE ("baseline_semantic_analysis.galgas", 895)), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 890)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_andCondition build_intermediate_condition_instructions'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_andCondition::method_build_5F_intermediate_5F_condition_5F_instructions (const GALGAS_uint constinArgument_inCurrentPage,
                                                                                               const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                               const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                               GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                               const GALGAS_bool constinArgument_inComplementaryBranch,
                                                                                               const GALGAS_location constinArgument_inInstructionLocation,
                                                                                               const GALGAS_string constinArgument_inTargetLabel,
                                                                                               GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                               GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inComplementaryBranch.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_baseline_5F_andCondition temp_1 = this ;
      callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((cPtr_baseline_5F_conditionExpression *) temp_1.readProperty_mLeftExpression ().ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 916)) ;
      const GALGAS_baseline_5F_andCondition temp_2 = this ;
      callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((cPtr_baseline_5F_conditionExpression *) temp_2.readProperty_mRightExpression ().ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 927)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_string var_label_30__34076 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("baseline_semantic_analysis.galgas", 939)), inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 939)) ;
    ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 939)) ;
    const GALGAS_baseline_5F_andCondition temp_3 = this ;
    callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((cPtr_baseline_5F_conditionExpression *) temp_3.readProperty_mLeftExpression ().ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), constinArgument_inInstructionLocation, var_label_30__34076, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 940)) ;
    const GALGAS_baseline_5F_andCondition temp_4 = this ;
    callExtensionMethod_build_5F_intermediate_5F_condition_5F_instructions ((cPtr_baseline_5F_conditionExpression *) temp_4.readProperty_mRightExpression ().ptr (), constinArgument_inCurrentPage, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (false), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 951)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::class_func_new (GALGAS_lstring::class_func_new (var_label_30__34076, constinArgument_inInstructionLocation, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 962))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 962))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 962)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_bitTest_in_structured_if_condition build_intermediate_condition_instructions'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::method_build_5F_intermediate_5F_condition_5F_instructions (const GALGAS_uint /* constinArgument_inCurrentPage */,
                                                                                                                                 const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                                                 const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                                                 GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                                                 const GALGAS_bool constinArgument_inComplementaryBranch,
                                                                                                                                 const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                                                 const GALGAS_string constinArgument_inTargetLabel,
                                                                                                                                 GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                                 GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                                 Compiler * inCompiler
                                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_baseline_5F_intermediate_5F_registerExpression var_intermediateRegisterDescription_35495 ;
  GALGAS_bitSliceTable var_bitSliceTable_35551 ;
  const GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition temp_0 = this ;
  callExtensionMethod_resolveBaselineAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_intermediateRegisterDescription_35495, var_bitSliceTable_35551, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 979)) ;
  GALGAS_uint var_bitNumber_35713 ;
  const GALGAS_baseline_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition temp_1 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_35551, var_bitNumber_35713, inCompiler COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 986)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::class_func_new (constinArgument_inInstructionLocation, constinArgument_inComplementaryBranch, var_intermediateRegisterDescription_35495, var_bitNumber_35713  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 993))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 993)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_baseline_5F_intermediate_5F_GOTO::class_func_new (constinArgument_inInstructionLocation, GALGAS_lstring::class_func_new (constinArgument_inTargetLabel, constinArgument_inInstructionLocation, inCompiler  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 1001))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 999))  COMMA_SOURCE_FILE ("baseline_semantic_analysis.galgas", 999)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_NULL print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_NULL::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("-"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 10)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_pseudo_PAGE print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("ORG ").add_operation (temp_0.readProperty_mPage ().multiply_operation (GALGAS_uint (uint32_t (512U)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 16)).getter_hexString (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 16)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 16)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 16)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_pseudo_BEGIN_ROUTINE print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("BEGIN OF ROUTINE ").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 22)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 22)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_pseudo_END_ROUTINE print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE temp_0 = this ;
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE temp_1 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("END OF ROUTINE ").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 28)).add_operation (GALGAS_string (" IN PAGE "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 28)).add_operation (temp_1.readProperty_mPage ().getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 28)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 28)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 28)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_pseudo_LABEL print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("LABEL ").add_operation (temp_0.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 34)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 34)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_instruction_FD print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD temp_0 = this ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD temp_1 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 40)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 40)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 40)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 40)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD temp_3 = this ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 42)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_instruction_F print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_F::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_F temp_0 = this ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_F temp_1 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 49)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 49)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 49)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 49)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_instruction_FB print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB temp_0 = this ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB temp_1 = this ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB temp_2 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 55)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 55)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 55)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 55)).add_operation (temp_2.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 55)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 55)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_instruction_BitTestSkip print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("BTFSS"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 62)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("BTFSC"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 64)) ;
  }
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip temp_2 = this ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip temp_3 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" ").add_operation (temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 66)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 66)).add_operation (temp_3.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 66)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 66)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_GOTO print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_GOTO::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_intermediate_5F_GOTO temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("GOTO ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 72)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 72)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_JUMP print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_JUMP::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_intermediate_5F_JUMP temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("JUMP ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 78)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 78)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_CALL print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_CALL::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_intermediate_5F_CALL temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("CALL ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 85)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 85)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_JSR print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_JSR::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_intermediate_5F_JSR temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("JSR ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 92)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 92)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_instruction_literalOperation print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = this ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation temp_1 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 98)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 98)).add_operation (temp_1.readProperty_mLiteralValue ().getter_hexString (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 98)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_instruction_MNOP print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("MNOP ").add_operation (temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 104)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 104)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 104)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_incDecRegisterInCondition print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("JUMP "), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 110)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_1 = this ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("INCF "), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 112)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("DECF "), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 114)) ;
  }
  const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_2 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 116)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_4 = this ;
    test_3 = temp_4.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 118)) ;
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_6 = this ;
    test_5 = temp_6.readProperty_mBranchIfZero ().boolEnum () ;
    if (kBoolTrue == test_5) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" Z"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 121)) ;
    }
  }
  if (kBoolFalse == test_5) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" NZ"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 123)) ;
  }
  const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_7 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" ").add_operation (temp_7.readProperty_mTargetLabel (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 125)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 125)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_WO_OPERAND print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 131)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 131)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_TRIS print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_TRIS::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_intermediate_5F_TRIS temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("TRIS ").add_operation (temp_0.readProperty_mOperand ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 137)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 137)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_NULL length'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_baseline_5F_intermediate_5F_NULL::getter_length (Compiler */* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint (uint32_t (0U)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_pseudo_PAGE length'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::getter_length (Compiler */* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint (uint32_t (0U)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_pseudo_BEGIN_ROUTINE length'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::getter_length (Compiler */* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint (uint32_t (0U)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_pseudo_END_ROUTINE length'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::getter_length (Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint (uint32_t (0U)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_pseudo_LABEL length'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::getter_length (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint (uint32_t (0U)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_actualInstruction length'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_baseline_5F_intermediate_5F_actualInstruction::getter_length (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint (uint32_t (1U)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_JUMP length'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_baseline_5F_intermediate_5F_JUMP::getter_length (Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outLength ; // Returned variable
  const GALGAS_baseline_5F_intermediate_5F_JUMP temp_0 = this ;
  const GALGAS_baseline_5F_intermediate_5F_JUMP temp_1 = this ;
  result_outLength = GALGAS_uint (uint32_t (1U)).add_operation (temp_0.readProperty_mCurrentPage ().operator_xor (temp_1.readProperty_mTargetPage () COMMA_SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 46)).getter_oneBitCount (SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 46)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_JSR length'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_baseline_5F_intermediate_5F_JSR::getter_length (Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outLength ; // Returned variable
  const GALGAS_baseline_5F_intermediate_5F_JSR temp_0 = this ;
  const GALGAS_baseline_5F_intermediate_5F_JSR temp_1 = this ;
  result_outLength = GALGAS_uint (uint32_t (1U)).add_operation (GALGAS_uint (uint32_t (2U)).multiply_operation (temp_0.readProperty_mCurrentPage ().operator_xor (temp_1.readProperty_mTargetPage () COMMA_SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 52)).getter_oneBitCount (SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_length.galgas", 52)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_instruction_MNOP length'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::getter_length (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outLength ; // Returned variable
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP temp_0 = this ;
  result_outLength = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint () ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_incDecRegisterInCondition length'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::getter_length (Compiler */* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outLength ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_1 = this ;
    test_0 = temp_1.readProperty_mBranchIfZero ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outLength = GALGAS_uint (uint32_t (3U)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outLength = GALGAS_uint (uint32_t (2U)) ;
  }
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_pseudo_PAGE setCurrentAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::method_setCurrentAddress (GALGAS_uint & ioArgument_ioCurrentWordAdress,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE temp_0 = this ;
  ioArgument_ioCurrentWordAdress = temp_0.readProperty_mPage ().multiply_operation (GALGAS_uint (uint32_t (512U)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 27)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_pseudo_LABEL isLABEL'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::getter_isLABEL (Compiler */* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outIsLABEL ; // Returned variable
  result_outIsLABEL = GALGAS_bool (true) ;
//---
  return result_outIsLABEL ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_pseudo_PAGE isLABEL'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::getter_isLABEL (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outIsLABEL ; // Returned variable
  result_outIsLABEL = GALGAS_bool (true) ;
//---
  return result_outIsLABEL ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_pseudo_END_ROUTINE isLABEL'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::getter_isLABEL (Compiler */* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outIsLABEL ; // Returned variable
  result_outIsLABEL = GALGAS_bool (true) ;
//---
  return result_outIsLABEL ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_NULL isNULL'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_baseline_5F_intermediate_5F_NULL::getter_isNULL (Compiler */* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outIsNULL ; // Returned variable
  result_outIsNULL = GALGAS_bool (true) ;
//---
  return result_outIsNULL ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_instruction_BitTestSkip isSkippingInstruction'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::getter_isSkippingInstruction (Compiler */* inCompiler */
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outIsSkipping ; // Returned variable
  result_outIsSkipping = GALGAS_bool (true) ;
//---
  return result_outIsSkipping ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_GOTO nextInstructionIsReachable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_baseline_5F_intermediate_5F_GOTO::getter_nextInstructionIsReachable (Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (false) ;
//---
  return result_outIsReachable ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_JUMP nextInstructionIsReachable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_baseline_5F_intermediate_5F_JUMP::getter_nextInstructionIsReachable (Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (false) ;
//---
  return result_outIsReachable ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_pseudo_END_ROUTINE nextInstructionIsReachable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::getter_nextInstructionIsReachable (Compiler */* inCompiler */
                                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (false) ;
//---
  return result_outIsReachable ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_intermediate_instruction_literalOperation nextInstructionIsReachable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::getter_nextInstructionIsReachable (Compiler */* inCompiler */
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outIsReachable ; // Returned variable
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = this ;
  result_outIsReachable = GALGAS_bool (ComparisonKind::notEqual, temp_0.readProperty_mInstruction ().objectCompare (GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_RETLW (SOURCE_FILE ("baseline_optimizations.galgas", 126)))) ;
//---
  return result_outIsReachable ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_GOTO enterReferencedLabel'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_GOTO::method_enterReferencedLabel (GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_intermediate_5F_GOTO temp_0 = this ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 143)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_JUMP enterReferencedLabel'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_JUMP::method_enterReferencedLabel (GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_intermediate_5F_JUMP temp_0 = this ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 150)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_CALL enterReferencedLabel'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_CALL::method_enterReferencedLabel (GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_intermediate_5F_CALL temp_0 = this ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 157)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_JSR enterReferencedLabel'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_JSR::method_enterReferencedLabel (GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_intermediate_5F_JSR temp_0 = this ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 164)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_incDecRegisterInCondition enterReferencedLabel'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::method_enterReferencedLabel (GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                              Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_0 = this ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (temp_0.readProperty_mTargetLabel ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 171)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_pseudo_LABEL defineLabel'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::method_defineLabel (GALGAS_baselineSymbolTableForOptimizations & ioArgument_ioRoutineSymbolTable,
                                                                           const GALGAS_uint constinArgument_inLineIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  ioArgument_ioRoutineSymbolTable.setter_insertKey (temp_0.readProperty_mLabel (), constinArgument_inLineIndex, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 191)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'findBaselineFirstInstructionFromAddress??!'
//
//--------------------------------------------------------------------------------------------------

void routine_findBaselineFirstInstructionFromAddress_3F__3F__21_ (const GALGAS_uint constinArgument_inLineIndex,
                                                                  const GALGAS_baseline_5F_intermediate_5F_instructionList constinArgument_inGeneratedInstructionList,
                                                                  GALGAS_baseline_5F_intermediate_5F_instruction & outArgument_outFirstInstruction,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFirstInstruction.drop () ; // Release 'out' argument
  GALGAS_uint var_currentAddress_7916 = constinArgument_inLineIndex ;
  outArgument_outFirstInstruction = GALGAS_baseline_5F_intermediate_5F_NULL::class_func_new (SOURCE_FILE ("baseline_optimizations.galgas", 203)) ;
  GALGAS_bool var_found_8082 = GALGAS_bool (false) ;
  if (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("baseline_optimizations.galgas", 205)).isValid ()) {
    uint32_t variant_8098 = constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("baseline_optimizations.galgas", 205)).uintValue () ;
    bool loop_8098 = true ;
    while (loop_8098) {
      loop_8098 = GALGAS_bool (ComparisonKind::lowerThan, var_currentAddress_7916.objectCompare (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("baseline_optimizations.galgas", 206)))).operator_and (var_found_8082.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 206)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 206)).isValid () ;
      if (loop_8098) {
        loop_8098 = GALGAS_bool (ComparisonKind::lowerThan, var_currentAddress_7916.objectCompare (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("baseline_optimizations.galgas", 206)))).operator_and (var_found_8082.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 206)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 206)).boolValue () ;
      }
      if (loop_8098 && (0 == variant_8098)) {
        loop_8098 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_optimizations.galgas", 205)) ;
      }
      if (loop_8098) {
        variant_8098 -- ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          GALGAS_baseline_5F_intermediate_5F_actualInstruction var_instr_8232 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_actualInstruction *> (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7916, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 208)).ptr ())) ;
          if (nullptr == var_instr_8232.ptr ()) {
            test_0 = kBoolFalse ;
          }
          if (kBoolTrue == test_0) {
            outArgument_outFirstInstruction = var_instr_8232 ;
            var_found_8082 = GALGAS_bool (true) ;
          }
        }
        if (kBoolFalse == test_0) {
          var_currentAddress_7916.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 214)) ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'findBaselineFirstInstructionOrLabelFromAddress??!!'
//
//--------------------------------------------------------------------------------------------------

void routine_findBaselineFirstInstructionOrLabelFromAddress_3F__3F__21__21_ (const GALGAS_uint constinArgument_inLineIndex,
                                                                             const GALGAS_baseline_5F_intermediate_5F_instructionList constinArgument_inGeneratedInstructionList,
                                                                             GALGAS_baseline_5F_intermediate_5F_instruction & outArgument_outFirstInstruction,
                                                                             GALGAS_stringset & outArgument_outReachedLabelSet,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFirstInstruction.drop () ; // Release 'out' argument
  outArgument_outReachedLabelSet.drop () ; // Release 'out' argument
  outArgument_outReachedLabelSet = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("baseline_optimizations.galgas", 226)) ;
  GALGAS_uint var_currentAddress_8991 = constinArgument_inLineIndex ;
  outArgument_outFirstInstruction = GALGAS_baseline_5F_intermediate_5F_NULL::class_func_new (SOURCE_FILE ("baseline_optimizations.galgas", 230)) ;
  GALGAS_bool var_found_9157 = GALGAS_bool (false) ;
  if (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("baseline_optimizations.galgas", 232)).isValid ()) {
    uint32_t variant_9173 = constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("baseline_optimizations.galgas", 232)).uintValue () ;
    bool loop_9173 = true ;
    while (loop_9173) {
      loop_9173 = GALGAS_bool (ComparisonKind::lowerThan, var_currentAddress_8991.objectCompare (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("baseline_optimizations.galgas", 233)))).operator_and (var_found_9157.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 233)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 233)).isValid () ;
      if (loop_9173) {
        loop_9173 = GALGAS_bool (ComparisonKind::lowerThan, var_currentAddress_8991.objectCompare (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("baseline_optimizations.galgas", 233)))).operator_and (var_found_9157.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 233)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 233)).boolValue () ;
      }
      if (loop_9173 && (0 == variant_9173)) {
        loop_9173 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_optimizations.galgas", 232)) ;
      }
      if (loop_9173) {
        variant_9173 -- ;
        GALGAS_baseline_5F_intermediate_5F_instruction var_instruction_9304 = constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_8991, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 235)) ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          GALGAS_baseline_5F_intermediate_5F_actualInstruction var_instr_9394 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_actualInstruction *> (var_instruction_9304.ptr ())) ;
          if (nullptr == var_instr_9394.ptr ()) {
            test_0 = kBoolFalse ;
          }
          if (kBoolTrue == test_0) {
            outArgument_outFirstInstruction = var_instr_9394 ;
            var_found_9157 = GALGAS_bool (true) ;
          }
        }
        if (kBoolFalse == test_0) {
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE var_instr_9667 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE *> (var_instruction_9304.ptr ())) ;
            if (nullptr == var_instr_9667.ptr ()) {
              test_1 = kBoolFalse ;
            }
            if (kBoolTrue == test_1) {
              outArgument_outFirstInstruction = var_instr_9667 ;
              var_found_9157 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_1) {
            enumGalgasBool test_2 = kBoolTrue ;
            if (kBoolTrue == test_2) {
              GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL var_instr_9853 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL *> (var_instruction_9304.ptr ())) ;
              if (nullptr == var_instr_9853.ptr ()) {
                test_2 = kBoolFalse ;
              }
              if (kBoolTrue == test_2) {
                outArgument_outFirstInstruction = var_instr_9853 ;
                outArgument_outReachedLabelSet.addAssign_operation (var_instr_9853.readProperty_mLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 248)) ;
                var_currentAddress_8991.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 249)) ;
              }
            }
            if (kBoolFalse == test_2) {
              var_currentAddress_8991.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 251)) ;
            }
          }
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'perform_baseline_optimizations&&'
//
//--------------------------------------------------------------------------------------------------

void routine_perform_5F_baseline_5F_optimizations_26__26_ (GALGAS_baseline_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 533)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 533)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 533)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("CODE OPTIMIZATION").getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (117U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 534)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 534)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 534)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 534)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 535)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 535)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 535)) ;
  GALGAS_baselineSymbolTableForOptimizations var_symbolTable_21908 = GALGAS_baselineSymbolTableForOptimizations::class_func_emptyMap (SOURCE_FILE ("baseline_optimizations.galgas", 537)) ;
  cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_21976 (ioArgument_ioGeneratedInstructionList, EnumerationOrder::up) ;
  GALGAS_uint index_21971 (uint32_t (0)) ;
  while (enumerator_21976.hasCurrentObject ()) {
    callExtensionMethod_defineLabel ((cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_21976.current_mInstruction (HERE).ptr (), var_symbolTable_21908, index_21971, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 539)) ;
    enumerator_21976.gotoNextObject () ;
    index_21971.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 538)) ;
  }
  GALGAS_bool var_optimizationsDone_22167 = GALGAS_bool (true) ;
  GALGAS_uint var_iteration_22204 = GALGAS_uint (uint32_t (0U)) ;
  if (ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("baseline_optimizations.galgas", 544)).isValid ()) {
    uint32_t variant_22220 = ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("baseline_optimizations.galgas", 544)).uintValue () ;
    bool loop_22220 = true ;
    while (loop_22220) {
      loop_22220 = var_optimizationsDone_22167.isValid () ;
      if (loop_22220) {
        loop_22220 = var_optimizationsDone_22167.boolValue () ;
      }
      if (loop_22220 && (0 == variant_22220)) {
        loop_22220 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_optimizations.galgas", 544)) ;
      }
      if (loop_22220) {
        variant_22220 -- ;
        var_optimizationsDone_22167 = GALGAS_bool (false) ;
        var_iteration_22204.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 548)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Pass ").add_operation (var_iteration_22204.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 549)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 549)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 549)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 549)) ;
        cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_22440 (ioArgument_ioGeneratedInstructionList, EnumerationOrder::up) ;
        GALGAS_uint index_22435 (uint32_t (0)) ;
        while (enumerator_22440.hasCurrentObject ()) {
          enumGalgasBool test_0 = kBoolTrue ;
          if (kBoolTrue == test_0) {
            GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE var_inst_22506 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *> (enumerator_22440.current_mInstruction (HERE).ptr ())) ;
            if (nullptr == var_inst_22506.ptr ()) {
              test_0 = kBoolFalse ;
            }
            if (kBoolTrue == test_0) {
              callExtensionMethod_optimizeBEGIN_5F_ROUTINE ((cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE *) var_inst_22506.ptr (), index_22435, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22167, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 555)) ;
            }
          }
          if (kBoolFalse == test_0) {
            enumGalgasBool test_1 = kBoolTrue ;
            if (kBoolTrue == test_1) {
              GALGAS_baseline_5F_intermediate_5F_GOTO var_inst_22795 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_GOTO *> (enumerator_22440.current_mInstruction (HERE).ptr ())) ;
              if (nullptr == var_inst_22795.ptr ()) {
                test_1 = kBoolFalse ;
              }
              if (kBoolTrue == test_1) {
                callExtensionMethod_optimizeGOTO ((cPtr_baseline_5F_intermediate_5F_GOTO *) var_inst_22795.ptr (), var_symbolTable_21908, index_22435, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22167, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 558)) ;
              }
            }
            if (kBoolFalse == test_1) {
              enumGalgasBool test_2 = kBoolTrue ;
              if (kBoolTrue == test_2) {
                GALGAS_baseline_5F_intermediate_5F_JUMP var_inst_23032 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_JUMP *> (enumerator_22440.current_mInstruction (HERE).ptr ())) ;
                if (nullptr == var_inst_23032.ptr ()) {
                  test_2 = kBoolFalse ;
                }
                if (kBoolTrue == test_2) {
                  callExtensionMethod_optimizeJUMP ((cPtr_baseline_5F_intermediate_5F_JUMP *) var_inst_23032.ptr (), var_symbolTable_21908, index_22435, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22167, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 561)) ;
                }
              }
              if (kBoolFalse == test_2) {
                enumGalgasBool test_3 = kBoolTrue ;
                if (kBoolTrue == test_3) {
                  GALGAS_baseline_5F_intermediate_5F_CALL var_inst_23269 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_CALL *> (enumerator_22440.current_mInstruction (HERE).ptr ())) ;
                  if (nullptr == var_inst_23269.ptr ()) {
                    test_3 = kBoolFalse ;
                  }
                  if (kBoolTrue == test_3) {
                    callExtensionMethod_optimizeCALL ((cPtr_baseline_5F_intermediate_5F_CALL *) var_inst_23269.ptr (), var_symbolTable_21908, index_22435, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22167, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 564)) ;
                  }
                }
                if (kBoolFalse == test_3) {
                  enumGalgasBool test_4 = kBoolTrue ;
                  if (kBoolTrue == test_4) {
                    GALGAS_baseline_5F_intermediate_5F_JSR var_inst_23506 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_JSR *> (enumerator_22440.current_mInstruction (HERE).ptr ())) ;
                    if (nullptr == var_inst_23506.ptr ()) {
                      test_4 = kBoolFalse ;
                    }
                    if (kBoolTrue == test_4) {
                      callExtensionMethod_optimizeJSR ((cPtr_baseline_5F_intermediate_5F_JSR *) var_inst_23506.ptr (), var_symbolTable_21908, index_22435, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22167, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 567)) ;
                    }
                  }
                  if (kBoolFalse == test_4) {
                    enumGalgasBool test_5 = kBoolTrue ;
                    if (kBoolTrue == test_5) {
                      GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition var_inst_23740 (dynamic_cast <const cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *> (enumerator_22440.current_mInstruction (HERE).ptr ())) ;
                      if (nullptr == var_inst_23740.ptr ()) {
                        test_5 = kBoolFalse ;
                      }
                      if (kBoolTrue == test_5) {
                        callExtensionMethod_optimizeTestDecInc ((cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition *) var_inst_23740.ptr (), var_symbolTable_21908, index_22435, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_22167, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 570)) ;
                      }
                    }
                  }
                }
              }
            }
          }
          enumerator_22440.gotoNextObject () ;
          index_22435.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 551)) ;
        }
        GALGAS_stringset var_referencedLabels_24083 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("baseline_optimizations.galgas", 575)) ;
        cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_24132 (ioArgument_ioGeneratedInstructionList, EnumerationOrder::up) ;
        while (enumerator_24132.hasCurrentObject ()) {
          callExtensionMethod_enterReferencedLabel ((cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_24132.current_mInstruction (HERE).ptr (), var_referencedLabels_24083, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 577)) ;
          enumerator_24132.gotoNextObject () ;
        }
        cEnumerator_baselineSymbolTableForOptimizations enumerator_24263 (var_symbolTable_21908, EnumerationOrder::up) ;
        while (enumerator_24263.hasCurrentObject ()) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = var_referencedLabels_24083.getter_hasKey (enumerator_24263.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 580)).operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 580)).boolEnum () ;
            if (kBoolTrue == test_6) {
              GALGAS_uint var_definitionLine_24390 ;
              var_symbolTable_21908.method_searchKey (enumerator_24263.current_lkey (HERE), var_definitionLine_24390, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 581)) ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (var_definitionLine_24390.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 582)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 582)).add_operation (GALGAS_string (": unreferenced label '"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 582)).add_operation (enumerator_24263.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 582)).add_operation (GALGAS_string ("' is deleted\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 582)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 582)) ;
              {
              ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_NULL::class_func_new (SOURCE_FILE ("baseline_optimizations.galgas", 583)), var_definitionLine_24390, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 583)) ;
              }
              {
              GALGAS_uint joker_24677 ; // Joker input parameter
              var_symbolTable_21908.setter_removeKey (enumerator_24263.current_lkey (HERE), joker_24677, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 584)) ;
              }
            }
          }
          enumerator_24263.gotoNextObject () ;
        }
        GALGAS_bool var_reachable_24742 = GALGAS_bool (true) ;
        GALGAS_bool var_skippingInstruction_24773 = GALGAS_bool (false) ;
        GALGAS_bool var_previousWasSkippingInstruction_24815 = GALGAS_bool (false) ;
        cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_24863 (ioArgument_ioGeneratedInstructionList, EnumerationOrder::up) ;
        GALGAS_uint index_24858 (uint32_t (0)) ;
        while (enumerator_24863.hasCurrentObject ()) {
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = var_reachable_24742.operator_or (var_previousWasSkippingInstruction_24815 COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 592)).boolEnum () ;
            if (kBoolTrue == test_7) {
              var_reachable_24742 = callExtensionGetter_nextInstructionIsReachable ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_24863.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 593)) ;
              var_previousWasSkippingInstruction_24815 = var_skippingInstruction_24773 ;
              var_skippingInstruction_24773 = callExtensionGetter_isSkippingInstruction ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_24863.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 595)) ;
            }
          }
          if (kBoolFalse == test_7) {
            GALGAS_bool var_isLABEL_25198 = callExtensionGetter_isLABEL ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_24863.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 597)) ;
            enumGalgasBool test_8 = kBoolTrue ;
            if (kBoolTrue == test_8) {
              test_8 = var_isLABEL_25198.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 598)).operator_and (callExtensionGetter_isNULL ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_24863.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 598)).operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 598)) COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 598)).boolEnum () ;
              if (kBoolTrue == test_8) {
                ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (index_24858.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 599)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 599)).add_operation (GALGAS_string (": dead code is deleted\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 599)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 599)) ;
                {
                ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_baseline_5F_intermediate_5F_NULL::class_func_new (SOURCE_FILE ("baseline_optimizations.galgas", 600)), index_24858, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 600)) ;
                }
              }
            }
            if (kBoolFalse == test_8) {
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = var_isLABEL_25198.boolEnum () ;
                if (kBoolTrue == test_9) {
                  var_reachable_24742 = callExtensionGetter_nextInstructionIsReachable ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_24863.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 602)) ;
                  var_previousWasSkippingInstruction_24815 = GALGAS_bool (false) ;
                  var_skippingInstruction_24773 = GALGAS_bool (false) ;
                }
              }
            }
          }
          enumerator_24863.gotoNextObject () ;
          index_24858.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 591)) ;
        }
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          test_10 = var_optimizationsDone_22167.operator_not (SOURCE_FILE ("baseline_optimizations.galgas", 608)).boolEnum () ;
          if (kBoolTrue == test_10) {
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  No optimization\n\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 609)) ;
            GALGAS_uint var_currentAddress_25817 = GALGAS_uint (uint32_t (0U)) ;
            cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_25847 (ioArgument_ioGeneratedInstructionList, EnumerationOrder::up) ;
            while (enumerator_25847.hasCurrentObject ()) {
              callExtensionMethod_setCurrentAddress ((cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_25847.current_mInstruction (HERE).ptr (), var_currentAddress_25817, inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 613)) ;
              enumerator_25847.gotoNextObject () ;
            }
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Minimum code size: ").add_operation (var_currentAddress_25817.getter_string (SOURCE_FILE ("baseline_optimizations.galgas", 615)), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 615)).add_operation (GALGAS_string (" words\n\n"), inCompiler COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 615)), inCompiler  COMMA_SOURCE_FILE ("baseline_optimizations.galgas", 615)) ;
          }
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_pseudo_ORG print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ORG ").add_operation (temp_0.readProperty_mOrigin ().getter_hexString (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 10)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 10)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 10)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_pseudo_BEGINOFROUTINE print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (";  BEGIN OF ROUTINE ").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 16)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 16)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_pseudo_ENDOFROUTINE print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE temp_0 = this ;
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE temp_1 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (";  END OF ROUTINE ").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 22)).add_operation (GALGAS_string (" IN PAGE "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 22)).add_operation (temp_1.readProperty_mPage ().getter_string (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 22)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 22)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 22)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_pseudo_LABEL print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(temp_0.readProperty_mLabel ().readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 28)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 28)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_instruction_FD print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_FD::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_FD temp_0 = this ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_FD temp_1 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 34)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 34)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 34)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 34)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_baseline_5F_assembly_5F_instruction_5F_FD temp_3 = this ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 36)) ;
    }
  }
  if (kBoolFalse == test_2) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", 1"), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 38)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_instruction_F print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_F::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_F temp_0 = this ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_F temp_1 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 45)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 45)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 45)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 45)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_instruction_FB print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_FB::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_FB temp_0 = this ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_FB temp_1 = this ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_FB temp_2 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)).add_operation (temp_2.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 51)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_instruction_BitTestSkip print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  BTFSS "), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 58)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  BTFSC "), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 60)) ;
  }
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip temp_2 = this ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip temp_3 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString ().add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 62)).add_operation (temp_3.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 62)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 62)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 62)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_GOTO print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_GOTO::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_assembly_5F_GOTO temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  GOTO ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 68)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 68)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_SKIP print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_SKIP::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  GOTO * + 2"), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 74)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_CALL print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_CALL::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_assembly_5F_CALL temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  CALL ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 81)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 81)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_instruction_literalOperation print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation temp_0 = this ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation temp_1 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 87)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 87)).add_operation (temp_1.readProperty_mLiteralValue ().getter_hexString (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 87)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 87)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 87)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_incDecRegisterInCondition print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition temp_1 = this ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  INCFSZ "), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 94)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  DECFSZ "), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 96)) ;
  }
  const GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition temp_2 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 98)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition temp_4 = this ;
    test_3 = temp_4.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 100)) ;
    }
  }
  if (kBoolFalse == test_3) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", 1"), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 102)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_WO_OPERAND print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 109)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 109)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_TRIS print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_TRIS::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_assembly_5F_TRIS temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  TRIS ").add_operation (temp_0.readProperty_mOperand ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 115)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 115)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_assembly_pseudo_ORG length'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::getter_length (Compiler */* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint (uint32_t (0U)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_assembly_pseudo_BEGINOFROUTINE length'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::getter_length (Compiler */* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint (uint32_t (0U)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_assembly_pseudo_ENDOFROUTINE length'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::getter_length (Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint (uint32_t (0U)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_assembly_pseudo_LABEL length'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::getter_length (Compiler */* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint (uint32_t (0U)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_assembly_actualInstruction length'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_baseline_5F_assembly_5F_actualInstruction::getter_length (Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint (uint32_t (1U)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_NULL generateAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_NULL::method_generateAssemblyCode (const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                         const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                         GALGAS_baseline_5F_assembly_5F_instructionList & /* ioArgument_ioAssemblyInstructionList */,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_pseudo_PAGE generateAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::method_generateAssemblyCode (const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                   const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                   GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_PAGE temp_0 = this ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG::class_func_new (temp_0.readProperty_mPage ().multiply_operation (GALGAS_uint (uint32_t (512U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 28))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 28))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 28)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_pseudo_BEGIN_ROUTINE generateAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::method_generateAssemblyCode (const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                               const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                               GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                               Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE temp_0 = this ;
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE temp_1 = this ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::class_func_new (temp_0.readProperty_mRoutineName (), temp_1.readProperty_mIsRegular ()  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 37))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 37)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_pseudo_END_ROUTINE generateAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::method_generateAssemblyCode (const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                             const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                             GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                             Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE temp_0 = this ;
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE temp_1 = this ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::class_func_new (temp_0.readProperty_mRoutineName (), temp_1.readProperty_mPage ()  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 46))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 46)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_instruction_FD generateAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::method_generateAssemblyCode (const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                      const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                      GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD temp_0 = this ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD temp_1 = this ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD temp_2 = this ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FD temp_3 = this ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_instruction_5F_FD::class_func_new (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mInstruction (), temp_2.readProperty_mRegisterDescription (), temp_3.readProperty_m_5F_W_5F_isDestination ()  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 55))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 55)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_instruction_F generateAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_F::method_generateAssemblyCode (const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                     const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                     GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                     Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_F temp_0 = this ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_F temp_1 = this ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_F temp_2 = this ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_instruction_5F_F::class_func_new (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mInstruction (), temp_2.readProperty_mRegisterDescription ()  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 68))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 68)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_instruction_FB generateAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::method_generateAssemblyCode (const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                      const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                      GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB temp_0 = this ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB temp_1 = this ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB temp_2 = this ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_FB temp_3 = this ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::class_func_new (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mInstruction (), temp_2.readProperty_mRegisterDescription (), temp_3.readProperty_mBitNumber ()  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 80))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 80)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_instruction_BitTestSkip generateAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::method_generateAssemblyCode (const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                               const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                               GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                               Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip temp_0 = this ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip temp_1 = this ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip temp_2 = this ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip temp_3 = this ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::class_func_new (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mSkipIfSet (), temp_2.readProperty_mRegisterDescription (), temp_3.readProperty_mBitNumber ()  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 93))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 93)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_WO_OPERAND generateAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::method_generateAssemblyCode (const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                  const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                  GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND temp_0 = this ;
  const GALGAS_baseline_5F_intermediate_5F_WO_5F_OPERAND temp_1 = this ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND::class_func_new (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mInstruction ()  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 106))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 106)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_TRIS generateAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_TRIS::method_generateAssemblyCode (const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                         const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                         GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_intermediate_5F_TRIS temp_0 = this ;
  const GALGAS_baseline_5F_intermediate_5F_TRIS temp_1 = this ;
  const GALGAS_baseline_5F_intermediate_5F_TRIS temp_2 = this ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_TRIS::class_func_new (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mOperand (), temp_2.readProperty_mOpcode ()  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 117))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 117)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_instruction_literalOperation generateAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::method_generateAssemblyCode (const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                                    const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                                    GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                                    Compiler * /* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = this ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation temp_1 = this ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_literalOperation temp_2 = this ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation::class_func_new (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mInstruction (), temp_2.readProperty_mLiteralValue ()  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 129))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 129)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_pseudo_LABEL generateAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::method_generateAssemblyCode (const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                    const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                    GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                    Compiler * /* inCompiler */
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL::class_func_new (temp_0.readProperty_mLabel ()  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 141))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 141)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_instruction_MNOP generateAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::method_generateAssemblyCode (const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                        const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                        GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ().objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mOccurrenceFactor ().readProperty_location (), GALGAS_string ("No generated code"), fixItArray3  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 152)) ;
    }
  }
  GALGAS_uint var_idx_6959 = GALGAS_uint (uint32_t (0U)) ;
  const GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP temp_4 = this ;
  if (temp_4.readProperty_mOccurrenceFactor ().readProperty_uint ().isValid ()) {
    uint32_t variant_6969 = temp_4.readProperty_mOccurrenceFactor ().readProperty_uint ().uintValue () ;
    bool loop_6969 = true ;
    while (loop_6969) {
      const GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP temp_5 = this ;
      loop_6969 = GALGAS_bool (ComparisonKind::lowerThan, var_idx_6959.objectCompare (temp_5.readProperty_mOccurrenceFactor ().readProperty_uint ())).isValid () ;
      if (loop_6969) {
        loop_6969 = GALGAS_bool (ComparisonKind::lowerThan, var_idx_6959.objectCompare (temp_5.readProperty_mOccurrenceFactor ().readProperty_uint ())).boolValue () ;
      }
      if (loop_6969 && (0 == variant_6969)) {
        loop_6969 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_build_assembly_code.galgas", 155)) ;
      }
      if (loop_6969) {
        variant_6969 -- ;
        const GALGAS_baseline_5F_intermediate_5F_instruction_5F_MNOP temp_6 = this ;
        ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND::class_func_new (temp_6.readProperty_mInstructionLocation (), GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::class_func_NOP (SOURCE_FILE ("baseline_build_assembly_code.galgas", 160))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 158))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 158)) ;
        var_idx_6959.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 161)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_GOTO generateAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_GOTO::method_generateAssemblyCode (const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                         const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                         GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_intermediate_5F_GOTO temp_0 = this ;
  const GALGAS_baseline_5F_intermediate_5F_GOTO temp_1 = this ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_GOTO::class_func_new (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mTargetLabel ()  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 171))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 171)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_JUMP generateAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_JUMP::method_generateAssemblyCode (const GALGAS_baseline_5F_intermediate_5F_registerExpression constinArgument_inSTATUSregister,
                                                                         const GALGAS_bitSliceTable constinArgument_inStatusRegisterBitSliceTable,
                                                                         GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_intermediate_5F_JUMP temp_0 = this ;
  const GALGAS_baseline_5F_intermediate_5F_JUMP temp_1 = this ;
  GALGAS_uint var_pageChangeFlags_8029 = temp_0.readProperty_mCurrentPage ().operator_xor (temp_1.readProperty_mTargetPage () COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 183)) ;
  const GALGAS_baseline_5F_intermediate_5F_JUMP temp_2 = this ;
  GALGAS_uint var_targetPageFlags_8096 = temp_2.readProperty_mTargetPage () ;
  GALGAS_uint var_idx_8143 = GALGAS_uint (uint32_t (0U)) ;
  if (GALGAS_uint (uint32_t (8U)).isValid ()) {
    uint32_t variant_8153 = GALGAS_uint (uint32_t (8U)).uintValue () ;
    bool loop_8153 = true ;
    while (loop_8153) {
      loop_8153 = GALGAS_bool (ComparisonKind::notEqual, var_pageChangeFlags_8029.objectCompare (GALGAS_uint (uint32_t (0U)))).isValid () ;
      if (loop_8153) {
        loop_8153 = GALGAS_bool (ComparisonKind::notEqual, var_pageChangeFlags_8029.objectCompare (GALGAS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_8153 && (0 == variant_8153)) {
        loop_8153 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_build_assembly_code.galgas", 186)) ;
      }
      if (loop_8153) {
        variant_8153 -- ;
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (ComparisonKind::notEqual, var_pageChangeFlags_8029.operator_and (GALGAS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 187)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_uint var_bitIndex_8247 ;
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = constinArgument_inStatusRegisterBitSliceTable.getter_hasKey (GALGAS_string ("PA") COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 189)).boolEnum () ;
              if (kBoolTrue == test_4) {
                GALGAS_uint var_sliceIndex_8447 ;
                GALGAS_uint var_sliceSize_8479 ;
                const GALGAS_baseline_5F_intermediate_5F_JUMP temp_5 = this ;
                constinArgument_inStatusRegisterBitSliceTable.method_searchKey (GALGAS_lstring::class_func_new (GALGAS_string ("PA"), temp_5.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 191)), var_sliceIndex_8447, var_sliceSize_8479, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 190)) ;
                enumGalgasBool test_6 = kBoolTrue ;
                if (kBoolTrue == test_6) {
                  test_6 = GALGAS_bool (ComparisonKind::greaterOrEqual, var_idx_8143.objectCompare (var_sliceSize_8479)).boolEnum () ;
                  if (kBoolTrue == test_6) {
                    const GALGAS_baseline_5F_intermediate_5F_JUMP temp_7 = this ;
                    TC_Array <FixItDescription> fixItArray8 ;
                    inCompiler->emitSemanticError (temp_7.readProperty_mInstructionLocation (), GALGAS_string ("internal error, idx (").add_operation (var_idx_8143.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)).add_operation (GALGAS_string (") >= sliceSize ("), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)).add_operation (var_sliceSize_8479.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)), fixItArray8  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 196)) ;
                  }
                }
                var_bitIndex_8247 = var_sliceIndex_8447.add_operation (var_idx_8143, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 198)) ;
              }
            }
            if (kBoolFalse == test_4) {
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = constinArgument_inStatusRegisterBitSliceTable.getter_hasKey (GALGAS_string ("PA").add_operation (var_idx_8143.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 199)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 199)) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 199)).boolEnum () ;
                if (kBoolTrue == test_9) {
                  GALGAS_uint var_sliceIndex_8897 ;
                  GALGAS_uint var_sliceSize_8929 ;
                  const GALGAS_baseline_5F_intermediate_5F_JUMP temp_10 = this ;
                  constinArgument_inStatusRegisterBitSliceTable.method_searchKey (GALGAS_lstring::class_func_new (GALGAS_string ("PA").add_operation (var_idx_8143.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 201)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 201)), temp_10.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 201)), var_sliceIndex_8897, var_sliceSize_8929, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 200)) ;
                  enumGalgasBool test_11 = kBoolTrue ;
                  if (kBoolTrue == test_11) {
                    test_11 = GALGAS_bool (ComparisonKind::notEqual, var_sliceSize_8929.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
                    if (kBoolTrue == test_11) {
                      const GALGAS_baseline_5F_intermediate_5F_JUMP temp_12 = this ;
                      TC_Array <FixItDescription> fixItArray13 ;
                      inCompiler->emitSemanticError (temp_12.readProperty_mInstructionLocation (), GALGAS_string ("internal error: sliceSize (").add_operation (var_sliceSize_8929.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 206)).add_operation (GALGAS_string (") != 1"), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 206)), fixItArray13  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 206)) ;
                    }
                  }
                  var_bitIndex_8247 = var_sliceIndex_8897 ;
                }
              }
              if (kBoolFalse == test_9) {
                const GALGAS_baseline_5F_intermediate_5F_JUMP temp_14 = this ;
                TC_Array <FixItDescription> fixItArray15 ;
                inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("internal error, cannot solve page bit addressing"), fixItArray15  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 210)) ;
                var_bitIndex_8247.drop () ; // Release error dropped variable
              }
            }
            const GALGAS_baseline_5F_intermediate_5F_JUMP temp_16 = this ;
            GALGAS_baseline_5F_bit_5F_oriented_5F_op temp_17 ;
            const enumGalgasBool test_18 = GALGAS_bool (ComparisonKind::notEqual, var_targetPageFlags_8096.operator_and (GALGAS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 214)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
            if (kBoolTrue == test_18) {
              temp_17 = GALGAS_baseline_5F_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("baseline_build_assembly_code.galgas", 214)) ;
            }else if (kBoolFalse == test_18) {
              temp_17 = GALGAS_baseline_5F_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("baseline_build_assembly_code.galgas", 214)) ;
            }
            ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::class_func_new (temp_16.readProperty_mInstructionLocation (), temp_17, constinArgument_inSTATUSregister, var_bitIndex_8247  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 212))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 212)) ;
          }
        }
        var_pageChangeFlags_8029 = var_pageChangeFlags_8029.divide_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 218)) ;
        var_targetPageFlags_8096 = var_targetPageFlags_8096.divide_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 219)) ;
        var_idx_8143 = var_idx_8143.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 220)) ;
      }
    }
  }
  const GALGAS_baseline_5F_intermediate_5F_JUMP temp_19 = this ;
  const GALGAS_baseline_5F_intermediate_5F_JUMP temp_20 = this ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_GOTO::class_func_new (temp_19.readProperty_mInstructionLocation (), temp_20.readProperty_mTargetLabel ()  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 222))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 222)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_CALL generateAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_CALL::method_generateAssemblyCode (const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                         const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                         GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_intermediate_5F_CALL temp_0 = this ;
  const GALGAS_baseline_5F_intermediate_5F_CALL temp_1 = this ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_CALL::class_func_new (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mTargetLabel ()  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 233))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 233)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_JSR generateAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_JSR::method_generateAssemblyCode (const GALGAS_baseline_5F_intermediate_5F_registerExpression constinArgument_inSTATUSregister,
                                                                        const GALGAS_bitSliceTable constinArgument_inStatusRegisterBitSliceTable,
                                                                        GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_intermediate_5F_JSR temp_0 = this ;
  const GALGAS_baseline_5F_intermediate_5F_JSR temp_1 = this ;
  GALGAS_uint var_pageChangeFlags_10564 = temp_0.readProperty_mCurrentPage ().operator_xor (temp_1.readProperty_mTargetPage () COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 245)) ;
  const GALGAS_baseline_5F_intermediate_5F_JSR temp_2 = this ;
  GALGAS_uint var_targetPageFlags_10631 = temp_2.readProperty_mTargetPage () ;
  GALGAS_uint var_idx_10678 = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_baseline_5F_assembly_5F_instructionList var_pageRestoreInstructions_10692 = GALGAS_baseline_5F_assembly_5F_instructionList::class_func_emptyList (SOURCE_FILE ("baseline_build_assembly_code.galgas", 248)) ;
  if (GALGAS_uint (uint32_t (8U)).isValid ()) {
    uint32_t variant_10766 = GALGAS_uint (uint32_t (8U)).uintValue () ;
    bool loop_10766 = true ;
    while (loop_10766) {
      loop_10766 = GALGAS_bool (ComparisonKind::notEqual, var_pageChangeFlags_10564.objectCompare (GALGAS_uint (uint32_t (0U)))).isValid () ;
      if (loop_10766) {
        loop_10766 = GALGAS_bool (ComparisonKind::notEqual, var_pageChangeFlags_10564.objectCompare (GALGAS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_10766 && (0 == variant_10766)) {
        loop_10766 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_build_assembly_code.galgas", 249)) ;
      }
      if (loop_10766) {
        variant_10766 -- ;
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (ComparisonKind::notEqual, var_pageChangeFlags_10564.operator_and (GALGAS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 250)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            GALGAS_uint var_bitIndex_10860 ;
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = constinArgument_inStatusRegisterBitSliceTable.getter_hasKey (GALGAS_string ("PA") COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 252)).boolEnum () ;
              if (kBoolTrue == test_4) {
                GALGAS_uint var_sliceIndex_11060 ;
                GALGAS_uint var_sliceSize_11092 ;
                const GALGAS_baseline_5F_intermediate_5F_JSR temp_5 = this ;
                constinArgument_inStatusRegisterBitSliceTable.method_searchKey (GALGAS_lstring::class_func_new (GALGAS_string ("PA"), temp_5.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 254)), var_sliceIndex_11060, var_sliceSize_11092, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 253)) ;
                enumGalgasBool test_6 = kBoolTrue ;
                if (kBoolTrue == test_6) {
                  test_6 = GALGAS_bool (ComparisonKind::greaterOrEqual, var_idx_10678.objectCompare (var_sliceSize_11092)).boolEnum () ;
                  if (kBoolTrue == test_6) {
                    const GALGAS_baseline_5F_intermediate_5F_JSR temp_7 = this ;
                    TC_Array <FixItDescription> fixItArray8 ;
                    inCompiler->emitSemanticError (temp_7.readProperty_mInstructionLocation (), GALGAS_string ("internal error, idx (").add_operation (var_idx_10678.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)).add_operation (GALGAS_string (") >= sliceSize ("), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)).add_operation (var_sliceSize_11092.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)), fixItArray8  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 259)) ;
                  }
                }
                var_bitIndex_10860 = var_sliceIndex_11060.add_operation (var_idx_10678, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 261)) ;
              }
            }
            if (kBoolFalse == test_4) {
              enumGalgasBool test_9 = kBoolTrue ;
              if (kBoolTrue == test_9) {
                test_9 = constinArgument_inStatusRegisterBitSliceTable.getter_hasKey (GALGAS_string ("PA").add_operation (var_idx_10678.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 262)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 262)) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 262)).boolEnum () ;
                if (kBoolTrue == test_9) {
                  GALGAS_uint var_sliceIndex_11510 ;
                  GALGAS_uint var_sliceSize_11542 ;
                  const GALGAS_baseline_5F_intermediate_5F_JSR temp_10 = this ;
                  constinArgument_inStatusRegisterBitSliceTable.method_searchKey (GALGAS_lstring::class_func_new (GALGAS_string ("PA").add_operation (var_idx_10678.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 264)), temp_10.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 264)), var_sliceIndex_11510, var_sliceSize_11542, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 263)) ;
                  enumGalgasBool test_11 = kBoolTrue ;
                  if (kBoolTrue == test_11) {
                    test_11 = GALGAS_bool (ComparisonKind::notEqual, var_sliceSize_11542.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
                    if (kBoolTrue == test_11) {
                      const GALGAS_baseline_5F_intermediate_5F_JSR temp_12 = this ;
                      TC_Array <FixItDescription> fixItArray13 ;
                      inCompiler->emitSemanticError (temp_12.readProperty_mInstructionLocation (), GALGAS_string ("internal error: sliceSize (").add_operation (var_sliceSize_11542.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas", 269)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 269)).add_operation (GALGAS_string (") != 1"), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 269)), fixItArray13  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 269)) ;
                    }
                  }
                  var_bitIndex_10860 = var_sliceIndex_11510 ;
                }
              }
              if (kBoolFalse == test_9) {
                const GALGAS_baseline_5F_intermediate_5F_JSR temp_14 = this ;
                TC_Array <FixItDescription> fixItArray15 ;
                inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("internal error, cannot solve page bit addressing"), fixItArray15  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 273)) ;
                var_bitIndex_10860.drop () ; // Release error dropped variable
              }
            }
            const GALGAS_baseline_5F_intermediate_5F_JSR temp_16 = this ;
            GALGAS_baseline_5F_bit_5F_oriented_5F_op temp_17 ;
            const enumGalgasBool test_18 = GALGAS_bool (ComparisonKind::notEqual, var_targetPageFlags_10631.operator_and (GALGAS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 277)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
            if (kBoolTrue == test_18) {
              temp_17 = GALGAS_baseline_5F_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("baseline_build_assembly_code.galgas", 277)) ;
            }else if (kBoolFalse == test_18) {
              temp_17 = GALGAS_baseline_5F_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("baseline_build_assembly_code.galgas", 277)) ;
            }
            ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::class_func_new (temp_16.readProperty_mInstructionLocation (), temp_17, constinArgument_inSTATUSregister, var_bitIndex_10860  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 275))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 275)) ;
            const GALGAS_baseline_5F_intermediate_5F_JSR temp_19 = this ;
            GALGAS_baseline_5F_bit_5F_oriented_5F_op temp_20 ;
            const enumGalgasBool test_21 = GALGAS_bool (ComparisonKind::equal, var_targetPageFlags_10631.operator_and (GALGAS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 282)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
            if (kBoolTrue == test_21) {
              temp_20 = GALGAS_baseline_5F_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("baseline_build_assembly_code.galgas", 282)) ;
            }else if (kBoolFalse == test_21) {
              temp_20 = GALGAS_baseline_5F_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("baseline_build_assembly_code.galgas", 282)) ;
            }
            var_pageRestoreInstructions_10692.addAssign_operation (GALGAS_baseline_5F_assembly_5F_instruction_5F_FB::class_func_new (temp_19.readProperty_mInstructionLocation (), temp_20, constinArgument_inSTATUSregister, var_bitIndex_10860  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 280))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 280)) ;
          }
        }
        var_pageChangeFlags_10564 = var_pageChangeFlags_10564.divide_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 286)) ;
        var_targetPageFlags_10631 = var_targetPageFlags_10631.divide_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 287)) ;
        var_idx_10678 = var_idx_10678.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 288)) ;
      }
    }
  }
  const GALGAS_baseline_5F_intermediate_5F_JSR temp_22 = this ;
  const GALGAS_baseline_5F_intermediate_5F_JSR temp_23 = this ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_CALL::class_func_new (temp_22.readProperty_mInstructionLocation (), temp_23.readProperty_mTargetLabel ()  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 290))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 290)) ;
  cEnumerator_baseline_5F_assembly_5F_instructionList enumerator_12640 (var_pageRestoreInstructions_10692, EnumerationOrder::up) ;
  while (enumerator_12640.hasCurrentObject ()) {
    ioArgument_ioAssemblyInstructionList.addAssign_operation (enumerator_12640.current_mInstruction (HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 294)) ;
    enumerator_12640.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_intermediate_incDecRegisterInCondition generateAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::method_generateAssemblyCode (const GALGAS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                              const GALGAS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                              GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_0 = this ;
  const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_1 = this ;
  const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_2 = this ;
  const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_3 = this ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition::class_func_new (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mRegisterDescription (), temp_2.readProperty_mIncrement (), temp_3.readProperty_m_5F_W_5F_isDestination ()  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 304))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 304)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_5 = this ;
    test_4 = temp_5.readProperty_mBranchIfZero ().boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_6 = this ;
      ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_SKIP::class_func_new (temp_6.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 311))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 311)) ;
    }
  }
  const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_7 = this ;
  const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_8 = this ;
  const GALGAS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_9 = this ;
  ioArgument_ioAssemblyInstructionList.addAssign_operation (GALGAS_baseline_5F_assembly_5F_GOTO::class_func_new (temp_7.readProperty_mInstructionLocation (), GALGAS_lstring::class_func_new (temp_8.readProperty_mTargetLabel (), temp_9.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 317))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 315))  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 315)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'build_baseline_assembly_code????&'
//
//--------------------------------------------------------------------------------------------------

void routine_build_5F_baseline_5F_assembly_5F_code_3F__3F__3F__3F__26_ (const GALGAS_baseline_5F_intermediate_5F_instructionList constinArgument_inGeneratedInstructionList,
                                                                        const GALGAS_actualConfigurationMap constinArgument_inActualConfigurationMap,
                                                                        const GALGAS_baseline_5F_intermediate_5F_registerExpression constinArgument_inSTATUSregister,
                                                                        const GALGAS_bitSliceTable constinArgument_inStatusRegisterBitSliceTable,
                                                                        GALGAS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_14340 (constinArgument_inGeneratedInstructionList, EnumerationOrder::up) ;
  while (enumerator_14340.hasCurrentObject ()) {
    callExtensionMethod_generateAssemblyCode ((cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_14340.current_mInstruction (HERE).ptr (), constinArgument_inSTATUSregister, constinArgument_inStatusRegisterBitSliceTable, ioArgument_ioAssemblyInstructionList, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 333)) ;
    enumerator_14340.gotoNextObject () ;
  }
  cEnumerator_actualConfigurationMap enumerator_14589 (constinArgument_inActualConfigurationMap, EnumerationOrder::up) ;
  while (enumerator_14589.hasCurrentObject ()) {
    {
    routine_setEmitAddress_3F_ (enumerator_14589.current_mRegisterAddress (HERE).add_operation (enumerator_14589.current_mRegisterAddress (HERE), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 337)) ;
    }
    {
    routine_emitCode_3F_ (enumerator_14589.current_mRegisterValue (HERE), inCompiler  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas", 338)) ;
    }
    enumerator_14589.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'emitBaselineCodeAtWordAddress?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (const GALGAS_uint constinArgument_inCode,
                                                            GALGAS_uint & ioArgument_ioWordAddress,
                                                            const GALGAS_baseline_5F_assembly_5F_instruction constinArgument_inInstruction,
                                                            GALGAS_string & ioArgument_ioListFileContents,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("   ").add_operation (extensionGetter_x_34_String (ioArgument_ioWordAddress.multiply_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 10)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 10)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 10)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 10)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_x_34_String (constinArgument_inCode, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 11)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 11)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 11)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 11)) ;
  callExtensionMethod_print ((cPtr_baseline_5F_assembly_5F_instruction *) constinArgument_inInstruction.ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 12)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 13)) ;
  {
  routine_emitCode_3F_ (constinArgument_inCode, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 14)) ;
  }
  ioArgument_ioWordAddress = ioArgument_ioWordAddress.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 15)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'emitNoBaselineCodeAtWordAddress??&'
//
//--------------------------------------------------------------------------------------------------

void routine_emitNoBaselineCodeAtWordAddress_3F__3F__26_ (const GALGAS_uint constinArgument_inWordAddress,
                                                          const GALGAS_baseline_5F_assembly_5F_instruction constinArgument_inInstruction,
                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("   ").add_operation (extensionGetter_x_34_String (constinArgument_inWordAddress.multiply_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 24)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 24)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("      "), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 25)) ;
  callExtensionMethod_print ((cPtr_baseline_5F_assembly_5F_instruction *) constinArgument_inInstruction.ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 26)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 27)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_pseudo_LABEL enterLabelAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::method_enterLabelAtAddress (GALGAS_baseline_5F_symbolTable & ioArgument_ioRoutineSymbolTable,
                                                                               GALGAS_uint & ioArgument_ioWordAddress,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL temp_0 = this ;
  ioArgument_ioRoutineSymbolTable.setter_insertKey (temp_0.readProperty_mLabel (), ioArgument_ioWordAddress, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 54)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_pseudo_ORG enterLabelAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::method_enterLabelAtAddress (GALGAS_baseline_5F_symbolTable & /* ioArgument_ioRoutineSymbolTable */,
                                                                             GALGAS_uint & ioArgument_ioWordAddress,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG temp_0 = this ;
  ioArgument_ioWordAddress = temp_0.readProperty_mOrigin () ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_actualInstruction enterLabelAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_actualInstruction::method_enterLabelAtAddress (GALGAS_baseline_5F_symbolTable & /* ioArgument_ioRoutineSymbolTable */,
                                                                                 GALGAS_uint & ioArgument_ioWordAddress,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_assembly_5F_actualInstruction temp_0 = this ;
  ioArgument_ioWordAddress = ioArgument_ioWordAddress.add_operation (callExtensionGetter_length ((const cPtr_baseline_5F_assembly_5F_actualInstruction *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 70)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_pseudo_BEGINOFROUTINE generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::method_generateBinaryCodeAtAddress (const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                GALGAS_string & ioArgument_ioListFileContents,
                                                                                                GALGAS_uint & ioArgument_ioWordAddress,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE temp_1 = this ;
    test_0 = temp_1.readProperty_mIsRegular ().operator_and (GALGAS_bool (ComparisonKind::notEqual, ioArgument_ioWordAddress.operator_and (GALGAS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 90)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 90)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mRoutineName ().readProperty_location (), GALGAS_string ("the 8th bit of the routine address is not 0; a regular routine should be begin in the first half of a page"), fixItArray3  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 91)) ;
    }
  }
  {
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE temp_4 = this ;
  routine_emitNoBaselineCodeAtWordAddress_3F__3F__26_ (ioArgument_ioWordAddress, temp_4, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 93)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_pseudo_ENDOFROUTINE generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::method_generateBinaryCodeAtAddress (const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                              GALGAS_string & ioArgument_ioListFileContents,
                                                                                              GALGAS_uint & ioArgument_ioWordAddress,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::greaterThan, ioArgument_ioWordAddress.objectCompare (temp_1.readProperty_mPage ().multiply_operation (GALGAS_uint (uint32_t (512U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 102)).add_operation (GALGAS_uint (uint32_t (512U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 102)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE temp_2 = this ;
      const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE temp_3 = this ;
      const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mRoutineName ().readProperty_location (), GALGAS_string ("the routine is too large, it does not lie in page ").add_operation (temp_3.readProperty_mPage ().getter_string (SOURCE_FILE ("baseline_build_binary_code.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)).add_operation (ioArgument_ioWordAddress.substract_operation (temp_4.readProperty_mPage ().multiply_operation (GALGAS_uint (uint32_t (512U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)).add_operation (GALGAS_uint (uint32_t (512U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)).getter_string (SOURCE_FILE ("baseline_build_binary_code.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)).add_operation (GALGAS_string (" word(s) in excess)"), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)), fixItArray5  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)) ;
    }
  }
  {
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE temp_6 = this ;
  routine_emitNoBaselineCodeAtWordAddress_3F__3F__26_ (ioArgument_ioWordAddress, temp_6, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 105)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_pseudo_ORG generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::method_generateBinaryCodeAtAddress (const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                     GALGAS_string & ioArgument_ioListFileContents,
                                                                                     GALGAS_uint & ioArgument_ioWordAddress,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG temp_0 = this ;
  ioArgument_ioWordAddress = temp_0.readProperty_mOrigin () ;
  {
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG temp_1 = this ;
  routine_setEmitAddress_3F_ (temp_1.readProperty_mOrigin ().multiply_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 115)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 115)) ;
  }
  {
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_ORG temp_2 = this ;
  routine_emitNoBaselineCodeAtWordAddress_3F__3F__26_ (ioArgument_ioWordAddress, temp_2, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 116)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_instruction_FD generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_FD::method_generateBinaryCodeAtAddress (const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                                         GALGAS_uint & ioArgument_ioWordAddress,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_code_5023 ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_FD temp_0 = this ;
  switch (temp_0.readProperty_mInstruction ().enumValue ()) {
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_ADDWF:
    {
      var_code_5023 = GALGAS_uint (uint32_t (448U)) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_ANDWF:
    {
      var_code_5023 = GALGAS_uint (uint32_t (320U)) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_COMF:
    {
      var_code_5023 = GALGAS_uint (uint32_t (576U)) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_DECF:
    {
      var_code_5023 = GALGAS_uint (uint32_t (192U)) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_DECFSZ:
    {
      var_code_5023 = GALGAS_uint (uint32_t (704U)) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_INCF:
    {
      var_code_5023 = GALGAS_uint (uint32_t (640U)) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_INCFSZ:
    {
      var_code_5023 = GALGAS_uint (uint32_t (15360U)) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_IORWF:
    {
      var_code_5023 = GALGAS_uint (uint32_t (256U)) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_MOVF:
    {
      var_code_5023 = GALGAS_uint (uint32_t (512U)) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_RLF:
    {
      var_code_5023 = GALGAS_uint (uint32_t (832U)) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_RRF:
    {
      var_code_5023 = GALGAS_uint (uint32_t (768U)) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_SUBWF:
    {
      var_code_5023 = GALGAS_uint (uint32_t (128U)) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_SWAPF:
    {
      var_code_5023 = GALGAS_uint (uint32_t (896U)) ;
    }
    break ;
  case GALGAS_baseline_5F_instruction_5F_FD_5F_base_5F_code::kEnum_XORWF:
    {
      var_code_5023 = GALGAS_uint (uint32_t (384U)) ;
    }
    break ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_baseline_5F_assembly_5F_instruction_5F_FD temp_2 = this ;
    test_1 = temp_2.readProperty_m_5F_W_5F_isDestination ().operator_not (SOURCE_FILE ("baseline_build_binary_code.galgas", 143)).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_code_5023 = var_code_5023.operator_or (GALGAS_uint (uint32_t (32U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 144)) ;
    }
  }
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_FD temp_3 = this ;
  var_code_5023 = var_code_5023.operator_or (temp_3.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (31U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 146)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 146)) ;
  {
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_FD temp_4 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (var_code_5023, ioArgument_ioWordAddress, temp_4, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 147)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_instruction_F generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_F::method_generateBinaryCodeAtAddress (const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                        GALGAS_string & ioArgument_ioListFileContents,
                                                                                        GALGAS_uint & ioArgument_ioWordAddress,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_code_5986 ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_F temp_0 = this ;
  switch (temp_0.readProperty_mInstruction ().enumValue ()) {
  case GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::kEnum_CLRF:
    {
      var_code_5986 = GALGAS_uint (uint32_t (96U)) ;
    }
    break ;
  case GALGAS_baseline_5F_F_5F_instruction_5F_base_5F_code::kEnum_MOVWF:
    {
      var_code_5986 = GALGAS_uint (uint32_t (32U)) ;
    }
    break ;
  }
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_F temp_1 = this ;
  var_code_5986 = var_code_5986.operator_or (temp_1.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (31U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 161)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 161)) ;
  {
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_F temp_2 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (var_code_5986, ioArgument_ioWordAddress, temp_2, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 162)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_instruction_FB generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_FB::method_generateBinaryCodeAtAddress (const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                                         GALGAS_uint & ioArgument_ioWordAddress,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_code_6528 ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_FB temp_0 = this ;
  switch (temp_0.readProperty_mInstruction ().enumValue ()) {
  case GALGAS_baseline_5F_bit_5F_oriented_5F_op::kNotBuilt:
    break ;
  case GALGAS_baseline_5F_bit_5F_oriented_5F_op::kEnum_BCF:
    {
      var_code_6528 = GALGAS_uint (uint32_t (1024U)) ;
    }
    break ;
  case GALGAS_baseline_5F_bit_5F_oriented_5F_op::kEnum_BSF:
    {
      var_code_6528 = GALGAS_uint (uint32_t (1280U)) ;
    }
    break ;
  }
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_FB temp_1 = this ;
  var_code_6528 = var_code_6528.operator_or (temp_1.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (31U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 176)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 176)) ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_FB temp_2 = this ;
  var_code_6528 = var_code_6528.operator_or (temp_2.readProperty_mBitNumber ().left_shift_operation (GALGAS_bigint ("5", inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 177)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 177)) ;
  {
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_FB temp_3 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (var_code_6528, ioArgument_ioWordAddress, temp_3, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 178)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_instruction_BitTestSkip generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::method_generateBinaryCodeAtAddress (const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                  GALGAS_string & ioArgument_ioListFileContents,
                                                                                                  GALGAS_uint & ioArgument_ioWordAddress,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_code_7127 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (kBoolTrue == test_0) {
      var_code_7127 = GALGAS_uint (uint32_t (1792U)) ;
    }
  }
  if (kBoolFalse == test_0) {
    var_code_7127 = GALGAS_uint (uint32_t (1536U)) ;
  }
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip temp_2 = this ;
  var_code_7127 = var_code_7127.operator_or (temp_2.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (31U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 194)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 194)) ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip temp_3 = this ;
  var_code_7127 = var_code_7127.operator_or (temp_3.readProperty_mBitNumber ().left_shift_operation (GALGAS_bigint ("5", inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 195)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 195)) ;
  {
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip temp_4 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (var_code_7127, ioArgument_ioWordAddress, temp_4, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 196)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_GOTO generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_GOTO::method_generateBinaryCodeAtAddress (const GALGAS_baseline_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                            GALGAS_string & ioArgument_ioListFileContents,
                                                                            GALGAS_uint & ioArgument_ioWordAddress,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_targetAddress_7744 ;
  const GALGAS_baseline_5F_assembly_5F_GOTO temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_7744, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 206)) ;
  {
  const GALGAS_baseline_5F_assembly_5F_GOTO temp_1 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (GALGAS_uint (uint32_t (2560U)).operator_or (var_targetAddress_7744.operator_and (GALGAS_uint (uint32_t (511U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 208)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 208)), ioArgument_ioWordAddress, temp_1, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 208)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_SKIP generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_SKIP::method_generateBinaryCodeAtAddress (const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                            GALGAS_string & ioArgument_ioListFileContents,
                                                                            GALGAS_uint & ioArgument_ioWordAddress,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_baseline_5F_assembly_5F_SKIP temp_0 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (GALGAS_uint (uint32_t (2560U)).operator_or (ioArgument_ioWordAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 217)).operator_and (GALGAS_uint (uint32_t (511U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 217)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 217)), ioArgument_ioWordAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 217)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_CALL generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_CALL::method_generateBinaryCodeAtAddress (const GALGAS_baseline_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                            GALGAS_string & ioArgument_ioListFileContents,
                                                                            GALGAS_uint & ioArgument_ioWordAddress,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_targetAddress_8582 ;
  const GALGAS_baseline_5F_assembly_5F_CALL temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_8582, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 227)) ;
  {
  const GALGAS_baseline_5F_assembly_5F_CALL temp_1 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (GALGAS_uint (uint32_t (2304U)).operator_or (var_targetAddress_8582.operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 229)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 229)), ioArgument_ioWordAddress, temp_1, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 229)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_incDecRegisterInCondition generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::method_generateBinaryCodeAtAddress (const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                                                                 GALGAS_uint & ioArgument_ioWordAddress,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_code_8988 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition temp_1 = this ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (kBoolTrue == test_0) {
      var_code_8988 = GALGAS_uint (uint32_t (960U)) ;
    }
  }
  if (kBoolFalse == test_0) {
    var_code_8988 = GALGAS_uint (uint32_t (704U)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition temp_3 = this ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().operator_not (SOURCE_FILE ("baseline_build_binary_code.galgas", 244)).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_code_8988 = var_code_8988.operator_or (GALGAS_uint (uint32_t (32U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 245)) ;
    }
  }
  const GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition temp_4 = this ;
  var_code_8988 = var_code_8988.operator_or (temp_4.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (31U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 247)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 247)) ;
  {
  const GALGAS_baseline_5F_assembly_5F_incDecRegisterInCondition temp_5 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (var_code_8988, ioArgument_ioWordAddress, temp_5, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 248)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_WO_OPERAND generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND::method_generateBinaryCodeAtAddress (const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                     GALGAS_string & ioArgument_ioListFileContents,
                                                                                     GALGAS_uint & ioArgument_ioWordAddress,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_code_9590 ;
  const GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND temp_0 = this ;
  switch (temp_0.readProperty_mInstruction ().enumValue ()) {
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kNotBuilt:
    break ;
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kEnum_CLRW:
    {
      var_code_9590 = GALGAS_uint (uint32_t (64U)) ;
    }
    break ;
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kEnum_NOP:
    {
      var_code_9590 = GALGAS_uint (uint32_t (0U)) ;
    }
    break ;
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kEnum_CLRWDT:
    {
      var_code_9590 = GALGAS_uint (uint32_t (4U)) ;
    }
    break ;
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kEnum_OPTION_5F_:
    {
      var_code_9590 = GALGAS_uint (uint32_t (2U)) ;
    }
    break ;
  case GALGAS_baseline_5F_WO_5F_OPERAND_5F_group::kEnum_SLEEP:
    {
      var_code_9590 = GALGAS_uint (uint32_t (3U)) ;
    }
    break ;
  }
  {
  const GALGAS_baseline_5F_assembly_5F_WO_5F_OPERAND temp_1 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (var_code_9590, ioArgument_ioWordAddress, temp_1, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 265)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_TRIS generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_TRIS::method_generateBinaryCodeAtAddress (const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                            GALGAS_string & ioArgument_ioListFileContents,
                                                                            GALGAS_uint & ioArgument_ioWordAddress,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_baseline_5F_assembly_5F_TRIS temp_0 = this ;
  const GALGAS_baseline_5F_assembly_5F_TRIS temp_1 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (temp_0.readProperty_mOpcode (), ioArgument_ioWordAddress, temp_1, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 274)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_instruction_literalOperation generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation::method_generateBinaryCodeAtAddress (const GALGAS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                       GALGAS_string & ioArgument_ioListFileContents,
                                                                                                       GALGAS_uint & ioArgument_ioWordAddress,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_code_10527 ;
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation temp_0 = this ;
  switch (temp_0.readProperty_mInstruction ().enumValue ()) {
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kNotBuilt:
    break ;
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kEnum_ANDLW:
    {
      var_code_10527 = GALGAS_uint (uint32_t (3584U)) ;
    }
    break ;
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kEnum_IORLW:
    {
      var_code_10527 = GALGAS_uint (uint32_t (3328U)) ;
    }
    break ;
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kEnum_MOVLW:
    {
      var_code_10527 = GALGAS_uint (uint32_t (3072U)) ;
    }
    break ;
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kEnum_RETLW:
    {
      var_code_10527 = GALGAS_uint (uint32_t (2048U)) ;
    }
    break ;
  case GALGAS_baseline_5F_literal_5F_instruction_5F_opcode::kEnum_XORLW:
    {
      var_code_10527 = GALGAS_uint (uint32_t (3840U)) ;
    }
    break ;
  }
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation temp_1 = this ;
  var_code_10527 = var_code_10527.operator_or (temp_1.readProperty_mLiteralValue () COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 291)) ;
  {
  const GALGAS_baseline_5F_assembly_5F_instruction_5F_literalOperation temp_2 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (var_code_10527, ioArgument_ioWordAddress, temp_2, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 292)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@baseline_assembly_pseudo_LABEL generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::method_generateBinaryCodeAtAddress (const GALGAS_baseline_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                       GALGAS_string & ioArgument_ioListFileContents,
                                                                                       GALGAS_uint & ioArgument_ioWordAddress,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_targetAddress_11148 ;
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mLabel (), var_targetAddress_11148, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 301)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::notEqual, var_targetAddress_11148.objectCompare (ioArgument_ioWordAddress)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL temp_2 = this ;
      const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLabel ().readProperty_location (), GALGAS_string ("Internal second pass error: the '").add_operation (temp_3.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 303)).add_operation (GALGAS_string ("' label gets "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 303)).add_operation (ioArgument_ioWordAddress.getter_hexString (SOURCE_FILE ("baseline_build_binary_code.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 304)).add_operation (GALGAS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 304)).add_operation (var_targetAddress_11148.getter_hexString (SOURCE_FILE ("baseline_build_binary_code.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 304)).add_operation (GALGAS_string (" in first pass"), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 305)), fixItArray4  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 303)) ;
    }
  }
  {
  const GALGAS_baseline_5F_assembly_5F_pseudo_5F_LABEL temp_5 = this ;
  routine_emitNoBaselineCodeAtWordAddress_3F__3F__26_ (ioArgument_ioWordAddress, temp_5, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 307)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'build_baseline_binary_code??&!'
//
//--------------------------------------------------------------------------------------------------

void routine_build_5F_baseline_5F_binary_5F_code_3F__3F__26__21_ (const GALGAS_baseline_5F_assembly_5F_instructionList constinArgument_inAssemblyInstructionList,
                                                                  const GALGAS_uint constinArgument_inROMsize,
                                                                  GALGAS_string & ioArgument_ioListFileContents,
                                                                  GALGAS_uint & outArgument_outUsedROMsize,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUsedROMsize.drop () ; // Release 'out' argument
  GALGAS_baseline_5F_symbolTable var_symbolTable_12155 = GALGAS_baseline_5F_symbolTable::class_func_emptyMap (SOURCE_FILE ("baseline_build_binary_code.galgas", 322)) ;
  GALGAS_uint var_currentWordAddress_12213 = GALGAS_uint (uint32_t (0U)) ;
  cEnumerator_baseline_5F_assembly_5F_instructionList enumerator_12243 (constinArgument_inAssemblyInstructionList, EnumerationOrder::up) ;
  while (enumerator_12243.hasCurrentObject ()) {
    callExtensionMethod_enterLabelAtAddress ((cPtr_baseline_5F_assembly_5F_instruction *) enumerator_12243.current_mInstruction (HERE).ptr (), var_symbolTable_12155, var_currentWordAddress_12213, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 325)) ;
    enumerator_12243.gotoNextObject () ;
  }
  GALGAS_uint var_lastAddressForFirstPass_12382 = var_currentWordAddress_12213 ;
  outArgument_outUsedROMsize = var_currentWordAddress_12213 ;
  var_currentWordAddress_12213 = GALGAS_uint (uint32_t (0U)) ;
  {
  routine_setEmitAddress_3F_ (GALGAS_uint (uint32_t (0U)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 331)) ;
  }
  cEnumerator_baseline_5F_assembly_5F_instructionList enumerator_12582 (constinArgument_inAssemblyInstructionList, EnumerationOrder::up) ;
  while (enumerator_12582.hasCurrentObject ()) {
    callExtensionMethod_generateBinaryCodeAtAddress ((cPtr_baseline_5F_assembly_5F_instruction *) enumerator_12582.current_mInstruction (HERE).ptr (), var_symbolTable_12155, ioArgument_ioListFileContents, var_currentWordAddress_12213, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 333)) ;
    {
    routine_checkCurrentEmitAddress_3F_ (var_currentWordAddress_12213.multiply_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 338)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 338)) ;
    }
    enumerator_12582.gotoNextObject () ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, var_lastAddressForFirstPass_12382.objectCompare (var_currentWordAddress_12213)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 341)), GALGAS_string ("Internal second pass error: the last address gets ").add_operation (var_currentWordAddress_12213.getter_hexString (SOURCE_FILE ("baseline_build_binary_code.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 341)).add_operation (GALGAS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 341)).add_operation (var_lastAddressForFirstPass_12382.getter_hexString (SOURCE_FILE ("baseline_build_binary_code.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 342)).add_operation (GALGAS_string (" value in first pass"), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 343)), fixItArray1  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 341)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (ComparisonKind::greaterThan, var_lastAddressForFirstPass_12382.objectCompare (constinArgument_inROMsize)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 345)), GALGAS_string ("Program too large: ").add_operation (var_lastAddressForFirstPass_12382.getter_string (SOURCE_FILE ("baseline_build_binary_code.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 345)).add_operation (GALGAS_string (" bytes (rom size is "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 345)).add_operation (constinArgument_inROMsize.getter_string (SOURCE_FILE ("baseline_build_binary_code.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 346)).add_operation (GALGAS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 347)), fixItArray3  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 345)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_IF_BitTest addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::method_addUsedRoutines (GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_midrange_5F_instruction *) temp_0.readProperty_mInstruction ().ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 12)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_IF_SEMI_COLON addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON::method_addUsedRoutines (GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_instruction_5F_IF_5F_SEMI_5F_COLON temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_midrange_5F_instruction *) temp_0.readProperty_mInstruction ().ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 19)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_IF_IncDec addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::method_addUsedRoutines (GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_midrange_5F_instruction *) temp_0.readProperty_mInstruction ().ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 26)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_JUMP addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_JUMP::method_addUsedRoutines (GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_instruction_5F_JUMP temp_0 = this ;
  ioArgument_ioUsedRoutines.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 33)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_GOTO addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_GOTO::method_addUsedRoutines (GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_instruction_5F_GOTO temp_0 = this ;
  ioArgument_ioUsedRoutines.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 40)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_CALL addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_CALL::method_addUsedRoutines (GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_instruction_5F_CALL temp_0 = this ;
  ioArgument_ioUsedRoutines.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 47)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_FOREVER addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_FOREVER::method_addUsedRoutines (GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_midrange_5F_instruction_5F_FOREVER temp_0 = this ;
  routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (temp_0.readProperty_mInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 54)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_STATIC_REPEAT addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT::method_addUsedRoutines (GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_0 = this ;
  routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (temp_0.readProperty_mInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 61)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_MNOP addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_MNOP::method_addUsedRoutines (GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_F addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_F::method_addUsedRoutines (GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_CLRW addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_CLRW::method_addUsedRoutines (GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_CLRWDT addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_CLRWDT::method_addUsedRoutines (GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_SLEEP addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_SLEEP::method_addUsedRoutines (GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_FB addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_FB::method_addUsedRoutines (GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_NOP addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_NOP::method_addUsedRoutines (GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_banksel addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_banksel::method_addUsedRoutines (GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrangeInstruction_checkbank addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrangeInstruction_5F_checkbank::method_addUsedRoutines (GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrangeInstruction_checknobank addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrangeInstruction_5F_checknobank::method_addUsedRoutines (GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_banksel_register addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_banksel_5F_register::method_addUsedRoutines (GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_do_while addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_do_5F_while::method_addUsedRoutines (GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_midrange_5F_instruction_5F_do_5F_while temp_0 = this ;
  routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (temp_0.readProperty_mRepeatedInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 134)) ;
  }
  const GALGAS_midrange_5F_instruction_5F_do_5F_while temp_1 = this ;
  cEnumerator_midrange_5F_partList enumerator_4362 (temp_1.readProperty_mWhilePartList (), EnumerationOrder::up) ;
  while (enumerator_4362.hasCurrentObject ()) {
    {
    routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (enumerator_4362.current_mInstructionList (HERE), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 136)) ;
    }
    enumerator_4362.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_nobanksel addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_nobanksel::method_addUsedRoutines (GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_savebank addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_savebank::method_addUsedRoutines (GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_midrange_5F_instruction_5F_savebank temp_0 = this ;
  routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (temp_0.readProperty_mInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 150)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_structured_if addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_structured_5F_if::method_addUsedRoutines (GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_0 = this ;
  routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (temp_0.readProperty_mThenInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 157)) ;
  }
  {
  const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_1 = this ;
  routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (temp_1.readProperty_mElseInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 158)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_FD addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_FD::method_addUsedRoutines (GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_JSR addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_JSR::method_addUsedRoutines (GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_instruction_5F_JSR temp_0 = this ;
  ioArgument_ioUsedRoutines.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 171)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_literalOperation addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_literalOperation::method_addUsedRoutines (GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'addMidRangeUsedRoutinesFromInstructionList?&'
//
//--------------------------------------------------------------------------------------------------

void routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (const GALGAS_midrange_5F_instructionList constinArgument_inInstructionList,
                                                                 GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_midrange_5F_instructionList enumerator_6111 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_6111.hasCurrentObject ()) {
    callExtensionMethod_addUsedRoutines ((cPtr_midrange_5F_instruction *) enumerator_6111.current_mInstruction (HERE).ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 186)) ;
    enumerator_6111.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Function 'midrange_computeUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringset function_midrange_5F_computeUsedRoutines (const GALGAS_midrange_5F_interruptDefinitionList & constinArgument_inInterruptDefinitionList,
                                                           const GALGAS_midrange_5F_routineDefinitionList & constinArgument_inRoutineDefinitionList,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outUsedRoutineSet ; // Returned variable
  result_outUsedRoutineSet = GALGAS_stringset::class_func_setWithString (GALGAS_string ("main")  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 197)) ;
  cEnumerator_midrange_5F_interruptDefinitionList enumerator_6657 (constinArgument_inInterruptDefinitionList, EnumerationOrder::up) ;
  while (enumerator_6657.hasCurrentObject ()) {
    {
    routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (enumerator_6657.current_mInstructionList (HERE), result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 200)) ;
    }
    enumerator_6657.gotoNextObject () ;
  }
  GALGAS_stringset var_s_6853 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("midrange_used_routines.galgas", 206)) ;
  if (constinArgument_inRoutineDefinitionList.getter_count (SOURCE_FILE ("midrange_used_routines.galgas", 207)).isValid ()) {
    uint32_t variant_6880 = constinArgument_inRoutineDefinitionList.getter_count (SOURCE_FILE ("midrange_used_routines.galgas", 207)).uintValue () ;
    bool loop_6880 = true ;
    while (loop_6880) {
      loop_6880 = GALGAS_bool (ComparisonKind::notEqual, var_s_6853.objectCompare (result_outUsedRoutineSet)).isValid () ;
      if (loop_6880) {
        loop_6880 = GALGAS_bool (ComparisonKind::notEqual, var_s_6853.objectCompare (result_outUsedRoutineSet)).boolValue () ;
      }
      if (loop_6880 && (0 == variant_6880)) {
        loop_6880 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_used_routines.galgas", 207)) ;
      }
      if (loop_6880) {
        variant_6880 -- ;
        var_s_6853 = result_outUsedRoutineSet ;
        cEnumerator_midrange_5F_routineDefinitionList enumerator_7029 (constinArgument_inRoutineDefinitionList, EnumerationOrder::up) ;
        while (enumerator_7029.hasCurrentObject ()) {
          enumGalgasBool test_0 = kBoolTrue ;
          if (kBoolTrue == test_0) {
            test_0 = result_outUsedRoutineSet.getter_hasKey (enumerator_7029.current_mRoutineName (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 211)).boolEnum () ;
            if (kBoolTrue == test_0) {
              {
              routine_addMidRangeUsedRoutinesFromInstructionList_3F__26_ (enumerator_7029.current_mInstructionList (HERE), result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("midrange_used_routines.galgas", 212)) ;
              }
            }
          }
          enumerator_7029.gotoNextObject () ;
        }
      }
    }
  }
//---
  return result_outUsedRoutineSet ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_midrange_5F_computeUsedRoutines [3] = {
  & kTypeDescriptor_GALGAS_midrange_5F_interruptDefinitionList,
  & kTypeDescriptor_GALGAS_midrange_5F_routineDefinitionList,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_midrange_5F_computeUsedRoutines (Compiler * inCompiler,
                                                                                const cObjectArray & inEffectiveParameterArray,
                                                                                const GALGAS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  const GALGAS_midrange_5F_interruptDefinitionList operand0 = GALGAS_midrange_5F_interruptDefinitionList::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                                         inCompiler
                                                                                                                         COMMA_THERE) ;
  const GALGAS_midrange_5F_routineDefinitionList operand1 = GALGAS_midrange_5F_routineDefinitionList::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                                                     inCompiler
                                                                                                                     COMMA_THERE) ;
  return function_midrange_5F_computeUsedRoutines (operand0,
                                                   operand1,
                                                   inCompiler
                                                   COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_midrange_5F_computeUsedRoutines ("midrange_computeUsedRoutines",
                                                                                 functionWithGenericHeader_midrange_5F_computeUsedRoutines,
                                                                                 & kTypeDescriptor_GALGAS_stringset,
                                                                                 2,
                                                                                 functionArgs_midrange_5F_computeUsedRoutines) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_NULL instructionLength'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_midrange_5F_intermediate_5F_NULL::getter_instructionLength (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint (uint32_t (0U)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_pseudo_ORG instructionLength'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::getter_instructionLength (Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint (uint32_t (0U)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_pseudo_LABEL instructionLength'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::getter_instructionLength (Compiler */* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint (uint32_t (0U)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_actualInstruction instructionLength'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_midrange_5F_intermediate_5F_actualInstruction::getter_instructionLength (Compiler */* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint (uint32_t (1U)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_JUMP instructionLength'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_midrange_5F_intermediate_5F_JUMP::getter_instructionLength (Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint (uint32_t (1U)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_JUMP temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::notEqual, temp_1.readProperty_mBit_31__31_ ().objectCompare (GALGAS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 36)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outLength.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 37)) ;
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_midrange_5F_intermediate_5F_JUMP temp_3 = this ;
    test_2 = GALGAS_bool (ComparisonKind::notEqual, temp_3.readProperty_mBit_31__32_ ().objectCompare (GALGAS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 39)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      result_outLength.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 40)) ;
    }
  }
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_JSR instructionLength'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_midrange_5F_intermediate_5F_JSR::getter_instructionLength (Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outLength ; // Returned variable
  result_outLength = GALGAS_uint (uint32_t (1U)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_JSR temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::notEqual, temp_1.readProperty_mBit_31__31_ ().objectCompare (GALGAS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 49)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outLength = result_outLength.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 50)) ;
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_midrange_5F_intermediate_5F_JSR temp_3 = this ;
    test_2 = GALGAS_bool (ComparisonKind::notEqual, temp_3.readProperty_mBit_31__32_ ().objectCompare (GALGAS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 52)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      result_outLength = result_outLength.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 53)) ;
    }
  }
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_instruction_MNOP instructionLength'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP::getter_instructionLength (Compiler */* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outLength ; // Returned variable
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_0 = this ;
  result_outLength = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint () ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_incDecRegisterInCondition instructionLength'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::getter_instructionLength (Compiler */* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outLength ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_1 = this ;
    test_0 = temp_1.readProperty_mBranchIfZero ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outLength = GALGAS_uint (uint32_t (3U)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outLength = GALGAS_uint (uint32_t (2U)) ;
  }
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_NULL print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_NULL::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("-"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 11)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_ORG print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("ORG ").add_operation (temp_0.readProperty_mOrigin ().getter_hexString (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 18)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 18)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 18)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_LABEL print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(temp_0.readProperty_mLabel ().readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 25)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 25)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_FD print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_FD::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD temp_0 = this ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD temp_1 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (temp_0.readProperty_mInstruction_5F_FD_5F_base_5F_code (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 32)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 32)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 32)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 32)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD temp_3 = this ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 34)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_F print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_F::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_F temp_0 = this ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_F temp_1 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (temp_0.readProperty_mFinstruction (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 42)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 42)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 42)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_FB print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_FB::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB temp_0 = this ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB temp_1 = this ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB temp_2 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (temp_0.readProperty_mBitOrientedOp (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)).add_operation (temp_2.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_BitTestSkip print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("BTFSS"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 57)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("BTFSC"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 59)) ;
  }
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_2 = this ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_3 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" ").add_operation (temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 61)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 61)).add_operation (temp_3.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 61)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 61)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_JUMP print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JUMP::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_JUMP temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("JUMP ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 68)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 68)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_GOTO print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_GOTO::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_GOTO temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("GOTO ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 75)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 75)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_CALL print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_CALL::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_CALL temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("CALL ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 82)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 82)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_JSR print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JSR::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("JSR ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 89)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 89)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_CLRWDT print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("CLRWDT"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 96)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_CLRW print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("CLRW"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 103)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_NOP print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("NOP"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 111)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_RETURN print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("RETURN"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 118)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_RETFIE print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("RETFIE"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 125)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_SLEEP print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("SLEEP"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 132)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_literalOperation print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = this ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_1 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_mnemonic (temp_0.readProperty_mLiteralInstruction (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 139)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 139)).add_operation (temp_1.readProperty_mLiteralValue ().getter_hexString (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 139)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 139)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_MNOP print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_0 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("MNOP ").add_operation (temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().getter_string (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 146)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_incDecRegisterInCondition print'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::method_print (GALGAS_string & ioArgument_ioListFileContents,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("JUMP "), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 153)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_1 = this ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("INCF "), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 155)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("DECF "), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 157)) ;
  }
  const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_2 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 159)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_4 = this ;
    test_3 = temp_4.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 161)) ;
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_6 = this ;
    test_5 = temp_6.readProperty_mBranchIfZero ().boolEnum () ;
    if (kBoolTrue == test_5) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" Z"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 164)) ;
    }
  }
  if (kBoolFalse == test_5) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" NZ"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 166)) ;
  }
  const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_7 = this ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" ").add_operation (temp_7.readProperty_mTargetLabel (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 168)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_ORG setCurrentAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::method_setCurrentAddress (GALGAS_uint & ioArgument_ioCurrentAddress,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_0 = this ;
  ioArgument_ioCurrentAddress = temp_0.readProperty_mOrigin () ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_FOREVER instructionUsesGOTOorCALL'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_FOREVER::method_instructionUsesGOTOorCALL (GALGAS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GALGAS_bool (true) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_structured_if instructionUsesGOTOorCALL'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_structured_5F_if::method_instructionUsesGOTOorCALL (GALGAS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                                         Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GALGAS_bool (true) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_CALL instructionUsesGOTOorCALL'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_CALL::method_instructionUsesGOTOorCALL (GALGAS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GALGAS_bool (true) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_JSR instructionUsesGOTOorCALL'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_JSR::method_instructionUsesGOTOorCALL (GALGAS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GALGAS_bool (true) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_GOTO instructionUsesGOTOorCALL'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_GOTO::method_instructionUsesGOTOorCALL (GALGAS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GALGAS_bool (true) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_JUMP instructionUsesGOTOorCALL'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_JUMP::method_instructionUsesGOTOorCALL (GALGAS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GALGAS_bool (true) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'handleMidrangeInstructionList????&&&?&?!?&'
//
//--------------------------------------------------------------------------------------------------

void routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (const GALGAS_midrange_5F_instructionList constinArgument_inInstructionList,
                                                                                                const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                                                const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                GALGAS_string & ioArgument_ioListFileContents,
                                                                                                const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                                GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                                const GALGAS_bool constinArgument_inShouldPreserveBank,
                                                                                                GALGAS_bool & outArgument_outContinuesInSequence,
                                                                                                const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                                                GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outContinuesInSequence.drop () ; // Release 'out' argument
  outArgument_outContinuesInSequence = GALGAS_bool (true) ;
  cEnumerator_midrange_5F_instructionList enumerator_2926 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_2926.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = outArgument_outContinuesInSequence.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 89)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_2926.current_mInstruction (HERE).readProperty_mInstructionLocation (), GALGAS_string ("Unreachable code"), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 90)) ;
        outArgument_outContinuesInSequence = GALGAS_bool (true) ;
      }
    }
    callExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList ((cPtr_midrange_5F_instruction *) enumerator_2926.current_mInstruction (HERE).ptr (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBank, outArgument_outContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 93)) ;
    enumerator_2926.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_nobanksel build_midrange_ipic_instructionList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_nobanksel::method_build_5F_midrange_5F_ipic_5F_instructionList (const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                     const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                     const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                     GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                     GALGAS_midrange_5F_intermediate_5F_instructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                                                                     GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                     const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                     GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                                     const GALGAS_bool constinArgument_inShouldPreserveBank,
                                                                                                     GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                     const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                     GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inShouldPreserveBank.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_midrange_5F_instruction_5F_nobanksel temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GALGAS_string ("cannot use \"nobank\" here: bank selection should be preserved (use it in a \"banksave\" construct)"), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 126)) ;
    }
  }
  ioArgument_ioCurrentBank = GALGAS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 128)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_savebank build_midrange_ipic_instructionList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_savebank::method_build_5F_midrange_5F_ipic_5F_instructionList (const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                                                    const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                    const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                    GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                    GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                    GALGAS_string & ioArgument_ioListFileContents,
                                                                                                    const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                                    GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                                    const GALGAS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                    GALGAS_bool & ioArgument_ioContinuesInSequence,
                                                                                                    const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                                                    GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_registerExpression var_STATUS_5F_register_5003 = GALGAS_registerExpression::class_func_new (GALGAS_lstring::class_func_new (GALGAS_string ("STATUS"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 149)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 149)), GALGAS_immediatInteger::class_func_new (GALGAS_luint::class_func_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 150)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 150))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 150)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 151))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 148)) ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_5185 ;
  GALGAS_bitSliceTable joker_5394 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_STATUS_5F_register_5003.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 156)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_5185, joker_5394, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 154)) ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_save_5F_IPICregisterDescription_5516 ;
  const GALGAS_midrange_5F_instruction_5F_savebank temp_0 = this ;
  GALGAS_bitSliceTable joker_5720 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegister ().ptr (), constinArgument_inTotalBankCount, GALGAS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 167)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_save_5F_IPICregisterDescription_5516, joker_5720, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 165)) ;
  const GALGAS_midrange_5F_instruction_5F_savebank temp_1 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::class_func_new (temp_1.readProperty_mInstructionLocation (), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 177)), var_STATUS_5F_IPICregisterDescription_5185, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 175))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 175)) ;
  const GALGAS_midrange_5F_instruction_5F_savebank temp_2 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::class_func_new (temp_2.readProperty_mInstructionLocation (), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 183)), var_save_5F_IPICregisterDescription_5516  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 181))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 181)) ;
  GALGAS_uint var_finalBank_6271 = ioArgument_ioCurrentBank ;
  {
  const GALGAS_midrange_5F_instruction_5F_savebank temp_3 = this ;
  routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_3.readProperty_mInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_finalBank_6271, GALGAS_bool (false), ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 187)) ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = ioArgument_ioContinuesInSequence.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 202)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_midrange_5F_instruction_5F_savebank temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mEndOfSaveBankInstruction (), GALGAS_string ("useless saving: execution does reach the end of \"savebank\" instruction list"), fixItArray6  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 203)) ;
    }
  }
  const GALGAS_midrange_5F_instruction_5F_savebank temp_7 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::class_func_new (temp_7.readProperty_mInstructionLocation (), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 208)), var_save_5F_IPICregisterDescription_5516, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 206))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 206)) ;
  const GALGAS_midrange_5F_instruction_5F_savebank temp_8 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::class_func_new (temp_8.readProperty_mInstructionLocation (), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 214)), var_STATUS_5F_IPICregisterDescription_5185  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 212))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 212)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_banksel build_midrange_ipic_instructionList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_banksel::method_build_5F_midrange_5F_ipic_5F_instructionList (const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                   const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                   const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                   GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                   GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                                                                   const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                                   GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                                   const GALGAS_bool constinArgument_inShouldPreserveBank,
                                                                                                   GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                   const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                   GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inShouldPreserveBank.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_midrange_5F_instruction_5F_banksel temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GALGAS_string ("cannot use \"banksel\" here: bank selection should be preserved (use \"banksave\" instruction)"), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 234)) ;
    }
  }
  GALGAS_registerExpression var_STATUS_5F_register_8083 = GALGAS_registerExpression::class_func_new (GALGAS_lstring::class_func_new (GALGAS_string ("STATUS"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 238)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 238)), GALGAS_immediatInteger::class_func_new (GALGAS_luint::class_func_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 239)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 239))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 239)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 240))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 237)) ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_8266 ;
  GALGAS_bitSliceTable var_bitSliceTable_8318 ;
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_STATUS_5F_register_8083.ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_8266, var_bitSliceTable_8318, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 244)) ;
  const GALGAS_midrange_5F_instruction_5F_banksel temp_3 = this ;
  GALGAS_lstring var_RP_8541 = GALGAS_lstring::class_func_new (GALGAS_string ("RP"), temp_3.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 253)) ;
  GALGAS_uint var_rpIndex_8637 ;
  GALGAS_uint var_sliceSize_8656 ;
  var_bitSliceTable_8318.method_searchKey (var_RP_8541, var_rpIndex_8637, var_sliceSize_8656, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 254)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (ComparisonKind::lowerThan, var_sliceSize_8656.objectCompare (constinArgument_inTotalBankCount.substract_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 255)).getter_significantBitCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 255)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_midrange_5F_instruction_5F_banksel temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("internal error: sliceSize == ").add_operation (var_sliceSize_8656.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 256)).add_operation (GALGAS_string (", total bank count == "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 256)).add_operation (constinArgument_inTotalBankCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 256)), fixItArray6  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 256)) ;
    }
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    const GALGAS_midrange_5F_instruction_5F_banksel temp_8 = this ;
    test_7 = GALGAS_bool (ComparisonKind::equal, temp_8.readProperty_mBankIndex ().readProperty_uint ().objectCompare (ioArgument_ioCurrentBank)).boolEnum () ;
    if (kBoolTrue == test_7) {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        const GALGAS_midrange_5F_instruction_5F_banksel temp_10 = this ;
        test_9 = temp_10.readProperty_mWarningOnUselessBanksel ().boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_midrange_5F_instruction_5F_banksel temp_11 = this ;
          TC_Array <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticWarning (temp_11.readProperty_mBankIndex ().readProperty_location (), GALGAS_string ("useless instruction: the bank ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 261)).add_operation (GALGAS_string (" is already selected"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 261)), fixItArray12  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 261)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_7) {
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      const GALGAS_midrange_5F_instruction_5F_banksel temp_14 = this ;
      test_13 = GALGAS_bool (ComparisonKind::greaterOrEqual, temp_14.readProperty_mBankIndex ().readProperty_uint ().objectCompare (constinArgument_inTotalBankCount)).boolEnum () ;
      if (kBoolTrue == test_13) {
        const GALGAS_midrange_5F_instruction_5F_banksel temp_15 = this ;
        const GALGAS_midrange_5F_instruction_5F_banksel temp_16 = this ;
        TC_Array <FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (temp_15.readProperty_mBankIndex ().readProperty_location (), GALGAS_string ("the bank ").add_operation (temp_16.readProperty_mBankIndex ().readProperty_uint ().getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)).add_operation (GALGAS_string (" does not exist (the device has "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)).add_operation (constinArgument_inTotalBankCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)).add_operation (GALGAS_string (" bank(s))"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)), fixItArray17  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)) ;
      }
    }
    if (kBoolFalse == test_13) {
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = GALGAS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 265)))).boolEnum () ;
        if (kBoolTrue == test_18) {
          const GALGAS_midrange_5F_instruction_5F_banksel temp_19 = this ;
          GALGAS_uint var_shiftedBank_9400 = temp_19.readProperty_mBankIndex ().readProperty_uint () ;
          GALGAS_uint var_idx_9449 = GALGAS_uint (uint32_t (0U)) ;
          if (var_sliceSize_8656.isValid ()) {
            uint32_t variant_9461 = var_sliceSize_8656.uintValue () ;
            bool loop_9461 = true ;
            while (loop_9461) {
              loop_9461 = GALGAS_bool (ComparisonKind::lowerThan, var_idx_9449.objectCompare (var_sliceSize_8656)).isValid () ;
              if (loop_9461) {
                loop_9461 = GALGAS_bool (ComparisonKind::lowerThan, var_idx_9449.objectCompare (var_sliceSize_8656)).boolValue () ;
              }
              if (loop_9461 && (0 == variant_9461)) {
                loop_9461 = false ;
                inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 268)) ;
              }
              if (loop_9461) {
                variant_9461 -- ;
                GALGAS_midrange_5F_bit_5F_oriented_5F_op var_op_9539 ;
                enumGalgasBool test_20 = kBoolTrue ;
                if (kBoolTrue == test_20) {
                  test_20 = GALGAS_bool (ComparisonKind::equal, var_shiftedBank_9400.operator_and (GALGAS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 270)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
                  if (kBoolTrue == test_20) {
                    var_op_9539 = GALGAS_midrange_5F_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 271)) ;
                  }
                }
                if (kBoolFalse == test_20) {
                  var_op_9539 = GALGAS_midrange_5F_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 273)) ;
                }
                const GALGAS_midrange_5F_instruction_5F_banksel temp_21 = this ;
                ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::class_func_new (temp_21.readProperty_mInstructionLocation (), var_op_9539, var_STATUS_5F_IPICregisterDescription_8266, var_rpIndex_8637.add_operation (var_idx_9449, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 279))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 275))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 275)) ;
                var_idx_9449.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 280)) ;
                var_shiftedBank_9400 = var_shiftedBank_9400.right_shift_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 281)) ;
              }
            }
          }
          const GALGAS_midrange_5F_instruction_5F_banksel temp_22 = this ;
          ioArgument_ioCurrentBank = temp_22.readProperty_mBankIndex ().readProperty_uint () ;
        }
      }
      if (kBoolFalse == test_18) {
        GALGAS_bool var_optimize_10011 = GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.readProperty_value ()) ;
        const GALGAS_midrange_5F_instruction_5F_banksel temp_23 = this ;
        GALGAS_uint var_shiftedBank_10088 = temp_23.readProperty_mBankIndex ().readProperty_uint () ;
        const GALGAS_midrange_5F_instruction_5F_banksel temp_24 = this ;
        GALGAS_uint var_shiftedXorBank_10137 = temp_24.readProperty_mBankIndex ().readProperty_uint ().operator_xor (ioArgument_ioCurrentBank COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 287)) ;
        GALGAS_uint var_idx_10205 = GALGAS_uint (uint32_t (0U)) ;
        if (var_sliceSize_8656.isValid ()) {
          uint32_t variant_10217 = var_sliceSize_8656.uintValue () ;
          bool loop_10217 = true ;
          while (loop_10217) {
            loop_10217 = GALGAS_bool (ComparisonKind::lowerThan, var_idx_10205.objectCompare (var_sliceSize_8656)).isValid () ;
            if (loop_10217) {
              loop_10217 = GALGAS_bool (ComparisonKind::lowerThan, var_idx_10205.objectCompare (var_sliceSize_8656)).boolValue () ;
            }
            if (loop_10217 && (0 == variant_10217)) {
              loop_10217 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 289)) ;
            }
            if (loop_10217) {
              variant_10217 -- ;
              GALGAS_midrange_5F_bit_5F_oriented_5F_op var_op_10295 ;
              enumGalgasBool test_25 = kBoolTrue ;
              if (kBoolTrue == test_25) {
                test_25 = GALGAS_bool (ComparisonKind::equal, var_shiftedBank_10088.operator_and (GALGAS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 291)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
                if (kBoolTrue == test_25) {
                  var_op_10295 = GALGAS_midrange_5F_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 292)) ;
                }
              }
              if (kBoolFalse == test_25) {
                var_op_10295 = GALGAS_midrange_5F_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 294)) ;
              }
              enumGalgasBool test_26 = kBoolTrue ;
              if (kBoolTrue == test_26) {
                test_26 = GALGAS_bool (ComparisonKind::notEqual, var_shiftedXorBank_10137.operator_and (GALGAS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 296)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_or (var_optimize_10011.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 296)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 296)).boolEnum () ;
                if (kBoolTrue == test_26) {
                  const GALGAS_midrange_5F_instruction_5F_banksel temp_27 = this ;
                  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::class_func_new (temp_27.readProperty_mInstructionLocation (), var_op_10295, var_STATUS_5F_IPICregisterDescription_8266, var_rpIndex_8637.add_operation (var_idx_10205, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 301))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 297))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 297)) ;
                }
              }
              if (kBoolFalse == test_26) {
                ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 303)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 303)) ;
                ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (": useless '").add_operation (extensionGetter_mnemonic (var_op_10295, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 304)).add_operation (GALGAS_string (" STATUS, "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 304)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 304)) ;
                ioArgument_ioListFileContents.plusAssign_operation(var_rpIndex_8637.add_operation (var_idx_10205, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 305)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 305)).add_operation (GALGAS_string ("' not generated\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 305)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 305)) ;
              }
              var_idx_10205.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 307)) ;
              var_shiftedBank_10088 = var_shiftedBank_10088.right_shift_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 308)) ;
              var_shiftedXorBank_10137 = var_shiftedXorBank_10137.right_shift_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 309)) ;
            }
          }
        }
        const GALGAS_midrange_5F_instruction_5F_banksel temp_28 = this ;
        ioArgument_ioCurrentBank = temp_28.readProperty_mBankIndex ().readProperty_uint () ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_banksel_register build_midrange_ipic_instructionList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_banksel_5F_register::method_build_5F_midrange_5F_ipic_5F_instructionList (const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                               const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                               const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                               GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                               GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                                                                               const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                                               GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                                               const GALGAS_bool constinArgument_inShouldPreserveBank,
                                                                                                               GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                               const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                               GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inShouldPreserveBank.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_midrange_5F_instruction_5F_banksel_5F_register temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GALGAS_string ("cannot use \"banksel\" here: bank selection should be preserved (use \"banksave\" instruction)"), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 331)) ;
    }
  }
  GALGAS_registerExpression var_STATUS_5F_register_11923 = GALGAS_registerExpression::class_func_new (GALGAS_lstring::class_func_new (GALGAS_string ("STATUS"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 335)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 335)), GALGAS_immediatInteger::class_func_new (GALGAS_luint::class_func_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 336)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 336))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 336)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 337))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 334)) ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_12231 ;
  GALGAS_bitSliceTable var_bitSliceTable_12286 ;
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_STATUS_5F_register_11923.ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_12231, var_bitSliceTable_12286, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 339)) ;
  const GALGAS_midrange_5F_instruction_5F_banksel_5F_register temp_3 = this ;
  GALGAS_lstring var_RP_12332 = GALGAS_lstring::class_func_new (GALGAS_string ("RP"), temp_3.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 348)) ;
  GALGAS_uint var_rpIndex_12428 ;
  GALGAS_uint var_sliceSize_12447 ;
  var_bitSliceTable_12286.method_searchKey (var_RP_12332, var_rpIndex_12428, var_sliceSize_12447, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 349)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (ComparisonKind::lowerThan, var_sliceSize_12447.objectCompare (constinArgument_inTotalBankCount.substract_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 350)).getter_significantBitCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 350)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_midrange_5F_instruction_5F_banksel_5F_register temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("internal error: sliceSize == ").add_operation (var_sliceSize_12447.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 351)).add_operation (GALGAS_string (", total bank count == "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 351)).add_operation (constinArgument_inTotalBankCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 351)), fixItArray6  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 351)) ;
    }
  }
  GALGAS_uintlist var_registerAddressList_12762 ;
  GALGAS_uint var_size_12797 ;
  GALGAS_registerProtection var_protection_12819 ;
  const GALGAS_midrange_5F_instruction_5F_banksel_5F_register temp_7 = this ;
  GALGAS_bitSliceTable joker_12806_2 ; // Joker input parameter
  GALGAS_string joker_12806_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (temp_7.readProperty_mRegister ().readProperty_mRegisterName (), var_registerAddressList_12762, var_size_12797, joker_12806_2, joker_12806_1, var_protection_12819, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 354)) ;
  const GALGAS_midrange_5F_instruction_5F_banksel_5F_register temp_8 = this ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_8.readProperty_mRegister ().readProperty_mRegisterName (), GALGAS_bool (false), var_protection_12819, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 361)) ;
  GALGAS_uint var_address_12968 ;
  var_registerAddressList_12762.method_first (var_address_12968, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 362)) ;
  GALGAS_uint var_newBank_12989 = var_address_12968.right_shift_operation (GALGAS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 363)) ;
  GALGAS_sint_36__34_ var_offset_13093 ;
  const GALGAS_midrange_5F_instruction_5F_banksel_5F_register temp_9 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_9.readProperty_mRegister ().readProperty_mOffset ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_13093, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 365)) ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = GALGAS_bool (ComparisonKind::lowerThan, var_offset_13093.objectCompare (GALGAS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_midrange_5F_instruction_5F_banksel_5F_register temp_11 = this ;
      TC_Array <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mRegister ().readProperty_mEndOfOffsetExpression (), GALGAS_string ("index value (").add_operation (var_offset_13093.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 367)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 367)).add_operation (GALGAS_string (") should be <= 0 "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 367)), fixItArray12  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 367)) ;
    }
  }
  if (kBoolFalse == test_10) {
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      test_13 = GALGAS_bool (ComparisonKind::greaterOrEqual, var_offset_13093.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 368)).objectCompare (var_size_12797)).boolEnum () ;
      if (kBoolTrue == test_13) {
        const GALGAS_midrange_5F_instruction_5F_banksel_5F_register temp_14 = this ;
        TC_Array <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mRegister ().readProperty_mEndOfOffsetExpression (), GALGAS_string ("maximum index value is ").add_operation (var_size_12797.substract_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 369)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 369)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 369)), fixItArray15  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 369)) ;
      }
    }
  }
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = GALGAS_bool (ComparisonKind::equal, var_newBank_12989.objectCompare (ioArgument_ioCurrentBank)).boolEnum () ;
    if (kBoolTrue == test_16) {
      enumGalgasBool test_17 = kBoolTrue ;
      if (kBoolTrue == test_17) {
        const GALGAS_midrange_5F_instruction_5F_banksel_5F_register temp_18 = this ;
        test_17 = temp_18.readProperty_mWarningOnUselessBanksel ().boolEnum () ;
        if (kBoolTrue == test_17) {
          const GALGAS_midrange_5F_instruction_5F_banksel_5F_register temp_19 = this ;
          TC_Array <FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticWarning (temp_19.readProperty_mRegister ().readProperty_mRegisterName ().readProperty_location (), GALGAS_string ("useless instruction: the bank ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 374)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 374)).add_operation (GALGAS_string (" is already selected"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 374)), fixItArray20  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 374)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_16) {
    enumGalgasBool test_21 = kBoolTrue ;
    if (kBoolTrue == test_21) {
      test_21 = GALGAS_bool (ComparisonKind::greaterOrEqual, var_newBank_12989.objectCompare (constinArgument_inTotalBankCount)).boolEnum () ;
      if (kBoolTrue == test_21) {
        const GALGAS_midrange_5F_instruction_5F_banksel_5F_register temp_22 = this ;
        TC_Array <FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticError (temp_22.readProperty_mRegister ().readProperty_mRegisterName ().readProperty_location (), GALGAS_string ("the bank ").add_operation (var_newBank_12989.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 377)).add_operation (GALGAS_string (" does not exist (the device has "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 377)).add_operation (constinArgument_inTotalBankCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 377)).add_operation (GALGAS_string (" bank(s))"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 377)), fixItArray23  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 377)) ;
      }
    }
    if (kBoolFalse == test_21) {
      enumGalgasBool test_24 = kBoolTrue ;
      if (kBoolTrue == test_24) {
        test_24 = GALGAS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 378)))).boolEnum () ;
        if (kBoolTrue == test_24) {
          GALGAS_uint var_shiftedBank_13871 = var_newBank_12989 ;
          GALGAS_uint var_idx_13907 = GALGAS_uint (uint32_t (0U)) ;
          if (var_sliceSize_12447.isValid ()) {
            uint32_t variant_13919 = var_sliceSize_12447.uintValue () ;
            bool loop_13919 = true ;
            while (loop_13919) {
              loop_13919 = GALGAS_bool (ComparisonKind::lowerThan, var_idx_13907.objectCompare (var_sliceSize_12447)).isValid () ;
              if (loop_13919) {
                loop_13919 = GALGAS_bool (ComparisonKind::lowerThan, var_idx_13907.objectCompare (var_sliceSize_12447)).boolValue () ;
              }
              if (loop_13919 && (0 == variant_13919)) {
                loop_13919 = false ;
                inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 381)) ;
              }
              if (loop_13919) {
                variant_13919 -- ;
                GALGAS_midrange_5F_bit_5F_oriented_5F_op var_op_13997 ;
                enumGalgasBool test_25 = kBoolTrue ;
                if (kBoolTrue == test_25) {
                  test_25 = GALGAS_bool (ComparisonKind::equal, var_shiftedBank_13871.operator_and (GALGAS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 383)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
                  if (kBoolTrue == test_25) {
                    var_op_13997 = GALGAS_midrange_5F_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 384)) ;
                  }
                }
                if (kBoolFalse == test_25) {
                  var_op_13997 = GALGAS_midrange_5F_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 386)) ;
                }
                const GALGAS_midrange_5F_instruction_5F_banksel_5F_register temp_26 = this ;
                ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::class_func_new (temp_26.readProperty_mInstructionLocation (), var_op_13997, var_STATUS_5F_IPICregisterDescription_12231, var_rpIndex_12428.add_operation (var_idx_13907, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 392))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 388))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 388)) ;
                var_idx_13907.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 393)) ;
                var_shiftedBank_13871 = var_shiftedBank_13871.right_shift_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 394)) ;
              }
            }
          }
          ioArgument_ioCurrentBank = var_newBank_12989 ;
        }
      }
      if (kBoolFalse == test_24) {
        GALGAS_bool var_optimize_14456 = GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.readProperty_value ()) ;
        GALGAS_uint var_shiftedBank_14533 = var_newBank_12989 ;
        GALGAS_uint var_shiftedXorBank_14569 = var_newBank_12989.operator_xor (ioArgument_ioCurrentBank COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 400)) ;
        GALGAS_uint var_idx_14624 = GALGAS_uint (uint32_t (0U)) ;
        if (var_sliceSize_12447.isValid ()) {
          uint32_t variant_14636 = var_sliceSize_12447.uintValue () ;
          bool loop_14636 = true ;
          while (loop_14636) {
            loop_14636 = GALGAS_bool (ComparisonKind::lowerThan, var_idx_14624.objectCompare (var_sliceSize_12447)).isValid () ;
            if (loop_14636) {
              loop_14636 = GALGAS_bool (ComparisonKind::lowerThan, var_idx_14624.objectCompare (var_sliceSize_12447)).boolValue () ;
            }
            if (loop_14636 && (0 == variant_14636)) {
              loop_14636 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 402)) ;
            }
            if (loop_14636) {
              variant_14636 -- ;
              GALGAS_midrange_5F_bit_5F_oriented_5F_op var_op_14714 ;
              enumGalgasBool test_27 = kBoolTrue ;
              if (kBoolTrue == test_27) {
                test_27 = GALGAS_bool (ComparisonKind::equal, var_shiftedBank_14533.operator_and (GALGAS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 404)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
                if (kBoolTrue == test_27) {
                  var_op_14714 = GALGAS_midrange_5F_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 405)) ;
                }
              }
              if (kBoolFalse == test_27) {
                var_op_14714 = GALGAS_midrange_5F_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 407)) ;
              }
              enumGalgasBool test_28 = kBoolTrue ;
              if (kBoolTrue == test_28) {
                test_28 = GALGAS_bool (ComparisonKind::notEqual, var_shiftedXorBank_14569.operator_and (GALGAS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 409)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_or (var_optimize_14456.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 409)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 409)).boolEnum () ;
                if (kBoolTrue == test_28) {
                  const GALGAS_midrange_5F_instruction_5F_banksel_5F_register temp_29 = this ;
                  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::class_func_new (temp_29.readProperty_mInstructionLocation (), var_op_14714, var_STATUS_5F_IPICregisterDescription_12231, var_rpIndex_12428.add_operation (var_idx_14624, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 414))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 410))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 410)) ;
                }
              }
              if (kBoolFalse == test_28) {
                ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 416)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 416)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 416)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 416)) ;
                ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (": useless '").add_operation (extensionGetter_mnemonic (var_op_14714, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 417)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 417)).add_operation (GALGAS_string (" STATUS, "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 417)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 417)) ;
                ioArgument_ioListFileContents.plusAssign_operation(var_rpIndex_12428.add_operation (var_idx_14624, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 418)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 418)).add_operation (GALGAS_string ("' not generated\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 418)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 418)) ;
              }
              var_idx_14624.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 420)) ;
              var_shiftedBank_14533 = var_shiftedBank_14533.right_shift_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 421)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 421)) ;
              var_shiftedXorBank_14569 = var_shiftedXorBank_14569.right_shift_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 422)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 422)) ;
            }
          }
        }
        ioArgument_ioCurrentBank = var_newBank_12989 ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_FD build_midrange_ipic_instructionList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_FD::method_build_5F_midrange_5F_ipic_5F_instructionList (const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                              const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                              const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                              GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                              GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                              GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                              const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                              GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                              const GALGAS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                              GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                              const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                              GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_16329 ;
  const GALGAS_midrange_5F_instruction_5F_FD temp_0 = this ;
  GALGAS_bitSliceTable joker_16357 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_16329, joker_16357, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 443)) ;
  const GALGAS_midrange_5F_instruction_5F_FD temp_1 = this ;
  const GALGAS_midrange_5F_instruction_5F_FD temp_2 = this ;
  const GALGAS_midrange_5F_instruction_5F_FD temp_3 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::class_func_new (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mInstruction_5F_FD_5F_base_5F_code (), var_IPICregisterDescription_16329, temp_3.readProperty_m_5F_W_5F_isDestination ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 452))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 452)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_F build_midrange_ipic_instructionList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_F::method_build_5F_midrange_5F_ipic_5F_instructionList (const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                             const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                             const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                             GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                             GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                             GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                             const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                             GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                             const GALGAS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                             GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                             const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                             GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_17261 ;
  const GALGAS_midrange_5F_instruction_5F_F temp_0 = this ;
  GALGAS_bitSliceTable joker_17449 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_17261, joker_17449, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 476)) ;
  const GALGAS_midrange_5F_instruction_5F_F temp_1 = this ;
  const GALGAS_midrange_5F_instruction_5F_F temp_2 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::class_func_new (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mFAinstruction (), var_IPICregisterDescription_17261  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 485))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 485)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_FB build_midrange_ipic_instructionList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_FB::method_build_5F_midrange_5F_ipic_5F_instructionList (const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                              const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                              const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                              GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                              GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                              GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                              const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                              GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                              const GALGAS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                              GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                              const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                              GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_18406 ;
  GALGAS_bitSliceTable var_bitSliceTable_18439 ;
  const GALGAS_midrange_5F_instruction_5F_FB temp_0 = this ;
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_18406, var_bitSliceTable_18439, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 508)) ;
  GALGAS_uint var_bitNumber_18601 ;
  const GALGAS_midrange_5F_instruction_5F_FB temp_1 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_18439, var_bitNumber_18601, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 517)) ;
  const GALGAS_midrange_5F_instruction_5F_FB temp_2 = this ;
  const GALGAS_midrange_5F_instruction_5F_FB temp_3 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB::class_func_new (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mBitOrientedOp (), var_IPICregisterDescription_18406, var_bitNumber_18601  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 524))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 524)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_JSR build_midrange_ipic_instructionList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_JSR::method_build_5F_midrange_5F_ipic_5F_instructionList (const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                                               const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                               const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                               GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                               GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                               GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                               const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                               GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                               const GALGAS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                               GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                               const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                               GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_isNoReturn_19514 ;
  GALGAS_uint var_requiredBank_19530 ;
  GALGAS_uint var_returnedBank_19548 ;
  GALGAS_bool var_preservesBank_19566 ;
  const GALGAS_midrange_5F_instruction_5F_JSR temp_0 = this ;
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_19514, var_requiredBank_19530, var_returnedBank_19548, var_preservesBank_19566, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 548)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::notEqual, var_requiredBank_19530.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 549)))).operator_and (GALGAS_bool (ComparisonKind::notEqual, var_requiredBank_19530.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 549)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_midrange_5F_instruction_5F_JSR temp_2 = this ;
      GALGAS_string var_errorMessage_19670 = GALGAS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 550)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 550)).add_operation (var_requiredBank_19530.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 550)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 550)) ;
      var_errorMessage_19670.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 551)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 552)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_errorMessage_19670.plusAssign_operation(GALGAS_string ("does contain any reliable value"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 553)) ;
        }
      }
      if (kBoolFalse == test_3) {
        var_errorMessage_19670.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 555)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 555)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 555)) ;
      }
      const GALGAS_midrange_5F_instruction_5F_JSR temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_19670, fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 557)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_isNoReturn_19514.boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_midrange_5F_instruction_5F_JSR temp_7 = this ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GALGAS_string ("a \"noreturn\" routine should be called with a GOTO or JUMP instruction"), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 560)) ;
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_preservesBank_19566.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 562)).boolEnum () ;
    if (kBoolTrue == test_9) {
      ioArgument_ioCurrentBank = var_returnedBank_19548 ;
    }
  }
  const GALGAS_midrange_5F_instruction_5F_JSR temp_10 = this ;
  const GALGAS_midrange_5F_instruction_5F_JSR temp_11 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_JSR::class_func_new (temp_10.readProperty_mInstructionLocation (), temp_11.readProperty_mTargetLabel (), GALGAS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 569)), GALGAS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 570))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 566))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 566)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrangeInstruction_checkbank build_midrange_ipic_instructionList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrangeInstruction_5F_checkbank::method_build_5F_midrange_5F_ipic_5F_instructionList (const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                 const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                 const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                 GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                 GALGAS_midrange_5F_intermediate_5F_instructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                                                                 GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                 const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                 GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                                 const GALGAS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                 GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                 const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                 GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrangeInstruction_5F_checkbank temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mBankIndex ().objectCompare (GALGAS_uint (uint32_t (15U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_midrangeInstruction_5F_checkbank temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("Bank index should be <= 15"), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 590)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 591)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_midrangeInstruction_5F_checkbank temp_5 = this ;
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("checkbank fail: there is no selected bank"), fixItArray6  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 592)) ;
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        const GALGAS_midrangeInstruction_5F_checkbank temp_8 = this ;
        test_7 = GALGAS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (temp_8.readProperty_mBankIndex ())).boolEnum () ;
        if (kBoolTrue == test_7) {
          const GALGAS_midrangeInstruction_5F_checkbank temp_9 = this ;
          const GALGAS_midrangeInstruction_5F_checkbank temp_10 = this ;
          TC_Array <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GALGAS_string ("checkbank fail: the selected bank is ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 594)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 594)).add_operation (GALGAS_string (", required bank is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 594)).add_operation (temp_10.readProperty_mBankIndex ().getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 594)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 594)), fixItArray11  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 594)) ;
        }
      }
    }
  }
  const GALGAS_midrangeInstruction_5F_checkbank temp_12 = this ;
  ioArgument_ioCurrentBank = temp_12.readProperty_mBankIndex () ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrangeInstruction_checknobank build_midrange_ipic_instructionList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrangeInstruction_5F_checknobank::method_build_5F_midrange_5F_ipic_5F_instructionList (const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                   const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                   const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                   GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                   GALGAS_midrange_5F_intermediate_5F_instructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                                                                   GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                   const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                   GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                                   const GALGAS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                   GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                   const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                   GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 615)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_midrangeInstruction_5F_checknobank temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GALGAS_string ("checknobank fail: the ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 616)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 616)).add_operation (GALGAS_string (" bank is selected"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 616)), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 616)) ;
      ioArgument_ioCurrentBank = GALGAS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 617)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_CALL build_midrange_ipic_instructionList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_CALL::method_build_5F_midrange_5F_ipic_5F_instructionList (const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                                                const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                                const GALGAS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_isNoReturn_23109 ;
  GALGAS_uint var_requiredBank_23125 ;
  GALGAS_uint var_returnedBank_23143 ;
  GALGAS_bool var_preservesBank_23161 ;
  const GALGAS_midrange_5F_instruction_5F_CALL temp_0 = this ;
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_23109, var_requiredBank_23125, var_returnedBank_23143, var_preservesBank_23161, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 637)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::notEqual, var_requiredBank_23125.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 638)))).operator_and (GALGAS_bool (ComparisonKind::notEqual, var_requiredBank_23125.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 638)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_midrange_5F_instruction_5F_CALL temp_2 = this ;
      GALGAS_string var_errorMessage_23265 = GALGAS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 639)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 639)).add_operation (var_requiredBank_23125.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 639)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 639)) ;
      var_errorMessage_23265.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 640)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 641)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_errorMessage_23265.plusAssign_operation(GALGAS_string ("does contain any reliable value"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 642)) ;
        }
      }
      if (kBoolFalse == test_3) {
        var_errorMessage_23265.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 644)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 644)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 644)) ;
      }
      const GALGAS_midrange_5F_instruction_5F_CALL temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_23265, fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 646)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_isNoReturn_23109.boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_midrange_5F_instruction_5F_CALL temp_7 = this ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GALGAS_string ("a \"noreturn\" routine should be called with a GOTO or JUMP instruction"), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 649)) ;
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_preservesBank_23161.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 651)).boolEnum () ;
    if (kBoolTrue == test_9) {
      ioArgument_ioCurrentBank = var_returnedBank_23143 ;
    }
  }
  const GALGAS_midrange_5F_instruction_5F_CALL temp_10 = this ;
  const GALGAS_midrange_5F_instruction_5F_CALL temp_11 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_CALL::class_func_new (temp_10.readProperty_mInstructionLocation (), temp_11.readProperty_mTargetLabel ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 655))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 655)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_JUMP build_midrange_ipic_instructionList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_JUMP::method_build_5F_midrange_5F_ipic_5F_instructionList (const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                                                const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                                const GALGAS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                GALGAS_bool & ioArgument_ioContinuesInSequence,
                                                                                                const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_isNoReturn_24683 ;
  GALGAS_uint var_requiredBank_24699 ;
  const GALGAS_midrange_5F_instruction_5F_JUMP temp_0 = this ;
  GALGAS_uint joker_24712 ; // Joker input parameter
  GALGAS_bool joker_24715 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_24683, var_requiredBank_24699, joker_24712, joker_24715, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 676)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::notEqual, var_requiredBank_24699.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 677)))).operator_and (GALGAS_bool (ComparisonKind::notEqual, var_requiredBank_24699.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 677)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_midrange_5F_instruction_5F_JUMP temp_2 = this ;
      GALGAS_string var_errorMessage_24808 = GALGAS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 678)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 678)).add_operation (var_requiredBank_24699.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 678)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 678)) ;
      var_errorMessage_24808.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 679)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 680)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_errorMessage_24808.plusAssign_operation(GALGAS_string ("does contain any reliable value"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 681)) ;
        }
      }
      if (kBoolFalse == test_3) {
        var_errorMessage_24808.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 683)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 683)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 683)) ;
      }
      const GALGAS_midrange_5F_instruction_5F_JUMP temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_24808, fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 685)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_isNoReturn_24683.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 687)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_midrange_5F_instruction_5F_JUMP temp_7 = this ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GALGAS_string ("a regular routine should be called with a CALL or JSR instruction"), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 688)) ;
    }
  }
  ioArgument_ioContinuesInSequence = GALGAS_bool (false) ;
  const GALGAS_midrange_5F_instruction_5F_JUMP temp_9 = this ;
  const GALGAS_midrange_5F_instruction_5F_JUMP temp_10 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_JUMP::class_func_new (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mTargetLabel (), GALGAS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 695)), GALGAS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 696))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 692))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 692)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_GOTO build_midrange_ipic_instructionList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_GOTO::method_build_5F_midrange_5F_ipic_5F_instructionList (const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                                                const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                                const GALGAS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                GALGAS_bool & ioArgument_ioContinuesInSequence,
                                                                                                const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_isNoReturn_26267 ;
  GALGAS_uint var_requiredBank_26283 ;
  const GALGAS_midrange_5F_instruction_5F_GOTO temp_0 = this ;
  GALGAS_uint joker_26296 ; // Joker input parameter
  GALGAS_bool joker_26299 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_26267, var_requiredBank_26283, joker_26296, joker_26299, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 715)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::notEqual, var_requiredBank_26283.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 716)))).operator_and (GALGAS_bool (ComparisonKind::notEqual, var_requiredBank_26283.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 716)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_midrange_5F_instruction_5F_GOTO temp_2 = this ;
      GALGAS_string var_errorMessage_26392 = GALGAS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 717)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 717)).add_operation (var_requiredBank_26283.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 717)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 717)) ;
      var_errorMessage_26392.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 718)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 719)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_errorMessage_26392.plusAssign_operation(GALGAS_string ("does contain any reliable value"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 720)) ;
        }
      }
      if (kBoolFalse == test_3) {
        var_errorMessage_26392.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 722)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 722)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 722)) ;
      }
      const GALGAS_midrange_5F_instruction_5F_GOTO temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_26392, fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 724)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_isNoReturn_26267.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 726)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_midrange_5F_instruction_5F_GOTO temp_7 = this ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GALGAS_string ("a regular routine should be called with a CALL or JSR instruction"), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 727)) ;
    }
  }
  ioArgument_ioContinuesInSequence = GALGAS_bool (false) ;
  const GALGAS_midrange_5F_instruction_5F_GOTO temp_9 = this ;
  const GALGAS_midrange_5F_instruction_5F_GOTO temp_10 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_GOTO::class_func_new (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mTargetLabel ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 731))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 731)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_CLRWDT build_midrange_ipic_instructionList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_CLRWDT::method_build_5F_midrange_5F_ipic_5F_instructionList (const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                  const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                  const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                  GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                  GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                  GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                  const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                  GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                                                  const GALGAS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                  GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                  const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                  GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_instruction_5F_CLRWDT temp_0 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::class_func_new (temp_0.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 751))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 751)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_CLRW build_midrange_ipic_instructionList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_CLRW::method_build_5F_midrange_5F_ipic_5F_instructionList (const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                                                const GALGAS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                Compiler * /* inCompiler */
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_instruction_5F_CLRW temp_0 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW::class_func_new (temp_0.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 770))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 770)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_NOP build_midrange_ipic_instructionList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_NOP::method_build_5F_midrange_5F_ipic_5F_instructionList (const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                               const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                               const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                               GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                               GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                               GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                               const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                               GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                                               const GALGAS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                               GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                               const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                               GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                               Compiler * /* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_instruction_5F_NOP temp_0 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP::class_func_new (temp_0.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 789))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 789)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_SLEEP build_midrange_ipic_instructionList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_SLEEP::method_build_5F_midrange_5F_ipic_5F_instructionList (const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                 const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                 const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                 GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                 GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                 GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                 const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                 GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                                                 const GALGAS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                 GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                 const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                 GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                 Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_instruction_5F_SLEEP temp_0 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP::class_func_new (temp_0.readProperty_mInstructionLocation ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 808))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 808)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_literalOperation build_midrange_ipic_instructionList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_literalOperation::method_build_5F_midrange_5F_ipic_5F_instructionList (const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                            const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                            const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                            GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                            GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                            GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                            const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                            GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                                                            const GALGAS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                            GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                            const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                            GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_36__34_ var_result_30878 ;
  const GALGAS_midrange_5F_instruction_5F_literalOperation temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mImmediatExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_30878, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 827)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::greaterThan, var_result_30878.objectCompare (GALGAS_sint_36__34_ (int64_t (255LL)))).operator_or (GALGAS_bool (ComparisonKind::lowerThan, var_result_30878.objectCompare (GALGAS_sint_36__34_ (int64_t (-128LL)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 829)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_midrange_5F_instruction_5F_literalOperation temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("immediate value is evaluated as ").add_operation (var_result_30878.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 830)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 830)).add_operation (GALGAS_string (" (should be betwween -128 and 255)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 830)), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 830)) ;
    }
  }
  const GALGAS_midrange_5F_instruction_5F_literalOperation temp_4 = this ;
  const GALGAS_midrange_5F_instruction_5F_literalOperation temp_5 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::class_func_new (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mLiteralInstruction (), var_result_30878.operator_and (GALGAS_sint_36__34_ (int64_t (255LL)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 836)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 836))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 833))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 833)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_MNOP build_midrange_ipic_instructionList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_MNOP::method_build_5F_midrange_5F_ipic_5F_instructionList (const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                                                const GALGAS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_instruction_5F_MNOP temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ().objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_midrange_5F_instruction_5F_MNOP temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mOccurrenceFactor ().readProperty_location (), GALGAS_string ("occurrence argument is zero: no generated code"), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 856)) ;
    }
  }
  const GALGAS_midrange_5F_instruction_5F_MNOP temp_4 = this ;
  const GALGAS_midrange_5F_instruction_5F_MNOP temp_5 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP::class_func_new (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mOccurrenceFactor ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 859))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 859)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_FOREVER build_midrange_ipic_instructionList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_FOREVER::method_build_5F_midrange_5F_ipic_5F_instructionList (const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                                                   const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                   const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                   GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                   GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                                                                   const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                                   GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                                   const GALGAS_bool constinArgument_inShouldPreserveBank,
                                                                                                   GALGAS_bool & ioArgument_ioContinuesInSequence,
                                                                                                   const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                                                   GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  switch (constinArgument_inRoutineKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_regularRoutine:
    {
      const GALGAS_midrange_5F_instruction_5F_FOREVER temp_0 = this ;
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (temp_0.readProperty_mInstructionLocation (), GALGAS_string ("a regular routine does not accept the \"forever\" instruction"), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 881)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_noReturnRoutine:
    {
    }
    break ;
  case GALGAS_routineKind::kEnum_interruptRoutine:
    {
      const GALGAS_midrange_5F_instruction_5F_FOREVER temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("an interrupt routine does not accept the \"forever\" instruction"), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 884)) ;
    }
    break ;
  }
  GALGAS_uint var_finalBank_33182 = ioArgument_ioCurrentBank ;
  GALGAS_string var_label_30__33222 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 888)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 888)) ;
  ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 889)) ;
  const GALGAS_midrange_5F_instruction_5F_FOREVER temp_4 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::class_func_new (GALGAS_lstring::class_func_new (var_label_30__33222, temp_4.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 890)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 890))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 890)) ;
  {
  const GALGAS_midrange_5F_instruction_5F_FOREVER temp_5 = this ;
  routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_5.readProperty_mInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_finalBank_33182, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 891)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank_33182)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_midrange_5F_instruction_5F_FOREVER temp_7 = this ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mEndOfInstructionList (), GALGAS_string ("instruction list does not leave bank selection unchanged"), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 907)) ;
    }
  }
  const GALGAS_midrange_5F_instruction_5F_FOREVER temp_9 = this ;
  const GALGAS_midrange_5F_instruction_5F_FOREVER temp_10 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_GOTO::class_func_new (temp_9.readProperty_mInstructionLocation (), GALGAS_lstring::class_func_new (var_label_30__33222, temp_10.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 912))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 910))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 910)) ;
  ioArgument_ioContinuesInSequence = GALGAS_bool (false) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_STATIC_REPEAT build_midrange_ipic_instructionList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT::method_build_5F_midrange_5F_ipic_5F_instructionList (const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                                                            const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                            const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                            GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                            GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                            GALGAS_string & ioArgument_ioListFileContents,
                                                                                                            const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                                            GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                                            const GALGAS_bool constinArgument_inShouldPreserveBank,
                                                                                                            GALGAS_bool & ioArgument_ioContinuesInSequence,
                                                                                                            const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                                                            GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_36__34_ var_lowerBound_34833 ;
  const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLowerBoundExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_lowerBound_34833, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 933)) ;
  GALGAS_sint_36__34_ var_upperBound_34943 ;
  const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mUpperBoundExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_upperBound_34943, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 934)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (ComparisonKind::greaterThan, var_lowerBound_34833.objectCompare (var_upperBound_34943)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mInstructionLocation (), GALGAS_string ("lower bound (").add_operation (var_lowerBound_34833.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 937)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 937)).add_operation (GALGAS_string (") greater then upper bound ("), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 937)).add_operation (var_upperBound_34943.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 937)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 937)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 937)), fixItArray4  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 937)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (ComparisonKind::greaterThan, var_upperBound_34943.substract_operation (var_lowerBound_34833, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 938)).objectCompare (GALGAS_sint_36__34_ (int64_t (65535LL)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_6 = this ;
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mInstructionLocation (), GALGAS_string ("repeat count (").add_operation (var_upperBound_34943.substract_operation (var_lowerBound_34833, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 939)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 939)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 939)).add_operation (GALGAS_string (") too large (should be <= 0xFFFF)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 939)), fixItArray7  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 939)) ;
      }
    }
  }
  GALGAS_uint var_finalBank_35348 = ioArgument_ioCurrentBank ;
  GALGAS_constantMap var_tempConstantMap_35380 = constinArgument_inConstantMap ;
  {
  const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_8 = this ;
  var_tempConstantMap_35380.setter_insertKey (temp_8.readProperty_mConstantName (), var_lowerBound_34833, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 944)) ;
  }
  {
  const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_9 = this ;
  routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_9.readProperty_mInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, var_tempConstantMap_35380, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_finalBank_35348, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 945)) ;
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = GALGAS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank_35348)).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_11 = this ;
      TC_Array <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mEndOfInstruction (), GALGAS_string ("enclosed instruction list does not leave bank selection unchanged"), fixItArray12  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 961)) ;
    }
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = ioArgument_ioContinuesInSequence.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 963)).boolEnum () ;
    if (kBoolTrue == test_13) {
      const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_14 = this ;
      TC_Array <FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_14.readProperty_mEndOfInstruction (), GALGAS_string ("enclosed instruction list contains an endless loop"), fixItArray15  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 964)) ;
    }
  }
  GALGAS_sint_36__34_ var_idx_36112 = var_lowerBound_34833.add_operation (GALGAS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 967)) ;
  if (var_upperBound_34943.substract_operation (var_lowerBound_34833, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 968)).add_operation (GALGAS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 968)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 968)).isValid ()) {
    uint32_t variant_36135 = var_upperBound_34943.substract_operation (var_lowerBound_34833, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 968)).add_operation (GALGAS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 968)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 968)).uintValue () ;
    bool loop_36135 = true ;
    while (loop_36135) {
      GALGAS_bool test_16 = GALGAS_bool (ComparisonKind::lowerOrEqual, var_idx_36112.objectCompare (var_upperBound_34943)) ;
      if (kBoolTrue == test_16.boolEnum ()) {
        test_16 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 968)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
      }
      loop_36135 = test_16.isValid () ;
      if (loop_36135) {
        loop_36135 = test_16.boolValue () ;
      }
      if (loop_36135 && (0 == variant_36135)) {
        loop_36135 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 968)) ;
      }
      if (loop_36135) {
        variant_36135 -- ;
        GALGAS_constantMap var_constantMap_36241 = constinArgument_inConstantMap ;
        {
        const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_17 = this ;
        var_constantMap_36241.setter_insertKey (temp_17.readProperty_mConstantName (), var_idx_36112, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 970)) ;
        }
        {
        const GALGAS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_18 = this ;
        routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_18.readProperty_mInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, var_constantMap_36241, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 971)) ;
        }
        var_idx_36112.plusAssign_operation(GALGAS_sint_36__34_ (int64_t (1LL)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 986)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_IF_BitTest build_midrange_ipic_instructionList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::method_build_5F_midrange_5F_ipic_5F_instructionList (const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                                                         const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                         const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                         GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                         GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                                                         const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                                         GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                                         const GALGAS_bool constinArgument_inShouldPreserveBank,
                                                                                                         GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                         const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                                                         GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_37448 ;
  GALGAS_bitSliceTable var_bitSliceTable_37481 ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest temp_0 = this ;
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_37448, var_bitSliceTable_37481, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1005)) ;
  GALGAS_uint var_bitNumber_37643 ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest temp_1 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_37481, var_bitNumber_37643, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1014)) ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest temp_2 = this ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest temp_3 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::class_func_new (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mSkipIfSet (), var_IPICregisterDescription_37448, var_bitNumber_37643  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1021))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1021)) ;
  GALGAS_bool var_unusedContinuesInSequence_37880 = GALGAS_bool (true) ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_BitTest temp_4 = this ;
  callExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList ((cPtr_midrange_5F_instruction *) temp_4.readProperty_mInstruction ().ptr (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBank, var_unusedContinuesInSequence_37880, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1029)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_incDecRegisterInCondition buildIPICinstructionForCondition'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_incDecRegisterInCondition::method_buildIPICinstructionForCondition (const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                          const GALGAS_uint constinArgument_inCurrentBank,
                                                                                          const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                          const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                          GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                          const GALGAS_bool constinArgument_inComplementaryBranch,
                                                                                          const GALGAS_location constinArgument_inInstructionLocation,
                                                                                          const GALGAS_string constinArgument_inTargetLabel,
                                                                                          GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                          GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                          GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_39757 ;
  const GALGAS_midrange_5F_incDecRegisterInCondition temp_0 = this ;
  GALGAS_bitSliceTable joker_39785 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_39757, joker_39785, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1081)) ;
  const GALGAS_midrange_5F_incDecRegisterInCondition temp_1 = this ;
  const GALGAS_midrange_5F_incDecRegisterInCondition temp_2 = this ;
  const GALGAS_midrange_5F_incDecRegisterInCondition temp_3 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition::class_func_new (constinArgument_inInstructionLocation, var_IPICregisterDescription_39757, constinArgument_inTargetLabel, temp_1.readProperty_mIncrement (), temp_2.readProperty_m_5F_W_5F_isDestination (), temp_3.readProperty_mBranchIfZero ().operator_xor (constinArgument_inComplementaryBranch COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1097))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1091))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1091)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_incDecRegisterInCondition computeInstructionCountForCondition'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_incDecRegisterInCondition::method_computeInstructionCountForCondition (const GALGAS_bool constinArgument_inComplementaryBranch,
                                                                                             GALGAS_uint & outArgument_outInstructionCount,
                                                                                             Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_incDecRegisterInCondition temp_1 = this ;
    test_0 = temp_1.readProperty_mBranchIfZero ().operator_xor (constinArgument_inComplementaryBranch COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1105)).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outInstructionCount = GALGAS_uint (uint32_t (3U)) ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outInstructionCount = GALGAS_uint (uint32_t (2U)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_negateCondition buildIPICinstructionForCondition'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_negateCondition::method_buildIPICinstructionForCondition (const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                const GALGAS_uint constinArgument_inCurrentBank,
                                                                                const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                const GALGAS_bool constinArgument_inComplementaryBranch,
                                                                                const GALGAS_location constinArgument_inInstructionLocation,
                                                                                const GALGAS_string constinArgument_inTargetLabel,
                                                                                GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                GALGAS_string & ioArgument_ioListFileContents,
                                                                                GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_negateCondition temp_0 = this ;
  callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) temp_0.readProperty_mCondition ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, constinArgument_inComplementaryBranch.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1132)), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1126)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_negateCondition computeInstructionCountForCondition'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_negateCondition::method_computeInstructionCountForCondition (const GALGAS_bool constinArgument_inComplementaryBranch,
                                                                                   GALGAS_uint & outArgument_outInstructionCount,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_negateCondition temp_0 = this ;
  callExtensionMethod_computeInstructionCountForCondition ((cPtr_midrange_5F_conditionExpression *) temp_0.readProperty_mCondition ().ptr (), constinArgument_inComplementaryBranch.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1147)), outArgument_outInstructionCount, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1146)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_andCondition buildIPICinstructionForCondition'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_andCondition::method_buildIPICinstructionForCondition (const GALGAS_uint constinArgument_inTotalBankCount,
                                                                             const GALGAS_uint constinArgument_inCurrentBank,
                                                                             const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                             const GALGAS_constantMap constinArgument_inConstantMap,
                                                                             GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                             const GALGAS_bool constinArgument_inComplementaryBranch,
                                                                             const GALGAS_location constinArgument_inInstructionLocation,
                                                                             const GALGAS_string constinArgument_inTargetLabel,
                                                                             GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                             GALGAS_string & ioArgument_ioListFileContents,
                                                                             GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inComplementaryBranch.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_midrange_5F_andCondition temp_1 = this ;
      callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) temp_1.readProperty_mLeftExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1167)) ;
      const GALGAS_midrange_5F_andCondition temp_2 = this ;
      callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) temp_2.readProperty_mRightExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1180)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_string var_label_30__42913 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1194)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1194)) ;
    ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1194)) ;
    const GALGAS_midrange_5F_andCondition temp_3 = this ;
    callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) temp_3.readProperty_mLeftExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), constinArgument_inInstructionLocation, var_label_30__42913, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1195)) ;
    const GALGAS_midrange_5F_andCondition temp_4 = this ;
    callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) temp_4.readProperty_mRightExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (false), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1208)) ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::class_func_new (GALGAS_lstring::class_func_new (var_label_30__42913, constinArgument_inInstructionLocation, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1221)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1221))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1221)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_andCondition computeInstructionCountForCondition'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_andCondition::method_computeInstructionCountForCondition (const GALGAS_bool constinArgument_inComplementaryBranch,
                                                                                GALGAS_uint & outArgument_outInstructionCount,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_countLeft_44092 ;
  const GALGAS_midrange_5F_andCondition temp_0 = this ;
  callExtensionMethod_computeInstructionCountForCondition ((cPtr_midrange_5F_conditionExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inComplementaryBranch, var_countLeft_44092, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1230)) ;
  GALGAS_uint var_countRight_44202 ;
  const GALGAS_midrange_5F_andCondition temp_1 = this ;
  callExtensionMethod_computeInstructionCountForCondition ((cPtr_midrange_5F_conditionExpression *) temp_1.readProperty_mLeftExpression ().ptr (), constinArgument_inComplementaryBranch, var_countRight_44202, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1234)) ;
  outArgument_outInstructionCount = var_countLeft_44092.add_operation (var_countRight_44202, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1238)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_bitTest_in_structured_if_condition buildIPICinstructionForCondition'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::method_buildIPICinstructionForCondition (const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                                               const GALGAS_uint constinArgument_inCurrentBank,
                                                                                                               const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                               const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                               GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                               const GALGAS_bool constinArgument_inComplementaryBranch,
                                                                                                               const GALGAS_location constinArgument_inInstructionLocation,
                                                                                                               const GALGAS_string constinArgument_inTargetLabel,
                                                                                                               GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                               GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                                               GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_44989 ;
  GALGAS_bitSliceTable var_bitSliceTable_45022 ;
  const GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition temp_0 = this ;
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_44989, var_bitSliceTable_45022, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1255)) ;
  GALGAS_uint var_bitNumber_45184 ;
  const GALGAS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition temp_1 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_45022, var_bitNumber_45184, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1264)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::class_func_new (constinArgument_inInstructionLocation, constinArgument_inComplementaryBranch, var_IPICregisterDescription_44989, var_bitNumber_45184  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1271))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1271)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_JUMP::class_func_new (constinArgument_inInstructionLocation, GALGAS_lstring::class_func_new (constinArgument_inTargetLabel, constinArgument_inInstructionLocation, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1279)), GALGAS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1280)), GALGAS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1281))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1277))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1277)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_bitTest_in_structured_if_condition computeInstructionCountForCondition'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::method_computeInstructionCountForCondition (const GALGAS_bool /* constinArgument_inComplementaryBranch */,
                                                                                                                  GALGAS_uint & outArgument_outInstructionCount,
                                                                                                                  Compiler * /* inCompiler */
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionCount = GALGAS_uint (uint32_t (2U)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_structured_if build_midrange_ipic_instructionList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_structured_5F_if::method_build_5F_midrange_5F_ipic_5F_instructionList (const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                                                            const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                            const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                            GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                            GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                            GALGAS_string & ioArgument_ioListFileContents,
                                                                                                            const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                                            GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                                            const GALGAS_bool constinArgument_inShouldPreserveBank,
                                                                                                            GALGAS_bool & ioArgument_ioContinuesInSequence,
                                                                                                            const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                                                            GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_generateComplementaryCondition_46546 = GALGAS_bool (false) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_uint var_directCount_46696 ;
      const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_1 = this ;
      callExtensionMethod_computeInstructionCountForCondition ((cPtr_midrange_5F_conditionExpression *) temp_1.readProperty_mIfCondition ().ptr (), GALGAS_bool (true), var_directCount_46696, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1311)) ;
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_3 = this ;
        test_2 = GALGAS_bool (ComparisonKind::greaterThan, temp_3.readProperty_mElseInstructionList ().getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1312)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_2) {
          var_directCount_46696.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1313)) ;
        }
      }
      GALGAS_uint var_complementaryCount_46881 ;
      const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_4 = this ;
      callExtensionMethod_computeInstructionCountForCondition ((cPtr_midrange_5F_conditionExpression *) temp_4.readProperty_mIfCondition ().ptr (), GALGAS_bool (false), var_complementaryCount_46881, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1315)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_6 = this ;
        test_5 = GALGAS_bool (ComparisonKind::greaterThan, temp_6.readProperty_mThenInstructionList ().getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1316)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_5) {
          var_complementaryCount_46881.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1317)) ;
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = GALGAS_bool (ComparisonKind::lowerThan, var_complementaryCount_46881.objectCompare (var_directCount_46696)).boolEnum () ;
        if (kBoolTrue == test_7) {
          var_generateComplementaryCondition_46546 = GALGAS_bool (true) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1321)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1321)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1321)).add_operation (GALGAS_string (": generates complementary test (saves "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1321)).add_operation (var_directCount_46696.substract_operation (var_complementaryCount_46881, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1322)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1322)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1321)).add_operation (GALGAS_string (" instruction"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1322)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1321)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = GALGAS_bool (ComparisonKind::greaterThan, var_directCount_46696.substract_operation (var_complementaryCount_46881, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1323)).objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
            if (kBoolTrue == test_8) {
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("s"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1324)) ;
            }
          }
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1326)) ;
        }
      }
    }
  }
  GALGAS_uint var_elseBranchFinalBank_47517 = ioArgument_ioCurrentBank ;
  GALGAS_uint var_thenBranchFinalBank_47565 = ioArgument_ioCurrentBank ;
  GALGAS_bool var_elseContinuesInSequence_47613 ;
  GALGAS_bool var_thenContinuesInSequence_47649 ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_generateComplementaryCondition_46546.boolEnum () ;
    if (kBoolTrue == test_9) {
      GALGAS_string var_label_5F_nextCondition_47737 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1335)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1335)) ;
      ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1335)) ;
      GALGAS_string var_label_5F_endOfIfinstruction_47834 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1336)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1336)) ;
      ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1336)) ;
      const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_10 = this ;
      const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_11 = this ;
      callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) temp_10.readProperty_mIfCondition ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (false), temp_11.readProperty_mInstructionLocation (), var_label_5F_nextCondition_47737, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1338)) ;
      {
      const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_12 = this ;
      routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_12.readProperty_mElseInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_elseBranchFinalBank_47517, constinArgument_inShouldPreserveBank, var_elseContinuesInSequence_47613, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1352)) ;
      }
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_14 = this ;
        test_13 = GALGAS_bool (ComparisonKind::greaterThan, temp_14.readProperty_mThenInstructionList ().getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1368)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_13) {
          const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_15 = this ;
          const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_16 = this ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_GOTO::class_func_new (temp_15.readProperty_mInstructionLocation (), GALGAS_lstring::class_func_new (var_label_5F_endOfIfinstruction_47834, temp_16.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1369))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1369))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1369)) ;
        }
      }
      const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_17 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::class_func_new (GALGAS_lstring::class_func_new (var_label_5F_nextCondition_47737, temp_17.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1371)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1371))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1371)) ;
      {
      const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_18 = this ;
      routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_18.readProperty_mThenInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_thenBranchFinalBank_47565, constinArgument_inShouldPreserveBank, var_thenContinuesInSequence_47649, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1372)) ;
      }
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_20 = this ;
        test_19 = GALGAS_bool (ComparisonKind::greaterThan, temp_20.readProperty_mThenInstructionList ().getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1387)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_19) {
          const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_21 = this ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::class_func_new (GALGAS_lstring::class_func_new (var_label_5F_endOfIfinstruction_47834, temp_21.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1388)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1388))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1388)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_9) {
    GALGAS_string var_label_5F_nextCondition_49733 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1392)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1392)) ;
    ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1392)) ;
    GALGAS_string var_label_5F_endOfIfinstruction_49830 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1393)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1393)) ;
    ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1393)) ;
    const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_22 = this ;
    const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_23 = this ;
    callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) temp_22.readProperty_mIfCondition ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), temp_23.readProperty_mInstructionLocation (), var_label_5F_nextCondition_49733, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1395)) ;
    {
    const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_24 = this ;
    routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_24.readProperty_mThenInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_thenBranchFinalBank_47565, constinArgument_inShouldPreserveBank, var_thenContinuesInSequence_47649, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1409)) ;
    }
    enumGalgasBool test_25 = kBoolTrue ;
    if (kBoolTrue == test_25) {
      const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_26 = this ;
      test_25 = GALGAS_bool (ComparisonKind::greaterThan, temp_26.readProperty_mElseInstructionList ().getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1425)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_25) {
        const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_27 = this ;
        const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_28 = this ;
        ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_GOTO::class_func_new (temp_27.readProperty_mInstructionLocation (), GALGAS_lstring::class_func_new (var_label_5F_endOfIfinstruction_49830, temp_28.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1426))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1426))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1426)) ;
      }
    }
    const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_29 = this ;
    ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::class_func_new (GALGAS_lstring::class_func_new (var_label_5F_nextCondition_49733, temp_29.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1428)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1428))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1428)) ;
    {
    const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_30 = this ;
    routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_30.readProperty_mElseInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_elseBranchFinalBank_47517, constinArgument_inShouldPreserveBank, var_elseContinuesInSequence_47613, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1429)) ;
    }
    enumGalgasBool test_31 = kBoolTrue ;
    if (kBoolTrue == test_31) {
      const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_32 = this ;
      test_31 = GALGAS_bool (ComparisonKind::greaterThan, temp_32.readProperty_mElseInstructionList ().getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1444)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_31) {
        const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_33 = this ;
        ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::class_func_new (GALGAS_lstring::class_func_new (var_label_5F_endOfIfinstruction_49830, temp_33.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1445)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1445))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1445)) ;
      }
    }
  }
  enumGalgasBool test_34 = kBoolTrue ;
  if (kBoolTrue == test_34) {
    test_34 = GALGAS_bool (ComparisonKind::equal, var_elseBranchFinalBank_47517.objectCompare (var_thenBranchFinalBank_47565)).boolEnum () ;
    if (kBoolTrue == test_34) {
      ioArgument_ioCurrentBank = var_elseBranchFinalBank_47517 ;
    }
  }
  if (kBoolFalse == test_34) {
    const GALGAS_midrange_5F_instruction_5F_structured_5F_if temp_35 = this ;
    TC_Array <FixItDescription> fixItArray36 ;
    inCompiler->emitSemanticError (temp_35.readProperty_mEndOfElsePartLocation (), GALGAS_string ("This branch does not leave bank selection value as the first one does"), fixItArray36  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1451)) ;
    var_elseBranchFinalBank_47517 = GALGAS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1452)) ;
  }
  ioArgument_ioContinuesInSequence = var_thenContinuesInSequence_47649.operator_or (var_elseContinuesInSequence_47613 COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1455)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_do_while build_midrange_ipic_instructionList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_do_5F_while::method_build_5F_midrange_5F_ipic_5F_instructionList (const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                                                       const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                       const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                       GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                       GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                       GALGAS_string & ioArgument_ioListFileContents,
                                                                                                       const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                                       GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                                       const GALGAS_bool constinArgument_inShouldPreserveBank,
                                                                                                       GALGAS_bool & ioArgument_ioContinuesInSequence,
                                                                                                       const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                                                       GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_labelInstructionBegin_52696 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1474)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1474)) ;
  ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1474)) ;
  const GALGAS_midrange_5F_instruction_5F_do_5F_while temp_0 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::class_func_new (GALGAS_lstring::class_func_new (var_labelInstructionBegin_52696, temp_0.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1476)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1476))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1476)) ;
  GALGAS_uint var_finalBank_52987 = ioArgument_ioCurrentBank ;
  {
  const GALGAS_midrange_5F_instruction_5F_do_5F_while temp_1 = this ;
  routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_1.readProperty_mRepeatedInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_finalBank_52987, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1479)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank_52987)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_midrange_5F_instruction_5F_do_5F_while temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfRepeatedInstructionList (), GALGAS_string ("This branch does not leave bank selection value unchanged"), fixItArray4  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1495)) ;
    }
  }
  const GALGAS_midrange_5F_instruction_5F_do_5F_while temp_5 = this ;
  cEnumerator_midrange_5F_partList enumerator_53558 (temp_5.readProperty_mWhilePartList (), EnumerationOrder::up) ;
  while (enumerator_53558.hasCurrentObject ()) {
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (ComparisonKind::equal, enumerator_53558.current_mInstructionList (HERE).getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1499)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        const GALGAS_midrange_5F_instruction_5F_do_5F_while temp_7 = this ;
        callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) enumerator_53558.current_mCondition (HERE).ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (false), temp_7.readProperty_mInstructionLocation (), var_labelInstructionBegin_52696, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1500)) ;
      }
    }
    if (kBoolFalse == test_6) {
      GALGAS_string var_nextBranchLabel_54032 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1514)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1514)) ;
      ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1514)) ;
      const GALGAS_midrange_5F_instruction_5F_do_5F_while temp_8 = this ;
      callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) enumerator_53558.current_mCondition (HERE).ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GALGAS_bool (true), temp_8.readProperty_mInstructionLocation (), var_nextBranchLabel_54032, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1515)) ;
      GALGAS_uint var_bank_54475 = ioArgument_ioCurrentBank ;
      {
      routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (enumerator_53558.current_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_bank_54475, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1529)) ;
      }
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = GALGAS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (var_bank_54475)).boolEnum () ;
        if (kBoolTrue == test_9) {
          TC_Array <FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (enumerator_53558.current_mEndOfPartLocation (HERE), GALGAS_string ("This branch does not leave bank selection value unchanged"), fixItArray10  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1545)) ;
        }
      }
      const GALGAS_midrange_5F_instruction_5F_do_5F_while temp_11 = this ;
      const GALGAS_midrange_5F_instruction_5F_do_5F_while temp_12 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_GOTO::class_func_new (temp_11.readProperty_mInstructionLocation (), GALGAS_lstring::class_func_new (var_labelInstructionBegin_52696, temp_12.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1547))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1547))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1547)) ;
      const GALGAS_midrange_5F_instruction_5F_do_5F_while temp_13 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::class_func_new (GALGAS_lstring::class_func_new (var_nextBranchLabel_54032, temp_13.readProperty_mInstructionLocation (), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1548)), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1548))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1548)) ;
    }
    enumerator_53558.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_instruction_IF_IncDec build_midrange_ipic_instructionList'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::method_build_5F_midrange_5F_ipic_5F_instructionList (const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                                                        const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                        const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                        GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                        GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                        GALGAS_string & ioArgument_ioListFileContents,
                                                                                                        const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                                        GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                                        const GALGAS_bool constinArgument_inShouldPreserveBank,
                                                                                                        GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                        const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                                                        GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code var_baseCode_55993 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec temp_1 = this ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (kBoolTrue == test_0) {
      var_baseCode_55993 = GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_INCFSZ (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1571)) ;
    }
  }
  if (kBoolFalse == test_0) {
    var_baseCode_55993 = GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_DECFSZ (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1573)) ;
  }
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_56302 ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec temp_2 = this ;
  GALGAS_bitSliceTable joker_56330 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_2.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_56302, joker_56330, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1576)) ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec temp_3 = this ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec temp_4 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::class_func_new (temp_3.readProperty_mInstructionLocation (), var_baseCode_55993, var_IPICregisterDescription_56302, temp_4.readProperty_m_5F_W_5F_isDestination ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1586))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1586)) ;
  GALGAS_bool var_unusedContinuesInSequence_56565 = GALGAS_bool (true) ;
  const GALGAS_midrange_5F_instruction_5F_IF_5F_IncDec temp_5 = this ;
  callExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList ((cPtr_midrange_5F_instruction *) temp_5.readProperty_mInstruction ().ptr (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBank, var_unusedContinuesInSequence_56565, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1594)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'build_midrange_assembly_instruction_list???????!&&'
//
//--------------------------------------------------------------------------------------------------

void routine_build_5F_midrange_5F_assembly_5F_instruction_5F_list_3F__3F__3F__3F__3F__3F__3F__21__26__26_ (const GALGAS_uint constinArgument_inTotalPageCount,
                                                                                                           const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                                           const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                           const GALGAS_string constinArgument_inSharedRAMBankName,
                                                                                                           const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                           const GALGAS_midrange_5F_model constinArgument_inPiccoloModel,
                                                                                                           const GALGAS_bool constinArgument_inHasInterrupt,
                                                                                                           GALGAS_midrange_5F_intermediate_5F_instructionList & outArgument_outGeneratedInstructionList,
                                                                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                                                                           GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedInstructionList.drop () ; // Release 'out' argument
  GALGAS_string var_generationOptimizationMessages_57474 = GALGAS_string::makeEmptyString () ;
  GALGAS_routineMap var_routineMap_57568 = GALGAS_routineMap::class_func_emptyMap (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1626)) ;
  cEnumerator_midrange_5F_routineDefinitionList enumerator_57682 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), EnumerationOrder::up) ;
  while (enumerator_57682.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (ComparisonKind::notEqual, enumerator_57682.current_mRequiredBank (HERE).readProperty_uint ().objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1628)))).operator_and (GALGAS_bool (ComparisonKind::greaterThan, enumerator_57682.current_mRequiredBank (HERE).readProperty_uint ().objectCompare (GALGAS_uint (uint32_t (15U)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1628)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_57682.current_mRequiredBank (HERE).readProperty_location (), GALGAS_string ("the required bank value should be lower or equal to 15"), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1629)) ;
      }
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (ComparisonKind::notEqual, enumerator_57682.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1631)))).operator_and (GALGAS_bool (ComparisonKind::greaterThan, enumerator_57682.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GALGAS_uint (uint32_t (15U)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1631)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_57682.current_mReturnedBank (HERE).readProperty_location (), GALGAS_string ("the returned bank value should be lower or equal to 15"), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1632)) ;
      }
    }
    {
    var_routineMap_57568.setter_insertKey (enumerator_57682.current_mRoutineName (HERE), enumerator_57682.current_mIsNoReturn (HERE), enumerator_57682.current_mRequiredBank (HERE).readProperty_uint (), enumerator_57682.current_mReturnedBank (HERE).readProperty_uint (), enumerator_57682.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1634)) ;
    }
    enumerator_57682.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      routine_print_5F_constant_5F_definition_3F__26_ (constinArgument_inConstantMap, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1652)) ;
      }
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_routineMap_57568.getter_hasKey (GALGAS_string ("main") COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1658)).boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_bool var_isNoReturn_59260 ;
      GALGAS_uint var_requiredBank_59282 ;
      GALGAS_uint joker_59295 ; // Joker input parameter
      GALGAS_bool joker_59298 ; // Joker input parameter
      var_routineMap_57568.method_searchKey (GALGAS_lstring::class_func_new (GALGAS_string ("main"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1659)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1659)), var_isNoReturn_59260, var_requiredBank_59282, joker_59295, joker_59298, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1659)) ;
      GALGAS_location var_mainDeclarationLocation_59320 = var_routineMap_57568.getter_locationForKey (GALGAS_string ("main"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1660)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_isNoReturn_59260.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1661)).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (var_mainDeclarationLocation_59320, GALGAS_string ("the \"main\" should be declared with \"noreturn\" qualifier: \"noreturn main bank:requires 0\""), fixItArray7  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1662)) ;
        }
      }
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GALGAS_bool (ComparisonKind::notEqual, var_requiredBank_59282.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_mainDeclarationLocation_59320, GALGAS_string ("the \"main\" should be declared with \"requires:bank 0\" qualifier: \"noreturn main bank:requires 0\""), fixItArray9  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1665)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_5) {
    TC_Array <FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mEndOfProgram (), GALGAS_string ("the program should declare the \"main\" routine"), fixItArray10  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1668)) ;
  }
  GALGAS_uint var_localLabelIndex_59903 = GALGAS_uint (uint32_t (0U)) ;
  {
  routine_handleInterruptRoutine_3F__3F__3F__3F__3F__3F__3F__3F__26__26__26__21__26_ (constinArgument_inPiccoloModel, constinArgument_inHasInterrupt, constinArgument_inRegisterTable, constinArgument_inSharedRAMBankName, var_routineMap_57568, constinArgument_inTotalBankCount, constinArgument_inConstantMap, constinArgument_inTotalPageCount, var_generationOptimizationMessages_57474, var_localLabelIndex_59903, ioArgument_ioListFileContents, outArgument_outGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1672)) ;
  }
  GALGAS_uint var_currentPage_60333 = GALGAS_uint (uint32_t (0U)) ;
  if (constinArgument_inTotalPageCount.isValid ()) {
    uint32_t variant_60351 = constinArgument_inTotalPageCount.uintValue () ;
    bool loop_60351 = true ;
    while (loop_60351) {
      loop_60351 = GALGAS_bool (ComparisonKind::lowerThan, var_currentPage_60333.objectCompare (constinArgument_inTotalPageCount)).isValid () ;
      if (loop_60351) {
        loop_60351 = GALGAS_bool (ComparisonKind::lowerThan, var_currentPage_60333.objectCompare (constinArgument_inTotalPageCount)).boolValue () ;
      }
      if (loop_60351 && (0 == variant_60351)) {
        loop_60351 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1689)) ;
      }
      if (loop_60351) {
        variant_60351 -- ;
        GALGAS_bool var_orgGenerated_60429 = GALGAS_bool (ComparisonKind::equal, var_currentPage_60333.objectCompare (GALGAS_uint (uint32_t (0U)))) ;
        cEnumerator_midrange_5F_routineDefinitionList enumerator_60585 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), EnumerationOrder::up) ;
        while (enumerator_60585.hasCurrentObject ()) {
          enumGalgasBool test_11 = kBoolTrue ;
          if (kBoolTrue == test_11) {
            test_11 = GALGAS_bool (ComparisonKind::equal, enumerator_60585.current_mPage (HERE).readProperty_uint ().objectCompare (var_currentPage_60333)).boolEnum () ;
            if (kBoolTrue == test_11) {
              enumGalgasBool test_12 = kBoolTrue ;
              if (kBoolTrue == test_12) {
                test_12 = var_orgGenerated_60429.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1693)).boolEnum () ;
                if (kBoolTrue == test_12) {
                  outArgument_outGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG::class_func_new (var_currentPage_60333.multiply_operation (GALGAS_uint (uint32_t (2048U)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1694))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1694))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1694)) ;
                  var_orgGenerated_60429 = GALGAS_bool (true) ;
                }
              }
              GALGAS_uint var_currentBank_60870 = enumerator_60585.current_mRequiredBank (HERE).readProperty_uint () ;
              GALGAS_routineKind var_routineKind_60928 ;
              enumGalgasBool test_13 = kBoolTrue ;
              if (kBoolTrue == test_13) {
                test_13 = enumerator_60585.current_mIsNoReturn (HERE).boolEnum () ;
                if (kBoolTrue == test_13) {
                  var_routineKind_60928 = GALGAS_routineKind::class_func_noReturnRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1700)) ;
                }
              }
              if (kBoolFalse == test_13) {
                var_routineKind_60928 = GALGAS_routineKind::class_func_regularRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1702)) ;
              }
              outArgument_outGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::class_func_new (enumerator_60585.current_mRoutineName (HERE), GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1704))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1704)) ;
              GALGAS_bool var_continuesInSequence_61550 ;
              {
              routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (enumerator_60585.current_mInstructionList (HERE), var_routineMap_57568, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_localLabelIndex_59903, outArgument_outGeneratedInstructionList, var_generationOptimizationMessages_57474, constinArgument_inTotalBankCount, var_currentBank_60870, enumerator_60585.current_mPreservesBank (HERE), var_continuesInSequence_61550, var_routineKind_60928, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1705)) ;
              }
              enumGalgasBool test_14 = kBoolTrue ;
              if (kBoolTrue == test_14) {
                test_14 = enumerator_60585.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1720)).operator_and (GALGAS_bool (ComparisonKind::notEqual, enumerator_60585.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1720)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1720)).operator_and (GALGAS_bool (ComparisonKind::notEqual, var_currentBank_60870.objectCompare (enumerator_60585.current_mReturnedBank (HERE).readProperty_uint ())) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1720)).boolEnum () ;
                if (kBoolTrue == test_14) {
                  TC_Array <FixItDescription> fixItArray15 ;
                  inCompiler->emitSemanticError (enumerator_60585.current_mRoutineName (HERE).readProperty_location (), GALGAS_string ("execution will not set bank selection to ").add_operation (enumerator_60585.current_mReturnedBank (HERE).readProperty_uint ().getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1721)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1721)), fixItArray15  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1721)) ;
                }
              }
              enumGalgasBool test_16 = kBoolTrue ;
              if (kBoolTrue == test_16) {
                test_16 = enumerator_60585.current_mIsNoReturn (HERE).operator_and (var_continuesInSequence_61550 COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1723)).boolEnum () ;
                if (kBoolTrue == test_16) {
                  TC_Array <FixItDescription> fixItArray17 ;
                  inCompiler->emitSemanticError (enumerator_60585.current_mRoutineName (HERE).readProperty_location (), GALGAS_string ("execution should not reach the end of a \"noreturn\" routine"), fixItArray17  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1724)) ;
                }
              }
              enumGalgasBool test_18 = kBoolTrue ;
              if (kBoolTrue == test_18) {
                test_18 = enumerator_60585.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1727)).boolEnum () ;
                if (kBoolTrue == test_18) {
                  outArgument_outGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN::class_func_new (enumerator_60585.current_mRoutineName (HERE).readProperty_location ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1728))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1728)) ;
                }
              }
            }
          }
          enumerator_60585.gotoNextObject () ;
        }
        var_currentPage_60333.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1732)) ;
      }
    }
  }
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    test_19 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_19) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1736)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1736)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1736)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("IPIC INSTRUCTION LIST").getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (117U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1737)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1737)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1737)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1737)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1738)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1738)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1738)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Generated intermediate code:\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1739)) ;
      GALGAS_uint var_idx_62691 = GALGAS_uint (uint32_t (0U)) ;
      GALGAS_uint var_currentAddress_62713 = GALGAS_uint (uint32_t (0U)) ;
      cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_62741 (outArgument_outGeneratedInstructionList, EnumerationOrder::up) ;
      while (enumerator_62741.hasCurrentObject ()) {
        callExtensionMethod_setCurrentAddress ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_62741.current_mInstruction (HERE).ptr (), var_currentAddress_62713, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1743)) ;
        ioArgument_ioListFileContents.plusAssign_operation(var_idx_62691.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1744)).getter_stringByLeftPadding (GALGAS_uint (uint32_t (5U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1744)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1744)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1744)) ;
        callExtensionMethod_print ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_62741.current_mInstruction (HERE).ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1745)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1746)) ;
        var_idx_62691.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1747)) ;
        enumerator_62741.gotoNextObject () ;
      }
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1749)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Minimum code size without optimization: ").add_operation (var_currentAddress_62713.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1750)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1750)).add_operation (GALGAS_string (" instructions.\n\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1750)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1750)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'interruptRoutineShouldSavePCLATH??&!'
//
//--------------------------------------------------------------------------------------------------

void routine_interruptRoutineShouldSavePCLATH_3F__3F__26__21_ (const GALGAS_midrange_5F_model constinArgument_inPiccoloModel,
                                                               const GALGAS_uint constinArgument_inTotalPageCount,
                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                               GALGAS_bool & outArgument_outShouldSavePCLATH,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outShouldSavePCLATH.drop () ; // Release 'out' argument
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("PCLATH should be saved \?\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1761)) ;
  outArgument_outShouldSavePCLATH = GALGAS_bool (false) ;
  cEnumerator_midrange_5F_routineDefinitionList enumerator_63576 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), EnumerationOrder::up) ;
  while (enumerator_63576.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_63576.current_mPage (HERE).readProperty_uint ().objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        outArgument_outShouldSavePCLATH = GALGAS_bool (true) ;
      }
    }
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (ComparisonKind::greaterOrEqual, enumerator_63576.current_mPage (HERE).readProperty_uint ().objectCompare (constinArgument_inTotalPageCount)).boolEnum () ;
      if (kBoolTrue == test_1) {
        TC_Array <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_63576.current_mPage (HERE).readProperty_location (), GALGAS_string ("invalid value (").add_operation (enumerator_63576.current_mPage (HERE).readProperty_uint ().getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1769)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1769)).add_operation (GALGAS_string ("); the device has "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1769)).add_operation (constinArgument_inTotalPageCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1769)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1769)).add_operation (GALGAS_string (" 2k page(s) on rom"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1769)), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1769)) ;
      }
    }
    enumerator_63576.gotoNextObject () ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1772)).boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  No, program uses only page 0.\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1773)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = outArgument_outShouldSavePCLATH.boolEnum () ;
    if (kBoolTrue == test_4) {
      outArgument_outShouldSavePCLATH = GALGAS_bool (false) ;
      cEnumerator_midrange_5F_interruptDefinitionList enumerator_64153 (constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList (), EnumerationOrder::up) ;
      bool bool_5 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1778)).isValidAndTrue () ;
      if (enumerator_64153.hasCurrentObject () && bool_5) {
        while (enumerator_64153.hasCurrentObject () && bool_5) {
          cEnumerator_midrange_5F_instructionList enumerator_64244 (enumerator_64153.current_mInstructionList (HERE), EnumerationOrder::up) ;
          bool bool_6 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1779)).isValidAndTrue () ;
          if (enumerator_64244.hasCurrentObject () && bool_6) {
            while (enumerator_64244.hasCurrentObject () && bool_6) {
              callExtensionMethod_instructionUsesGOTOorCALL ((cPtr_midrange_5F_instruction *) enumerator_64244.current_mInstruction (HERE).ptr (), outArgument_outShouldSavePCLATH, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1780)) ;
              enumerator_64244.gotoNextObject () ;
              if (enumerator_64244.hasCurrentObject ()) {
                bool_6 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1779)).isValidAndTrue () ;
              }
            }
          }
          enumerator_64153.gotoNextObject () ;
          if (enumerator_64153.hasCurrentObject ()) {
            bool_5 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1778)).isValidAndTrue () ;
          }
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = outArgument_outShouldSavePCLATH.boolEnum () ;
        if (kBoolTrue == test_7) {
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  Yes, program uses several pages and interrupt routine use CALL or GOTO instruction.\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1784)) ;
        }
      }
      if (kBoolFalse == test_7) {
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  No, program uses several pages, but interrupt routine does not use CALL or GOTO instruction.\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1786)) ;
      }
    }
  }
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1789)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handleInterruptRoutine????????&&&!&'
//
//--------------------------------------------------------------------------------------------------

void routine_handleInterruptRoutine_3F__3F__3F__3F__3F__3F__3F__3F__26__26__26__21__26_ (const GALGAS_midrange_5F_model constinArgument_inPiccoloModel,
                                                                                         const GALGAS_bool constinArgument_inHasInterrupt,
                                                                                         const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                         const GALGAS_string constinArgument_inSharedRAMBankName,
                                                                                         const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                                         const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                         const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                         const GALGAS_uint constinArgument_inTotalPageCount,
                                                                                         GALGAS_string & ioArgument_ioGenerationOptimizationMessages,
                                                                                         GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                                         GALGAS_midrange_5F_intermediate_5F_instructionList & outArgument_outGeneratedInstructionList,
                                                                                         GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedInstructionList.drop () ; // Release 'out' argument
  outArgument_outGeneratedInstructionList = GALGAS_midrange_5F_intermediate_5F_instructionList::class_func_emptyList (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1813)) ;
  outArgument_outGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_JUMP::class_func_new (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1816)), GALGAS_lstring::class_func_new (GALGAS_string ("main"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1817)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1817)), GALGAS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1818)), GALGAS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1819))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1815))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1815)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inHasInterrupt.boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1822)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1822)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1822)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("INTERRUPT ROUTINE").getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (117U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1823)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1823)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1823)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1823)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1824)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1824)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1824)) ;
      GALGAS_bool var_shouldSavePCLATH_66514 ;
      {
      routine_interruptRoutineShouldSavePCLATH_3F__3F__26__21_ (constinArgument_inPiccoloModel, constinArgument_inTotalPageCount, ioArgument_ioListFileContents, var_shouldSavePCLATH_66514, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1826)) ;
      }
      outArgument_outGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG::class_func_new (GALGAS_uint (uint32_t (4U))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1833))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1833)) ;
      cEnumerator_midrange_5F_interruptDefinitionList enumerator_66694 (constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList (), EnumerationOrder::up) ;
      while (enumerator_66694.hasCurrentObject ()) {
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inSharedRAMBankName.objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            routine_generateInterruptRoutineForControllerWithSharedRAM_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__26__26__26_ (constinArgument_inTotalBankCount, constinArgument_inRegisterTable, enumerator_66694.current_mFirstSaveRegister (HERE), enumerator_66694.current_mSecondSaveRegister (HERE), var_shouldSavePCLATH_66514, enumerator_66694.current_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inConstantMap, enumerator_66694.current_mEndOfInterruptLocation (HERE), outArgument_outGeneratedInstructionList, ioArgument_ioLocalLabelIndex, ioArgument_ioGenerationOptimizationMessages, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1836)) ;
            }
          }
        }
        if (kBoolFalse == test_1) {
          {
          routine_generateInterruptRoutineForControllerWithoutSharedRAM_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__26__26__26_ (constinArgument_inTotalBankCount, constinArgument_inRegisterTable, enumerator_66694.current_mFirstSaveRegister (HERE), enumerator_66694.current_mSecondSaveRegister (HERE), var_shouldSavePCLATH_66514, enumerator_66694.current_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inConstantMap, enumerator_66694.current_mEndOfInterruptLocation (HERE), outArgument_outGeneratedInstructionList, ioArgument_ioLocalLabelIndex, ioArgument_ioGenerationOptimizationMessages, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1852)) ;
          }
        }
        enumerator_66694.gotoNextObject () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateInterruptRoutineForControllerWithSharedRAM?????????&&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateInterruptRoutineForControllerWithSharedRAM_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__26__26__26_ (const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                                                     const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                                     const GALGAS_lstring constinArgument_inFirstSaveRegister,
                                                                                                                     const GALGAS_lstring constinArgument_inSecondSaveRegister,
                                                                                                                     const GALGAS_bool constinArgument_inNeedsToSavePCLATH,
                                                                                                                     const GALGAS_midrange_5F_instructionList constinArgument_inInterruptRoutineInstructionList,
                                                                                                                     const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                                                                     const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                                     const GALGAS_location constinArgument_inEndOfInterruptLocation,
                                                                                                                     GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                     GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                                     GALGAS_string & ioArgument_ioGenerationOptimizationMessages,
                                                                                                                     GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uintlist var_registerAddressList_68615 ;
  GALGAS_uint var_size_68642 ;
  GALGAS_registerProtection var_firstProtection_68656 ;
  GALGAS_bitSliceTable joker_68647_2 ; // Joker input parameter
  GALGAS_string joker_68647_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inFirstSaveRegister, var_registerAddressList_68615, var_size_68642, joker_68647_2, joker_68647_1, var_firstProtection_68656, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1889)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, constinArgument_inFirstSaveRegister, GALGAS_bool (true), var_firstProtection_68656, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1890)) ;
  GALGAS_uint var_bankAccessibility_68774 = GALGAS_uint (uint32_t (0U)) ;
  cEnumerator_uintlist enumerator_68803 (var_registerAddressList_68615, EnumerationOrder::up) ;
  while (enumerator_68803.hasCurrentObject ()) {
    var_bankAccessibility_68774 = var_bankAccessibility_68774.operator_or (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1893)).left_shift_operation (enumerator_68803.current_mValue (HERE).right_shift_operation (GALGAS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1893)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1893)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1893)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1893)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1893)) ;
    enumerator_68803.gotoNextObject () ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, var_bankAccessibility_68774.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1895)).objectCompare (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1895)).left_shift_operation (constinArgument_inTotalBankCount, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1895)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1895)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1896)).add_operation (GALGAS_string ("' variable cannot be accessed from any bank"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1896)), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1896)) ;
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (ComparisonKind::notEqual, var_size_68642.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1899)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1899)).add_operation (var_size_68642.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1899)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1899)).add_operation (GALGAS_string (" (it should be 1)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1899)), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1899)) ;
    }
  }
  GALGAS_registerProtection var_secondProtection_69429 ;
  GALGAS_bitSliceTable joker_69420_2 ; // Joker input parameter
  GALGAS_string joker_69420_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inSecondSaveRegister, var_registerAddressList_68615, var_size_68642, joker_69420_2, joker_69420_1, var_secondProtection_69429, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1902)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, constinArgument_inSecondSaveRegister, GALGAS_bool (true), var_secondProtection_69429, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1903)) ;
  var_bankAccessibility_68774 = GALGAS_uint (uint32_t (0U)) ;
  cEnumerator_uintlist enumerator_69569 (var_registerAddressList_68615, EnumerationOrder::up) ;
  while (enumerator_69569.hasCurrentObject ()) {
    var_bankAccessibility_68774 = var_bankAccessibility_68774.operator_or (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1906)).left_shift_operation (enumerator_69569.current_mValue (HERE).right_shift_operation (GALGAS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1906)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1906)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1906)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1906)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1906)) ;
    enumerator_69569.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (ComparisonKind::equal, var_bankAccessibility_68774.operator_and (GALGAS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1908)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1909)).add_operation (GALGAS_string ("' variable cannot be accessed from bank 0"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1909)), fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1909)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = constinArgument_inNeedsToSavePCLATH.operator_and (GALGAS_bool (ComparisonKind::notEqual, var_size_68642.objectCompare (GALGAS_uint (uint32_t (2U)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1911)).boolEnum () ;
    if (kBoolTrue == test_6) {
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1912)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1912)).add_operation (var_size_68642.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1912)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1912)).add_operation (GALGAS_string (" (it should be 2)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1912)), fixItArray7  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1912)) ;
    }
  }
  if (kBoolFalse == test_6) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = constinArgument_inNeedsToSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1913)).operator_and (GALGAS_bool (ComparisonKind::notEqual, var_size_68642.objectCompare (GALGAS_uint (uint32_t (1U)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1913)).boolEnum () ;
      if (kBoolTrue == test_8) {
        TC_Array <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1914)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1914)).add_operation (var_size_68642.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1914)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1914)).add_operation (GALGAS_string (" (it should be 1)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1914)), fixItArray9  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1914)) ;
      }
    }
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1917)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_10) {
      GALGAS_registerExpression var_first_5F_register_70263 = GALGAS_registerExpression::class_func_new (constinArgument_inFirstSaveRegister, GALGAS_immediatInteger::class_func_new (GALGAS_luint::class_func_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1920)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1920))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1920)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1921))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1918)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_first_5F_IPICregisterDescription_70530 ;
      GALGAS_bitSliceTable joker_70566 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_first_5F_register_70263.ptr (), constinArgument_inTotalBankCount, GALGAS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_IPICregisterDescription_70530, joker_70566, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1923)) ;
      GALGAS_registerExpression var_second_5F_register_70607 = GALGAS_registerExpression::class_func_new (constinArgument_inSecondSaveRegister, GALGAS_immediatInteger::class_func_new (GALGAS_luint::class_func_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1934)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1934))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1934)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1935))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1932)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_second_5F_IPICregisterDescription_70908 ;
      GALGAS_bitSliceTable joker_70945 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_second_5F_register_70607.ptr (), constinArgument_inTotalBankCount, GALGAS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_second_5F_IPICregisterDescription_70908, joker_70945, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1937)) ;
      GALGAS_registerExpression var_STATUS_5F_register_71024 = GALGAS_registerExpression::class_func_new (GALGAS_lstring::class_func_new (GALGAS_string ("STATUS"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1948)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1948)), GALGAS_immediatInteger::class_func_new (GALGAS_luint::class_func_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1949)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1949))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1949)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1950))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1947)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_71315 ;
      GALGAS_bitSliceTable joker_71352 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_STATUS_5F_register_71024.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1954)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_71315, joker_71352, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1952)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::class_func_new (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1961)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1961)), var_first_5F_IPICregisterDescription_70530  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1961))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1961)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::class_func_new (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1962)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1962)), var_STATUS_5F_IPICregisterDescription_71315, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1962))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1962)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::class_func_new (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1963)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1963)), var_STATUS_5F_IPICregisterDescription_71315  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1963))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1963)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::class_func_new (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1964)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1964)), var_second_5F_IPICregisterDescription_70908  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1964))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1964)) ;
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
        if (kBoolTrue == test_11) {
          GALGAS_registerExpression var_reg_72113 = GALGAS_registerExpression::class_func_new (constinArgument_inSecondSaveRegister, GALGAS_immediatInteger::class_func_new (GALGAS_luint::class_func_new (GALGAS_uint (uint32_t (1U)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1968)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1968))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1968)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1969))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1966)) ;
          GALGAS_midrange_5F_intermediate_5F_registerExpression var_register_5F_for_5F_saving_5F_PCLATH_5F_description_72537 ;
          GALGAS_bitSliceTable joker_72584 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_reg_72113.ptr (), constinArgument_inTotalBankCount, GALGAS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_register_5F_for_5F_saving_5F_PCLATH_5F_description_72537, joker_72584, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1972)) ;
          GALGAS_registerExpression var_PCLATH_5F_register_72671 = GALGAS_registerExpression::class_func_new (GALGAS_lstring::class_func_new (GALGAS_string ("PCLATH"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1983)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1983)), GALGAS_immediatInteger::class_func_new (GALGAS_luint::class_func_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1984)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1984))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1984)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1985))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1982)) ;
          GALGAS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_72993 ;
          GALGAS_bitSliceTable joker_73032 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_PCLATH_5F_register_72671.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1989)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_72993, joker_73032, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1987)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::class_func_new (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1996)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1996)), var_PCLATH_5F_IPICregisterDescription_72993, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1996))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1996)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::class_func_new (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1997)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1997)), var_register_5F_for_5F_saving_5F_PCLATH_5F_description_72537  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1997))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1997)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::class_func_new (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1998)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1998)), var_PCLATH_5F_IPICregisterDescription_72993  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1998))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1998)) ;
        }
      }
      GALGAS_uint var_currentBank_73651 = GALGAS_uint (uint32_t (0U)) ;
      GALGAS_bool var_continuesInSequence_74031 ;
      {
      routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (constinArgument_inInterruptRoutineInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioGenerationOptimizationMessages, constinArgument_inTotalBankCount, var_currentBank_73651, GALGAS_bool (false), var_continuesInSequence_74031, GALGAS_routineKind::class_func_interruptRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2014)), ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2002)) ;
      }
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = var_continuesInSequence_74031.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2017)).boolEnum () ;
        if (kBoolTrue == test_12) {
          TC_Array <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (constinArgument_inEndOfInterruptLocation, GALGAS_string ("execution cannot reach the end of the interrupt routine"), fixItArray13  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2018)) ;
        }
      }
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        test_14 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
        if (kBoolTrue == test_14) {
          GALGAS_registerExpression var_reg_74300 = GALGAS_registerExpression::class_func_new (constinArgument_inSecondSaveRegister, GALGAS_immediatInteger::class_func_new (GALGAS_luint::class_func_new (GALGAS_uint (uint32_t (1U)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2023)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2023))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2023)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2024))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2021)) ;
          GALGAS_midrange_5F_intermediate_5F_registerExpression var_register_5F_for_5F_saving_5F_PCLATH_5F_description_74610 ;
          GALGAS_bitSliceTable joker_74657 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_reg_74300.ptr (), constinArgument_inTotalBankCount, GALGAS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_register_5F_for_5F_saving_5F_PCLATH_5F_description_74610, joker_74657, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2026)) ;
          GALGAS_registerExpression var_PCLATH_5F_register_74744 = GALGAS_registerExpression::class_func_new (GALGAS_lstring::class_func_new (GALGAS_string ("PCLATH"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2037)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2037)), GALGAS_immediatInteger::class_func_new (GALGAS_luint::class_func_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2038)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2038))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2038)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2039))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2036)) ;
          GALGAS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_75065 ;
          GALGAS_bitSliceTable joker_75104 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_PCLATH_5F_register_74744.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2043)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_75065, joker_75104, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2041)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::class_func_new (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2050)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2050)), var_register_5F_for_5F_saving_5F_PCLATH_5F_description_74610, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2050))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2050)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::class_func_new (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2051)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2051)), var_PCLATH_5F_IPICregisterDescription_75065  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2051))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2051)) ;
        }
      }
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::class_func_new (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2054)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2054)), var_second_5F_IPICregisterDescription_70908, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2054))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2054)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::class_func_new (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2055)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2055)), var_STATUS_5F_IPICregisterDescription_71315  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2055))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2055)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::class_func_new (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2056)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2056)), var_first_5F_IPICregisterDescription_70530, GALGAS_bool (false)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2056))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2056)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::class_func_new (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2057)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2057)), var_first_5F_IPICregisterDescription_70530, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2057))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2057)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::class_func_new (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2059))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2059))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2059)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateInterruptRoutineForControllerWithoutSharedRAM?????????&&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateInterruptRoutineForControllerWithoutSharedRAM_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__26__26__26_ (const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                                                        const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                                        const GALGAS_lstring constinArgument_inFirstSaveRegister,
                                                                                                                        const GALGAS_lstring constinArgument_inSecondSaveRegister,
                                                                                                                        const GALGAS_bool constinArgument_inNeedsToSavePCLATH,
                                                                                                                        const GALGAS_midrange_5F_instructionList constinArgument_inInterruptRoutineInstructionList,
                                                                                                                        const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                                                                        const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                                        const GALGAS_location constinArgument_inEndOfInterruptLocation,
                                                                                                                        GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                        GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                                        GALGAS_string & ioArgument_ioGenerationOptimizationMessages,
                                                                                                                        GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsedRegisters.addAssign_operation (constinArgument_inFirstSaveRegister.readProperty_string ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2081)) ;
  GALGAS_uintlist var_registerAddressList_77234 ;
  GALGAS_uint var_size_77261 ;
  GALGAS_registerProtection var_firstProtection_77275 ;
  GALGAS_bitSliceTable joker_77266_2 ; // Joker input parameter
  GALGAS_string joker_77266_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inFirstSaveRegister, var_registerAddressList_77234, var_size_77261, joker_77266_2, joker_77266_1, var_firstProtection_77275, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2082)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, constinArgument_inFirstSaveRegister, GALGAS_bool (true), var_firstProtection_77275, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2083)) ;
  GALGAS_bool var_accessibleFromBank_30__77393 = GALGAS_bool (false) ;
  GALGAS_uint var_offset_77433 = GALGAS_uint (uint32_t (0U)) ;
  cEnumerator_uintlist enumerator_77463 (var_registerAddressList_77234, EnumerationOrder::up) ;
  bool bool_0 = var_accessibleFromBank_30__77393.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2086)).isValidAndTrue () ;
  if (enumerator_77463.hasCurrentObject () && bool_0) {
    while (enumerator_77463.hasCurrentObject () && bool_0) {
      var_offset_77433 = enumerator_77463.current_mValue (HERE).operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2087)) ;
      var_accessibleFromBank_30__77393 = GALGAS_bool (ComparisonKind::equal, enumerator_77463.current_mValue (HERE).operator_and (GALGAS_uint (uint32_t (3968U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2088)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
      enumerator_77463.gotoNextObject () ;
      if (enumerator_77463.hasCurrentObject ()) {
        bool_0 = var_accessibleFromBank_30__77393.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2086)).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_accessibleFromBank_30__77393.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2090)).boolEnum () ;
    if (kBoolTrue == test_1) {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2091)).add_operation (GALGAS_string ("' variable cannot be accessed from bank 0"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2091)), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2091)) ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = constinArgument_inNeedsToSavePCLATH.operator_and (GALGAS_bool (ComparisonKind::notEqual, var_size_77261.objectCompare (GALGAS_uint (uint32_t (3U)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2093)).boolEnum () ;
    if (kBoolTrue == test_3) {
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2094)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2094)).add_operation (var_size_77261.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2094)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2094)).add_operation (GALGAS_string (" (it should be 3)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2094)), fixItArray4  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2094)) ;
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = constinArgument_inNeedsToSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2095)).operator_and (GALGAS_bool (ComparisonKind::notEqual, var_size_77261.objectCompare (GALGAS_uint (uint32_t (2U)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2095)).boolEnum () ;
      if (kBoolTrue == test_5) {
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2096)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2096)).add_operation (var_size_77261.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2096)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2096)).add_operation (GALGAS_string (" (it should be 2)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2096)), fixItArray6  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2096)) ;
      }
    }
  }
  GALGAS_uintlist var_saveStatusRegisterAddressList_78226 = var_registerAddressList_77234 ;
  ioArgument_ioUsedRegisters.addAssign_operation (constinArgument_inSecondSaveRegister.readProperty_string ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2100)) ;
  GALGAS_registerProtection var_secondProtection_78415 ;
  GALGAS_bitSliceTable joker_78406_2 ; // Joker input parameter
  GALGAS_string joker_78406_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inSecondSaveRegister, var_registerAddressList_77234, var_size_77261, joker_78406_2, joker_78406_1, var_secondProtection_78415, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2101)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, constinArgument_inSecondSaveRegister, GALGAS_bool (true), var_secondProtection_78415, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2102)) ;
  var_saveStatusRegisterAddressList_78226 = var_saveStatusRegisterAddressList_78226.add_operation (var_registerAddressList_77234, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2103)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (ComparisonKind::notEqual, var_size_77261.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
    if (kBoolTrue == test_7) {
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2105)).add_operation (GALGAS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2105)).add_operation (var_size_77261.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2105)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2105)).add_operation (GALGAS_string (" (it should be 1)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2105)), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2105)) ;
    }
  }
  GALGAS_bool var_accessibleFromBank_31__78823 = GALGAS_bool (false) ;
  cEnumerator_uintlist enumerator_78858 (var_registerAddressList_77234, EnumerationOrder::up) ;
  bool bool_9 = var_accessibleFromBank_31__78823.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2109)).isValidAndTrue () ;
  if (enumerator_78858.hasCurrentObject () && bool_9) {
    while (enumerator_78858.hasCurrentObject () && bool_9) {
      var_accessibleFromBank_31__78823 = GALGAS_bool (ComparisonKind::equal, enumerator_78858.current_mValue (HERE).operator_and (GALGAS_uint (uint32_t (3968U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2110)).objectCompare (GALGAS_uint (uint32_t (128U)))) ;
      enumerator_78858.gotoNextObject () ;
      if (enumerator_78858.hasCurrentObject ()) {
        bool_9 = var_accessibleFromBank_31__78823.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2109)).isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = var_accessibleFromBank_31__78823.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2112)).boolEnum () ;
    if (kBoolTrue == test_10) {
      TC_Array <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2113)).add_operation (GALGAS_string ("' variable cannot be accessed from bank 1"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2113)), fixItArray11  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2113)) ;
    }
  }
  GALGAS_bool var_offsetOk_79236 = GALGAS_bool (true) ;
  cEnumerator_uintlist enumerator_79259 (var_registerAddressList_77234, EnumerationOrder::up) ;
  bool bool_12 = var_offsetOk_79236.isValidAndTrue () ;
  if (enumerator_79259.hasCurrentObject () && bool_12) {
    while (enumerator_79259.hasCurrentObject () && bool_12) {
      var_offsetOk_79236 = GALGAS_bool (ComparisonKind::equal, var_offset_77433.objectCompare (enumerator_79259.current_mValue (HERE).operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2118)))) ;
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = var_offsetOk_79236.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2119)).boolEnum () ;
        if (kBoolTrue == test_13) {
          TC_Array <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GALGAS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2120)).add_operation (GALGAS_string ("' variable has an offset equal to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2120)).add_operation (enumerator_79259.current_mValue (HERE).operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2121)).getter_hexString (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2121)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2120)).add_operation (GALGAS_string (", while '"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2121)).add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2121)).add_operation (GALGAS_string ("' has an offset equal to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2121)).add_operation (var_offset_77433.getter_hexString (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2122)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2121)).add_operation (GALGAS_string (" (tthe two offsets should be equal)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2122)), fixItArray14  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2120)) ;
        }
      }
      enumerator_79259.gotoNextObject () ;
      if (enumerator_79259.hasCurrentObject ()) {
        bool_12 = var_offsetOk_79236.isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2126)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_15) {
      GALGAS_registerExpression var_first_5F_register_79741 = GALGAS_registerExpression::class_func_new (constinArgument_inFirstSaveRegister, GALGAS_immediatInteger::class_func_new (GALGAS_luint::class_func_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2129)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2129))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2129)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2130))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2127)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_first_5F_IPICregisterDescription_80008 ;
      GALGAS_bitSliceTable joker_80044 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_first_5F_register_79741.ptr (), constinArgument_inTotalBankCount, GALGAS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_IPICregisterDescription_80008, joker_80044, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2132)) ;
      GALGAS_registerExpression var_first_5F_register_5F_second_5F_byte_80085 = GALGAS_registerExpression::class_func_new (constinArgument_inFirstSaveRegister, GALGAS_immediatInteger::class_func_new (GALGAS_luint::class_func_new (GALGAS_uint (uint32_t (1U)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2143)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2143))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2143)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2144))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2141)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription_80385 ;
      GALGAS_bitSliceTable joker_80437 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_first_5F_register_5F_second_5F_byte_80085.ptr (), constinArgument_inTotalBankCount, GALGAS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription_80385, joker_80437, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2146)) ;
      GALGAS_registerExpression var_STATUS_5F_register_80516 = GALGAS_registerExpression::class_func_new (GALGAS_lstring::class_func_new (GALGAS_string ("STATUS"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2157)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2157)), GALGAS_immediatInteger::class_func_new (GALGAS_luint::class_func_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2158)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2158))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2158)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2159))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2156)) ;
      GALGAS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_80826 ;
      GALGAS_bitSliceTable joker_80863 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_STATUS_5F_register_80516.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2163)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_80826, joker_80863, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2161)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::class_func_new (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2170)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2170)), var_first_5F_IPICregisterDescription_80008  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2170))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2170)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::class_func_new (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2171)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2171)), var_STATUS_5F_IPICregisterDescription_80826, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2171))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2171)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::class_func_new (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2172)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2172)), var_STATUS_5F_IPICregisterDescription_80826  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2172))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2172)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::class_func_new (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2173)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2173)), var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription_80385  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2173))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2173)) ;
      enumGalgasBool test_16 = kBoolTrue ;
      if (kBoolTrue == test_16) {
        test_16 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
        if (kBoolTrue == test_16) {
          GALGAS_registerExpression var_first_5F_register_5F_third_5F_byte_81641 = GALGAS_registerExpression::class_func_new (constinArgument_inFirstSaveRegister, GALGAS_immediatInteger::class_func_new (GALGAS_luint::class_func_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2177)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2177))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2177)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2178))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2175)) ;
          GALGAS_midrange_5F_intermediate_5F_registerExpression var_first_5F_var_5F_third_5F_byte_5F_IPICregisterDescription_81958 ;
          GALGAS_bitSliceTable joker_82011 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_first_5F_register_5F_third_5F_byte_81641.ptr (), constinArgument_inTotalBankCount, GALGAS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_var_5F_third_5F_byte_5F_IPICregisterDescription_81958, joker_82011, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2180)) ;
          GALGAS_registerExpression var_PCLATH_5F_register_82098 = GALGAS_registerExpression::class_func_new (GALGAS_lstring::class_func_new (GALGAS_string ("PCLATH"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2191)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2191)), GALGAS_immediatInteger::class_func_new (GALGAS_luint::class_func_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2192)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2192))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2192)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2193))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2190)) ;
          GALGAS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_82426 ;
          GALGAS_bitSliceTable joker_82465 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_PCLATH_5F_register_82098.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2197)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_82426, joker_82465, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2195)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::class_func_new (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2204)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2204)), var_PCLATH_5F_IPICregisterDescription_82426, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2204))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2204)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::class_func_new (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2205)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2205)), var_first_5F_var_5F_third_5F_byte_5F_IPICregisterDescription_81958  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2205))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2205)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::class_func_new (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2206)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2206)), var_PCLATH_5F_IPICregisterDescription_82426  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2206))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2206)) ;
        }
      }
      GALGAS_uint var_currentBank_83090 = GALGAS_uint (uint32_t (0U)) ;
      GALGAS_bool var_continuesInSequence_83453 ;
      {
      routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (constinArgument_inInterruptRoutineInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioGenerationOptimizationMessages, constinArgument_inTotalBankCount, var_currentBank_83090, GALGAS_bool (true), var_continuesInSequence_83453, GALGAS_routineKind::class_func_interruptRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2222)), ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2210)) ;
      }
      enumGalgasBool test_17 = kBoolTrue ;
      if (kBoolTrue == test_17) {
        test_17 = var_continuesInSequence_83453.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2225)).boolEnum () ;
        if (kBoolTrue == test_17) {
          TC_Array <FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (constinArgument_inEndOfInterruptLocation, GALGAS_string ("execution cannot reach the end of the interrupt routine"), fixItArray18  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2226)) ;
        }
      }
      enumGalgasBool test_19 = kBoolTrue ;
      if (kBoolTrue == test_19) {
        test_19 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
        if (kBoolTrue == test_19) {
          GALGAS_registerExpression var_first_5F_register_5F_third_5F_byte_83722 = GALGAS_registerExpression::class_func_new (constinArgument_inFirstSaveRegister, GALGAS_immediatInteger::class_func_new (GALGAS_luint::class_func_new (GALGAS_uint (uint32_t (2U)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2231)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2231))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2231)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2232))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2229)) ;
          GALGAS_midrange_5F_intermediate_5F_registerExpression var_first_5F_var_5F_second_5F_byte_5F_IPICregisterDescription_84082 ;
          GALGAS_bitSliceTable joker_84136 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_first_5F_register_5F_third_5F_byte_83722.ptr (), constinArgument_inTotalBankCount, GALGAS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_var_5F_second_5F_byte_5F_IPICregisterDescription_84082, joker_84136, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2234)) ;
          GALGAS_registerExpression var_PCLATH_5F_register_84223 = GALGAS_registerExpression::class_func_new (GALGAS_lstring::class_func_new (GALGAS_string ("PCLATH"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2245)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2245)), GALGAS_immediatInteger::class_func_new (GALGAS_luint::class_func_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2246)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2246))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2246)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2247))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2244)) ;
          GALGAS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_84452 ;
          GALGAS_bitSliceTable joker_84670 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_PCLATH_5F_register_84223.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2252)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_84452, joker_84670, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2250)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::class_func_new (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2259)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2259)), var_first_5F_var_5F_second_5F_byte_5F_IPICregisterDescription_84082, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2259))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2259)) ;
          ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::class_func_new (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2260)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2260)), var_PCLATH_5F_IPICregisterDescription_84452  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2260))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2260)) ;
        }
      }
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::class_func_new (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2263)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2263)), var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription_80385, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2263))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2263)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_F::class_func_new (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2264)), GALGAS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2264)), var_STATUS_5F_IPICregisterDescription_80826  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2264))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2264)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::class_func_new (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2265)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2265)), var_first_5F_IPICregisterDescription_80008, GALGAS_bool (false)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2265))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2265)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD::class_func_new (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2266)), GALGAS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2266)), var_first_5F_IPICregisterDescription_80008, GALGAS_bool (true)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2266))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2266)) ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::class_func_new (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2268))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2268))  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2268)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_pseudo_ORG isLABELorORG'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::getter_isLABELorORG (Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outIsLABELorORG ; // Returned variable
  result_outIsLABELorORG = GALGAS_bool (true) ;
//---
  return result_outIsLABELorORG ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_pseudo_LABEL isLABELorORG'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::getter_isLABELorORG (Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outIsLABELorORG ; // Returned variable
  result_outIsLABELorORG = GALGAS_bool (true) ;
//---
  return result_outIsLABELorORG ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_NULL isNULL'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_midrange_5F_intermediate_5F_NULL::getter_isNULL (Compiler */* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outIsNULL ; // Returned variable
  result_outIsNULL = GALGAS_bool (true) ;
//---
  return result_outIsNULL ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_JUMP enterReferencedLabel'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JUMP::method_enterReferencedLabel (GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_JUMP temp_0 = this ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 53)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_GOTO enterReferencedLabel'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_GOTO::method_enterReferencedLabel (GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_GOTO temp_0 = this ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 59)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_CALL enterReferencedLabel'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_CALL::method_enterReferencedLabel (GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_CALL temp_0 = this ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 65)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_JSR enterReferencedLabel'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JSR::method_enterReferencedLabel (GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_0 = this ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 71)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_incDecRegisterInCondition enterReferencedLabel'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::method_enterReferencedLabel (GALGAS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                              Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_0 = this ;
  ioArgument_ioReferencedLabelSet.addAssign_operation (temp_0.readProperty_mTargetLabel ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 77)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_instruction_BitTestSkip isSkippingInstruction'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::getter_isSkippingInstruction (Compiler */* inCompiler */
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outIsSkipping ; // Returned variable
  result_outIsSkipping = GALGAS_bool (true) ;
//---
  return result_outIsSkipping ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_JUMP nextInstructionIsReachable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_midrange_5F_intermediate_5F_JUMP::getter_nextInstructionIsReachable (Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (false) ;
//---
  return result_outIsReachable ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_GOTO nextInstructionIsReachable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_midrange_5F_intermediate_5F_GOTO::getter_nextInstructionIsReachable (Compiler */* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (false) ;
//---
  return result_outIsReachable ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_instruction_RETURN nextInstructionIsReachable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN::getter_nextInstructionIsReachable (Compiler */* inCompiler */
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (false) ;
//---
  return result_outIsReachable ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_instruction_RETFIE nextInstructionIsReachable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE::getter_nextInstructionIsReachable (Compiler */* inCompiler */
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GALGAS_bool (false) ;
//---
  return result_outIsReachable ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_instruction_literalOperation nextInstructionIsReachable'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::getter_nextInstructionIsReachable (Compiler */* inCompiler */
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outIsReachable ; // Returned variable
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = this ;
  result_outIsReachable = GALGAS_bool (ComparisonKind::notEqual, temp_0.readProperty_mLiteralInstruction ().objectCompare (GALGAS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_RETLW (SOURCE_FILE ("midrange_optimizations.galgas", 135)))) ;
//---
  return result_outIsReachable ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_LABEL defineLabel'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::method_defineLabel (GALGAS_symbolTableForOptimizations & ioArgument_ioRoutineSymbolTable,
                                                                           const GALGAS_uint constinArgument_inLineIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_1 = this ;
  ioArgument_ioRoutineSymbolTable.setter_insertKey (temp_0.readProperty_mLabel (), constinArgument_inLineIndex, temp_1.readProperty_mIsDeletable (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 155)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'findMidRangeFirstInstructionFromAddress??!'
//
//--------------------------------------------------------------------------------------------------

void routine_findMidRangeFirstInstructionFromAddress_3F__3F__21_ (const GALGAS_uint constinArgument_inLineIndex,
                                                                  const GALGAS_midrange_5F_intermediate_5F_instructionList constinArgument_inGeneratedInstructionList,
                                                                  GALGAS_midrange_5F_intermediate_5F_instruction & outArgument_outFirstInstruction,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFirstInstruction.drop () ; // Release 'out' argument
  GALGAS_uint var_currentAddress_6827 = constinArgument_inLineIndex ;
  outArgument_outFirstInstruction = GALGAS_midrange_5F_intermediate_5F_NULL::class_func_new (SOURCE_FILE ("midrange_optimizations.galgas", 167)) ;
  GALGAS_bool var_found_6993 = GALGAS_bool (false) ;
  if (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas", 169)).isValid ()) {
    uint32_t variant_7009 = constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas", 169)).uintValue () ;
    bool loop_7009 = true ;
    while (loop_7009) {
      loop_7009 = GALGAS_bool (ComparisonKind::lowerThan, var_currentAddress_6827.objectCompare (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas", 170)))).operator_and (var_found_6993.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 170)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 170)).isValid () ;
      if (loop_7009) {
        loop_7009 = GALGAS_bool (ComparisonKind::lowerThan, var_currentAddress_6827.objectCompare (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas", 170)))).operator_and (var_found_6993.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 170)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 170)).boolValue () ;
      }
      if (loop_7009 && (0 == variant_7009)) {
        loop_7009 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_optimizations.galgas", 169)) ;
      }
      if (loop_7009) {
        variant_7009 -- ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          GALGAS_midrange_5F_intermediate_5F_actualInstruction var_instr_7143 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_actualInstruction *> (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_6827, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 172)).ptr ())) ;
          if (nullptr == var_instr_7143.ptr ()) {
            test_0 = kBoolFalse ;
          }
          if (kBoolTrue == test_0) {
            outArgument_outFirstInstruction = var_instr_7143 ;
            var_found_6993 = GALGAS_bool (true) ;
          }
        }
        if (kBoolFalse == test_0) {
          var_currentAddress_6827.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 178)) ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'findMidRangeFirstInstructionOrLabelFromAddress??!!'
//
//--------------------------------------------------------------------------------------------------

void routine_findMidRangeFirstInstructionOrLabelFromAddress_3F__3F__21__21_ (const GALGAS_uint constinArgument_inLineIndex,
                                                                             const GALGAS_midrange_5F_intermediate_5F_instructionList constinArgument_inGeneratedInstructionList,
                                                                             GALGAS_midrange_5F_intermediate_5F_instruction & outArgument_outFirstInstruction,
                                                                             GALGAS_stringset & outArgument_outReachedLabelSet,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFirstInstruction.drop () ; // Release 'out' argument
  outArgument_outReachedLabelSet.drop () ; // Release 'out' argument
  outArgument_outReachedLabelSet = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("midrange_optimizations.galgas", 190)) ;
  GALGAS_uint var_currentAddress_7902 = constinArgument_inLineIndex ;
  outArgument_outFirstInstruction = GALGAS_midrange_5F_intermediate_5F_NULL::class_func_new (SOURCE_FILE ("midrange_optimizations.galgas", 194)) ;
  GALGAS_bool var_found_8068 = GALGAS_bool (false) ;
  if (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas", 196)).isValid ()) {
    uint32_t variant_8084 = constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas", 196)).uintValue () ;
    bool loop_8084 = true ;
    while (loop_8084) {
      loop_8084 = GALGAS_bool (ComparisonKind::lowerThan, var_currentAddress_7902.objectCompare (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas", 197)))).operator_and (var_found_8068.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 197)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 197)).isValid () ;
      if (loop_8084) {
        loop_8084 = GALGAS_bool (ComparisonKind::lowerThan, var_currentAddress_7902.objectCompare (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas", 197)))).operator_and (var_found_8068.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 197)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 197)).boolValue () ;
      }
      if (loop_8084 && (0 == variant_8084)) {
        loop_8084 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_optimizations.galgas", 196)) ;
      }
      if (loop_8084) {
        variant_8084 -- ;
        GALGAS_midrange_5F_intermediate_5F_instruction var_instruction_8215 = constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7902, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 199)) ;
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          GALGAS_midrange_5F_intermediate_5F_actualInstruction var_instr_8305 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_actualInstruction *> (var_instruction_8215.ptr ())) ;
          if (nullptr == var_instr_8305.ptr ()) {
            test_0 = kBoolFalse ;
          }
          if (kBoolTrue == test_0) {
            outArgument_outFirstInstruction = var_instr_8305 ;
            var_found_8068 = GALGAS_bool (true) ;
          }
        }
        if (kBoolFalse == test_0) {
          enumGalgasBool test_1 = kBoolTrue ;
          if (kBoolTrue == test_1) {
            GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG var_instr_8578 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *> (var_instruction_8215.ptr ())) ;
            if (nullptr == var_instr_8578.ptr ()) {
              test_1 = kBoolFalse ;
            }
            if (kBoolTrue == test_1) {
              outArgument_outFirstInstruction = var_instr_8578 ;
              var_found_8068 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_1) {
            enumGalgasBool test_2 = kBoolTrue ;
            if (kBoolTrue == test_2) {
              GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL var_instr_8762 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *> (var_instruction_8215.ptr ())) ;
              if (nullptr == var_instr_8762.ptr ()) {
                test_2 = kBoolFalse ;
              }
              if (kBoolTrue == test_2) {
                outArgument_outFirstInstruction = var_instr_8762 ;
                outArgument_outReachedLabelSet.addAssign_operation (var_instr_8762.readProperty_mLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 212)) ;
                var_currentAddress_7902.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 213)) ;
              }
            }
            if (kBoolFalse == test_2) {
              var_currentAddress_7902.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 215)) ;
            }
          }
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'perform_midrange_optimizations&&'
//
//--------------------------------------------------------------------------------------------------

void routine_perform_5F_midrange_5F_optimizations_26__26_ (GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 541)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 541)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 541)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("CODE OPTIMIZATION").getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (117U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 542)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 542)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 542)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 542)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 543)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 543)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 543)) ;
  GALGAS_symbolTableForOptimizations var_symbolTable_23818 = GALGAS_symbolTableForOptimizations::class_func_emptyMap (SOURCE_FILE ("midrange_optimizations.galgas", 545)) ;
  cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_23878 (ioArgument_ioGeneratedInstructionList, EnumerationOrder::up) ;
  GALGAS_uint index_23873 (uint32_t (0)) ;
  while (enumerator_23878.hasCurrentObject ()) {
    callExtensionMethod_defineLabel ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_23878.current_mInstruction (HERE).ptr (), var_symbolTable_23818, index_23873, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 547)) ;
    enumerator_23878.gotoNextObject () ;
    index_23873.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 546)) ;
  }
  GALGAS_bool var_optimizationsDone_24069 = GALGAS_bool (true) ;
  GALGAS_uint var_iteration_24106 = GALGAS_uint (uint32_t (0U)) ;
  if (ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas", 552)).isValid ()) {
    uint32_t variant_24122 = ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas", 552)).uintValue () ;
    bool loop_24122 = true ;
    while (loop_24122) {
      loop_24122 = var_optimizationsDone_24069.isValid () ;
      if (loop_24122) {
        loop_24122 = var_optimizationsDone_24069.boolValue () ;
      }
      if (loop_24122 && (0 == variant_24122)) {
        loop_24122 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_optimizations.galgas", 552)) ;
      }
      if (loop_24122) {
        variant_24122 -- ;
        var_optimizationsDone_24069 = GALGAS_bool (false) ;
        var_iteration_24106.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 556)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Pass ").add_operation (var_iteration_24106.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 557)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 557)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 557)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 557)) ;
        GALGAS_bigint var_idx_24341 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 559)) ;
        if (ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas", 560)).isValid ()) {
          uint32_t variant_24353 = ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas", 560)).uintValue () ;
          bool loop_24353 = true ;
          while (loop_24353) {
            loop_24353 = GALGAS_bool (ComparisonKind::lowerThan, var_idx_24341.objectCompare (ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas", 560)).getter_bigint (SOURCE_FILE ("midrange_optimizations.galgas", 560)))).isValid () ;
            if (loop_24353) {
              loop_24353 = GALGAS_bool (ComparisonKind::lowerThan, var_idx_24341.objectCompare (ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas", 560)).getter_bigint (SOURCE_FILE ("midrange_optimizations.galgas", 560)))).boolValue () ;
            }
            if (loop_24353 && (0 == variant_24353)) {
              loop_24353 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_optimizations.galgas", 560)) ;
            }
            if (loop_24353) {
              variant_24353 -- ;
              GALGAS_midrange_5F_intermediate_5F_instruction var_instruction_24508 = ioArgument_ioGeneratedInstructionList.getter_mInstructionAtIndex (var_idx_24341.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 562)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 562)) ;
              enumGalgasBool test_0 = kBoolTrue ;
              if (kBoolTrue == test_0) {
                GALGAS_midrange_5F_intermediate_5F_GOTO var_ipic_5F_GOTO_24589 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_GOTO *> (var_instruction_24508.ptr ())) ;
                if (nullptr == var_ipic_5F_GOTO_24589.ptr ()) {
                  test_0 = kBoolFalse ;
                }
                if (kBoolTrue == test_0) {
                  callExtensionMethod_optimizeGOTO ((cPtr_midrange_5F_intermediate_5F_GOTO *) var_ipic_5F_GOTO_24589.ptr (), var_symbolTable_23818, var_idx_24341.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 565)), ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_24069, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 565)) ;
                }
              }
              if (kBoolFalse == test_0) {
                enumGalgasBool test_1 = kBoolTrue ;
                if (kBoolTrue == test_1) {
                  GALGAS_midrange_5F_intermediate_5F_JUMP var_ipic_5F_JUMP_24841 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_JUMP *> (var_instruction_24508.ptr ())) ;
                  if (nullptr == var_ipic_5F_JUMP_24841.ptr ()) {
                    test_1 = kBoolFalse ;
                  }
                  if (kBoolTrue == test_1) {
                    callExtensionMethod_optimizeJUMP ((cPtr_midrange_5F_intermediate_5F_JUMP *) var_ipic_5F_JUMP_24841.ptr (), var_symbolTable_23818, var_idx_24341.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 568)), ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_24069, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 568)) ;
                  }
                }
                if (kBoolFalse == test_1) {
                  enumGalgasBool test_2 = kBoolTrue ;
                  if (kBoolTrue == test_2) {
                    GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation var_ipic_5F_literal_25259 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *> (var_instruction_24508.ptr ())) ;
                    if (nullptr == var_ipic_5F_literal_25259.ptr ()) {
                      test_2 = kBoolFalse ;
                    }
                    if (kBoolTrue == test_2) {
                      callExtensionMethod_optimizeMOVLW ((cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) var_ipic_5F_literal_25259.ptr (), var_idx_24341.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 573)), ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_24069, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 573)) ;
                    }
                  }
                  if (kBoolFalse == test_2) {
                    enumGalgasBool test_3 = kBoolTrue ;
                    if (kBoolTrue == test_3) {
                      GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition var_ipic_5F_decInc_25556 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *> (var_instruction_24508.ptr ())) ;
                      if (nullptr == var_ipic_5F_decInc_25556.ptr ()) {
                        test_3 = kBoolFalse ;
                      }
                      if (kBoolTrue == test_3) {
                        callExtensionMethod_optimizeTestDecInc ((cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) var_ipic_5F_decInc_25556.ptr (), var_symbolTable_23818, var_idx_24341.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 576)), ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_24069, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 576)) ;
                      }
                    }
                    if (kBoolFalse == test_3) {
                      enumGalgasBool test_4 = kBoolTrue ;
                      if (kBoolTrue == test_4) {
                        GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip var_ipic_5F_bitTestSkip_25862 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *> (var_instruction_24508.ptr ())) ;
                        if (nullptr == var_ipic_5F_bitTestSkip_25862.ptr ()) {
                          test_4 = kBoolFalse ;
                        }
                        if (kBoolTrue == test_4) {
                          callExtensionMethod_optimizeBitTestSkip ((cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) var_ipic_5F_bitTestSkip_25862.ptr (), var_idx_24341.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 579)), ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_24069, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 579)) ;
                        }
                      }
                    }
                  }
                }
              }
              var_idx_24341 = var_idx_24341.add_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 582)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 582)) ;
            }
          }
        }
        GALGAS_stringset var_referencedLabels_26245 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("midrange_optimizations.galgas", 585)) ;
        cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_26294 (ioArgument_ioGeneratedInstructionList, EnumerationOrder::up) ;
        while (enumerator_26294.hasCurrentObject ()) {
          callExtensionMethod_enterReferencedLabel ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_26294.current_mInstruction (HERE).ptr (), var_referencedLabels_26245, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 587)) ;
          enumerator_26294.gotoNextObject () ;
        }
        cEnumerator_symbolTableForOptimizations enumerator_26427 (var_symbolTable_23818, EnumerationOrder::up) ;
        while (enumerator_26427.hasCurrentObject ()) {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = var_referencedLabels_26245.getter_hasKey (enumerator_26427.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 590)).operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 590)).boolEnum () ;
            if (kBoolTrue == test_5) {
              GALGAS_uint var_definitionLine_26554 ;
              GALGAS_bool joker_26569 ; // Joker input parameter
              var_symbolTable_23818.method_searchKey (enumerator_26427.current_lkey (HERE), var_definitionLine_26554, joker_26569, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 591)) ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (var_definitionLine_26554.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 592)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 592)).add_operation (GALGAS_string (": unreferenced label '"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 592)).add_operation (enumerator_26427.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 592)).add_operation (GALGAS_string ("' is deleted\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 592)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 592)) ;
              {
              ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_NULL::class_func_new (SOURCE_FILE ("midrange_optimizations.galgas", 593)), var_definitionLine_26554, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 593)) ;
              }
              {
              GALGAS_uint joker_26844 ; // Joker input parameter
              GALGAS_bool joker_26847 ; // Joker input parameter
              var_symbolTable_23818.setter_removeKey (enumerator_26427.current_lkey (HERE), joker_26844, joker_26847, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 594)) ;
              }
            }
          }
          enumerator_26427.gotoNextObject () ;
        }
        GALGAS_bool var_reachable_26912 = GALGAS_bool (true) ;
        GALGAS_bool var_skippingInstruction_26943 = GALGAS_bool (false) ;
        GALGAS_bool var_previousWasSkippingInstruction_26985 = GALGAS_bool (false) ;
        cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_27033 (ioArgument_ioGeneratedInstructionList, EnumerationOrder::up) ;
        GALGAS_uint index_27028 (uint32_t (0)) ;
        while (enumerator_27033.hasCurrentObject ()) {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = var_reachable_26912.operator_or (var_previousWasSkippingInstruction_26985 COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 602)).boolEnum () ;
            if (kBoolTrue == test_6) {
              var_reachable_26912 = callExtensionGetter_nextInstructionIsReachable ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_27033.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 603)) ;
              var_previousWasSkippingInstruction_26985 = var_skippingInstruction_26943 ;
              var_skippingInstruction_26943 = callExtensionGetter_isSkippingInstruction ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_27033.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 605)) ;
            }
          }
          if (kBoolFalse == test_6) {
            GALGAS_bool var_isLABELorORG_27368 = callExtensionGetter_isLABELorORG ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_27033.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 607)) ;
            enumGalgasBool test_7 = kBoolTrue ;
            if (kBoolTrue == test_7) {
              test_7 = var_isLABELorORG_27368.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 608)).operator_and (callExtensionGetter_isNULL ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_27033.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 608)).operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 608)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 608)).boolEnum () ;
              if (kBoolTrue == test_7) {
                ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (index_27028.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 609)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 609)).add_operation (GALGAS_string (": unreachable instruction is deleted\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 609)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 609)) ;
                {
                ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GALGAS_midrange_5F_intermediate_5F_NULL::class_func_new (SOURCE_FILE ("midrange_optimizations.galgas", 610)), index_27028, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 610)) ;
                }
              }
            }
            if (kBoolFalse == test_7) {
              enumGalgasBool test_8 = kBoolTrue ;
              if (kBoolTrue == test_8) {
                test_8 = var_isLABELorORG_27368.boolEnum () ;
                if (kBoolTrue == test_8) {
                  var_reachable_26912 = GALGAS_bool (true) ;
                  var_previousWasSkippingInstruction_26985 = GALGAS_bool (false) ;
                  var_skippingInstruction_26943 = GALGAS_bool (false) ;
                }
              }
            }
          }
          enumerator_27033.gotoNextObject () ;
          index_27028.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 601)) ;
        }
        enumGalgasBool test_9 = kBoolTrue ;
        if (kBoolTrue == test_9) {
          test_9 = var_optimizationsDone_24069.operator_not (SOURCE_FILE ("midrange_optimizations.galgas", 618)).boolEnum () ;
          if (kBoolTrue == test_9) {
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  No optimization\n\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 619)) ;
            GALGAS_uint var_currentAddress_27993 = GALGAS_uint (uint32_t (0U)) ;
            cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_28023 (ioArgument_ioGeneratedInstructionList, EnumerationOrder::up) ;
            while (enumerator_28023.hasCurrentObject ()) {
              callExtensionMethod_setCurrentAddress ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_28023.current_mInstruction (HERE).ptr (), var_currentAddress_27993, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 623)) ;
              enumerator_28023.gotoNextObject () ;
            }
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Minimum code size: ").add_operation (var_currentAddress_27993.getter_string (SOURCE_FILE ("midrange_optimizations.galgas", 625)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 625)).add_operation (GALGAS_string (" instructions\n\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 625)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas", 625)) ;
          }
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_LABEL defineLabelAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::method_defineLabelAtAddress (GALGAS_midrange_5F_symbolTableForConvertingRelatives & ioArgument_ioRoutineSymbolTable,
                                                                                    GALGAS_uint & ioArgument_ioAddress,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  ioArgument_ioRoutineSymbolTable.setter_insertKey (temp_0.readProperty_mLabel (), ioArgument_ioAddress, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 28)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_ORG defineLabelAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::method_defineLabelAtAddress (GALGAS_midrange_5F_symbolTableForConvertingRelatives & /* ioArgument_ioRoutineSymbolTable */,
                                                                                  GALGAS_uint & ioArgument_ioAddress,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::greaterThan, ioArgument_ioAddress.objectCompare (temp_1.readProperty_mOrigin ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 38)), GALGAS_string ("internal error: current address (").add_operation (ioArgument_ioAddress.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 38)).add_operation (GALGAS_string (") is greater than origin ("), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 39)).add_operation (temp_2.readProperty_mOrigin ().getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 39)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 39)), fixItArray3  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 38)) ;
    }
  }
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_4 = this ;
  ioArgument_ioAddress = temp_4.readProperty_mOrigin () ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_actualInstruction defineLabelAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_actualInstruction::method_defineLabelAtAddress (GALGAS_midrange_5F_symbolTableForConvertingRelatives & /* ioArgument_ioRoutineSymbolTable */,
                                                                                      GALGAS_uint & ioArgument_ioAddress,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_actualInstruction temp_0 = this ;
  GALGAS_uint var_nextAddress_1932 = ioArgument_ioAddress.add_operation (callExtensionGetter_instructionLength ((const cPtr_midrange_5F_intermediate_5F_actualInstruction *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 50)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::notEqual, var_nextAddress_1932.operator_xor (ioArgument_ioAddress COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 51)).operator_and (GALGAS_uint (uint32_t (63488U)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 51)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_midrange_5F_intermediate_5F_actualInstruction temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("Routine too long, crosses page boundary at this instruction"), fixItArray3  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 52)) ;
    }
  }
  ioArgument_ioAddress = var_nextAddress_1932 ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_NULL compute'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_NULL::method_compute (const GALGAS_midrange_5F_symbolTableForConvertingRelatives /* constinArgument_inRoutineSymbolTable */,
                                                            GALGAS_uint & /* ioArgument_ioAddress */,
                                                            GALGAS_bool & /* ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed */,
                                                            GALGAS_midrange_5F_intermediate_5F_instructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                            const GALGAS_uint /* constinArgument_inIndex */,
                                                            GALGAS_string & /* ioArgument_ioListFileContents */,
                                                            Compiler * /* inCompiler */
                                                            COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_actualInstruction compute'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_actualInstruction::method_compute (const GALGAS_midrange_5F_symbolTableForConvertingRelatives /* constinArgument_inRoutineSymbolTable */,
                                                                         GALGAS_uint & /* ioArgument_ioAddress */,
                                                                         GALGAS_bool & /* ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed */,
                                                                         GALGAS_midrange_5F_intermediate_5F_instructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                                         const GALGAS_uint /* constinArgument_inIndex */,
                                                                         GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_ORG compute'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::method_compute (const GALGAS_midrange_5F_symbolTableForConvertingRelatives /* constinArgument_inRoutineSymbolTable */,
                                                                     GALGAS_uint & ioArgument_ioAddress,
                                                                     GALGAS_bool & /* ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed */,
                                                                     GALGAS_midrange_5F_intermediate_5F_instructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                                     const GALGAS_uint /* constinArgument_inIndex */,
                                                                     GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_0 = this ;
  ioArgument_ioAddress = temp_0.readProperty_mOrigin () ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_JUMP compute'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JUMP::method_compute (const GALGAS_midrange_5F_symbolTableForConvertingRelatives constinArgument_inRoutineSymbolTable,
                                                            GALGAS_uint & ioArgument_ioAddress,
                                                            GALGAS_bool & ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed,
                                                            GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                            const GALGAS_uint constinArgument_inIndex,
                                                            GALGAS_string & ioArgument_ioListFileContents,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_targetAddress_4681 ;
  const GALGAS_midrange_5F_intermediate_5F_JUMP temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_4681, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 116)) ;
  GALGAS_uint var_flags_4730 = ioArgument_ioAddress.operator_xor (var_targetAddress_4681 COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 118)) ;
  GALGAS_midrange_5F_call_5F_goto_5F_bit var_bit_31__31__4795 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::equal, var_flags_4730.operator_and (GALGAS_uint (uint32_t (2048U)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 120)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_bit_31__31__4795 = GALGAS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 121)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (ComparisonKind::equal, var_targetAddress_4681.operator_and (GALGAS_uint (uint32_t (2048U)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 122)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_bit_31__31__4795 = GALGAS_midrange_5F_call_5F_goto_5F_bit::class_func_clear (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 123)) ;
      }
    }
    if (kBoolFalse == test_2) {
      var_bit_31__31__4795 = GALGAS_midrange_5F_call_5F_goto_5F_bit::class_func_set (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 125)) ;
    }
  }
  GALGAS_midrange_5F_call_5F_goto_5F_bit var_bit_31__32__5076 ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (ComparisonKind::equal, var_flags_4730.operator_and (GALGAS_uint (uint32_t (4096U)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 129)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_bit_31__32__5076 = GALGAS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 130)) ;
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (ComparisonKind::equal, var_targetAddress_4681.operator_and (GALGAS_uint (uint32_t (4096U)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 131)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        var_bit_31__32__5076 = GALGAS_midrange_5F_call_5F_goto_5F_bit::class_func_clear (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 132)) ;
      }
    }
    if (kBoolFalse == test_4) {
      var_bit_31__32__5076 = GALGAS_midrange_5F_call_5F_goto_5F_bit::class_func_set (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 134)) ;
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_midrange_5F_intermediate_5F_JUMP temp_6 = this ;
    const GALGAS_midrange_5F_intermediate_5F_JUMP temp_7 = this ;
    test_5 = GALGAS_bool (ComparisonKind::notEqual, var_bit_31__31__4795.objectCompare (temp_6.readProperty_mBit_31__31_ ())).operator_or (GALGAS_bool (ComparisonKind::notEqual, var_bit_31__32__5076.objectCompare (temp_7.readProperty_mBit_31__32_ ())) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 137)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_midrange_5F_intermediate_5F_JUMP temp_8 = this ;
      const GALGAS_midrange_5F_intermediate_5F_JUMP temp_9 = this ;
      GALGAS_midrange_5F_intermediate_5F_actualInstruction var_instruction_5428 = GALGAS_midrange_5F_intermediate_5F_JUMP::class_func_new (temp_8.readProperty_mInstructionLocation (), temp_9.readProperty_mTargetLabel (), var_bit_31__31__4795, var_bit_31__32__5076  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 138)) ;
      {
      ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (var_instruction_5428, constinArgument_inIndex, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 143)) ;
      }
      ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed = GALGAS_bool (true) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inIndex.getter_string (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 145)).add_operation (GALGAS_string (":  JUMP to other page fixed\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 145)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_JSR compute'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JSR::method_compute (const GALGAS_midrange_5F_symbolTableForConvertingRelatives constinArgument_inRoutineSymbolTable,
                                                           GALGAS_uint & ioArgument_ioAddress,
                                                           GALGAS_bool & ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed,
                                                           GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                           const GALGAS_uint constinArgument_inIndex,
                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_targetAddress_6232 ;
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_6232, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 159)) ;
  GALGAS_uint var_flags_6281 = ioArgument_ioAddress.operator_xor (var_targetAddress_6232 COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 161)) ;
  GALGAS_midrange_5F_call_5F_goto_5F_bit var_bit_31__31__6346 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::equal, var_flags_6281.operator_and (GALGAS_uint (uint32_t (2048U)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 163)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_bit_31__31__6346 = GALGAS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 164)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (ComparisonKind::equal, var_targetAddress_6232.operator_and (GALGAS_uint (uint32_t (2048U)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 165)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_bit_31__31__6346 = GALGAS_midrange_5F_call_5F_goto_5F_bit::class_func_clear (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 166)) ;
      }
    }
    if (kBoolFalse == test_2) {
      var_bit_31__31__6346 = GALGAS_midrange_5F_call_5F_goto_5F_bit::class_func_set (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 168)) ;
    }
  }
  GALGAS_midrange_5F_call_5F_goto_5F_bit var_bit_31__32__6627 ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (ComparisonKind::equal, var_flags_6281.operator_and (GALGAS_uint (uint32_t (4096U)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 172)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_bit_31__32__6627 = GALGAS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 173)) ;
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (ComparisonKind::equal, var_targetAddress_6232.operator_and (GALGAS_uint (uint32_t (4096U)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 174)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        var_bit_31__32__6627 = GALGAS_midrange_5F_call_5F_goto_5F_bit::class_func_clear (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 175)) ;
      }
    }
    if (kBoolFalse == test_4) {
      var_bit_31__32__6627 = GALGAS_midrange_5F_call_5F_goto_5F_bit::class_func_set (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 177)) ;
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_midrange_5F_intermediate_5F_JSR temp_6 = this ;
    const GALGAS_midrange_5F_intermediate_5F_JSR temp_7 = this ;
    test_5 = GALGAS_bool (ComparisonKind::notEqual, var_bit_31__31__6346.objectCompare (temp_6.readProperty_mBit_31__31_ ())).operator_or (GALGAS_bool (ComparisonKind::notEqual, var_bit_31__32__6627.objectCompare (temp_7.readProperty_mBit_31__32_ ())) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 180)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_midrange_5F_intermediate_5F_JSR temp_8 = this ;
      const GALGAS_midrange_5F_intermediate_5F_JSR temp_9 = this ;
      GALGAS_midrange_5F_intermediate_5F_actualInstruction var_instruction_6979 = GALGAS_midrange_5F_intermediate_5F_JSR::class_func_new (temp_8.readProperty_mInstructionLocation (), temp_9.readProperty_mTargetLabel (), var_bit_31__31__6346, var_bit_31__32__6627  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 181)) ;
      {
      ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (var_instruction_6979, constinArgument_inIndex, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 186)) ;
      }
      ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed = GALGAS_bool (true) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  line ").add_operation (constinArgument_inIndex.getter_string (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 188)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 188)).add_operation (GALGAS_string (":  JSR to other page fixed\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 188)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 188)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_LABEL compute'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::method_compute (const GALGAS_midrange_5F_symbolTableForConvertingRelatives constinArgument_inRoutineSymbolTable,
                                                                       GALGAS_uint & ioArgument_ioAddress,
                                                                       GALGAS_bool & /* ioArgument_ioJUMP_5F_or_5F_JSR_5F_fixed */,
                                                                       GALGAS_midrange_5F_intermediate_5F_instructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                                       const GALGAS_uint /* constinArgument_inIndex */,
                                                                       GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_targetAddress_7786 ;
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mLabel (), var_targetAddress_7786, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 201)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::notEqual, var_targetAddress_7786.objectCompare (ioArgument_ioAddress)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_2 = this ;
      const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLabel ().readProperty_location (), GALGAS_string ("Internal second pass error: the '").add_operation (temp_3.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 203)).add_operation (GALGAS_string ("' label gets "), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 203)).add_operation (ioArgument_ioAddress.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 204)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 204)).add_operation (GALGAS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 204)).add_operation (var_targetAddress_7786.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 204)).add_operation (GALGAS_string (" in first pass"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 205)), fixItArray4  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 203)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'midrange_compute_JSR_JUMP&&'
//
//--------------------------------------------------------------------------------------------------

void routine_midrange_5F_compute_5F_JSR_5F_JUMP_26__26_ (GALGAS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 315)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 315)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 315)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("COMPUTE JSR and JUMP").getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (117U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 316)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 316)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 316)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 316)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 317)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 317)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 317)) ;
  GALGAS_bool var_JUMP_5F_or_5F_JSR_5F_fixed_13144 = GALGAS_bool (true) ;
  GALGAS_uint var_iteration_13181 = GALGAS_uint (uint32_t (0U)) ;
  if (ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 320)).isValid ()) {
    uint32_t variant_13197 = ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 320)).uintValue () ;
    bool loop_13197 = true ;
    while (loop_13197) {
      loop_13197 = var_JUMP_5F_or_5F_JSR_5F_fixed_13144.operator_and (GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 321)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 321)).isValid () ;
      if (loop_13197) {
        loop_13197 = var_JUMP_5F_or_5F_JSR_5F_fixed_13144.operator_and (GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 321)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 321)).boolValue () ;
      }
      if (loop_13197 && (0 == variant_13197)) {
        loop_13197 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 320)) ;
      }
      if (loop_13197) {
        variant_13197 -- ;
        var_JUMP_5F_or_5F_JSR_5F_fixed_13144 = GALGAS_bool (false) ;
        var_iteration_13181.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 324)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Pass ").add_operation (var_iteration_13181.getter_string (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 325)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 325)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 325)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 325)) ;
        GALGAS_midrange_5F_symbolTableForConvertingRelatives var_symbolTable_13482 = GALGAS_midrange_5F_symbolTableForConvertingRelatives::class_func_emptyMap (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 327)) ;
        GALGAS_uint var_currentAddress_13564 = GALGAS_uint (uint32_t (0U)) ;
        cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_13592 (ioArgument_ioGeneratedInstructionList, EnumerationOrder::up) ;
        while (enumerator_13592.hasCurrentObject ()) {
          callExtensionMethod_defineLabelAtAddress ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_13592.current_mInstruction (HERE).ptr (), var_symbolTable_13482, var_currentAddress_13564, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 330)) ;
          enumerator_13592.gotoNextObject () ;
        }
        GALGAS_uint var_lastAddressForFirstPass_13735 = var_currentAddress_13564 ;
        var_currentAddress_13564 = GALGAS_uint (uint32_t (0U)) ;
        cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_13871 (ioArgument_ioGeneratedInstructionList, EnumerationOrder::up) ;
        GALGAS_uint index_13866 (uint32_t (0)) ;
        while (enumerator_13871.hasCurrentObject ()) {
          callExtensionMethod_compute ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_13871.current_mInstruction (HERE).ptr (), var_symbolTable_13482, var_currentAddress_13564, var_JUMP_5F_or_5F_JSR_5F_fixed_13144, ioArgument_ioGeneratedInstructionList, index_13866, ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 336)) ;
          var_currentAddress_13564 = var_currentAddress_13564.add_operation (callExtensionGetter_instructionLength ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_13871.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 337)) ;
          enumerator_13871.gotoNextObject () ;
          index_13866.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 335)) ;
        }
        enumGalgasBool test_0 = kBoolTrue ;
        if (kBoolTrue == test_0) {
          test_0 = GALGAS_bool (ComparisonKind::notEqual, var_lastAddressForFirstPass_13735.objectCompare (var_currentAddress_13564)).boolEnum () ;
          if (kBoolTrue == test_0) {
            TC_Array <FixItDescription> fixItArray1 ;
            inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 340)), GALGAS_string ("Internal second pass error: the last address gets ").add_operation (var_currentAddress_13564.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 340)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 340)).add_operation (GALGAS_string (" value when checking relative branches, while it gets "), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 340)).add_operation (var_lastAddressForFirstPass_13735.getter_hexString (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 341)).add_operation (GALGAS_string (" value when computing routine map"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 342)), fixItArray1  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 340)) ;
          }
        }
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = var_JUMP_5F_or_5F_JSR_5F_fixed_13144.operator_not (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 344)).boolEnum () ;
          if (kBoolTrue == test_2) {
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  No JUMP, no JSR to fix\n\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 345)) ;
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Program size: ").add_operation (var_currentAddress_13564.getter_string (SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 346)), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 346)).add_operation (GALGAS_string (" instructions\n\n"), inCompiler COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 346)), inCompiler  COMMA_SOURCE_FILE ("midrange_compute_JSR_JUMP.galgas", 346)) ;
          }
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_NULL buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_NULL::method_buildAssemblyCode (GALGAS_string & /* ioArgument_ioString */,
                                                                      GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_ORG buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::method_buildAssemblyCode (GALGAS_string & ioArgument_ioString,
                                                                               GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_0 = this ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ORG ").add_operation (temp_0.readProperty_mOrigin ().getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 23)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 23)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 23)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 23)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_LABEL buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::method_buildAssemblyCode (GALGAS_string & ioArgument_ioString,
                                                                                 GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  ioArgument_ioString.plusAssign_operation(temp_0.readProperty_mLabel ().readProperty_string ().add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 31)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 31)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_FD buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_FD::method_buildAssemblyCode (GALGAS_string & ioArgument_ioString,
                                                                                   GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD temp_0 = this ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD temp_1 = this ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mInstruction_5F_FD_5F_base_5F_code (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 39)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD temp_3 = this ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (kBoolTrue == test_2) {
      ioArgument_ioString.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 41)) ;
    }
  }
  if (kBoolFalse == test_2) {
    ioArgument_ioString.plusAssign_operation(GALGAS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 43)) ;
  }
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 45)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_FB buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_FB::method_buildAssemblyCode (GALGAS_string & ioArgument_ioString,
                                                                                   GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB temp_0 = this ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mBitOrientedOp (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 53)) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB temp_1 = this ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 54)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 54)) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB temp_2 = this ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string (", ").add_operation (temp_2.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 55)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 55)) ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 56)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_BitTestSkip buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::method_buildAssemblyCode (GALGAS_string & ioArgument_ioString,
                                                                                            GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  "), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 64)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioString.plusAssign_operation(GALGAS_string ("BTFSS"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 66)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioString.plusAssign_operation(GALGAS_string ("BTFSC"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 68)) ;
  }
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_2 = this ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 70)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 70)) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_3 = this ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string (", ").add_operation (temp_3.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 71)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 71)) ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 72)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_F buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_F::method_buildAssemblyCode (GALGAS_string & ioArgument_ioString,
                                                                                  GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_F temp_0 = this ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_F temp_1 = this ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mFinstruction (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 80)) ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 81)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_incDecRegisterInCondition buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::method_buildAssemblyCode (GALGAS_string & ioArgument_ioString,
                                                                                           GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_1 = this ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (GALGAS_string ("INCFSZ "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 90)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 90)) ;
    }
  }
  if (kBoolFalse == test_0) {
    ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (GALGAS_string ("DECFSZ "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 92)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 92)) ;
  }
  const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_2 = this ;
  ioArgument_ioString.plusAssign_operation(temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 94)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_4 = this ;
    test_3 = temp_4.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioString.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 96)) ;
    }
  }
  if (kBoolFalse == test_3) {
    ioArgument_ioString.plusAssign_operation(GALGAS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 98)) ;
  }
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 100)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_6 = this ;
    test_5 = temp_6.readProperty_mBranchIfZero ().boolEnum () ;
    if (kBoolTrue == test_5) {
      GALGAS_string var_localLabel_2984 = GALGAS_string (".LL").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 102)) ;
      ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 102)) ;
      ioArgument_ioString.plusAssign_operation(GALGAS_string ("  GOTO ").add_operation (var_localLabel_2984, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 103)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 103)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 103)) ;
      const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_7 = this ;
      ioArgument_ioString.plusAssign_operation(GALGAS_string ("  GOTO ").add_operation (temp_7.readProperty_mTargetLabel (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 104)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 104)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 104)) ;
      ioArgument_ioString.plusAssign_operation(var_localLabel_2984.add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 105)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 105)) ;
    }
  }
  if (kBoolFalse == test_5) {
    const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_8 = this ;
    ioArgument_ioString.plusAssign_operation(GALGAS_string ("  GOTO ").add_operation (temp_8.readProperty_mTargetLabel (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 107)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 107)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 107)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_JUMP buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JUMP::method_buildAssemblyCode (GALGAS_string & ioArgument_ioString,
                                                                      GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_JUMP temp_0 = this ;
  switch (temp_0.readProperty_mBit_31__31_ ().enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      ioArgument_ioString.plusAssign_operation(GALGAS_string ("  BSF PCLATH, 3\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 117)) ;
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      ioArgument_ioString.plusAssign_operation(GALGAS_string ("  BCF PCLATH, 3\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 118)) ;
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange:
    {
    }
    break ;
  }
  const GALGAS_midrange_5F_intermediate_5F_JUMP temp_1 = this ;
  switch (temp_1.readProperty_mBit_31__32_ ().enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      ioArgument_ioString.plusAssign_operation(GALGAS_string ("  BSF PCLATH, 4\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 122)) ;
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      ioArgument_ioString.plusAssign_operation(GALGAS_string ("  BCF PCLATH, 4\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 123)) ;
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange:
    {
    }
    break ;
  }
  const GALGAS_midrange_5F_intermediate_5F_JUMP temp_2 = this ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  GOTO   ").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 126)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 126)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 126)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_GOTO buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_GOTO::method_buildAssemblyCode (GALGAS_string & ioArgument_ioString,
                                                                      GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_GOTO temp_0 = this ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  GOTO   ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 134)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 134)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 134)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_JSR buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JSR::method_buildAssemblyCode (GALGAS_string & ioArgument_ioString,
                                                                     GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_0 = this ;
  switch (temp_0.readProperty_mBit_31__31_ ().enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      ioArgument_ioString.plusAssign_operation(GALGAS_string ("  BSF PCLATH, 3\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 143)) ;
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      ioArgument_ioString.plusAssign_operation(GALGAS_string ("  BCF PCLATH, 3\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 144)) ;
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange:
    {
    }
    break ;
  }
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_1 = this ;
  switch (temp_1.readProperty_mBit_31__32_ ().enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      ioArgument_ioString.plusAssign_operation(GALGAS_string ("  BSF PCLATH, 4\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 148)) ;
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      ioArgument_ioString.plusAssign_operation(GALGAS_string ("  BCF PCLATH, 4\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 149)) ;
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange:
    {
    }
    break ;
  }
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_2 = this ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  CALL  ").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 152)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 152)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 152)) ;
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_3 = this ;
  switch (temp_3.readProperty_mBit_31__31_ ().enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      ioArgument_ioString.plusAssign_operation(GALGAS_string ("  BCF PCLATH, 3\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 154)) ;
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      ioArgument_ioString.plusAssign_operation(GALGAS_string ("  BSF PCLATH, 3\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 155)) ;
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange:
    {
    }
    break ;
  }
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_4 = this ;
  switch (temp_4.readProperty_mBit_31__32_ ().enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      ioArgument_ioString.plusAssign_operation(GALGAS_string ("  BCF PCLATH, 4\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 159)) ;
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      ioArgument_ioString.plusAssign_operation(GALGAS_string ("  BSF PCLATH, 4\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 160)) ;
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange:
    {
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_CALL buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_CALL::method_buildAssemblyCode (GALGAS_string & ioArgument_ioString,
                                                                      GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_CALL temp_0 = this ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  CALL  ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 170)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 170)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 170)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_CLRWDT buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::method_buildAssemblyCode (GALGAS_string & ioArgument_ioString,
                                                                                       GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  CLRWDT\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 178)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_CLRW buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW::method_buildAssemblyCode (GALGAS_string & ioArgument_ioString,
                                                                                     GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  CLRW\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 186)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_NOP buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP::method_buildAssemblyCode (GALGAS_string & ioArgument_ioString,
                                                                                    GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  NOP\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 194)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_RETURN buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN::method_buildAssemblyCode (GALGAS_string & ioArgument_ioString,
                                                                                       GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  RETURN\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 202)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_RETFIE buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE::method_buildAssemblyCode (GALGAS_string & ioArgument_ioString,
                                                                                       GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  RETFIE\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 210)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_SLEEP buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP::method_buildAssemblyCode (GALGAS_string & ioArgument_ioString,
                                                                                      GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  SLEEP\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 218)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_literalOperation buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::method_buildAssemblyCode (GALGAS_string & ioArgument_ioString,
                                                                                                 GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = this ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_1 = this ;
  ioArgument_ioString.plusAssign_operation(GALGAS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mLiteralInstruction (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)).add_operation (temp_1.readProperty_mLiteralValue ().getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 226)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_MNOP buildAssemblyCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP::method_buildAssemblyCode (GALGAS_string & ioArgument_ioString,
                                                                                     GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ().objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mOccurrenceFactor ().readProperty_location (), GALGAS_string ("No generated code"), fixItArray3  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 235)) ;
    }
  }
  GALGAS_uint var_idx_6974 = GALGAS_uint (uint32_t (0U)) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_4 = this ;
  if (temp_4.readProperty_mOccurrenceFactor ().readProperty_uint ().isValid ()) {
    uint32_t variant_6984 = temp_4.readProperty_mOccurrenceFactor ().readProperty_uint ().uintValue () ;
    bool loop_6984 = true ;
    while (loop_6984) {
      const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_5 = this ;
      loop_6984 = GALGAS_bool (ComparisonKind::lowerThan, var_idx_6974.objectCompare (temp_5.readProperty_mOccurrenceFactor ().readProperty_uint ())).isValid () ;
      if (loop_6984) {
        loop_6984 = GALGAS_bool (ComparisonKind::lowerThan, var_idx_6974.objectCompare (temp_5.readProperty_mOccurrenceFactor ().readProperty_uint ())).boolValue () ;
      }
      if (loop_6984 && (0 == variant_6984)) {
        loop_6984 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 238)) ;
      }
      if (loop_6984) {
        variant_6984 -- ;
        ioArgument_ioString.plusAssign_operation(GALGAS_string ("  NOP\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 241)) ;
        var_idx_6974.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 242)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'midrange_build_assembly_code?????!'
//
//--------------------------------------------------------------------------------------------------

void routine_midrange_5F_build_5F_assembly_5F_code_3F__3F__3F__3F__3F__21_ (const GALGAS_string constinArgument_inProcessorName,
                                                                            const GALGAS_registerTable constinArgument_inPredefinedRegisters,
                                                                            const GALGAS_registerTable constinArgument_inAllRegisters,
                                                                            const GALGAS_midrange_5F_intermediate_5F_instructionList constinArgument_inInstructionList,
                                                                            const GALGAS_actualConfigurationMap constinArgument_inActualConfigurationMap,
                                                                            GALGAS_string & outArgument_outAssemblyCode,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outAssemblyCode.drop () ; // Release 'out' argument
  outArgument_outAssemblyCode = GALGAS_string ("  errorlevel -302 ; No Warning on registers not in bank 0\n") ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("  errorlevel -306 ; No Warning on crossing page boundary\n\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 304)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("  PROCESSOR ").add_operation (constinArgument_inProcessorName, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 305)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 305)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 305)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string (";--- Code\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 307)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("  ORG 0\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 308)) ;
  GALGAS_uint var_bccLabelIndex_9146 = GALGAS_uint (uint32_t (0U)) ;
  cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_9171 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_9171.hasCurrentObject ()) {
    callExtensionMethod_buildAssemblyCode ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_9171.current_mInstruction (HERE).ptr (), outArgument_outAssemblyCode, var_bccLabelIndex_9146, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 311)) ;
    enumerator_9171.gotoNextObject () ;
  }
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 313)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string (";--- Prefefined registers\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 315)) ;
  cEnumerator_registerTable enumerator_9427 (constinArgument_inPredefinedRegisters, EnumerationOrder::up) ;
  while (enumerator_9427.hasCurrentObject ()) {
    GALGAS_uint var_firstRegister_9473 ;
    enumerator_9427.current_mRegisterAddressList (HERE).method_first (var_firstRegister_9473, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 317)) ;
    outArgument_outAssemblyCode.plusAssign_operation(enumerator_9427.current_lkey (HERE).readProperty_string ().add_operation (GALGAS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)).add_operation (var_firstRegister_9473.getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 318)) ;
    enumerator_9427.gotoNextObject () ;
  }
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 320)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string (";--- User defined registers (in RAM)\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 322)) ;
  cEnumerator_registerTable enumerator_9781 (constinArgument_inAllRegisters, EnumerationOrder::up) ;
  while (enumerator_9781.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = constinArgument_inPredefinedRegisters.getter_hasKey (enumerator_9781.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 324)).operator_not (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 324)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_uint var_firstRegister_9882 ;
        enumerator_9781.current_mRegisterAddressList (HERE).method_first (var_firstRegister_9882, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 325)) ;
        outArgument_outAssemblyCode.plusAssign_operation(enumerator_9781.current_lkey (HERE).readProperty_string ().add_operation (GALGAS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)).add_operation (var_firstRegister_9882.getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 326)) ;
      }
    }
    enumerator_9781.gotoNextObject () ;
  }
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 329)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string (";--- Piccolo defined symbol\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 331)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("W EQU 1\n\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 332)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::greaterThan, constinArgument_inActualConfigurationMap.getter_count (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 334)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string (";--- Configuration\n\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 335)) ;
      cEnumerator_actualConfigurationMap enumerator_10356 (constinArgument_inActualConfigurationMap, EnumerationOrder::up) ;
      while (enumerator_10356.hasCurrentObject ()) {
        outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("  __config ").add_operation (enumerator_10356.current_mRegisterAddress (HERE).getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)).add_operation (enumerator_10356.current_mRegisterValue (HERE).operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)).getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 337)) ;
        enumerator_10356.gotoNextObject () ;
      }
    }
  }
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string (";---\n\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 341)) ;
  outArgument_outAssemblyCode.plusAssign_operation(GALGAS_string ("  END\n\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas", 342)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'emitMidrangeCodeAtWordAddress?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_emitMidrangeCodeAtWordAddress_3F__26__3F__26_ (const GALGAS_uint constinArgument_inCode,
                                                            GALGAS_uint & ioArgument_ioWordAddress,
                                                            const GALGAS_midrange_5F_intermediate_5F_instruction constinArgument_inInstruction,
                                                            GALGAS_string & ioArgument_ioListFileContents,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("   ").add_operation (extensionGetter_x_34_String (ioArgument_ioWordAddress.multiply_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 10)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 10)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 10)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 10)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_x_34_String (constinArgument_inCode, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 11)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 11)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 11)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 11)) ;
  callExtensionMethod_print ((cPtr_midrange_5F_intermediate_5F_instruction *) constinArgument_inInstruction.ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 12)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 13)) ;
  {
  routine_emitCode_3F_ (constinArgument_inCode, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 14)) ;
  }
  ioArgument_ioWordAddress = ioArgument_ioWordAddress.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 15)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'emitMidrangeDirectCodeAtWordAddress?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (const GALGAS_uint constinArgument_inCode,
                                                                  GALGAS_uint & ioArgument_ioWordAddress,
                                                                  const GALGAS_string constinArgument_inInstructionDescriptionString,
                                                                  GALGAS_string & ioArgument_ioListFileContents,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("   ").add_operation (extensionGetter_x_34_String (ioArgument_ioWordAddress.multiply_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 25)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 25)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 25)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_x_34_String (constinArgument_inCode, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 26)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" ").add_operation (constinArgument_inInstructionDescriptionString, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 27)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 27)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 27)) ;
  {
  routine_emitCode_3F_ (constinArgument_inCode, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 28)) ;
  }
  ioArgument_ioWordAddress = ioArgument_ioWordAddress.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 29)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'emitNoMidrangeCodeAtWordAddress??&'
//
//--------------------------------------------------------------------------------------------------

void routine_emitNoMidrangeCodeAtWordAddress_3F__3F__26_ (const GALGAS_uint constinArgument_inWordAddress,
                                                          const GALGAS_midrange_5F_intermediate_5F_instruction constinArgument_inInstruction,
                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("   ").add_operation (extensionGetter_x_34_String (constinArgument_inWordAddress.multiply_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 38)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 38)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 38)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("      "), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 39)) ;
  callExtensionMethod_print ((cPtr_midrange_5F_intermediate_5F_instruction *) constinArgument_inInstruction.ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 40)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 41)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_LABEL enterLabelAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::method_enterLabelAtAddress (GALGAS_midrange_5F_symbolTable & ioArgument_ioRoutineSymbolTable,
                                                                                   GALGAS_uint & ioArgument_ioAddress,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  ioArgument_ioRoutineSymbolTable.setter_insertKey (temp_0.readProperty_mLabel (), ioArgument_ioAddress, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 68)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_ORG enterLabelAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::method_enterLabelAtAddress (GALGAS_midrange_5F_symbolTable & /* ioArgument_ioRoutineSymbolTable */,
                                                                                 GALGAS_uint & ioArgument_ioAddress,
                                                                                 Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_0 = this ;
  ioArgument_ioAddress = temp_0.readProperty_mOrigin () ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_actualInstruction enterLabelAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_actualInstruction::method_enterLabelAtAddress (GALGAS_midrange_5F_symbolTable & /* ioArgument_ioRoutineSymbolTable */,
                                                                                     GALGAS_uint & ioArgument_ioAddress,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_actualInstruction temp_0 = this ;
  ioArgument_ioAddress = ioArgument_ioAddress.add_operation (callExtensionGetter_instructionLength ((const cPtr_midrange_5F_intermediate_5F_actualInstruction *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 86)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 86)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_NULL generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_NULL::method_generateBinaryCodeAtAddress (const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                                GALGAS_uint & /* ioArgument_ioAddress */,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_ORG generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::method_generateBinaryCodeAtAddress (const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                         const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                         const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                         const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                                         GALGAS_uint & ioArgument_ioAddress,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_0 = this ;
  ioArgument_ioAddress = temp_0.readProperty_mOrigin () ;
  {
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_1 = this ;
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_2 = this ;
  routine_setEmitAddress_3F_ (temp_1.readProperty_mOrigin ().add_operation (temp_2.readProperty_mOrigin (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 125)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 125)) ;
  }
  {
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_3 = this ;
  routine_emitNoMidrangeCodeAtWordAddress_3F__3F__26_ (ioArgument_ioAddress, temp_3, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 126)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_FD generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_FD::method_generateBinaryCodeAtAddress (const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                             const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                             const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                             const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                             GALGAS_string & ioArgument_ioListFileContents,
                                                                                             GALGAS_uint & ioArgument_ioAddress,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD temp_0 = this ;
  GALGAS_uint var_code_5765 = extensionGetter_basecode (temp_0.readProperty_mInstruction_5F_FD_5F_base_5F_code (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 160)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD temp_2 = this ;
    test_1 = temp_2.readProperty_m_5F_W_5F_isDestination ().operator_not (SOURCE_FILE ("midrange_build_binary_code.galgas", 161)).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_code_5765 = var_code_5765.operator_or (GALGAS_uint (uint32_t (128U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 162)) ;
    }
  }
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD temp_3 = this ;
  var_code_5765 = var_code_5765.operator_or (temp_3.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 164)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 164)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FD temp_4 = this ;
  routine_emitMidrangeCodeAtWordAddress_3F__26__3F__26_ (var_code_5765, ioArgument_ioAddress, temp_4, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 165)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_F generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_F::method_generateBinaryCodeAtAddress (const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                            const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                            const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                            const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                            GALGAS_string & ioArgument_ioListFileContents,
                                                                                            GALGAS_uint & ioArgument_ioAddress,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_F temp_0 = this ;
  GALGAS_uint var_code_6678 = extensionGetter_baseCode (temp_0.readProperty_mFinstruction (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 187)) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_F temp_1 = this ;
  var_code_6678 = var_code_6678.operator_or (temp_1.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 188)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 188)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_F temp_2 = this ;
  routine_emitMidrangeCodeAtWordAddress_3F__26__3F__26_ (var_code_6678, ioArgument_ioAddress, temp_2, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 189)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_FB generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_FB::method_generateBinaryCodeAtAddress (const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                             const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                             const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                             const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                             GALGAS_string & ioArgument_ioListFileContents,
                                                                                             GALGAS_uint & ioArgument_ioAddress,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB temp_0 = this ;
  GALGAS_uint var_code_7501 = extensionGetter_baseCode (temp_0.readProperty_mBitOrientedOp (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 212)) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB temp_1 = this ;
  var_code_7501 = var_code_7501.operator_or (temp_1.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 213)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 213)) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB temp_2 = this ;
  var_code_7501 = var_code_7501.operator_or (temp_2.readProperty_mBitNumber ().left_shift_operation (GALGAS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 214)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 214)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_FB temp_3 = this ;
  routine_emitMidrangeCodeAtWordAddress_3F__26__3F__26_ (var_code_7501, ioArgument_ioAddress, temp_3, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 215)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_BitTestSkip generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::method_generateBinaryCodeAtAddress (const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                      const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                      const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                      const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                      GALGAS_string & ioArgument_ioListFileContents,
                                                                                                      GALGAS_uint & ioArgument_ioAddress,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_code_8160 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (kBoolTrue == test_0) {
      var_code_8160 = GALGAS_uint (uint32_t (7168U)) ;
    }
  }
  if (kBoolFalse == test_0) {
    var_code_8160 = GALGAS_uint (uint32_t (6144U)) ;
  }
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_2 = this ;
  var_code_8160 = var_code_8160.operator_or (temp_2.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 234)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 234)) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_3 = this ;
  var_code_8160 = var_code_8160.operator_or (temp_3.readProperty_mBitNumber ().left_shift_operation (GALGAS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 235)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 235)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 235)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_4 = this ;
  routine_emitMidrangeCodeAtWordAddress_3F__26__3F__26_ (var_code_8160, ioArgument_ioAddress, temp_4, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 236)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'emit_midrange_GOTOinstruction_nocheck??&&'
//
//--------------------------------------------------------------------------------------------------

void routine_emit_5F_midrange_5F_GOTOinstruction_5F_nocheck_3F__3F__26__26_ (const GALGAS_string constinArgument_inTargetLabel,
                                                                             const GALGAS_uint constinArgument_inTargetAddress,
                                                                             GALGAS_uint & ioArgument_ioAddress,
                                                                             GALGAS_string & ioArgument_ioListFileContents,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_code_8692 = GALGAS_uint (uint32_t (10240U)).operator_or (constinArgument_inTargetAddress.operator_and (GALGAS_uint (uint32_t (2047U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 246)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 246)) ;
  {
  routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (var_code_8692, ioArgument_ioAddress, GALGAS_string ("GOTO ").add_operation (constinArgument_inTargetLabel, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 247)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 247)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'emit_midrange_GOTOinstruction?&??&'
//
//--------------------------------------------------------------------------------------------------

void routine_emit_5F_midrange_5F_GOTOinstruction_3F__26__3F__3F__26_ (const GALGAS_location constinArgument_inIntructionLocation,
                                                                      GALGAS_uint & ioArgument_ioAddress,
                                                                      const GALGAS_string constinArgument_inTargetLabel,
                                                                      const GALGAS_uint constinArgument_inTargetAddress,
                                                                      GALGAS_string & ioArgument_ioListFileContents,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, ioArgument_ioAddress.operator_xor (constinArgument_inTargetAddress COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 258)).operator_and (GALGAS_uint (uint32_t (63488U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 258)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inIntructionLocation, GALGAS_string ("GOTO (from ").add_operation (ioArgument_ioAddress.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 259)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 259)).add_operation (constinArgument_inTargetAddress.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 259)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 259)).add_operation (GALGAS_string (") crosses page boundary"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 259)), fixItArray1  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 259)) ;
    }
  }
  {
  routine_emit_5F_midrange_5F_GOTOinstruction_5F_nocheck_3F__3F__26__26_ (constinArgument_inTargetLabel, constinArgument_inTargetAddress, ioArgument_ioAddress, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 261)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'emit_midrange_CALLinstruction_nocheck??&&'
//
//--------------------------------------------------------------------------------------------------

void routine_emit_5F_midrange_5F_CALLinstruction_5F_nocheck_3F__3F__26__26_ (const GALGAS_string constinArgument_inTargetLabel,
                                                                             const GALGAS_uint constinArgument_inTargetAddress,
                                                                             GALGAS_uint & ioArgument_ioAddress,
                                                                             GALGAS_string & ioArgument_ioListFileContents,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_code_9665 = GALGAS_uint (uint32_t (8192U)).operator_or (constinArgument_inTargetAddress.operator_and (GALGAS_uint (uint32_t (2047U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 271)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 271)) ;
  {
  routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (var_code_9665, ioArgument_ioAddress, GALGAS_string ("CALL ").add_operation (constinArgument_inTargetLabel, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 272)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 272)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'emit_midrange_CALLinstruction?&??&'
//
//--------------------------------------------------------------------------------------------------

void routine_emit_5F_midrange_5F_CALLinstruction_3F__26__3F__3F__26_ (const GALGAS_location constinArgument_inIntructionLocation,
                                                                      GALGAS_uint & ioArgument_ioAddress,
                                                                      const GALGAS_string constinArgument_inTargetLabel,
                                                                      const GALGAS_uint constinArgument_inTargetAddress,
                                                                      GALGAS_string & ioArgument_ioListFileContents,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, ioArgument_ioAddress.operator_xor (constinArgument_inTargetAddress COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 283)).operator_and (GALGAS_uint (uint32_t (63488U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 283)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inIntructionLocation, GALGAS_string ("CALL (from ").add_operation (ioArgument_ioAddress.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 284)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 284)).add_operation (constinArgument_inTargetAddress.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 284)).add_operation (GALGAS_string (") crosses page boundary"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 284)), fixItArray1  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 284)) ;
    }
  }
  {
  routine_emit_5F_midrange_5F_CALLinstruction_5F_nocheck_3F__3F__26__26_ (constinArgument_inTargetLabel, constinArgument_inTargetAddress, ioArgument_ioAddress, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 286)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_JUMP generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JUMP::method_generateBinaryCodeAtAddress (const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                const GALGAS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                GALGAS_string & ioArgument_ioListFileContents,
                                                                                GALGAS_uint & ioArgument_ioAddress,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset var_usedRegisters_10760 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("midrange_build_binary_code.galgas", 299)) ;
  GALGAS_uint var_targetAddress_10855 ;
  const GALGAS_midrange_5F_intermediate_5F_JUMP temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_10855, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 300)) ;
  GALGAS_registerExpression var_PCLATH_5F_register_10912 = GALGAS_registerExpression::class_func_new (GALGAS_lstring::class_func_new (GALGAS_string ("PCLATH"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 303)), GALGAS_immediatInteger::class_func_new (GALGAS_luint::class_func_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 304)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 304))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 304)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 305))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 302)) ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_11213 ;
  GALGAS_bitSliceTable joker_11248 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_PCLATH_5F_register_10912.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::class_func_max (SOURCE_FILE ("midrange_build_binary_code.galgas", 309)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_11213, joker_11248, var_usedRegisters_10760, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 307)) ;
  const GALGAS_midrange_5F_intermediate_5F_JUMP temp_1 = this ;
  switch (temp_1.readProperty_mBit_31__31_ ().enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (GALGAS_bigint ("5120", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 320)).operator_or (GALGAS_bigint ("384", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 320)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 320)).operator_or (var_PCLATH_5F_IPICregisterDescription_11213.readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 320)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas", 320)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 320)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 320)), ioArgument_ioAddress, GALGAS_string ("BSF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 319)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (GALGAS_bigint ("4096", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 327)).operator_or (GALGAS_bigint ("384", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 327)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 327)).operator_or (var_PCLATH_5F_IPICregisterDescription_11213.readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 327)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas", 327)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 327)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 327)), ioArgument_ioAddress, GALGAS_string ("BCF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 326)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange:
    {
    }
    break ;
  }
  const GALGAS_midrange_5F_intermediate_5F_JUMP temp_2 = this ;
  switch (temp_2.readProperty_mBit_31__32_ ().enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (GALGAS_bigint ("5120", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 337)).operator_or (GALGAS_bigint ("512", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 337)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 337)).operator_or (var_PCLATH_5F_IPICregisterDescription_11213.readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 337)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas", 337)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 337)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 337)), ioArgument_ioAddress, GALGAS_string ("BSF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 336)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (GALGAS_bigint ("4096", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 344)).operator_or (GALGAS_bigint ("512", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 344)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 344)).operator_or (var_PCLATH_5F_IPICregisterDescription_11213.readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 344)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas", 344)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 344)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 344)), ioArgument_ioAddress, GALGAS_string ("BCF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 343)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange:
    {
    }
    break ;
  }
  {
  const GALGAS_midrange_5F_intermediate_5F_JUMP temp_3 = this ;
  routine_emit_5F_midrange_5F_GOTOinstruction_5F_nocheck_3F__3F__26__26_ (temp_3.readProperty_mTargetLabel ().readProperty_string (), var_targetAddress_10855, ioArgument_ioAddress, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 352)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_GOTO generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_GOTO::method_generateBinaryCodeAtAddress (const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                const GALGAS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                GALGAS_string & ioArgument_ioListFileContents,
                                                                                GALGAS_uint & ioArgument_ioAddress,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_targetAddress_12807 ;
  const GALGAS_midrange_5F_intermediate_5F_GOTO temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_12807, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 365)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_GOTO temp_1 = this ;
  const GALGAS_midrange_5F_intermediate_5F_GOTO temp_2 = this ;
  routine_emit_5F_midrange_5F_GOTOinstruction_3F__26__3F__3F__26_ (temp_1.readProperty_mInstructionLocation (), ioArgument_ioAddress, temp_2.readProperty_mTargetLabel ().readProperty_string (), var_targetAddress_12807, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 367)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_JSR generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JSR::method_generateBinaryCodeAtAddress (const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                               const GALGAS_constantMap constinArgument_inConstantMap,
                                                                               const GALGAS_uint constinArgument_inTotalBankCount,
                                                                               const GALGAS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                                               GALGAS_uint & ioArgument_ioAddress,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset var_usedRegisters_13329 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("midrange_build_binary_code.galgas", 379)) ;
  GALGAS_uint var_targetAddress_13429 ;
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_13429, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 381)) ;
  GALGAS_registerExpression var_PCLATH_5F_register_13486 = GALGAS_registerExpression::class_func_new (GALGAS_lstring::class_func_new (GALGAS_string ("PCLATH"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 384)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 384)), GALGAS_immediatInteger::class_func_new (GALGAS_luint::class_func_new (GALGAS_uint (uint32_t (0U)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 385)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 385))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 385)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 386))  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 383)) ;
  GALGAS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_13794 ;
  GALGAS_bitSliceTable joker_13829 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_PCLATH_5F_register_13486.ptr (), constinArgument_inTotalBankCount, GALGAS_uint::class_func_max (SOURCE_FILE ("midrange_build_binary_code.galgas", 390)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_13794, joker_13829, var_usedRegisters_13329, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 388)) ;
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_1 = this ;
  switch (temp_1.readProperty_mBit_31__31_ ().enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (GALGAS_bigint ("5120", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 401)).operator_or (GALGAS_bigint ("384", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 401)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 401)).operator_or (var_PCLATH_5F_IPICregisterDescription_13794.readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 401)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas", 401)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 401)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 401)), ioArgument_ioAddress, GALGAS_string ("BSF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 400)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (GALGAS_bigint ("4096", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 408)).operator_or (GALGAS_bigint ("384", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 408)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 408)).operator_or (var_PCLATH_5F_IPICregisterDescription_13794.readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 408)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas", 408)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 408)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 408)), ioArgument_ioAddress, GALGAS_string ("BCF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 407)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange:
    {
    }
    break ;
  }
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_2 = this ;
  switch (temp_2.readProperty_mBit_31__32_ ().enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (GALGAS_bigint ("5120", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 418)).operator_or (GALGAS_bigint ("512", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 418)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 418)).operator_or (var_PCLATH_5F_IPICregisterDescription_13794.readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 418)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas", 418)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 418)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 418)), ioArgument_ioAddress, GALGAS_string ("BSF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 417)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (GALGAS_bigint ("4096", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 425)).operator_or (GALGAS_bigint ("512", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 425)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 425)).operator_or (var_PCLATH_5F_IPICregisterDescription_13794.readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 425)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas", 425)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 425)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 425)), ioArgument_ioAddress, GALGAS_string ("BCF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 424)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange:
    {
    }
    break ;
  }
  {
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_3 = this ;
  routine_emit_5F_midrange_5F_CALLinstruction_5F_nocheck_3F__3F__26__26_ (temp_3.readProperty_mTargetLabel ().readProperty_string (), var_targetAddress_13429, ioArgument_ioAddress, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 432)) ;
  }
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_4 = this ;
  switch (temp_4.readProperty_mBit_31__31_ ().enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (GALGAS_bigint ("4096", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 436)).operator_or (GALGAS_bigint ("384", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 436)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 436)).operator_or (var_PCLATH_5F_IPICregisterDescription_13794.readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 436)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas", 436)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 436)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 436)), ioArgument_ioAddress, GALGAS_string ("BCF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 435)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (GALGAS_bigint ("5120", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 443)).operator_or (GALGAS_bigint ("384", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 443)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 443)).operator_or (var_PCLATH_5F_IPICregisterDescription_13794.readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 443)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas", 443)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 443)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 443)), ioArgument_ioAddress, GALGAS_string ("BSF PCLATH, 3"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 442)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange:
    {
    }
    break ;
  }
  const GALGAS_midrange_5F_intermediate_5F_JSR temp_5 = this ;
  switch (temp_5.readProperty_mBit_31__32_ ().enumValue ()) {
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kNotBuilt:
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_set:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (GALGAS_bigint ("4096", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 453)).operator_or (GALGAS_bigint ("512", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 453)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 453)).operator_or (var_PCLATH_5F_IPICregisterDescription_13794.readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 453)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas", 453)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 453)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 453)), ioArgument_ioAddress, GALGAS_string ("BCF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 452)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_clear:
    {
      {
      routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (GALGAS_bigint ("5120", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 460)).operator_or (GALGAS_bigint ("512", inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 460)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 460)).operator_or (var_PCLATH_5F_IPICregisterDescription_13794.readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 460)).getter_bigint (SOURCE_FILE ("midrange_build_binary_code.galgas", 460)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 460)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 460)), ioArgument_ioAddress, GALGAS_string ("BSF PCLATH, 4"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 459)) ;
      }
    }
    break ;
  case GALGAS_midrange_5F_call_5F_goto_5F_bit::kEnum_noChange:
    {
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_CALL generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_CALL::method_generateBinaryCodeAtAddress (const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                const GALGAS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                GALGAS_string & ioArgument_ioListFileContents,
                                                                                GALGAS_uint & ioArgument_ioAddress,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_targetAddress_16335 ;
  const GALGAS_midrange_5F_intermediate_5F_CALL temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_16335, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 479)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_CALL temp_1 = this ;
  const GALGAS_midrange_5F_intermediate_5F_CALL temp_2 = this ;
  routine_emit_5F_midrange_5F_CALLinstruction_3F__26__3F__3F__26_ (temp_1.readProperty_mInstructionLocation (), ioArgument_ioAddress, temp_2.readProperty_mTargetLabel ().readProperty_string (), var_targetAddress_16335, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 481)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_incDecRegisterInCondition generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::method_generateBinaryCodeAtAddress (const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                     const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                     const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                     const GALGAS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                                     GALGAS_string & ioArgument_ioListFileContents,
                                                                                                     GALGAS_uint & ioArgument_ioAddress,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_code_16882 ;
  GALGAS_string var_s_16901 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_1 = this ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (kBoolTrue == test_0) {
      var_code_16882 = GALGAS_uint (uint32_t (3840U)) ;
      var_s_16901 = GALGAS_string ("INCFSZ") ;
    }
  }
  if (kBoolFalse == test_0) {
    var_code_16882 = GALGAS_uint (uint32_t (2816U)) ;
    var_s_16901 = GALGAS_string ("DECFSZ") ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_3 = this ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().operator_not (SOURCE_FILE ("midrange_build_binary_code.galgas", 500)).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_code_16882 = var_code_16882.operator_or (GALGAS_uint (uint32_t (128U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 501)) ;
    }
  }
  const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_4 = this ;
  var_code_16882 = var_code_16882.operator_or (temp_4.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 503)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 503)) ;
  const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_5 = this ;
  var_s_16901.plusAssign_operation(GALGAS_string (" ").add_operation (temp_5.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 504)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 504)) ;
  {
  routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (var_code_16882, ioArgument_ioAddress, var_s_16901, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 505)) ;
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_7 = this ;
    test_6 = temp_7.readProperty_mBranchIfZero ().boolEnum () ;
    if (kBoolTrue == test_6) {
      {
      const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_8 = this ;
      routine_emit_5F_midrange_5F_GOTOinstruction_3F__26__3F__3F__26_ (temp_8.readProperty_mInstructionLocation (), ioArgument_ioAddress, GALGAS_string ("$ + 2"), ioArgument_ioAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 508)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 508)) ;
      }
    }
  }
  GALGAS_uint var_targetAddress_17567 ;
  const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_9 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (GALGAS_lstring::class_func_new (temp_9.readProperty_mTargetLabel (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 511)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 511)), var_targetAddress_17567, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 511)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_10 = this ;
  const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_11 = this ;
  routine_emit_5F_midrange_5F_GOTOinstruction_3F__26__3F__3F__26_ (temp_10.readProperty_mInstructionLocation (), ioArgument_ioAddress, temp_11.readProperty_mTargetLabel (), var_targetAddress_17567, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 512)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_CLRWDT generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::method_generateBinaryCodeAtAddress (const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                 const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                 const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                 const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                                                                 GALGAS_uint & ioArgument_ioAddress,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT temp_0 = this ;
  routine_emitMidrangeCodeAtWordAddress_3F__26__3F__26_ (GALGAS_uint (uint32_t (100U)), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 524)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_CLRW generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW::method_generateBinaryCodeAtAddress (const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                               const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                               const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                               const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                                                               GALGAS_uint & ioArgument_ioAddress,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_CLRW temp_0 = this ;
  routine_emitMidrangeCodeAtWordAddress_3F__26__3F__26_ (GALGAS_uint (uint32_t (256U)), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 536)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_NOP generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP::method_generateBinaryCodeAtAddress (const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                              const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                              const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                              const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                              GALGAS_string & ioArgument_ioListFileContents,
                                                                                              GALGAS_uint & ioArgument_ioAddress,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_NOP temp_0 = this ;
  routine_emitMidrangeCodeAtWordAddress_3F__26__3F__26_ (GALGAS_uint (uint32_t (0U)), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 548)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_RETURN generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN::method_generateBinaryCodeAtAddress (const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                 const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                 const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                 const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                                                                 GALGAS_uint & ioArgument_ioAddress,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETURN temp_0 = this ;
  routine_emitMidrangeCodeAtWordAddress_3F__26__3F__26_ (GALGAS_uint (uint32_t (8U)), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 560)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_RETFIE generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE::method_generateBinaryCodeAtAddress (const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                 const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                 const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                 const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                                                                 GALGAS_uint & ioArgument_ioAddress,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_RETFIE temp_0 = this ;
  routine_emitMidrangeCodeAtWordAddress_3F__26__3F__26_ (GALGAS_uint (uint32_t (9U)), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 572)) ;
  }
}
