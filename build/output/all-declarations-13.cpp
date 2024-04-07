#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-13.h"

//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FOREVER analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FOREVER::method_analyze (const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                             GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                             const GALGAS_routineMap constinArgument_inRoutineMap,
                                                             const GALGAS_registerTable constinArgument_inRegisterTable,
                                                             const GALGAS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                             const GALGAS_constantMap constinArgument_inConstantMap,
                                                             const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                             GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                             GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                             GALGAS_lstring & ioArgument_ioBlockLabel,
                                                             GALGAS_string & ioArgument_ioListFileContents,
                                                             GALGAS_uint & ioArgument_ioCurrentBank,
                                                             const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                                             const GALGAS_routineKind constinArgument_inRoutineKind,
                                                             GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  switch (constinArgument_inRoutineKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_regularRoutine:
    {
      const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_0 = this ;
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (temp_0.readProperty_mInstructionLocation (), GALGAS_string ("a regular routine does not accept the \"forever\" instruction"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 540)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_noReturnRoutine:
    {
    }
    break ;
  case GALGAS_routineKind::kEnum_interruptRoutine:
    {
      const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("an interrupt routine does not accept the \"forever\" instruction"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 543)) ;
    }
    break ;
  }
  GALGAS_uint var_finalBank_19821 = ioArgument_ioCurrentBank ;
  const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_4 = this ;
  GALGAS_lstring var_loopLabel_19873 = GALGAS_lstring::init_21__21_ (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 547)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 547)), temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 548)) ;
  const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_5 = this ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 551)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_5.readProperty_mInstructionLocation (), var_loopLabel_19873, GALGAS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 554)), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 555)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 550)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::class_func_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 559)) ;
  ioArgument_ioBlockLabel = var_loopLabel_19873 ;
  {
  const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_6 = this ;
  routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (temp_6.readProperty_mInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 561)) ;
  }
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_bool (ComparisonKind::equal, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_7) {
      const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_8 = this ;
      TC_Array <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mEndOfInstructionList (), GALGAS_string ("\"forever\" instruction list execution is endless"), fixItArray9  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 581)) ;
    }
  }
  if (kBoolFalse == test_7) {
    const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_10 = this ;
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 584)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_10.readProperty_mInstructionLocation (), var_loopLabel_19873, GALGAS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 587)), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 588)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 583)) ;
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank_19821)).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_12 = this ;
      TC_Array <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mEndOfInstructionList (), GALGAS_string ("\"forever\" instruction list does not leave bank selection unchanged"), fixItArray13  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 594)) ;
    }
  }
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 597)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_nobanksel analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_nobanksel::method_analyze (const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                               GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                               const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                               const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                               const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                               const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                               const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                               GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                               GALGAS_ipic_31__38_SequentialInstructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                               GALGAS_lstring & /* ioArgument_ioBlockLabel */,
                                                               GALGAS_string & /* ioArgument_ioListFileContents */,
                                                               GALGAS_uint & ioArgument_ioCurrentBank,
                                                               const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                                               const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                               GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inShouldPreserveBSR.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_pic_31__38_Instruction_5F_nobanksel temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GALGAS_string ("cannot use \"nobank\" here: bank selection should be preserved (use it in a \"banksave\" construct)"), fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 619)) ;
    }
  }
  ioArgument_ioCurrentBank = GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 621)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_savebank analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_savebank::method_analyze (const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                              GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                              const GALGAS_routineMap constinArgument_inRoutineMap,
                                                              const GALGAS_registerTable constinArgument_inRegisterTable,
                                                              const GALGAS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                              const GALGAS_constantMap constinArgument_inConstantMap,
                                                              const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                              GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                              GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                              GALGAS_lstring & ioArgument_ioBlockLabel,
                                                              GALGAS_string & ioArgument_ioListFileContents,
                                                              GALGAS_uint & ioArgument_ioCurrentBank,
                                                              const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                              const GALGAS_routineKind constinArgument_inRoutineKind,
                                                              GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_registerExpression var_BSRregister_23146 = GALGAS_registerExpression::init_21__21__21_ (GALGAS_lstring::init_21__21_ (GALGAS_string ("BSR"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 646)), inCompiler COMMA_HERE), GALGAS_immediatInteger::init_21_ (GALGAS_luint::init_21__21_ (GALGAS_uint (uint32_t (0U)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 647)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 648)), inCompiler COMMA_HERE) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_BSR_5F_IPICregisterDescription_23469 ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((cPtr_registerExpression *) var_BSRregister_23146.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_BSR_5F_IPICregisterDescription_23469, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 650)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_save_5F_IPICregisterDescription_23762 ;
  const GALGAS_pic_31__38_Instruction_5F_savebank temp_0 = this ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((cPtr_registerExpression *) temp_0.readProperty_mRegister ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_save_5F_IPICregisterDescription_23762, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 658)) ;
  const GALGAS_pic_31__38_Instruction_5F_savebank temp_1 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::init_21__21__21_ (temp_1.readProperty_mInstructionLocation (), var_BSR_5F_IPICregisterDescription_23469, var_save_5F_IPICregisterDescription_23762, inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 671)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 666)) ;
  GALGAS_uint var_finalBank_24112 = ioArgument_ioCurrentBank ;
  {
  const GALGAS_pic_31__38_Instruction_5F_savebank temp_2 = this ;
  routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (temp_2.readProperty_mInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_finalBank_24112, GALGAS_bool (false), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 675)) ;
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (ComparisonKind::equal, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_pic_31__38_Instruction_5F_savebank temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mEndOfSaveBankInstruction (), GALGAS_string ("useless saving: execution does not reach the end of \"savebank\" instruction list"), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 694)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_savebank temp_6 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::init_21__21__21_ (temp_6.readProperty_mInstructionLocation (), var_save_5F_IPICregisterDescription_23762, var_BSR_5F_IPICregisterDescription_23469, inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 702)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 697)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_repetitionStatique analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_repetitionStatique::method_analyze (const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                        GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                        const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                        const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                        const GALGAS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                        const GALGAS_constantMap constinArgument_inConstantMap,
                                                                        const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                        GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                        GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                        GALGAS_lstring & ioArgument_ioBlockLabel,
                                                                        GALGAS_string & ioArgument_ioListFileContents,
                                                                        GALGAS_uint & ioArgument_ioCurrentBank,
                                                                        const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                        const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                        GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_36__34_ var_lowerBound_25716 ;
  const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLowerBoundExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_lowerBound_25716, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 725)) ;
  GALGAS_sint_36__34_ var_upperBound_25826 ;
  const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mUpperBoundExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_upperBound_25826, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 726)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (ComparisonKind::greaterThan, var_lowerBound_25716.objectCompare (var_upperBound_25826)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mInstructionLocation (), GALGAS_string ("lower bound (").add_operation (var_lowerBound_25716.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)).add_operation (GALGAS_string (") greater then upper bound ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)).add_operation (var_upperBound_25826.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)), fixItArray4  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (ComparisonKind::greaterThan, var_upperBound_25826.substract_operation (var_lowerBound_25716, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 730)).objectCompare (GALGAS_sint_36__34_ (int64_t (16777215LL)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_6 = this ;
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mInstructionLocation (), GALGAS_string ("repeat count (").add_operation (var_upperBound_25826.substract_operation (var_lowerBound_25716, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 731)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 731)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 731)).add_operation (GALGAS_string (") too large (should be <= 0xFF_FFFF)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 731)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 731)) ;
      }
    }
  }
  GALGAS_uint var_finalBank_26265 = ioArgument_ioCurrentBank ;
  GALGAS_constantMap var_tempConstantMap_26297 = constinArgument_inConstantMap ;
  {
  const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_8 = this ;
  var_tempConstantMap_26297.setter_insertKey (temp_8.readProperty_mConstantName (), var_lowerBound_25716, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 736)) ;
  }
  {
  const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_9 = this ;
  routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (temp_9.readProperty_mInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, var_tempConstantMap_26297, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_finalBank_26265, GALGAS_bool (true), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 737)) ;
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = GALGAS_bool (ComparisonKind::equal, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
    if (kBoolTrue == test_10) {
      const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_11 = this ;
      TC_Array <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mEndOfInstruction (), GALGAS_string ("useless do: execution does not reach the end of enclosed instruction list"), fixItArray12  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 756)) ;
    }
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = GALGAS_bool (ComparisonKind::notEqual, var_finalBank_26265.objectCompare (ioArgument_ioCurrentBank)).boolEnum () ;
    if (kBoolTrue == test_13) {
      const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_14 = this ;
      TC_Array <FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_14.readProperty_mEndOfInstruction (), GALGAS_string ("enclosed instruction list should not modify bank selection"), fixItArray15  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 759)) ;
    }
  }
  GALGAS_sint_36__34_ var_idx_27127 = var_lowerBound_25716.add_operation (GALGAS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 762)) ;
  if (var_upperBound_25826.substract_operation (var_lowerBound_25716, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).add_operation (GALGAS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).isValid ()) {
    uint32_t variant_27150 = var_upperBound_25826.substract_operation (var_lowerBound_25716, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).add_operation (GALGAS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).uintValue () ;
    bool loop_27150 = true ;
    while (loop_27150) {
      GALGAS_bool test_16 = GALGAS_bool (ComparisonKind::lowerOrEqual, var_idx_27127.objectCompare (var_upperBound_25826)) ;
      if (kBoolTrue == test_16.boolEnum ()) {
        test_16 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
      }
      loop_27150 = test_16.isValid () ;
      if (loop_27150) {
        loop_27150 = test_16.boolValue () ;
      }
      if (loop_27150 && (0 == variant_27150)) {
        loop_27150 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)) ;
      }
      if (loop_27150) {
        variant_27150 -- ;
        GALGAS_constantMap var_constantMap_27256 = constinArgument_inConstantMap ;
        {
        const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_17 = this ;
        var_constantMap_27256.setter_insertKey (temp_17.readProperty_mConstantName (), var_idx_27127, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 765)) ;
        }
        {
        const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_18 = this ;
        routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (temp_18.readProperty_mInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, var_constantMap_27256, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, GALGAS_bool (true), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 766)) ;
        }
        var_idx_27127.plusAssign_operation(GALGAS_sint_36__34_ (int64_t (1LL)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 784)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_banksel analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_banksel::method_analyze (const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                             GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                             const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                             const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                             const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                             const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                             const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                             GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                             GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                             GALGAS_lstring & /* ioArgument_ioBlockLabel */,
                                                             GALGAS_string & /* ioArgument_ioListFileContents */,
                                                             GALGAS_uint & ioArgument_ioCurrentBank,
                                                             const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                                             const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                             GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inShouldPreserveBSR.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_pic_31__38_Instruction_5F_banksel temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GALGAS_string ("cannot use \"banksel\" here: bank selection should be preserved (use \"banksave\" instruction)"), fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 807)) ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_pic_31__38_Instruction_5F_banksel temp_4 = this ;
    test_3 = GALGAS_bool (ComparisonKind::greaterThan, temp_4.readProperty_mBankIndex ().readProperty_uint ().objectCompare (GALGAS_uint (uint32_t (15U)))).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_pic_31__38_Instruction_5F_banksel temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mBankIndex ().readProperty_location (), GALGAS_string ("selected bank idx should be lower or equal to 15"), fixItArray6  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 810)) ;
      ioArgument_ioCurrentBank = GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 811)) ;
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      const GALGAS_pic_31__38_Instruction_5F_banksel temp_8 = this ;
      test_7 = GALGAS_bool (ComparisonKind::notEqual, temp_8.readProperty_mBankIndex ().readProperty_uint ().objectCompare (ioArgument_ioCurrentBank)).boolEnum () ;
      if (kBoolTrue == test_7) {
        const GALGAS_pic_31__38_Instruction_5F_banksel temp_9 = this ;
        ioArgument_ioCurrentBank = temp_9.readProperty_mBankIndex ().readProperty_uint () ;
        const GALGAS_pic_31__38_Instruction_5F_banksel temp_10 = this ;
        const GALGAS_pic_31__38_Instruction_5F_banksel temp_11 = this ;
        ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::init_21__21_ (temp_10.readProperty_mInstructionLocation (), temp_11.readProperty_mBankIndex (), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 814)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 814)) ;
      }
    }
    if (kBoolFalse == test_7) {
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        const GALGAS_pic_31__38_Instruction_5F_banksel temp_13 = this ;
        test_12 = temp_13.readProperty_mWarningOnUselessBanksel ().boolEnum () ;
        if (kBoolTrue == test_12) {
          const GALGAS_pic_31__38_Instruction_5F_banksel temp_14 = this ;
          TC_Array <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticWarning (temp_14.readProperty_mBankIndex ().readProperty_location (), GALGAS_string ("useless instruction: the bank ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 816)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 816)).add_operation (GALGAS_string (" is already selected"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 816)), fixItArray15  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 816)) ;
        }
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_banksel_register analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_banksel_5F_register::method_analyze (const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                         GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                         const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                         const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                         const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                         const GALGAS_constantMap constinArgument_inConstantMap,
                                                                         const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                         GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                         GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                         GALGAS_lstring & /* ioArgument_ioBlockLabel */,
                                                                         GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                         GALGAS_uint & ioArgument_ioCurrentBank,
                                                                         const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                                                         const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                         GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = constinArgument_inShouldPreserveBSR.boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GALGAS_string ("cannot use \"banksel\" here: bank selection should be preserved (use \"banksave\" instruction)"), fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 840)) ;
    }
  }
  GALGAS_uint var_registerAddress_30240 ;
  const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register temp_3 = this ;
  callExtensionMethod_getRegisterAddress ((cPtr_registerExpression *) temp_3.readProperty_mRegisterExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (false), ioArgument_ioUsedRegisters, var_registerAddress_30240, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 842)) ;
  GALGAS_uint var_newBank_30361 = var_registerAddress_30240.right_shift_operation (GALGAS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 850)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 850)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (var_newBank_30361)).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioCurrentBank = var_newBank_30361 ;
      const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register temp_5 = this ;
      const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register temp_6 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::init_21__21_ (temp_5.readProperty_mInstructionLocation (), GALGAS_luint::init_21__21_ (var_newBank_30361, temp_6.readProperty_mRegisterExpression ().readProperty_mRegisterName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 857)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 853)) ;
    }
  }
  if (kBoolFalse == test_4) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register temp_8 = this ;
      test_7 = temp_8.readProperty_mWarningOnUselessBanksel ().boolEnum () ;
      if (kBoolTrue == test_7) {
        const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register temp_9 = this ;
        TC_Array <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticWarning (temp_9.readProperty_mRegisterExpression ().readProperty_mRegisterName ().readProperty_location (), GALGAS_string ("useless instruction: the bank ").add_operation (var_newBank_30361.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 860)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 860)).add_operation (GALGAS_string (" is already selected"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 860)), fixItArray10  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 860)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_TBLRD analyzeSimpleInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_TBLRD::method_analyzeSimpleInstruction (const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                            const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                            const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                            const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                            const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                            GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                            const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                            GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                            GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_pic_31__38_Instruction_5F_TBLRD temp_0 = this ;
  const GALGAS_pic_31__38_Instruction_5F_TBLRD temp_1 = this ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::init_21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mOption (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_TBLWT analyzeSimpleInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_TBLWT::method_analyzeSimpleInstruction (const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                            const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                            const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                            const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                            const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                            GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                            const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                            GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                            GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_pic_31__38_Instruction_5F_TBLWT temp_0 = this ;
  const GALGAS_pic_31__38_Instruction_5F_TBLWT temp_1 = this ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::init_21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mOption (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_MNOP analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_MNOP::method_analyze (const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                          GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                          const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                          const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                          const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                          const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                          const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                          GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                          GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                          GALGAS_lstring & /* ioArgument_ioBlockLabel */,
                                                          GALGAS_string & /* ioArgument_ioListFileContents */,
                                                          GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                          const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                          const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                          GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_pic_31__38_Instruction_5F_MNOP temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ().objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_pic_31__38_Instruction_5F_MNOP temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mOccurrenceFactor ().readProperty_location (), GALGAS_string ("occurrence argument is zero: no generated code"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 920)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_MNOP temp_4 = this ;
  const GALGAS_pic_31__38_Instruction_5F_MNOP temp_5 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::init_21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mOccurrenceFactor (), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 927)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 923)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_NOPBRA analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_NOPBRA::method_analyze (const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                            GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                            const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                            const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                            const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                            const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                            const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                            GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                            GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                            GALGAS_lstring & /* ioArgument_ioBlockLabel */,
                                                            GALGAS_string & /* ioArgument_ioListFileContents */,
                                                            GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                            const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                            const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                            GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_pic_31__38_Instruction_5F_NOPBRA temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ().objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_pic_31__38_Instruction_5F_NOPBRA temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mOccurrenceFactor ().readProperty_location (), GALGAS_string ("occurrence argument is zero: no generated code"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 951)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_NOPBRA temp_4 = this ;
  const GALGAS_pic_31__38_Instruction_5F_NOPBRA temp_5 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::init_21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mOccurrenceFactor (), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 958)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 954)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_LTBLPTR analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LTBLPTR::method_analyze (const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                             GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                             const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                             const GALGAS_registerTable constinArgument_inRegisterTable,
                                                             const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                             const GALGAS_constantMap constinArgument_inConstantMap,
                                                             const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                             GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                             GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                             GALGAS_lstring & /* ioArgument_ioBlockLabel */,
                                                             GALGAS_string & /* ioArgument_ioListFileContents */,
                                                             GALGAS_uint & ioArgument_ioCurrentBank,
                                                             const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                             const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                             GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_36__34_ var_result_34884 ;
  const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mImmediatExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_34884, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 980)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::greaterThan, var_result_34884.objectCompare (GALGAS_sint_36__34_ (int64_t (16777215LL)))).operator_or (GALGAS_bool (ComparisonKind::lowerThan, var_result_34884.objectCompare (GALGAS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 982)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("immediate value is evaluated as ").add_operation (var_result_34884.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 983)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 983)).add_operation (GALGAS_string (" (should be between 0 and 0xFF_FFFF)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 983)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 983)) ;
    }
  }
  GALGAS_uint var_address_35109 = var_result_34884.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 985)) ;
  const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_4 = this ;
  GALGAS_registerExpression var_TBLPTRU_35155 = GALGAS_registerExpression::init_21__21__21_ (GALGAS_lstring::init_21__21_ (GALGAS_string ("TBLPTRU"), temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GALGAS_immediatInteger::init_21_ (GALGAS_luint::init_21__21_ (GALGAS_uint (uint32_t (0U)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 989)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 990)), inCompiler COMMA_HERE) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_outIPICregisterDescription_35511 ;
  GALGAS_bitSliceTable joker_35542 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRU_35155.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_35511, joker_35542, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 992)) ;
  GALGAS_uint var_upper_35583 = var_address_35109.right_shift_operation (GALGAS_bigint ("16", inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1002)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1002)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (ComparisonKind::equal, var_upper_35583.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_6 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_6.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1006)), var_outIPICregisterDescription_35511, inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1009)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1004)) ;
    }
  }
  if (kBoolFalse == test_5) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = GALGAS_bool (ComparisonKind::equal, var_upper_35583.objectCompare (GALGAS_uint (uint32_t (255U)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_8 = this ;
        ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_8.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1014)), var_outIPICregisterDescription_35511, inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1017)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1012)) ;
      }
    }
    if (kBoolFalse == test_7) {
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_9 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_9.readProperty_mInstructionLocation (), GALGAS_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1022)), var_upper_35583, inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1025)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1020)) ;
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_10 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_10.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1029)), var_outIPICregisterDescription_35511, inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1032)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1027)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_11 = this ;
  GALGAS_registerExpression var_TBLPTRH_36571 = GALGAS_registerExpression::init_21__21__21_ (GALGAS_lstring::init_21__21_ (GALGAS_string ("TBLPTRH"), temp_11.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GALGAS_immediatInteger::init_21_ (GALGAS_luint::init_21__21_ (GALGAS_uint (uint32_t (0U)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1038)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1039)), inCompiler COMMA_HERE) ;
  GALGAS_bitSliceTable joker_36914 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRH_36571.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_35511, joker_36914, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1041)) ;
  GALGAS_uint var_high_36955 = var_address_35109.right_shift_operation (GALGAS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1051)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1051)).operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1051)) ;
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = GALGAS_bool (ComparisonKind::equal, var_high_36955.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_12) {
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_13 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_13.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1055)), var_outIPICregisterDescription_35511, inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1058)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1053)) ;
    }
  }
  if (kBoolFalse == test_12) {
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = GALGAS_bool (ComparisonKind::equal, var_high_36955.objectCompare (GALGAS_uint (uint32_t (255U)))).boolEnum () ;
      if (kBoolTrue == test_14) {
        const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_15 = this ;
        ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_15.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1063)), var_outIPICregisterDescription_35511, inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1066)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1061)) ;
      }
    }
    if (kBoolFalse == test_14) {
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_16 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_16.readProperty_mInstructionLocation (), GALGAS_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1071)), var_high_36955, inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1074)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1069)) ;
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_17 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_17.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1078)), var_outIPICregisterDescription_35511, inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1081)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1076)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_18 = this ;
  GALGAS_registerExpression var_TBLPTRL_37946 = GALGAS_registerExpression::init_21__21__21_ (GALGAS_lstring::init_21__21_ (GALGAS_string ("TBLPTRL"), temp_18.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GALGAS_immediatInteger::init_21_ (GALGAS_luint::init_21__21_ (GALGAS_uint (uint32_t (0U)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1087)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1088)), inCompiler COMMA_HERE) ;
  GALGAS_bitSliceTable joker_38288 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRL_37946.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_35511, joker_38288, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1090)) ;
  GALGAS_uint var_low_38329 = var_address_35109.operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1100)) ;
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    test_19 = GALGAS_bool (ComparisonKind::equal, var_low_38329.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_19) {
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_20 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_20.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1104)), var_outIPICregisterDescription_35511, inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1107)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1102)) ;
    }
  }
  if (kBoolFalse == test_19) {
    enumGalgasBool test_21 = kBoolTrue ;
    if (kBoolTrue == test_21) {
      test_21 = GALGAS_bool (ComparisonKind::equal, var_low_38329.objectCompare (GALGAS_uint (uint32_t (255U)))).boolEnum () ;
      if (kBoolTrue == test_21) {
        const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_22 = this ;
        ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_22.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1112)), var_outIPICregisterDescription_35511, inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1115)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1110)) ;
      }
    }
    if (kBoolFalse == test_21) {
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_23 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_23.readProperty_mInstructionLocation (), GALGAS_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1120)), var_low_38329, inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1123)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1118)) ;
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_24 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_24.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1127)), var_outIPICregisterDescription_35511, inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1130)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1125)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_LDATA16PTR analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR::method_analyze (const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                      GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                      const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                      const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                      const GALGAS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                      const GALGAS_constantMap constinArgument_inConstantMap,
                                                                      const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                      GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                      GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                      GALGAS_lstring & /* ioArgument_ioBlockLabel */,
                                                                      GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                      GALGAS_uint & ioArgument_ioCurrentBank,
                                                                      const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                      const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                      GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uintlist var_data_40032 ;
  GALGAS_bool var_isData_38__40042 ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_0 = this ;
  constinArgument_inDataMap.method_searchKey (temp_0.readProperty_mDataName (), var_data_40032, var_isData_38__40042, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1154)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_isData_38__40042.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mDataName ().readProperty_location (), GALGAS_string ("this data is a byte array; use ldata8ptr"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1156)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_5 = this ;
    test_4 = GALGAS_bool (ComparisonKind::greaterOrEqual, temp_5.readProperty_mDataIndex ().readProperty_uint ().objectCompare (var_data_40032.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1159)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_6 = this ;
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mDataIndex ().readProperty_location (), GALGAS_string ("index should be < ").add_operation (var_data_40032.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1160)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1160)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1160)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1160)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_8 = this ;
  GALGAS_registerExpression var_TBLPTRU_40300 = GALGAS_registerExpression::init_21__21__21_ (GALGAS_lstring::init_21__21_ (GALGAS_string ("TBLPTRU"), temp_8.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GALGAS_immediatInteger::init_21_ (GALGAS_luint::init_21__21_ (GALGAS_uint (uint32_t (0U)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1165)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1166)), inCompiler COMMA_HERE) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_outIPICregisterDescription_40656 ;
  GALGAS_bitSliceTable joker_40687 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRU_40300.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_40656, joker_40687, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1168)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_9 = this ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_10 = this ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_11 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::init_21__21__21__21_ (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mDataName (), temp_11.readProperty_mDataIndex ().readProperty_uint ().multiply_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1181)), GALGAS_uint (uint32_t (16U)), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1184)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1178)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_12 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_12.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1188)), var_outIPICregisterDescription_40656, inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1191)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1186)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_13 = this ;
  GALGAS_registerExpression var_TBLPTRH_41133 = GALGAS_registerExpression::init_21__21__21_ (GALGAS_lstring::init_21__21_ (GALGAS_string ("TBLPTRH"), temp_13.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GALGAS_immediatInteger::init_21_ (GALGAS_luint::init_21__21_ (GALGAS_uint (uint32_t (0U)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1196)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1197)), inCompiler COMMA_HERE) ;
  GALGAS_bitSliceTable joker_41475 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRH_41133.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_40656, joker_41475, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1199)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_14 = this ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_15 = this ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_16 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::init_21__21__21__21_ (temp_14.readProperty_mInstructionLocation (), temp_15.readProperty_mDataName (), temp_16.readProperty_mDataIndex ().readProperty_uint ().multiply_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1212)), GALGAS_uint (uint32_t (8U)), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1215)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1209)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_17 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_17.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1219)), var_outIPICregisterDescription_40656, inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1222)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1217)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_18 = this ;
  GALGAS_registerExpression var_TBLPTRL_41919 = GALGAS_registerExpression::init_21__21__21_ (GALGAS_lstring::init_21__21_ (GALGAS_string ("TBLPTRL"), temp_18.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GALGAS_immediatInteger::init_21_ (GALGAS_luint::init_21__21_ (GALGAS_uint (uint32_t (0U)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1227)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1228)), inCompiler COMMA_HERE) ;
  GALGAS_bitSliceTable joker_42262 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRL_41919.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_40656, joker_42262, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1230)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_19 = this ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_20 = this ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_21 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::init_21__21__21__21_ (temp_19.readProperty_mInstructionLocation (), temp_20.readProperty_mDataName (), temp_21.readProperty_mDataIndex ().readProperty_uint ().multiply_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1243)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1246)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1240)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_22 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_22.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1250)), var_outIPICregisterDescription_40656, inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1253)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1248)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_LDATA8PTR analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR::method_analyze (const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                  GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                  const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                  const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                  const GALGAS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                  const GALGAS_constantMap constinArgument_inConstantMap,
                                                                  const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                  GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                  GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                  GALGAS_lstring & /* ioArgument_ioBlockLabel */,
                                                                  GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                  GALGAS_uint & ioArgument_ioCurrentBank,
                                                                  const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                  const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                  GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uintlist var_data_43428 ;
  GALGAS_bool var_isData_38__43438 ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_0 = this ;
  constinArgument_inDataMap.method_searchKey (temp_0.readProperty_mDataName (), var_data_43428, var_isData_38__43438, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1276)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_isData_38__43438.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1277)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mDataName ().readProperty_location (), GALGAS_string ("this data is a 16-bit word array; use ldata16ptr"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1278)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_5 = this ;
    test_4 = GALGAS_bool (ComparisonKind::greaterOrEqual, temp_5.readProperty_mDataIndex ().readProperty_uint ().objectCompare (var_data_43428.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1281)).multiply_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1281)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_6 = this ;
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mDataIndex ().readProperty_location (), GALGAS_string ("index should be < ").add_operation (var_data_43428.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1282)).multiply_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1282)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1282)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1282)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1282)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_8 = this ;
  GALGAS_registerExpression var_TBLPTRU_43720 = GALGAS_registerExpression::init_21__21__21_ (GALGAS_lstring::init_21__21_ (GALGAS_string ("TBLPTRU"), temp_8.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GALGAS_immediatInteger::init_21_ (GALGAS_luint::init_21__21_ (GALGAS_uint (uint32_t (0U)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1287)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1288)), inCompiler COMMA_HERE) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_outIPICregisterDescription_44076 ;
  GALGAS_bitSliceTable joker_44107 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRU_43720.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_44076, joker_44107, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1290)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_9 = this ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_10 = this ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_11 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::init_21__21__21__21_ (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mDataName (), temp_11.readProperty_mDataIndex ().readProperty_uint (), GALGAS_uint (uint32_t (16U)), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1306)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1300)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_12 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_12.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1310)), var_outIPICregisterDescription_44076, inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1313)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1308)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_13 = this ;
  GALGAS_registerExpression var_TBLPTRH_44549 = GALGAS_registerExpression::init_21__21__21_ (GALGAS_lstring::init_21__21_ (GALGAS_string ("TBLPTRH"), temp_13.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GALGAS_immediatInteger::init_21_ (GALGAS_luint::init_21__21_ (GALGAS_uint (uint32_t (0U)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1318)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1319)), inCompiler COMMA_HERE) ;
  GALGAS_bitSliceTable joker_44891 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRH_44549.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_44076, joker_44891, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1321)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_14 = this ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_15 = this ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_16 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::init_21__21__21__21_ (temp_14.readProperty_mInstructionLocation (), temp_15.readProperty_mDataName (), temp_16.readProperty_mDataIndex ().readProperty_uint (), GALGAS_uint (uint32_t (8U)), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1337)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1331)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_17 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_17.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1341)), var_outIPICregisterDescription_44076, inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1344)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1339)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_18 = this ;
  GALGAS_registerExpression var_TBLPTRL_45331 = GALGAS_registerExpression::init_21__21__21_ (GALGAS_lstring::init_21__21_ (GALGAS_string ("TBLPTRL"), temp_18.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GALGAS_immediatInteger::init_21_ (GALGAS_luint::init_21__21_ (GALGAS_uint (uint32_t (0U)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1349)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1350)), inCompiler COMMA_HERE) ;
  GALGAS_bitSliceTable joker_45674 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRL_45331.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_44076, joker_45674, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1352)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_19 = this ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_20 = this ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_21 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::init_21__21__21__21_ (temp_19.readProperty_mInstructionLocation (), temp_20.readProperty_mDataName (), temp_21.readProperty_mDataIndex ().readProperty_uint (), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1368)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1362)) ;
  const GALGAS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_22 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_22.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1372)), var_outIPICregisterDescription_44076, inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1375)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1370)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_JUMP analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_JUMP::method_analyze (const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                          GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                          const GALGAS_routineMap constinArgument_inRoutineMap,
                                                          const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                          const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                          const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                          const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                          GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                          GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                          GALGAS_lstring & ioArgument_ioBlockLabel,
                                                          GALGAS_string & /* ioArgument_ioListFileContents */,
                                                          GALGAS_uint & ioArgument_ioCurrentBank,
                                                          const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                          const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                          GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_isNoReturn_46870 ;
  GALGAS_uint var_requiredBank_46892 ;
  const GALGAS_pic_31__38_Instruction_5F_JUMP temp_0 = this ;
  GALGAS_uint joker_46905 ; // Joker input parameter
  GALGAS_bool joker_46908 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_46870, var_requiredBank_46892, joker_46905, joker_46908, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1398)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::notEqual, var_requiredBank_46892.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1399)))).operator_and (GALGAS_bool (ComparisonKind::notEqual, var_requiredBank_46892.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1399)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_pic_31__38_Instruction_5F_JUMP temp_2 = this ;
      GALGAS_string var_errorMessage_47001 = GALGAS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1400)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1400)).add_operation (var_requiredBank_46892.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1400)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1400)) ;
      var_errorMessage_47001.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1401)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1402)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_errorMessage_47001.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1403)) ;
        }
      }
      if (kBoolFalse == test_3) {
        var_errorMessage_47001.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1405)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1405)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1405)) ;
      }
      const GALGAS_pic_31__38_Instruction_5F_JUMP temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_47001, fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1407)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_isNoReturn_46870.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1409)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_pic_31__38_Instruction_5F_JUMP temp_7 = this ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GALGAS_string ("a regular routine should be called with a RCALL, CALL or JSR instruction"), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1410)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_JUMP temp_9 = this ;
  const GALGAS_pic_31__38_Instruction_5F_JUMP temp_10 = this ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1414)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mTargetLabel (), GALGAS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1417)), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1418)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1413)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::class_func_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1421)) ;
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1423)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_computed_rcall analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_computed_5F_rcall::method_analyze (const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                       GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                       const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                       const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                       const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                       const GALGAS_constantMap constinArgument_inConstantMap,
                                                                       const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                       GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                       GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                       GALGAS_lstring & /* ioArgument_ioBlockLabel */,
                                                                       GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                       GALGAS_uint & ioArgument_ioCurrentBank,
                                                                       const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                                                       const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                       GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_someReturnsBank_48619 = GALGAS_bool (false) ;
  GALGAS_uint var_returnedBankSelection_48655 = ioArgument_ioCurrentBank ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall temp_0 = this ;
  cEnumerator_lstringlist enumerator_48700 (temp_0.readProperty_mTargetLabels (), EnumerationOrder::up) ;
  while (enumerator_48700.hasCurrentObject ()) {
    GALGAS_bool var_isNoReturn_48781 ;
    GALGAS_uint var_requiredBank_48803 ;
    GALGAS_uint var_returnedBank_48827 ;
    GALGAS_bool var_preservesBank_48851 ;
    constinArgument_inRoutineMap.method_searchKey (enumerator_48700.current_mValue (HERE), var_isNoReturn_48781, var_requiredBank_48803, var_returnedBank_48827, var_preservesBank_48851, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1448)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (ComparisonKind::notEqual, var_requiredBank_48803.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1449)))).operator_and (GALGAS_bool (ComparisonKind::notEqual, var_requiredBank_48803.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1449)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_string var_errorMessage_48959 = GALGAS_string ("the routine '").add_operation (enumerator_48700.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1450)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1450)).add_operation (var_requiredBank_48803.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1450)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1450)) ;
        var_errorMessage_48959.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1451)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1452)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            var_errorMessage_48959.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1453)) ;
          }
        }
        if (kBoolFalse == test_2) {
          var_errorMessage_48959.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1455)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1455)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1455)) ;
        }
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_48700.current_mValue (HERE).readProperty_location (), var_errorMessage_48959, fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1457)) ;
      }
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_isNoReturn_48781.boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_48700.current_mValue (HERE).readProperty_location (), GALGAS_string ("for being named in a computed rcall, the '").add_operation (enumerator_48700.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1460)).add_operation (GALGAS_string ("' routine should be declared without the \"noreturn\" qualifier"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1460)), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1460)) ;
      }
    }
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = constinArgument_inShouldPreserveBSR.operator_and (var_preservesBank_48851.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1462)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1462)).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_48700.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_48700.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1463)).add_operation (GALGAS_string ("' routine should preserved bank selection"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1463)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1463)) ;
      }
    }
    if (kBoolFalse == test_6) {
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = constinArgument_inShouldPreserveBSR.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1464)).operator_and (var_preservesBank_48851.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1464)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1464)).boolEnum () ;
        if (kBoolTrue == test_8) {
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            test_9 = var_someReturnsBank_48619.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1465)).boolEnum () ;
            if (kBoolTrue == test_9) {
              var_returnedBankSelection_48655 = var_returnedBank_48827 ;
              var_someReturnsBank_48619 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_9) {
            enumGalgasBool test_10 = kBoolTrue ;
            if (kBoolTrue == test_10) {
              test_10 = GALGAS_bool (ComparisonKind::notEqual, var_returnedBankSelection_48655.objectCompare (var_returnedBank_48827)).boolEnum () ;
              if (kBoolTrue == test_10) {
                GALGAS_string var_errorMessage_49873 = GALGAS_string ("the '").add_operation (enumerator_48700.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1469)).add_operation (GALGAS_string ("' routine returns "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1469)) ;
                enumGalgasBool test_11 = kBoolTrue ;
                if (kBoolTrue == test_11) {
                  test_11 = GALGAS_bool (ComparisonKind::equal, var_returnedBank_48827.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1470)))).boolEnum () ;
                  if (kBoolTrue == test_11) {
                    var_errorMessage_49873.plusAssign_operation(GALGAS_string ("no bank selection"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1471)) ;
                  }
                }
                if (kBoolFalse == test_11) {
                  var_errorMessage_49873.plusAssign_operation(GALGAS_string ("bank selection set to  ").add_operation (var_returnedBank_48827.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1473)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1473)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1473)) ;
                }
                var_errorMessage_49873.plusAssign_operation(GALGAS_string (", but previous routine(s) return(s) "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1475)) ;
                enumGalgasBool test_12 = kBoolTrue ;
                if (kBoolTrue == test_12) {
                  test_12 = GALGAS_bool (ComparisonKind::equal, var_returnedBankSelection_48655.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1476)))).boolEnum () ;
                  if (kBoolTrue == test_12) {
                    var_errorMessage_49873.plusAssign_operation(GALGAS_string ("no bank selection"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1477)) ;
                  }
                }
                if (kBoolFalse == test_12) {
                  var_errorMessage_49873.plusAssign_operation(GALGAS_string ("bank selection set to  ").add_operation (var_returnedBankSelection_48655.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1479)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1479)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1479)) ;
                }
                TC_Array <FixItDescription> fixItArray13 ;
                inCompiler->emitSemanticError (enumerator_48700.current_mValue (HERE).readProperty_location (), var_errorMessage_49873, fixItArray13  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1481)) ;
              }
            }
          }
        }
      }
      if (kBoolFalse == test_8) {
        enumGalgasBool test_14 = kBoolTrue ;
        if (kBoolTrue == test_14) {
          test_14 = constinArgument_inShouldPreserveBSR.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1483)).operator_and (var_preservesBank_48851 COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1483)).boolEnum () ;
          if (kBoolTrue == test_14) {
          }
        }
      }
    }
    enumerator_48700.gotoNextObject () ;
  }
  ioArgument_ioCurrentBank = var_returnedBankSelection_48655 ;
  GALGAS_sint_36__34_ var_size_50627 ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall temp_15 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_15.readProperty_mSizeExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size_50627, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1489)) ;
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = GALGAS_bool (ComparisonKind::lowerThan, var_size_50627.objectCompare (GALGAS_sint_36__34_ (int64_t (2LL)))).boolEnum () ;
    if (kBoolTrue == test_16) {
      const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall temp_17 = this ;
      TC_Array <FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticError (temp_17.readProperty_mInstructionLocation (), GALGAS_string ("the computed range (").add_operation (var_size_50627.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1491)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1491)).add_operation (GALGAS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1491)), fixItArray18  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1491)) ;
    }
  }
  if (kBoolFalse == test_16) {
    enumGalgasBool test_19 = kBoolTrue ;
    if (kBoolTrue == test_19) {
      test_19 = GALGAS_bool (ComparisonKind::greaterThan, var_size_50627.objectCompare (GALGAS_sint_36__34_ (int64_t (64LL)))).boolEnum () ;
      if (kBoolTrue == test_19) {
        const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall temp_20 = this ;
        TC_Array <FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (temp_20.readProperty_mInstructionLocation (), GALGAS_string ("the computed range (").add_operation (var_size_50627.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1493)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1493)).add_operation (GALGAS_string (") should be lower or equal to 64"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1493)), fixItArray21  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1493)) ;
      }
    }
    if (kBoolFalse == test_19) {
      enumGalgasBool test_22 = kBoolTrue ;
      if (kBoolTrue == test_22) {
        const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall temp_23 = this ;
        test_22 = GALGAS_bool (ComparisonKind::notEqual, var_size_50627.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1494)).objectCompare (temp_23.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1494)))).boolEnum () ;
        if (kBoolTrue == test_22) {
          const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall temp_24 = this ;
          const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall temp_25 = this ;
          TC_Array <FixItDescription> fixItArray26 ;
          inCompiler->emitSemanticError (temp_24.readProperty_mInstructionLocation (), GALGAS_string ("the routine name list length (").add_operation (temp_25.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1495)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1495)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1495)).add_operation (GALGAS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1495)).add_operation (var_size_50627.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1495)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1495)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1495)), fixItArray26  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1495)) ;
        }
      }
    }
  }
  GALGAS_ipic_31__38_SequentialInstructionList var_targetInstructionList_51165 = GALGAS_ipic_31__38_SequentialInstructionList::class_func_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1498)) ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall temp_27 = this ;
  cEnumerator_lstringlist enumerator_51232 (temp_27.readProperty_mTargetLabels (), EnumerationOrder::up) ;
  while (enumerator_51232.hasCurrentObject ()) {
    var_targetInstructionList_51165.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_JSR::init_21__21__21_ (enumerator_51232.current_mValue (HERE).readProperty_location (), enumerator_51232.current_mValue (HERE), GALGAS_jumpInstructionKind::class_func_relative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1500)), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1500)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1500)) ;
    enumerator_51232.gotoNextObject () ;
  }
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall temp_28 = this ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall temp_29 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::init_21__21__21_ (temp_28.readProperty_mInstructionLocation (), var_targetInstructionList_51165, temp_29.readProperty_mUsesRelativeCall (), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1509)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1503)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_computed_goto analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_computed_5F_goto::method_analyze (const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                      GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                      const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                      const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                      const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                      const GALGAS_constantMap constinArgument_inConstantMap,
                                                                      const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                      GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                      GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                      GALGAS_lstring & ioArgument_ioBlockLabel,
                                                                      GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                      GALGAS_uint & ioArgument_ioCurrentBank,
                                                                      const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                      const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                      GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto temp_0 = this ;
  cEnumerator_lstringlist enumerator_52301 (temp_0.readProperty_mTargetLabels (), EnumerationOrder::up) ;
  while (enumerator_52301.hasCurrentObject ()) {
    GALGAS_bool var_isNoReturn_52382 ;
    GALGAS_uint var_requiredBank_52404 ;
    GALGAS_uint joker_52417 ; // Joker input parameter
    GALGAS_bool joker_52420 ; // Joker input parameter
    constinArgument_inRoutineMap.method_searchKey (enumerator_52301.current_mValue (HERE), var_isNoReturn_52382, var_requiredBank_52404, joker_52417, joker_52420, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1533)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (ComparisonKind::notEqual, var_requiredBank_52404.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1534)))).operator_and (GALGAS_bool (ComparisonKind::notEqual, var_requiredBank_52404.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1534)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_string var_errorMessage_52517 = GALGAS_string ("the routine '").add_operation (enumerator_52301.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1535)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1535)).add_operation (var_requiredBank_52404.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1535)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1535)) ;
        var_errorMessage_52517.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1536)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1537)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            var_errorMessage_52517.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1538)) ;
          }
        }
        if (kBoolFalse == test_2) {
          var_errorMessage_52517.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1540)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1540)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1540)) ;
        }
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_52301.current_mValue (HERE).readProperty_location (), var_errorMessage_52517, fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1542)) ;
      }
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (ComparisonKind::notEqual, GALGAS_routineKind::class_func_regularRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1544)).objectCompare (constinArgument_inRoutineKind)).operator_and (var_isNoReturn_52382.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1544)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1544)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_52301.current_mValue (HERE).readProperty_location (), GALGAS_string ("for being named in a computed goto, the '").add_operation (enumerator_52301.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1545)).add_operation (GALGAS_string ("' routine should be declared with the \"noreturn\" qualifier"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1545)), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1545)) ;
      }
    }
    enumerator_52301.gotoNextObject () ;
  }
  switch (constinArgument_inRoutineKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_regularRoutine:
    {
    }
    break ;
  case GALGAS_routineKind::kEnum_noReturnRoutine:
    {
    }
    break ;
  case GALGAS_routineKind::kEnum_interruptRoutine:
    {
      const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto temp_6 = this ;
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mInstructionLocation (), GALGAS_string ("an interrupt routine does not accept computed goto instruction"), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1552)) ;
    }
    break ;
  }
  GALGAS_sint_36__34_ var_size_53397 ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto temp_8 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_8.readProperty_mSizeExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size_53397, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1555)) ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = GALGAS_bool (ComparisonKind::lowerThan, var_size_53397.objectCompare (GALGAS_sint_36__34_ (int64_t (2LL)))).boolEnum () ;
    if (kBoolTrue == test_9) {
      const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto temp_10 = this ;
      TC_Array <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("the computed range (").add_operation (var_size_53397.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1557)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1557)).add_operation (GALGAS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1557)), fixItArray11  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1557)) ;
    }
  }
  if (kBoolFalse == test_9) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = GALGAS_bool (ComparisonKind::greaterThan, var_size_53397.objectCompare (GALGAS_sint_36__34_ (int64_t (64LL)))).boolEnum () ;
      if (kBoolTrue == test_12) {
        const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto temp_13 = this ;
        TC_Array <FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (temp_13.readProperty_mInstructionLocation (), GALGAS_string ("the computed range (").add_operation (var_size_53397.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1559)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1559)).add_operation (GALGAS_string (") should be lower or equal to 64"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1559)), fixItArray14  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1559)) ;
      }
    }
    if (kBoolFalse == test_12) {
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto temp_16 = this ;
        test_15 = GALGAS_bool (ComparisonKind::notEqual, var_size_53397.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1560)).objectCompare (temp_16.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1560)))).boolEnum () ;
        if (kBoolTrue == test_15) {
          const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto temp_17 = this ;
          const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto temp_18 = this ;
          TC_Array <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (temp_17.readProperty_mInstructionLocation (), GALGAS_string ("the routine name list length (").add_operation (temp_18.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1561)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1561)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1561)).add_operation (GALGAS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1561)).add_operation (var_size_53397.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1561)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1561)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1561)), fixItArray19  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1561)) ;
        }
      }
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto temp_20 = this ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto temp_21 = this ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto temp_22 = this ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1565)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_ComputedGotoTerminator::init_21__21__21_ (temp_20.readProperty_mInstructionLocation (), temp_21.readProperty_mTargetLabels (), temp_22.readProperty_mUsesRelativeCall (), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1572)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1564)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::class_func_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1575)) ;
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1577)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_computed_bra analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_computed_5F_bra::method_analyze (const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                     GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                     const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                     const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                     const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                     const GALGAS_constantMap constinArgument_inConstantMap,
                                                                     const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                     GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                     GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                     GALGAS_lstring & ioArgument_ioBlockLabel,
                                                                     GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                     GALGAS_uint & ioArgument_ioCurrentBank,
                                                                     const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                                                     const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                     GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_allPreserveBankSetting_55036 = GALGAS_bool (true) ;
  GALGAS_bool var_allReturnBank_55078 = GALGAS_bool (true) ;
  GALGAS_uint var_returnedBankValue_55105 = GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1601)) ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_0 = this ;
  cEnumerator_lstringlist enumerator_55141 (temp_0.readProperty_mTargetLabels (), EnumerationOrder::up) ;
  while (enumerator_55141.hasCurrentObject ()) {
    GALGAS_bool var_isNoReturn_55222 ;
    GALGAS_uint var_requiredBank_55244 ;
    GALGAS_uint var_returnedBank_55268 ;
    GALGAS_bool var_preservesBank_55292 ;
    constinArgument_inRoutineMap.method_searchKey (enumerator_55141.current_mValue (HERE), var_isNoReturn_55222, var_requiredBank_55244, var_returnedBank_55268, var_preservesBank_55292, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1603)) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (ComparisonKind::notEqual, var_requiredBank_55244.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1605)))).operator_and (GALGAS_bool (ComparisonKind::notEqual, var_requiredBank_55244.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1605)).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_string var_errorMessage_55429 = GALGAS_string ("the routine '").add_operation (enumerator_55141.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1606)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1606)).add_operation (var_requiredBank_55244.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1606)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1606)) ;
        var_errorMessage_55429.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1607)) ;
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1608)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            var_errorMessage_55429.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1609)) ;
          }
        }
        if (kBoolFalse == test_2) {
          var_errorMessage_55429.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1611)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1611)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1611)) ;
        }
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_55141.current_mValue (HERE).readProperty_location (), var_errorMessage_55429, fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1613)) ;
      }
    }
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_preservesBank_55292.boolEnum () ;
      if (kBoolTrue == test_4) {
        var_allReturnBank_55078 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = GALGAS_bool (ComparisonKind::notEqual, var_returnedBankValue_55105.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1618)))).operator_and (GALGAS_bool (ComparisonKind::notEqual, var_returnedBankValue_55105.objectCompare (var_returnedBank_55268)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1618)).boolEnum () ;
        if (kBoolTrue == test_5) {
          TC_Array <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_55141.current_mValue (HERE).readProperty_location (), GALGAS_string ("this routine ensures setting of bank '").add_operation (var_returnedBank_55268.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1619)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1619)).add_operation (GALGAS_string ("', but "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1619)).add_operation (GALGAS_string ("previous routine(s) ensure setting of bank '"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1619)).add_operation (var_returnedBankValue_55105.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1620)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1620)).add_operation (GALGAS_string ("'."), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1620)), fixItArray6  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1619)) ;
        }
      }
      if (kBoolFalse == test_5) {
        var_allPreserveBankSetting_55036 = GALGAS_bool (false) ;
        var_returnedBankValue_55105 = var_returnedBank_55268 ;
      }
    }
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = GALGAS_bool (ComparisonKind::notEqual, GALGAS_routineKind::class_func_regularRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1625)).objectCompare (constinArgument_inRoutineKind)).operator_and (var_isNoReturn_55222.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1625)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1625)).boolEnum () ;
      if (kBoolTrue == test_7) {
        TC_Array <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_55141.current_mValue (HERE).readProperty_location (), GALGAS_string ("for being named in a computed bra from a regular routine, the '").add_operation (enumerator_55141.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1626)).add_operation (GALGAS_string ("' routine should be declared without any \"noreturn\" qualifier"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1626)), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1626)) ;
      }
    }
    enumerator_55141.gotoNextObject () ;
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_allReturnBank_55078.operator_and (var_allPreserveBankSetting_55036.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1630)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1630)).boolEnum () ;
    if (kBoolTrue == test_9) {
      ioArgument_ioCurrentBank = var_returnedBankValue_55105 ;
    }
  }
  if (kBoolFalse == test_9) {
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = var_allReturnBank_55078.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1632)).operator_and (var_allPreserveBankSetting_55036.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1632)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1632)).boolEnum () ;
      if (kBoolTrue == test_10) {
        const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_11 = this ;
        TC_Array <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (temp_11.readProperty_mInstructionLocation (), GALGAS_string ("invoked routine should either all preserve bank, eihter return the same selected bank"), fixItArray12  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1633)) ;
      }
    }
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = constinArgument_inShouldPreserveBSR.operator_and (var_allPreserveBankSetting_55036.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1635)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1635)).boolEnum () ;
    if (kBoolTrue == test_13) {
      const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_14 = this ;
      TC_Array <FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GALGAS_string ("invoked routine(s) do(es) not preserve bank selection"), fixItArray15  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1636)) ;
    }
  }
  switch (constinArgument_inRoutineKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_regularRoutine:
    {
    }
    break ;
  case GALGAS_routineKind::kEnum_noReturnRoutine:
    {
    }
    break ;
  case GALGAS_routineKind::kEnum_interruptRoutine:
    {
      const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_16 = this ;
      TC_Array <FixItDescription> fixItArray17 ;
      inCompiler->emitSemanticError (temp_16.readProperty_mInstructionLocation (), GALGAS_string ("an interrupt routine does not accept computed bra instruction"), fixItArray17  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1643)) ;
    }
    break ;
  }
  GALGAS_sint_36__34_ var_size_57245 ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_18 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_18.readProperty_mSizeExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size_57245, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1646)) ;
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    test_19 = GALGAS_bool (ComparisonKind::lowerThan, var_size_57245.objectCompare (GALGAS_sint_36__34_ (int64_t (2LL)))).boolEnum () ;
    if (kBoolTrue == test_19) {
      const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_20 = this ;
      TC_Array <FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_20.readProperty_mInstructionLocation (), GALGAS_string ("the computed range (").add_operation (var_size_57245.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1648)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1648)).add_operation (GALGAS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1648)), fixItArray21  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1648)) ;
    }
  }
  if (kBoolFalse == test_19) {
    enumGalgasBool test_22 = kBoolTrue ;
    if (kBoolTrue == test_22) {
      test_22 = GALGAS_bool (ComparisonKind::greaterThan, var_size_57245.objectCompare (GALGAS_sint_36__34_ (int64_t (128LL)))).boolEnum () ;
      if (kBoolTrue == test_22) {
        const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_23 = this ;
        TC_Array <FixItDescription> fixItArray24 ;
        inCompiler->emitSemanticError (temp_23.readProperty_mInstructionLocation (), GALGAS_string ("the computed range (").add_operation (var_size_57245.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1650)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1650)).add_operation (GALGAS_string (") should be lower or equal to 128"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1650)), fixItArray24  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1650)) ;
      }
    }
    if (kBoolFalse == test_22) {
      enumGalgasBool test_25 = kBoolTrue ;
      if (kBoolTrue == test_25) {
        const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_26 = this ;
        test_25 = GALGAS_bool (ComparisonKind::notEqual, var_size_57245.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1651)).objectCompare (temp_26.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1651)))).boolEnum () ;
        if (kBoolTrue == test_25) {
          const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_27 = this ;
          const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_28 = this ;
          TC_Array <FixItDescription> fixItArray29 ;
          inCompiler->emitSemanticError (temp_27.readProperty_mInstructionLocation (), GALGAS_string ("the routine name list length (").add_operation (temp_28.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1652)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1652)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1652)).add_operation (GALGAS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1652)).add_operation (var_size_57245.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1652)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1652)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1652)), fixItArray29  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1652)) ;
        }
      }
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_30 = this ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_31 = this ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_32 = this ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1656)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_ComputedBraTerminator::init_21__21__21_ (temp_30.readProperty_mInstructionLocation (), temp_31.readProperty_mTargetLabels (), temp_32.readProperty_mUsesRelativeCall (), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1663)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1655)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::class_func_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1666)) ;
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1668)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_computed_retlw analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_computed_5F_retlw::method_analyze (const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                       GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                       const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                       const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                       const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                       const GALGAS_constantMap constinArgument_inConstantMap,
                                                                       const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                       GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                       GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                       GALGAS_lstring & ioArgument_ioBlockLabel,
                                                                       GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                       GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                       const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                       const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                       GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  switch (constinArgument_inRoutineKind.enumValue ()) {
  case GALGAS_routineKind::kNotBuilt:
    break ;
  case GALGAS_routineKind::kEnum_regularRoutine:
    {
    }
    break ;
  case GALGAS_routineKind::kEnum_noReturnRoutine:
    {
      const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw temp_0 = this ;
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (temp_0.readProperty_mInstructionLocation (), GALGAS_string ("a \"noreturn\" routine does not accept computed retlw instruction"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1692)) ;
    }
    break ;
  case GALGAS_routineKind::kEnum_interruptRoutine:
    {
      const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("an interrupt routine does not accept computed retlw instruction"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1694)) ;
    }
    break ;
  }
  GALGAS_sint_36__34_ var_size_59285 ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw temp_4 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_4.readProperty_mSizeExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size_59285, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1697)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (ComparisonKind::lowerThan, var_size_59285.objectCompare (GALGAS_sint_36__34_ (int64_t (2LL)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw temp_6 = this ;
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mInstructionLocation (), GALGAS_string ("the computed range (").add_operation (var_size_59285.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1699)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1699)).add_operation (GALGAS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1699)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1699)) ;
    }
  }
  if (kBoolFalse == test_5) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = GALGAS_bool (ComparisonKind::greaterThan, var_size_59285.objectCompare (GALGAS_sint_36__34_ (int64_t (128LL)))).boolEnum () ;
      if (kBoolTrue == test_8) {
        const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw temp_9 = this ;
        TC_Array <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GALGAS_string ("the computed range (").add_operation (var_size_59285.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1701)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1701)).add_operation (GALGAS_string (") should be lower or equal to 128"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1701)), fixItArray10  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1701)) ;
      }
    }
    if (kBoolFalse == test_8) {
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw temp_12 = this ;
        test_11 = GALGAS_bool (ComparisonKind::notEqual, var_size_59285.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1702)).objectCompare (temp_12.readProperty_mImmediateExpressionList ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1702)))).boolEnum () ;
        if (kBoolTrue == test_11) {
          const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw temp_13 = this ;
          const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw temp_14 = this ;
          TC_Array <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mInstructionLocation (), GALGAS_string ("the constant list length (").add_operation (temp_14.readProperty_mImmediateExpressionList ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1703)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1703)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1703)).add_operation (GALGAS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1703)).add_operation (var_size_59285.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1703)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1703)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1703)), fixItArray15  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1703)) ;
        }
      }
    }
  }
  GALGAS_uintlist var_literalValues_59844 = GALGAS_uintlist::class_func_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1706)) ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw temp_16 = this ;
  cEnumerator_immediatExpressionList enumerator_59892 (temp_16.readProperty_mImmediateExpressionList (), EnumerationOrder::up) ;
  GALGAS_uint index_59875 (uint32_t (0)) ;
  while (enumerator_59892.hasCurrentObject ()) {
    GALGAS_sint_36__34_ var_v_60004 ;
    callExtensionMethod_eval ((cPtr_immediatExpression *) enumerator_59892.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_v_60004, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1708)) ;
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      test_17 = GALGAS_bool (ComparisonKind::greaterThan, var_v_60004.objectCompare (GALGAS_sint_36__34_ (int64_t (255LL)))).operator_or (GALGAS_bool (ComparisonKind::lowerThan, var_v_60004.objectCompare (GALGAS_sint_36__34_ (int64_t (-128LL)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1709)).boolEnum () ;
      if (kBoolTrue == test_17) {
        const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw temp_18 = this ;
        TC_Array <FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (temp_18.readProperty_mInstructionLocation (), GALGAS_string ("immediate value with idx ").add_operation (index_59875.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1710)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1710)).add_operation (GALGAS_string (" is evaluated as "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1710)).add_operation (var_v_60004.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1710)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1710)).add_operation (GALGAS_string (" (should be <= 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1710)), fixItArray19  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1710)) ;
      }
    }
    var_literalValues_59844.addAssign_operation (var_v_60004.operator_and (GALGAS_sint_36__34_ (int64_t (255LL)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1712)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1712))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1712)) ;
    enumerator_59892.gotoNextObject () ;
    index_59875.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1707)) ;
  }
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw temp_20 = this ;
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_retlw temp_21 = this ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1716)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_ComputedRETLWTerminator::init_21__21__21_ (temp_20.readProperty_mInstructionLocation (), var_literalValues_59844, temp_21.readProperty_mUsesRelativeCall (), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1723)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1715)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::class_func_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1726)) ;
  ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1728)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_JUMPCC analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_JUMPCC::method_analyze (const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                            GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                            const GALGAS_routineMap constinArgument_inRoutineMap,
                                                            const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                            const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                            const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                            const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                            GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                            GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                            GALGAS_lstring & ioArgument_ioBlockLabel,
                                                            GALGAS_string & /* ioArgument_ioListFileContents */,
                                                            GALGAS_uint & ioArgument_ioCurrentBank,
                                                            const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                            const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                            GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_isNoReturn_61428 ;
  GALGAS_uint var_requiredBank_61450 ;
  const GALGAS_pic_31__38_Instruction_5F_JUMPCC temp_0 = this ;
  GALGAS_uint joker_61463 ; // Joker input parameter
  GALGAS_bool joker_61466 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_61428, var_requiredBank_61450, joker_61463, joker_61466, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1749)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::notEqual, var_requiredBank_61450.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1750)))).operator_and (GALGAS_bool (ComparisonKind::notEqual, var_requiredBank_61450.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1750)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_pic_31__38_Instruction_5F_JUMPCC temp_2 = this ;
      GALGAS_string var_errorMessage_61559 = GALGAS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1751)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1751)).add_operation (var_requiredBank_61450.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1751)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1751)) ;
      var_errorMessage_61559.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1752)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1753)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_errorMessage_61559.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1754)) ;
        }
      }
      if (kBoolFalse == test_3) {
        var_errorMessage_61559.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1756)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1756)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1756)) ;
      }
      const GALGAS_pic_31__38_Instruction_5F_JUMPCC temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_61559, fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1758)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_isNoReturn_61428.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1760)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_pic_31__38_Instruction_5F_JUMPCC temp_7 = this ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GALGAS_string ("a regular routine should be called with a RCALL, CALL or JSR instruction"), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1761)) ;
    }
  }
  GALGAS_conditionalBranchMode var_mode_62093 ;
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    const GALGAS_pic_31__38_Instruction_5F_JUMPCC temp_10 = this ;
    test_9 = temp_10.readProperty_mIsBcc ().boolEnum () ;
    if (kBoolTrue == test_9) {
      var_mode_62093 = GALGAS_conditionalBranchMode::class_func_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1766)) ;
    }
  }
  if (kBoolFalse == test_9) {
    var_mode_62093 = GALGAS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1768)) ;
  }
  const GALGAS_pic_31__38_Instruction_5F_JUMPCC temp_11 = this ;
  GALGAS_lstring var_label_30__62259 = GALGAS_lstring::init_21__21_ (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1771)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1771)), temp_11.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1772)) ;
  const GALGAS_pic_31__38_Instruction_5F_JUMPCC temp_12 = this ;
  const GALGAS_pic_31__38_Instruction_5F_JUMPCC temp_13 = this ;
  const GALGAS_pic_31__38_Instruction_5F_JUMPCC temp_14 = this ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1775)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_ConditionalJumpTerminator::init_21__21__21__21__21__21_ (temp_12.readProperty_mInstructionLocation (), temp_13.readProperty_mConditionalBranch (), temp_14.readProperty_mTargetLabel (), var_mode_62093, var_label_30__62259, var_mode_62093, inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1785)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1774)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::class_func_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1788)) ;
  ioArgument_ioBlockLabel = var_label_30__62259 ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_IF_BitTest analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::method_analyze (const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                   GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                   const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                   const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                   const GALGAS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                   const GALGAS_constantMap constinArgument_inConstantMap,
                                                                   const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                   GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                   GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                   GALGAS_lstring & /* ioArgument_ioBlockLabel */,
                                                                   GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                   GALGAS_uint & ioArgument_ioCurrentBank,
                                                                   const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                                                   const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                   GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_63757 ;
  GALGAS_bitSliceTable var_bitSliceTable_63805 ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_0 = this ;
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (false), var_IPICregisterDescription_63757, var_bitSliceTable_63805, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1812)) ;
  GALGAS_uint var_bitNumber_63973 ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_1 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_63805, var_bitNumber_63973, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1822)) ;
  GALGAS_uint var_currentBank_64033 = ioArgument_ioCurrentBank ;
  GALGAS_ipic_31__38_SequentialInstruction var_embeddedInstruction_64320 ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_2 = this ;
  callExtensionMethod_analyzeSimpleInstruction ((cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_2.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, var_currentBank_64033, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_embeddedInstruction_64320, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1831)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (ComparisonKind::notEqual, var_currentBank_64033.objectCompare (var_currentBank_64033)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mEmbeddedInstruction ().readProperty_mInstructionLocation (), GALGAS_string ("this instruction does not preserve bank setting"), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1844)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_6 = this ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_7 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::init_21__21__21__21__21_ (temp_6.readProperty_mInstructionLocation (), var_embeddedInstruction_64320, temp_7.readProperty_mSkipIfSet (), var_IPICregisterDescription_63757, var_bitNumber_63973, inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1854)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1847)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_IF_FA_SEMI_COLON analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::method_analyze (const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                               GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                               const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                               const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                               const GALGAS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                               const GALGAS_constantMap constinArgument_inConstantMap,
                                                                               const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                               GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                               GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                               GALGAS_lstring & /* ioArgument_ioBlockLabel */,
                                                                               GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                               GALGAS_uint & ioArgument_ioCurrentBank,
                                                                               const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                                                               const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                               GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code var_baseCode_65517 ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON temp_0 = this ;
  switch (temp_0.readProperty_mOpCode ().enumValue ()) {
  case GALGAS_if_5F_semi_5F_colon_5F_op::kNotBuilt:
    break ;
  case GALGAS_if_5F_semi_5F_colon_5F_op::kEnum_CPFSEQ:
    {
      var_baseCode_65517 = GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::class_func_CPFSEQ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1878)) ;
    }
    break ;
  case GALGAS_if_5F_semi_5F_colon_5F_op::kEnum_CPFSGT:
    {
      var_baseCode_65517 = GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::class_func_CPFSGT (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1879)) ;
    }
    break ;
  case GALGAS_if_5F_semi_5F_colon_5F_op::kEnum_CPFSLT:
    {
      var_baseCode_65517 = GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::class_func_CPFSLT (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1880)) ;
    }
    break ;
  case GALGAS_if_5F_semi_5F_colon_5F_op::kEnum_TSTFSZ:
    {
      var_baseCode_65517 = GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::class_func_TSTFSZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1881)) ;
    }
    break ;
  }
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_66104 ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON temp_1 = this ;
  GALGAS_bitSliceTable joker_66132 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_1.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (false), var_IPICregisterDescription_66104, joker_66132, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1883)) ;
  GALGAS_uint var_currentBank_66207 = ioArgument_ioCurrentBank ;
  GALGAS_ipic_31__38_SequentialInstruction var_embeddedInstruction_66494 ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON temp_2 = this ;
  callExtensionMethod_analyzeSimpleInstruction ((cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_2.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, var_currentBank_66207, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_embeddedInstruction_66494, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1895)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (ComparisonKind::notEqual, var_currentBank_66207.objectCompare (var_currentBank_66207)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mEmbeddedInstruction ().readProperty_mInstructionLocation (), GALGAS_string ("this instruction does not preserve bank setting"), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1908)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON temp_6 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::init_21__21__21__21_ (temp_6.readProperty_mInstructionLocation (), var_embeddedInstruction_66494, var_baseCode_65517, var_IPICregisterDescription_66104, inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1917)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1911)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_IF_IncDec analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::method_analyze (const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                  GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                  const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                  const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                  const GALGAS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                  const GALGAS_constantMap constinArgument_inConstantMap,
                                                                  const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                  GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                  GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                  GALGAS_lstring & /* ioArgument_ioBlockLabel */,
                                                                  GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                  GALGAS_uint & ioArgument_ioCurrentBank,
                                                                  const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                                                  const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                  GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code var_baseCode_67657 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_1 = this ;
    const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_2 = this ;
    test_0 = temp_1.readProperty_mIncrement ().operator_and (temp_2.readProperty_mSkipIfZero () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1941)).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_baseCode_67657 = GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::class_func_INCFSZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1942)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_4 = this ;
      const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_5 = this ;
      test_3 = temp_4.readProperty_mIncrement ().operator_and (temp_5.readProperty_mSkipIfZero ().operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1943)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1943)).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_baseCode_67657 = GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::class_func_INFSNZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1944)) ;
      }
    }
    if (kBoolFalse == test_3) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_7 = this ;
        const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_8 = this ;
        test_6 = temp_7.readProperty_mIncrement ().operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1945)).operator_and (temp_8.readProperty_mSkipIfZero () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1945)).boolEnum () ;
        if (kBoolTrue == test_6) {
          var_baseCode_67657 = GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::class_func_DECFSZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1946)) ;
        }
      }
      if (kBoolFalse == test_6) {
        var_baseCode_67657 = GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::class_func_DCFSNZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1948)) ;
      }
    }
  }
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_68268 ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_9 = this ;
  GALGAS_bitSliceTable joker_68296 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_9.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_IPICregisterDescription_68268, joker_68296, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1951)) ;
  GALGAS_uint var_currentBank_68371 = ioArgument_ioCurrentBank ;
  GALGAS_ipic_31__38_SequentialInstruction var_embeddedInstruction_68658 ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_10 = this ;
  callExtensionMethod_analyzeSimpleInstruction ((cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_10.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, var_currentBank_68371, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_embeddedInstruction_68658, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1963)) ;
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = GALGAS_bool (ComparisonKind::notEqual, var_currentBank_68371.objectCompare (var_currentBank_68371)).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_12 = this ;
      TC_Array <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mEmbeddedInstruction ().readProperty_mInstructionLocation (), GALGAS_string ("this instruction does not preserve bank setting"), fixItArray13  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1976)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_14 = this ;
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_15 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::init_21__21__21__21__21_ (temp_14.readProperty_mInstructionLocation (), var_embeddedInstruction_68658, var_baseCode_67657, var_IPICregisterDescription_68268, temp_15.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1986)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1979)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_structured_if analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_structured_5F_if::method_analyze (const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                      GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                      const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                      const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                      const GALGAS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                      const GALGAS_constantMap constinArgument_inConstantMap,
                                                                      const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                      GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                      GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                      GALGAS_lstring & ioArgument_ioBlockLabel,
                                                                      GALGAS_string & ioArgument_ioListFileContents,
                                                                      GALGAS_uint & ioArgument_ioCurrentBank,
                                                                      const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                                                      const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                      GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_elseBranchFinalBank_69791 = ioArgument_ioCurrentBank ;
  GALGAS_uint var_thenBranchFinalBank_69839 = ioArgument_ioCurrentBank ;
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_0 = this ;
  GALGAS_lstring var_conditionTrueLabel_69893 = GALGAS_lstring::init_21__21_ (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2012)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2012)), temp_0.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2013)) ;
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_1 = this ;
  GALGAS_lstring var_conditionFalseLabel_70025 = GALGAS_lstring::init_21__21_ (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2014)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2014)), temp_1.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2015)) ;
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_2 = this ;
  GALGAS_lstring var_exitLabel_70158 = GALGAS_lstring::init_21__21_ (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2016)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2016)), temp_2.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2017)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_testTerminator_70587 ;
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_3 = this ;
  callExtensionMethod_analyzeCondition ((cPtr_pic_31__38_ConditionExpression *) temp_3.readProperty_mIfCondition ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel_69893, var_conditionFalseLabel_70025, ioArgument_ioUsedRegisters, var_testTerminator_70587, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2019)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2033)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_testTerminator_70587, GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2037)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2032)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::class_func_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2040)) ;
  ioArgument_ioBlockLabel = var_conditionTrueLabel_69893 ;
  {
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_4 = this ;
  routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (temp_4.readProperty_mThenInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_thenBranchFinalBank_69839, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2043)) ;
  }
  GALGAS_bool var_thenContinuesInSequence_71362 = GALGAS_bool (ComparisonKind::notEqual, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = var_thenContinuesInSequence_71362.boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_6 = this ;
      ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2064)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_6.readProperty_mInstructionLocation (), var_exitLabel_70158, GALGAS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2067)), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2068)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2063)) ;
    }
  }
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::class_func_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2072)) ;
  ioArgument_ioBlockLabel = var_conditionFalseLabel_70025 ;
  {
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_7 = this ;
  routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (temp_7.readProperty_mElseInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_elseBranchFinalBank_69791, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2075)) ;
  }
  GALGAS_bool var_elseContinuesInSequence_72266 = GALGAS_bool (ComparisonKind::notEqual, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = var_elseContinuesInSequence_72266.boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_9 = this ;
      ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2096)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_9.readProperty_mInstructionLocation (), var_exitLabel_70158, GALGAS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2099)), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2100)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2095)) ;
    }
  }
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::class_func_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2104)) ;
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = GALGAS_bool (ComparisonKind::equal, var_elseBranchFinalBank_69791.objectCompare (var_thenBranchFinalBank_69839)).boolEnum () ;
    if (kBoolTrue == test_10) {
      ioArgument_ioCurrentBank = var_elseBranchFinalBank_69791 ;
    }
  }
  if (kBoolFalse == test_10) {
    const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_11 = this ;
    TC_Array <FixItDescription> fixItArray12 ;
    inCompiler->emitSemanticError (temp_11.readProperty_mEndOfElsePartLocation (), GALGAS_string ("This branch does not leave bank selection value as the first one does"), fixItArray12  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2109)) ;
    var_elseBranchFinalBank_69791 = GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2110)) ;
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = var_thenContinuesInSequence_71362.operator_or (var_elseContinuesInSequence_72266 COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2113)).boolEnum () ;
    if (kBoolTrue == test_13) {
      ioArgument_ioBlockLabel = var_exitLabel_70158 ;
    }
  }
  if (kBoolFalse == test_13) {
    ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2116)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_macro analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_macro::method_analyze (const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                           GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                           const GALGAS_routineMap constinArgument_inRoutineMap,
                                                           const GALGAS_registerTable constinArgument_inRegisterTable,
                                                           const GALGAS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                           const GALGAS_constantMap constinArgument_inConstantMap,
                                                           const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                           GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                           GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                           GALGAS_lstring & ioArgument_ioBlockLabel,
                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                           GALGAS_uint & ioArgument_ioCurrentBank,
                                                           const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                                           const GALGAS_routineKind constinArgument_inRoutineKind,
                                                           GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstringlist var_constantNameList_73804 ;
  GALGAS_pic_31__38_InstructionList var_instructionList_73826 ;
  const GALGAS_pic_31__38_Instruction_5F_macro temp_0 = this ;
  constinArgument_inMacroMap.method_searchKey (temp_0.readProperty_mMacroName (), var_constantNameList_73804, var_instructionList_73826, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2139)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_pic_31__38_Instruction_5F_macro temp_2 = this ;
    test_1 = GALGAS_bool (ComparisonKind::notEqual, temp_2.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2140)).objectCompare (var_constantNameList_73804.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2140)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_pic_31__38_Instruction_5F_macro temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mInstructionLocation (), var_constantNameList_73804.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2142)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2142)).add_operation (GALGAS_string (" argument(s) required"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2142)), fixItArray4  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2141)) ;
    }
  }
  GALGAS_constantMap var_constantMap_74037 = constinArgument_inConstantMap ;
  const GALGAS_pic_31__38_Instruction_5F_macro temp_5 = this ;
  cEnumerator_immediatExpressionList enumerator_74084 (temp_5.readProperty_mExpressionList (), EnumerationOrder::up) ;
  cEnumerator_lstringlist enumerator_74113 (var_constantNameList_73804, EnumerationOrder::up) ;
  while (enumerator_74084.hasCurrentObject () && enumerator_74113.hasCurrentObject ()) {
    GALGAS_sint_36__34_ var_expressionValue_74215 ;
    callExtensionMethod_eval ((cPtr_immediatExpression *) enumerator_74084.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, var_constantMap_74037, var_expressionValue_74215, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2146)) ;
    {
    var_constantMap_74037.setter_insertKey (enumerator_74113.current_mValue (HERE), var_expressionValue_74215, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2147)) ;
    }
    enumerator_74084.gotoNextObject () ;
    enumerator_74113.gotoNextObject () ;
  }
  {
  routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (var_instructionList_73826, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, var_constantMap_74037, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2150)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_do_while analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_do_5F_while::method_analyze (const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                 GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                 const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                 const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                 const GALGAS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                 const GALGAS_constantMap constinArgument_inConstantMap,
                                                                 const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                 GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                 GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                 GALGAS_lstring & ioArgument_ioBlockLabel,
                                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                                 GALGAS_uint & ioArgument_ioCurrentBank,
                                                                 const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                                                 const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                 GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_0 = this ;
  GALGAS_lstring var_startLabel_75404 = GALGAS_lstring::init_21__21_ (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2189)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2189)), temp_0.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2190)) ;
  const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_1 = this ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2193)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_1.readProperty_mInstructionLocation (), var_startLabel_75404, GALGAS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2196)), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2197)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2192)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::class_func_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2200)) ;
  ioArgument_ioBlockLabel = var_startLabel_75404 ;
  GALGAS_uint var_repeatedBranchFinalBank_75948 = ioArgument_ioCurrentBank ;
  {
  const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_2 = this ;
  routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (temp_2.readProperty_mRepeatedInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_repeatedBranchFinalBank_75948, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2204)) ;
  }
  GALGAS_bool var_repeatedInstructionsContinuesInSequence_76408 = GALGAS_bool (ComparisonKind::notEqual, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = GALGAS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (var_repeatedBranchFinalBank_75948)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mEndOfRepeatedInstructionList (), GALGAS_string ("This branch does not leave bank selection value unchanged"), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2224)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_repeatedInstructionsContinuesInSequence_76408.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2226)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_7 = this ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mEndOfRepeatedInstructionList (), GALGAS_string ("This branch makes the next code unreachable"), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2227)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_9 = this ;
  cEnumerator_pic_31__38_DoWhilePartList enumerator_76844 (temp_9.readProperty_mWhilePartList (), EnumerationOrder::up) ;
  while (enumerator_76844.hasCurrentObject ()) {
    const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_10 = this ;
    GALGAS_lstring var_conditionTrueLabel_76913 = GALGAS_lstring::init_21__21_ (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2232)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2232)), temp_10.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
    ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2233)) ;
    const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_11 = this ;
    GALGAS_lstring var_conditionFalseLabel_77048 = GALGAS_lstring::init_21__21_ (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2234)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2234)), temp_11.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
    ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2235)) ;
    GALGAS_ipic_31__38_AbstractBlockTerminator var_testTerminator_77505 ;
    callExtensionMethod_analyzeCondition ((cPtr_pic_31__38_ConditionExpression *) enumerator_76844.current_mCondition (HERE).ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel_76913, var_conditionFalseLabel_77048, ioArgument_ioUsedRegisters, var_testTerminator_77505, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2237)) ;
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2250)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_testTerminator_77505, GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2254)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2249)) ;
    ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::class_func_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2257)) ;
    ioArgument_ioBlockLabel = var_conditionTrueLabel_76913 ;
    GALGAS_uint var_branchFinalBank_77837 = ioArgument_ioCurrentBank ;
    {
    routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (enumerator_76844.current_mInstructionList (HERE), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_branchFinalBank_77837, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2260)) ;
    }
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = GALGAS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (var_branchFinalBank_77837)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_76844.current_mEndOfPartLocation (HERE), GALGAS_string ("This branch does not leave bank selection value unchanged"), fixItArray13  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2279)) ;
      }
    }
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = GALGAS_bool (ComparisonKind::equal, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_14) {
        TC_Array <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (enumerator_76844.current_mEndOfPartLocation (HERE), GALGAS_string ("This branch makes the next code unreachable"), fixItArray15  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2282)) ;
      }
    }
    const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_16 = this ;
    ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2285)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_16.readProperty_mInstructionLocation (), var_startLabel_75404, GALGAS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2288)), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2289)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2284)) ;
    ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::class_func_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2292)) ;
    ioArgument_ioBlockLabel = var_conditionFalseLabel_77048 ;
    enumerator_76844.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@exitBlockTerminationForBlockInstruction addVisitedBlocks'
//
//--------------------------------------------------------------------------------------------------

void cPtr_exitBlockTerminationForBlockInstruction::method_addVisitedBlocks (GALGAS_stringset & /* ioArgument_ioVisitedBlockSet */,
                                                                            const GALGAS_blockInstructionBlockMap /* constinArgument_inBlockMap */,
                                                                            const GALGAS_string constinArgument_inCurrentBlockName,
                                                                            const GALGAS_uint constinArgument_inInitialBlockSetting,
                                                                            GALGAS_blockInitialBankSelectionMap & ioArgument_ioBlockInitialBankSelectionMap,
                                                                            GALGAS_bool & ioArgument_ioContinuesInSequence,
                                                                            GALGAS_bool & /* ioArgument_ioContinueAccessibilityExploration */,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioContinuesInSequence = GALGAS_bool (true) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = ioArgument_ioBlockInitialBankSelectionMap.getter_hasKey (GALGAS_string ("-") COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2342)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_uint var_otherInitialBlockSetting_80804 ;
      GALGAS_string var_otherBlockName_80842 ;
      ioArgument_ioBlockInitialBankSelectionMap.method_searchKey (GALGAS_string ("-").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2343)), var_otherInitialBlockSetting_80804, var_otherBlockName_80842, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2343)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = GALGAS_bool (ComparisonKind::notEqual, var_otherInitialBlockSetting_80804.objectCompare (constinArgument_inInitialBlockSetting)).boolEnum () ;
        if (kBoolTrue == test_1) {
          const GALGAS_exitBlockTerminationForBlockInstruction temp_2 = this ;
          GALGAS_string temp_3 ;
          const enumGalgasBool test_4 = GALGAS_bool (ComparisonKind::equal, constinArgument_inInitialBlockSetting.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2346)))).boolEnum () ;
          if (kBoolTrue == test_4) {
            temp_3 = GALGAS_string ("no bank") ;
          }else if (kBoolFalse == test_4) {
            temp_3 = constinArgument_inInitialBlockSetting.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2346)) ;
          }
          GALGAS_string temp_5 ;
          const enumGalgasBool test_6 = GALGAS_bool (ComparisonKind::equal, var_otherInitialBlockSetting_80804.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2348)))).boolEnum () ;
          if (kBoolTrue == test_6) {
            temp_5 = GALGAS_string ("no bank") ;
          }else if (kBoolFalse == test_6) {
            temp_5 = var_otherInitialBlockSetting_80804.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2348)) ;
          }
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mLocation (), GALGAS_string ("this block exits from block instruction and sets bank selection to ").add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2345)).add_operation (GALGAS_string (", '"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2346)).add_operation (var_otherBlockName_80842, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2347)).add_operation (GALGAS_string ("' block also exits, but sets bank selection to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2347)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2347)).add_operation (GALGAS_string ("; theses two settings should be the same"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2348)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2345)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    {
    ioArgument_ioBlockInitialBankSelectionMap.setter_insertKey (GALGAS_string ("-").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2352)), constinArgument_inInitialBlockSetting, constinArgument_inCurrentBlockName, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2352)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gotoTerminationForBlockInstruction addVisitedBlocks'
//
//--------------------------------------------------------------------------------------------------

void cPtr_gotoTerminationForBlockInstruction::method_addVisitedBlocks (GALGAS_stringset & ioArgument_ioVisitedBlockSet,
                                                                       const GALGAS_blockInstructionBlockMap constinArgument_inBlockMap,
                                                                       const GALGAS_string constinArgument_inCurrentBlockName,
                                                                       const GALGAS_uint constinArgument_inInitialBlockSetting,
                                                                       GALGAS_blockInitialBankSelectionMap & ioArgument_ioBlockInitialBankSelectionMap,
                                                                       GALGAS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                       GALGAS_bool & ioArgument_ioContinueAccessibilityExploration,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_gotoTerminationForBlockInstruction temp_1 = this ;
    test_0 = ioArgument_ioVisitedBlockSet.getter_hasKey (temp_1.readProperty_mNextBlock ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2366)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2366)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_gotoTerminationForBlockInstruction temp_2 = this ;
      ioArgument_ioVisitedBlockSet.addAssign_operation (temp_2.readProperty_mNextBlock ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2367)) ;
      ioArgument_ioContinueAccessibilityExploration = GALGAS_bool (true) ;
      const GALGAS_gotoTerminationForBlockInstruction temp_3 = this ;
      GALGAS_pic_31__38_InstructionList joker_82118 ; // Joker input parameter
      GALGAS_abstractBlockTerminationForBlockInstruction joker_82121 ; // Joker input parameter
      GALGAS_location joker_82124 ; // Joker input parameter
      constinArgument_inBlockMap.method_searchKey (temp_3.readProperty_mNextBlock (), joker_82118, joker_82121, joker_82124, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2369)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_gotoTerminationForBlockInstruction temp_5 = this ;
        test_4 = ioArgument_ioBlockInitialBankSelectionMap.getter_hasKey (temp_5.readProperty_mNextBlock ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2370)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_uint var_otherInitialBlockSetting_82280 ;
          GALGAS_string var_otherBlockName_82318 ;
          const GALGAS_gotoTerminationForBlockInstruction temp_6 = this ;
          ioArgument_ioBlockInitialBankSelectionMap.method_searchKey (temp_6.readProperty_mNextBlock (), var_otherInitialBlockSetting_82280, var_otherBlockName_82318, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2371)) ;
          enumGalgasBool test_7 = kBoolTrue ;
          if (kBoolTrue == test_7) {
            test_7 = GALGAS_bool (ComparisonKind::notEqual, var_otherInitialBlockSetting_82280.objectCompare (constinArgument_inInitialBlockSetting)).boolEnum () ;
            if (kBoolTrue == test_7) {
              const GALGAS_gotoTerminationForBlockInstruction temp_8 = this ;
              const GALGAS_gotoTerminationForBlockInstruction temp_9 = this ;
              GALGAS_string temp_10 ;
              const enumGalgasBool test_11 = GALGAS_bool (ComparisonKind::equal, constinArgument_inInitialBlockSetting.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2374)))).boolEnum () ;
              if (kBoolTrue == test_11) {
                temp_10 = GALGAS_string ("no bank") ;
              }else if (kBoolFalse == test_11) {
                temp_10 = constinArgument_inInitialBlockSetting.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2374)) ;
              }
              GALGAS_string temp_12 ;
              const enumGalgasBool test_13 = GALGAS_bool (ComparisonKind::equal, var_otherInitialBlockSetting_82280.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2376)))).boolEnum () ;
              if (kBoolTrue == test_13) {
                temp_12 = GALGAS_string ("no bank") ;
              }else if (kBoolFalse == test_13) {
                temp_12 = var_otherInitialBlockSetting_82280.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2376)) ;
              }
              TC_Array <FixItDescription> fixItArray14 ;
              inCompiler->emitSemanticError (temp_8.readProperty_mNextBlock ().readProperty_location (), GALGAS_string ("this block goes to '").add_operation (temp_9.readProperty_mNextBlock ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2373)).add_operation (GALGAS_string ("' block and sets bank selection to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2373)).add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2373)).add_operation (GALGAS_string (", '"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2374)).add_operation (var_otherBlockName_82318, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2375)).add_operation (GALGAS_string ("' block goes to the same block, but sets bank selection to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2375)).add_operation (temp_12, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2375)).add_operation (GALGAS_string ("; theses two settings should be the same"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2376)), fixItArray14  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2373)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_4) {
        {
        const GALGAS_gotoTerminationForBlockInstruction temp_15 = this ;
        ioArgument_ioBlockInitialBankSelectionMap.setter_insertKey (temp_15.readProperty_mNextBlock (), constinArgument_inInitialBlockSetting, constinArgument_inCurrentBlockName, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2380)) ;
        }
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@testTerminationForBlockInstruction addVisitedBlocks'
//
//--------------------------------------------------------------------------------------------------

void cPtr_testTerminationForBlockInstruction::method_addVisitedBlocks (GALGAS_stringset & ioArgument_ioVisitedBlockSet,
                                                                       const GALGAS_blockInstructionBlockMap constinArgument_inBlockMap,
                                                                       const GALGAS_string constinArgument_inCurrentBlockName,
                                                                       const GALGAS_uint constinArgument_inInitialBlockSetting,
                                                                       GALGAS_blockInitialBankSelectionMap & ioArgument_ioBlockInitialBankSelectionMap,
                                                                       GALGAS_bool & ioArgument_ioContinuesInSequence,
                                                                       GALGAS_bool & ioArgument_ioContinueAccessibilityExploration,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_testTerminationForBlockInstruction temp_0 = this ;
  callExtensionMethod_addVisitedBlocks ((cPtr_abstractBlockTerminationForBlockInstruction *) temp_0.readProperty_mTrueTermination ().ptr (), ioArgument_ioVisitedBlockSet, constinArgument_inBlockMap, constinArgument_inCurrentBlockName, constinArgument_inInitialBlockSetting, ioArgument_ioBlockInitialBankSelectionMap, ioArgument_ioContinuesInSequence, ioArgument_ioContinueAccessibilityExploration, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2395)) ;
  const GALGAS_testTerminationForBlockInstruction temp_1 = this ;
  callExtensionMethod_addVisitedBlocks ((cPtr_abstractBlockTerminationForBlockInstruction *) temp_1.readProperty_mFalseTermination ().ptr (), ioArgument_ioVisitedBlockSet, constinArgument_inBlockMap, constinArgument_inCurrentBlockName, constinArgument_inInitialBlockSetting, ioArgument_ioBlockInitialBankSelectionMap, ioArgument_ioContinuesInSequence, ioArgument_ioContinueAccessibilityExploration, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2404)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@gotoTerminationForBlockInstruction generateBlock'
//
//--------------------------------------------------------------------------------------------------

void cPtr_gotoTerminationForBlockInstruction::method_generateBlock (const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                    const GALGAS_uint /* constinArgument_inCurrentBank */,
                                                                    const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                    const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                    GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                    GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                    GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                    const GALGAS_string constinArgument_inLabelForBlock,
                                                                    GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outTerminator,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_gotoTerminationForBlockInstruction temp_0 = this ;
  const GALGAS_gotoTerminationForBlockInstruction temp_1 = this ;
  const GALGAS_gotoTerminationForBlockInstruction temp_2 = this ;
  outArgument_outTerminator = GALGAS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_0.readProperty_mNextBlock ().readProperty_location (), GALGAS_lstring::init_21__21_ (constinArgument_inLabelForBlock.add_operation (temp_1.readProperty_mNextBlock ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2442)), temp_2.readProperty_mNextBlock ().readProperty_location (), inCompiler COMMA_HERE), GALGAS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2443)), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@exitBlockTerminationForBlockInstruction generateBlock'
//
//--------------------------------------------------------------------------------------------------

void cPtr_exitBlockTerminationForBlockInstruction::method_generateBlock (const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                         const GALGAS_uint /* constinArgument_inCurrentBank */,
                                                                         const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                         const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                         GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                         GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                         GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                         const GALGAS_string constinArgument_inLabelForBlock,
                                                                         GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outTerminator,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_exitBlockTerminationForBlockInstruction temp_0 = this ;
  const GALGAS_exitBlockTerminationForBlockInstruction temp_1 = this ;
  outArgument_outTerminator = GALGAS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_0.readProperty_mLocation (), GALGAS_lstring::init_21__21_ (constinArgument_inLabelForBlock.add_operation (GALGAS_string ("_exit"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2461)), temp_1.readProperty_mLocation (), inCompiler COMMA_HERE), GALGAS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2462)), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@testTerminationForBlockInstruction generateBlock'
//
//--------------------------------------------------------------------------------------------------

void cPtr_testTerminationForBlockInstruction::method_generateBlock (const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                    const GALGAS_uint constinArgument_inCurrentBank,
                                                                    const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                    const GALGAS_constantMap constinArgument_inConstantMap,
                                                                    GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                    GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                    GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                    const GALGAS_string constinArgument_inLabelForBlock,
                                                                    GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outTerminator,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_testTerminationForBlockInstruction temp_0 = this ;
  GALGAS_lstring var_conditionTrueLabel_86192 = GALGAS_lstring::init_21__21_ (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2478)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2478)), temp_0.readProperty_mLocation (), inCompiler COMMA_HERE) ;
  ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2479)) ;
  const GALGAS_testTerminationForBlockInstruction temp_1 = this ;
  GALGAS_lstring var_conditionFalseLabel_86313 = GALGAS_lstring::init_21__21_ (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2480)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2480)), temp_1.readProperty_mLocation (), inCompiler COMMA_HERE) ;
  ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2481)) ;
  const GALGAS_testTerminationForBlockInstruction temp_2 = this ;
  callExtensionMethod_analyzeCondition ((cPtr_pic_31__38_ConditionExpression *) temp_2.readProperty_mCondition ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel_86192, var_conditionFalseLabel_86313, ioArgument_ioUsedRegisters, outArgument_outTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2483)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_trueTerminator_87020 ;
  const GALGAS_testTerminationForBlockInstruction temp_3 = this ;
  callExtensionMethod_generateBlock ((cPtr_abstractBlockTerminationForBlockInstruction *) temp_3.readProperty_mTrueTermination ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, ioArgument_ioUsedRegisters, constinArgument_inLabelForBlock, var_trueTerminator_87020, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2496)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2508)), var_conditionTrueLabel_86192, GALGAS_ipic_31__38_SequentialInstructionList::class_func_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2510)), var_trueTerminator_87020, GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2512)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2507)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_falseTerminator_87528 ;
  const GALGAS_testTerminationForBlockInstruction temp_4 = this ;
  callExtensionMethod_generateBlock ((cPtr_abstractBlockTerminationForBlockInstruction *) temp_4.readProperty_mFalseTermination ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, ioArgument_ioUsedRegisters, constinArgument_inLabelForBlock, var_falseTerminator_87528, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2516)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2528)), var_conditionFalseLabel_86313, GALGAS_ipic_31__38_SequentialInstructionList::class_func_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2530)), var_falseTerminator_87528, GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2532)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2527)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_block analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_block::method_analyze (const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                           GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                           const GALGAS_routineMap constinArgument_inRoutineMap,
                                                           const GALGAS_registerTable constinArgument_inRegisterTable,
                                                           const GALGAS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                           const GALGAS_constantMap constinArgument_inConstantMap,
                                                           const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                           GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                           GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                           GALGAS_lstring & ioArgument_ioBlockLabel,
                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                           GALGAS_uint & ioArgument_ioCurrentBank,
                                                           const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                                           const GALGAS_routineKind constinArgument_inRoutineKind,
                                                           GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_labelForBlock_88420 = GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2557)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2557)).add_operation (GALGAS_string ("_"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2557)) ;
  ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2558)) ;
  const GALGAS_pic_31__38_Instruction_5F_block temp_0 = this ;
  const GALGAS_pic_31__38_Instruction_5F_block temp_1 = this ;
  const GALGAS_pic_31__38_Instruction_5F_block temp_2 = this ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2561)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_0.readProperty_mStartBlockName ().readProperty_location (), GALGAS_lstring::init_21__21_ (var_labelForBlock_88420.add_operation (temp_1.readProperty_mStartBlockName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2566)), temp_2.readProperty_mStartBlockName ().readProperty_location (), inCompiler COMMA_HERE), GALGAS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2567)), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2568)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2560)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::class_func_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2571)) ;
  GALGAS_blockInstructionBlockMap var_blockMap_88998 = GALGAS_blockInstructionBlockMap::class_func_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2573)) ;
  const GALGAS_pic_31__38_Instruction_5F_block temp_3 = this ;
  cEnumerator_pic_31__38_BlockInstructionBlockList enumerator_89110 (temp_3.readProperty_mBlockList (), EnumerationOrder::up) ;
  while (enumerator_89110.hasCurrentObject ()) {
    {
    var_blockMap_88998.setter_insertKey (enumerator_89110.current_mBlockName (HERE), enumerator_89110.current_mInstructionList (HERE), enumerator_89110.current_mBlockTerminaisonForBlockInstruction (HERE), enumerator_89110.current_mEndOfBlock (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2575)) ;
    }
    enumerator_89110.gotoNextObject () ;
  }
  const GALGAS_pic_31__38_Instruction_5F_block temp_4 = this ;
  GALGAS_pic_31__38_InstructionList joker_89339 ; // Joker input parameter
  GALGAS_abstractBlockTerminationForBlockInstruction joker_89342 ; // Joker input parameter
  GALGAS_location joker_89345 ; // Joker input parameter
  var_blockMap_88998.method_searchKey (temp_4.readProperty_mStartBlockName (), joker_89339, joker_89342, joker_89345, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2578)) ;
  GALGAS_blockInitialBankSelectionMap var_blockInitialBankSelectionMap_89355 = GALGAS_blockInitialBankSelectionMap::class_func_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2579)) ;
  {
  const GALGAS_pic_31__38_Instruction_5F_block temp_5 = this ;
  var_blockInitialBankSelectionMap_89355.setter_insertKey (temp_5.readProperty_mStartBlockName (), ioArgument_ioCurrentBank, GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2580)) ;
  }
  const GALGAS_pic_31__38_Instruction_5F_block temp_6 = this ;
  GALGAS_stringset var_accessibleBlockSet_89543 = GALGAS_stringset::class_func_setWithString (temp_6.readProperty_mStartBlockName ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2582)) ;
  GALGAS_stringset var_handledBlockSet_89625 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2583)) ;
  GALGAS_bool var_continueAccessibilityExploration_89669 = GALGAS_bool (true) ;
  GALGAS_bool var_continuesInSequence_89721 = GALGAS_bool (false) ;
  const GALGAS_pic_31__38_Instruction_5F_block temp_7 = this ;
  if (temp_7.readProperty_mBlockList ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2586)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2586)).isValid ()) {
    uint32_t variant_89751 = temp_7.readProperty_mBlockList ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2586)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2586)).uintValue () ;
    bool loop_89751 = true ;
    while (loop_89751) {
      loop_89751 = var_continueAccessibilityExploration_89669.isValid () ;
      if (loop_89751) {
        loop_89751 = var_continueAccessibilityExploration_89669.boolValue () ;
      }
      if (loop_89751 && (0 == variant_89751)) {
        loop_89751 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2586)) ;
      }
      if (loop_89751) {
        variant_89751 -- ;
        var_continueAccessibilityExploration_89669 = GALGAS_bool (false) ;
        cEnumerator_stringset enumerator_89922 (var_accessibleBlockSet_89543.substract_operation (var_handledBlockSet_89625, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2588)), EnumerationOrder::up) ;
        while (enumerator_89922.hasCurrentObject ()) {
          var_handledBlockSet_89625.addAssign_operation (enumerator_89922.current (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2589)) ;
          GALGAS_pic_31__38_InstructionList var_instructionList_90081 ;
          GALGAS_abstractBlockTerminationForBlockInstruction var_blockTermination_90155 ;
          GALGAS_location var_endOfBlock_90195 ;
          var_blockMap_88998.method_searchKey (enumerator_89922.current (HERE).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2591)), var_instructionList_90081, var_blockTermination_90155, var_endOfBlock_90195, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2590)) ;
          GALGAS_uint var_currentBank_90322 ;
          GALGAS_string joker_90334 ; // Joker input parameter
          var_blockInitialBankSelectionMap_89355.method_searchKey (enumerator_89922.current (HERE).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2597)), var_currentBank_90322, joker_90334, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2597)) ;
          ioArgument_ioBlockLabel = GALGAS_lstring::init_21__21_ (var_labelForBlock_88420.add_operation (enumerator_89922.current (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2598)), var_blockMap_88998.getter_locationForKey (enumerator_89922.current (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2598)), inCompiler COMMA_HERE) ;
          {
          routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (var_instructionList_90081, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_currentBank_90322, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2599)) ;
          }
          GALGAS_ipic_31__38_AbstractBlockTerminator var_terminator_91201 ;
          callExtensionMethod_generateBlock ((cPtr_abstractBlockTerminationForBlockInstruction *) var_blockTermination_90155.ptr (), constinArgument_inAccessBankSplitOffset, var_currentBank_90322, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, ioArgument_ioUsedRegisters, var_labelForBlock_88420, var_terminator_91201, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2617)) ;
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = GALGAS_bool (ComparisonKind::equal, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
            if (kBoolTrue == test_8) {
              TC_Array <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (var_endOfBlock_90195, GALGAS_string ("execution will not reach the end of the block, but endless block is not allowed"), fixItArray9  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2629)) ;
            }
          }
          ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2632)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_terminator_91201, GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2636)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2631)) ;
          ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::class_func_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2639)) ;
          callExtensionMethod_addVisitedBlocks ((cPtr_abstractBlockTerminationForBlockInstruction *) var_blockTermination_90155.ptr (), var_accessibleBlockSet_89543, var_blockMap_88998, enumerator_89922.current (HERE), var_currentBank_90322, var_blockInitialBankSelectionMap_89355, var_continuesInSequence_89721, var_continueAccessibilityExploration_89669, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2641)) ;
          enumerator_89922.gotoNextObject () ;
        }
      }
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_block temp_10 = this ;
  cEnumerator_pic_31__38_BlockInstructionBlockList enumerator_91911 (temp_10.readProperty_mBlockList (), EnumerationOrder::up) ;
  while (enumerator_91911.hasCurrentObject ()) {
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = var_accessibleBlockSet_89543.getter_hasKey (enumerator_91911.current_mBlockName (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2646)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2646)).boolEnum () ;
      if (kBoolTrue == test_11) {
        const GALGAS_pic_31__38_Instruction_5F_block temp_12 = this ;
        TC_Array <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticWarning (enumerator_91911.current_mBlockName (HERE).readProperty_location (), GALGAS_string ("this block is not accessible from '").add_operation (temp_12.readProperty_mStartBlockName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2647)).add_operation (GALGAS_string ("' block"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2647)), fixItArray13  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2647)) ;
      }
    }
    enumerator_91911.gotoNextObject () ;
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    test_14 = var_continuesInSequence_89721.boolEnum () ;
    if (kBoolTrue == test_14) {
      const GALGAS_pic_31__38_Instruction_5F_block temp_15 = this ;
      ioArgument_ioBlockLabel = GALGAS_lstring::init_21__21_ (var_labelForBlock_88420.add_operation (GALGAS_string ("_exit"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2652)), temp_15.readProperty_mStartBlockName ().readProperty_location (), inCompiler COMMA_HERE) ;
      GALGAS_string joker_92313 ; // Joker input parameter
      var_blockInitialBankSelectionMap_89355.method_searchKey (GALGAS_string ("-").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2653)), ioArgument_ioCurrentBank, joker_92313, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2653)) ;
    }
  }
  if (kBoolFalse == test_14) {
    ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2655)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18BccInStructuredCondition analyzeCondition'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_BccInStructuredCondition::method_analyzeCondition (const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                        const GALGAS_uint /* constinArgument_inCurrentBank */,
                                                                        const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                        const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                        GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                        GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                        const GALGAS_lstring constinArgument_inConditionTrueLabel,
                                                                        const GALGAS_lstring constinArgument_inConditionFalseLabel,
                                                                        GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                        GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outCurrentBlockTerminator,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_pic_31__38_BccInStructuredCondition temp_0 = this ;
  const GALGAS_pic_31__38_BccInStructuredCondition temp_1 = this ;
  outArgument_outCurrentBlockTerminator = GALGAS_ipic_31__38_ConditionalJumpTerminator::init_21__21__21__21__21__21_ (temp_0.readProperty_mConditionLocation (), temp_1.readProperty_mCondition (), constinArgument_inConditionTrueLabel, GALGAS_conditionalBranchMode::class_func_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2695)), constinArgument_inConditionFalseLabel, GALGAS_conditionalBranchMode::class_func_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2697)), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18RegisterComparisonCondition analyzeCondition'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_RegisterComparisonCondition::method_analyzeCondition (const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                           const GALGAS_uint constinArgument_inCurrentBank,
                                                                           const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                           const GALGAS_constantMap constinArgument_inConstantMap,
                                                                           GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                           GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                           const GALGAS_lstring constinArgument_inConditionTrueLabel,
                                                                           const GALGAS_lstring constinArgument_inConditionFalseLabel,
                                                                           GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                           GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outCurrentBlockTerminator,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_94510 ;
  const GALGAS_pic_31__38_RegisterComparisonCondition temp_0 = this ;
  GALGAS_bitSliceTable joker_94538 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (false), var_IPICregisterDescription_94510, joker_94538, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2713)) ;
  GALGAS_ipic_31__38_RegisterComparison var_ipicComparison_94622 ;
  GALGAS_bool var_complementaryBranch_94649 ;
  const GALGAS_pic_31__38_RegisterComparisonCondition temp_1 = this ;
  switch (temp_1.readProperty_mComparison ().enumValue ()) {
  case GALGAS_pic_31__38_RegisterComparison::kNotBuilt:
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_equal:
    {
      var_ipicComparison_94622 = GALGAS_ipic_31__38_RegisterComparison::class_func_registerEqualsToW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2728)) ;
      var_complementaryBranch_94649 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_greater:
    {
      var_ipicComparison_94622 = GALGAS_ipic_31__38_RegisterComparison::class_func_registerGreaterThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2731)) ;
      var_complementaryBranch_94649 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_lower:
    {
      var_ipicComparison_94622 = GALGAS_ipic_31__38_RegisterComparison::class_func_registerLowerThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2734)) ;
      var_complementaryBranch_94649 = GALGAS_bool (false) ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_greaterOrEqual:
    {
      var_ipicComparison_94622 = GALGAS_ipic_31__38_RegisterComparison::class_func_registerLowerThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2737)) ;
      var_complementaryBranch_94649 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_lowerOrEqual:
    {
      var_ipicComparison_94622 = GALGAS_ipic_31__38_RegisterComparison::class_func_registerGreaterThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2740)) ;
      var_complementaryBranch_94649 = GALGAS_bool (true) ;
    }
    break ;
  case GALGAS_pic_31__38_RegisterComparison::kEnum_notEqual:
    {
      var_ipicComparison_94622 = GALGAS_ipic_31__38_RegisterComparison::class_func_registerEqualsToW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2743)) ;
      var_complementaryBranch_94649 = GALGAS_bool (true) ;
    }
    break ;
  }
  const GALGAS_pic_31__38_RegisterComparisonCondition temp_2 = this ;
  GALGAS_location var_location_95459 = temp_2.readProperty_mRegisterExpression ().readProperty_mRegisterName ().readProperty_location () ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = var_complementaryBranch_94649.boolEnum () ;
    if (kBoolTrue == test_3) {
      outArgument_outCurrentBlockTerminator = GALGAS_pic_31__38_RegisterComparisonTerminator::init_21__21__21__21__21_ (var_location_95459, GALGAS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_95459, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2751)), inCompiler COMMA_HERE), GALGAS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_95459, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2752)), inCompiler COMMA_HERE), var_IPICregisterDescription_94510, var_ipicComparison_94622, inCompiler COMMA_HERE) ;
    }
  }
  if (kBoolFalse == test_3) {
    outArgument_outCurrentBlockTerminator = GALGAS_pic_31__38_RegisterComparisonTerminator::init_21__21__21__21__21_ (var_location_95459, GALGAS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_95459, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2758)), inCompiler COMMA_HERE), GALGAS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_95459, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2759)), inCompiler COMMA_HERE), var_IPICregisterDescription_94510, var_ipicComparison_94622, inCompiler COMMA_HERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18IncDecRegisterInCondition analyzeCondition'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_IncDecRegisterInCondition::method_analyzeCondition (const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                         const GALGAS_uint constinArgument_inCurrentBank,
                                                                         const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                         const GALGAS_constantMap constinArgument_inConstantMap,
                                                                         GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                         GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                         const GALGAS_lstring constinArgument_inConditionTrueLabel,
                                                                         const GALGAS_lstring constinArgument_inConditionFalseLabel,
                                                                         GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                         GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outCurrentBlockTerminator,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_96996 ;
  const GALGAS_pic_31__38_IncDecRegisterInCondition temp_0 = this ;
  GALGAS_bitSliceTable joker_97024 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_IPICregisterDescription_96996, joker_97024, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2778)) ;
  const GALGAS_pic_31__38_IncDecRegisterInCondition temp_1 = this ;
  GALGAS_location var_location_97107 = temp_1.readProperty_mRegisterExpression ().readProperty_mRegisterName ().readProperty_location () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_pic_31__38_IncDecRegisterInCondition temp_3 = this ;
    test_2 = temp_3.readProperty_mBranchIfZero ().boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_pic_31__38_IncDecRegisterInCondition temp_4 = this ;
      const GALGAS_pic_31__38_IncDecRegisterInCondition temp_5 = this ;
      outArgument_outCurrentBlockTerminator = GALGAS_ipic_31__38_IncDecRegisterTerminator::init_21__21__21__21__21__21_ (var_location_97107, GALGAS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_97107, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2793)), inCompiler COMMA_HERE), GALGAS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_97107, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2794)), inCompiler COMMA_HERE), var_IPICregisterDescription_96996, temp_4.readProperty_mIncrement (), temp_5.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE) ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_pic_31__38_IncDecRegisterInCondition temp_6 = this ;
    const GALGAS_pic_31__38_IncDecRegisterInCondition temp_7 = this ;
    outArgument_outCurrentBlockTerminator = GALGAS_ipic_31__38_IncDecRegisterTerminator::init_21__21__21__21__21__21_ (var_location_97107, GALGAS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_97107, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2801)), inCompiler COMMA_HERE), GALGAS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_97107, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2802)), inCompiler COMMA_HERE), var_IPICregisterDescription_96996, temp_6.readProperty_mIncrement (), temp_7.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18RegisterTestCondition analyzeCondition'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_RegisterTestCondition::method_analyzeCondition (const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                     const GALGAS_uint constinArgument_inCurrentBank,
                                                                     const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                     const GALGAS_constantMap constinArgument_inConstantMap,
                                                                     GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                     GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                     const GALGAS_lstring constinArgument_inConditionTrueLabel,
                                                                     const GALGAS_lstring constinArgument_inConditionFalseLabel,
                                                                     GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                     GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outCurrentBlockTerminator,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_98696 ;
  const GALGAS_pic_31__38_RegisterTestCondition temp_0 = this ;
  GALGAS_bitSliceTable joker_98724 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (false), var_IPICregisterDescription_98696, joker_98724, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2822)) ;
  const GALGAS_pic_31__38_RegisterTestCondition temp_1 = this ;
  GALGAS_location var_location_98807 = temp_1.readProperty_mRegisterExpression ().readProperty_mRegisterName ().readProperty_location () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_pic_31__38_RegisterTestCondition temp_3 = this ;
    test_2 = temp_3.readProperty_mBranchIfZero ().boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outCurrentBlockTerminator = GALGAS_pic_31__38_TestRegisterTerminator::init_21__21__21__21_ (var_location_98807, GALGAS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_98807, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2837)), inCompiler COMMA_HERE), GALGAS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_98807, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2838)), inCompiler COMMA_HERE), var_IPICregisterDescription_98696, inCompiler COMMA_HERE) ;
    }
  }
  if (kBoolFalse == test_2) {
    outArgument_outCurrentBlockTerminator = GALGAS_pic_31__38_TestRegisterTerminator::init_21__21__21__21_ (var_location_98807, GALGAS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_98807, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2843)), inCompiler COMMA_HERE), GALGAS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_98807, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2844)), inCompiler COMMA_HERE), var_IPICregisterDescription_98696, inCompiler COMMA_HERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18BitTestInStructuredCondition analyzeCondition'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_BitTestInStructuredCondition::method_analyzeCondition (const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                            const GALGAS_uint constinArgument_inCurrentBank,
                                                                            const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                            const GALGAS_constantMap constinArgument_inConstantMap,
                                                                            GALGAS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                            GALGAS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                            const GALGAS_lstring constinArgument_inConditionTrueLabel,
                                                                            const GALGAS_lstring constinArgument_inConditionFalseLabel,
                                                                            GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                            GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outCurrentBlockTerminator,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_100291 ;
  GALGAS_bitSliceTable var_bitSliceTable_100339 ;
  const GALGAS_pic_31__38_BitTestInStructuredCondition temp_0 = this ;
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (false), var_IPICregisterDescription_100291, var_bitSliceTable_100339, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2862)) ;
  GALGAS_uint var_bitNumber_100507 ;
  const GALGAS_pic_31__38_BitTestInStructuredCondition temp_1 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_100339, var_bitNumber_100507, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2872)) ;
  const GALGAS_pic_31__38_BitTestInStructuredCondition temp_2 = this ;
  GALGAS_location var_location_100575 = temp_2.readProperty_mRegisterExpression ().readProperty_mRegisterName ().readProperty_location () ;
  outArgument_outCurrentBlockTerminator = GALGAS_pic_31__38_BitTestTerminator::init_21__21__21__21__21_ (var_location_100575, GALGAS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_100575, constinArgument_inConditionFalseLabel, GALGAS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2883)), inCompiler COMMA_HERE), GALGAS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_100575, constinArgument_inConditionTrueLabel, GALGAS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2884)), inCompiler COMMA_HERE), var_IPICregisterDescription_100291, var_bitNumber_100507, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18NegateCondition analyzeCondition'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_NegateCondition::method_analyzeCondition (const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                               const GALGAS_uint constinArgument_inCurrentBank,
                                                               const GALGAS_registerTable constinArgument_inRegisterTable,
                                                               const GALGAS_constantMap constinArgument_inConstantMap,
                                                               GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                               GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                               const GALGAS_lstring constinArgument_inConditionTrueLabel,
                                                               const GALGAS_lstring constinArgument_inConditionFalseLabel,
                                                               GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                               GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outCurrentBlockTerminator,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_pic_31__38_NegateCondition temp_0 = this ;
  callExtensionMethod_analyzeCondition ((cPtr_pic_31__38_ConditionExpression *) temp_0.readProperty_mCondition ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, constinArgument_inConditionFalseLabel, constinArgument_inConditionTrueLabel, ioArgument_ioUsedRegisters, outArgument_outCurrentBlockTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2903)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18AndCondition analyzeCondition'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_AndCondition::method_analyzeCondition (const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                            const GALGAS_uint constinArgument_inCurrentBank,
                                                            const GALGAS_registerTable constinArgument_inRegisterTable,
                                                            const GALGAS_constantMap constinArgument_inConstantMap,
                                                            GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                            GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                            const GALGAS_lstring constinArgument_inConditionTrueLabel,
                                                            const GALGAS_lstring constinArgument_inConditionFalseLabel,
                                                            GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                            GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outCurrentBlockTerminator,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_conditionTrueLabel_102305 = GALGAS_lstring::init_21__21_ (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2931)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2931)), constinArgument_inConditionTrueLabel.readProperty_location (), inCompiler COMMA_HERE) ;
  ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2932)) ;
  const GALGAS_pic_31__38_AndCondition temp_0 = this ;
  callExtensionMethod_analyzeCondition ((cPtr_pic_31__38_ConditionExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel_102305, constinArgument_inConditionFalseLabel, ioArgument_ioUsedRegisters, outArgument_outCurrentBlockTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2934)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_secondTestBlockTerminator_103062 ;
  const GALGAS_pic_31__38_AndCondition temp_1 = this ;
  callExtensionMethod_analyzeCondition ((cPtr_pic_31__38_ConditionExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, constinArgument_inConditionTrueLabel, constinArgument_inConditionFalseLabel, ioArgument_ioUsedRegisters, var_secondTestBlockTerminator_103062, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2947)) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2961)), var_conditionTrueLabel_102305, GALGAS_ipic_31__38_SequentialInstructionList::class_func_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2963)), var_secondTestBlockTerminator_103062, GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2965)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2960)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeInstructionList?&??????&&&&&??&'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (const GALGAS_pic_31__38_InstructionList constinArgument_inInstructionList,
                                                                                                     GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                                                     const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                                                     const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                                                     const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                     const GALGAS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                                                     const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                     const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                                     GALGAS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                     GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                     GALGAS_lstring & ioArgument_ioBlockLabel,
                                                                                                     GALGAS_string & ioArgument_ioListFileContents,
                                                                                                     GALGAS_uint & ioArgument_ioCurrentBank,
                                                                                                     const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                                                                                     const GALGAS_routineKind constinArgument_inRoutineKind,
                                                                                                     GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_pic_31__38_InstructionList enumerator_104095 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_104095.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (ComparisonKind::equal, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_104095.current_mInstruction (HERE).readProperty_mInstructionLocation (), GALGAS_string ("Unreachable code"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2995)) ;
        ioArgument_ioBlockLabel = GALGAS_string ("\?").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2996)) ;
      }
    }
    callExtensionMethod_analyze ((cPtr_pic_31__38_PiccoloInstruction *) enumerator_104095.current_mInstruction (HERE).ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioGeneratedBlockList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2998)) ;
    enumerator_104095.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'pic18_analyze_data_sections???&!&&'
//
//--------------------------------------------------------------------------------------------------

void routine_pic_31__38__5F_analyze_5F_data_5F_sections_3F__3F__3F__26__21__26__26_ (const GALGAS_dataList constinArgument_inDataDefinitionList,
                                                                                     const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                     const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                     GALGAS_string & ioArgument_ioListFileContents,
                                                                                     GALGAS_pic_31__38__5F_dataMap & outArgument_outDataMap,
                                                                                     GALGAS_constantMap & ioArgument_ioConstantMap,
                                                                                     GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outDataMap.drop () ; // Release 'out' argument
  outArgument_outDataMap = GALGAS_pic_31__38__5F_dataMap::class_func_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3033)) ;
  cEnumerator_dataList enumerator_105389 (constinArgument_inDataDefinitionList, EnumerationOrder::up) ;
  const bool bool_0 = true ;
  if (enumerator_105389.hasCurrentObject () && bool_0) {
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3036)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3036)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3036)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("DATA DECLARATION").getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (117U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3037)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3037)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3037)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3037)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3038)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3038)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3038)) ;
    while (enumerator_105389.hasCurrentObject () && bool_0) {
      GALGAS_uintlist var_data_105708 = GALGAS_uintlist::class_func_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3040)) ;
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        test_1 = enumerator_105389.current_mIsByteList (HERE).boolEnum () ;
        if (kBoolTrue == test_1) {
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = GALGAS_bool (ComparisonKind::notEqual, enumerator_105389.current_mValueList (HERE).getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3042)).operator_and (GALGAS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3042)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
            if (kBoolTrue == test_2) {
              TC_Array <FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (enumerator_105389.current_mDataName (HERE).readProperty_location (), GALGAS_string ("the data8 byte count should be even"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3043)) ;
            }
          }
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Data8 '").add_operation (enumerator_105389.current_mDataName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3045)).add_operation (GALGAS_string ("', "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3045)).add_operation (enumerator_105389.current_mValueList (HERE).getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3045)).divide_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3045)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3045)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3045)).add_operation (GALGAS_string (" words ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3045)).add_operation (enumerator_105389.current_mValueList (HERE).getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3046)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3046)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3046)).add_operation (GALGAS_string (" bytes).\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3046)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3045)) ;
          {
          ioArgument_ioConstantMap.setter_insertKey (GALGAS_lstring::init_21__21_ (enumerator_105389.current_mDataName (HERE).readProperty_string ().add_operation (GALGAS_string ("_BYTE_COUNT"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3047)), enumerator_105389.current_mDataName (HERE).readProperty_location (), inCompiler COMMA_HERE), enumerator_105389.current_mValueList (HERE).getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3047)).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3047)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3047)) ;
          }
          GALGAS_sint var_byte_106110 = GALGAS_sint (int32_t (0L)) ;
          cEnumerator_immediatExpressionList enumerator_106141 (enumerator_105389.current_mValueList (HERE), EnumerationOrder::up) ;
          GALGAS_uint index_106125 (uint32_t (0)) ;
          while (enumerator_106141.hasCurrentObject ()) {
            GALGAS_sint_36__34_ var_value_106249 ;
            callExtensionMethod_eval ((cPtr_immediatExpression *) enumerator_106141.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_value_106249, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3050)) ;
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = GALGAS_bool (ComparisonKind::lowerThan, var_value_106249.objectCompare (GALGAS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
              if (kBoolTrue == test_4) {
                TC_Array <FixItDescription> fixItArray5 ;
                inCompiler->emitSemanticError (enumerator_106141.current_mErrorLocation (HERE), GALGAS_string ("data8 value is ").add_operation (var_value_106249.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3052)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3052)).add_operation (GALGAS_string (" (negative)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3052)), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3052)) ;
              }
            }
            if (kBoolFalse == test_4) {
              enumGalgasBool test_6 = kBoolTrue ;
              if (kBoolTrue == test_6) {
                test_6 = GALGAS_bool (ComparisonKind::greaterThan, var_value_106249.objectCompare (GALGAS_sint_36__34_ (int64_t (255LL)))).boolEnum () ;
                if (kBoolTrue == test_6) {
                  TC_Array <FixItDescription> fixItArray7 ;
                  inCompiler->emitSemanticError (enumerator_106141.current_mErrorLocation (HERE), GALGAS_string ("data8 value is ").add_operation (var_value_106249.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3054)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3054)).add_operation (GALGAS_string (" (greater than 255"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3054)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3054)) ;
                }
              }
              if (kBoolFalse == test_6) {
                enumGalgasBool test_8 = kBoolTrue ;
                if (kBoolTrue == test_8) {
                  test_8 = GALGAS_bool (ComparisonKind::equal, index_106125.operator_and (GALGAS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3055)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
                  if (kBoolTrue == test_8) {
                    var_byte_106110 = var_value_106249.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3056)) ;
                  }
                }
                if (kBoolFalse == test_8) {
                  var_data_105708.addAssign_operation (var_value_106249.left_shift_operation (GALGAS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3058)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3058)).operator_or (var_byte_106110.getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3058)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3058)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3058))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3058)) ;
                }
              }
            }
            enumerator_106141.gotoNextObject () ;
            index_106125.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3049)) ;
          }
        }
      }
      if (kBoolFalse == test_1) {
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Data16 '").add_operation (enumerator_105389.current_mDataName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3062)).add_operation (GALGAS_string ("', "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3062)).add_operation (enumerator_105389.current_mValueList (HERE).getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3062)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3062)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3062)).add_operation (GALGAS_string (" words ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3062)).add_operation (enumerator_105389.current_mValueList (HERE).getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3063)).multiply_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3063)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3063)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3063)).add_operation (GALGAS_string (" bytes).\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3063)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3062)) ;
        {
        ioArgument_ioConstantMap.setter_insertKey (GALGAS_lstring::init_21__21_ (enumerator_105389.current_mDataName (HERE).readProperty_string ().add_operation (GALGAS_string ("_BYTE_COUNT"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3064)), enumerator_105389.current_mDataName (HERE).readProperty_location (), inCompiler COMMA_HERE), enumerator_105389.current_mValueList (HERE).getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3064)).multiply_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3064)).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3064)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3064)) ;
        }
        cEnumerator_immediatExpressionList enumerator_106900 (enumerator_105389.current_mValueList (HERE), EnumerationOrder::up) ;
        while (enumerator_106900.hasCurrentObject ()) {
          GALGAS_sint_36__34_ var_value_107004 ;
          callExtensionMethod_eval ((cPtr_immediatExpression *) enumerator_106900.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_value_107004, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3066)) ;
          enumGalgasBool test_9 = kBoolTrue ;
          if (kBoolTrue == test_9) {
            test_9 = GALGAS_bool (ComparisonKind::lowerThan, var_value_107004.objectCompare (GALGAS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
            if (kBoolTrue == test_9) {
              TC_Array <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (enumerator_106900.current_mErrorLocation (HERE), GALGAS_string ("data16 value is ").add_operation (var_value_107004.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3068)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3068)).add_operation (GALGAS_string (" (negative)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3068)), fixItArray10  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3068)) ;
            }
          }
          if (kBoolFalse == test_9) {
            enumGalgasBool test_11 = kBoolTrue ;
            if (kBoolTrue == test_11) {
              test_11 = GALGAS_bool (ComparisonKind::greaterThan, var_value_107004.objectCompare (GALGAS_sint_36__34_ (int64_t (65535LL)))).boolEnum () ;
              if (kBoolTrue == test_11) {
                TC_Array <FixItDescription> fixItArray12 ;
                inCompiler->emitSemanticError (enumerator_106900.current_mErrorLocation (HERE), GALGAS_string ("data16 value is ").add_operation (var_value_107004.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3070)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3070)).add_operation (GALGAS_string (" (greater than 2**16-1)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3070)), fixItArray12  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3070)) ;
              }
            }
            if (kBoolFalse == test_11) {
              var_data_105708.addAssign_operation (var_value_107004.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3072))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3072)) ;
            }
          }
          enumerator_106900.gotoNextObject () ;
        }
      }
      {
      outArgument_outDataMap.setter_insertKey (enumerator_105389.current_mDataName (HERE), var_data_105708, enumerator_105389.current_mIsByteList (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3076)) ;
      }
      enumerator_105389.gotoNextObject () ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'build_ipic18_block_representation_list?????????????????????????&'
//
//--------------------------------------------------------------------------------------------------

void routine_build_5F_ipic_31__38__5F_block_5F_representation_5F_list_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__26_ (const GALGAS_string constinArgument_inSourceFileName,
                                                                                                                                                                               const GALGAS_sint_36__34_ constinArgument_inROMSize,
                                                                                                                                                                               const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                                                                                                               const GALGAS_routineDeclarationList constinArgument_inBootloaderRoutineDeclarationListForBootloaderImplementation,
                                                                                                                                                                               const GALGAS_routineDeclarationList constinArgument_inUserRoutineDeclarationListForBootloaderImplementation,
                                                                                                                                                                               const GALGAS_luint constinArgument_inBootloaderReservedROMsize,
                                                                                                                                                                               const GALGAS_routineDeclarationList constinArgument_inBootloaderRoutineDeclarationListForUserProgramImplementation,
                                                                                                                                                                               const GALGAS_routineDeclarationList constinArgument_inUserRoutineDeclarationListForUserProgramImplementation,
                                                                                                                                                                               const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                                                                                                                               const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                                                                                                               const GALGAS_declaredByteMap constinArgument_inDeclaredByteMap,
                                                                                                                                                                               const GALGAS_pic_31__38_RoutineDefinitionList constinArgument_inRoutineDefinitionList,
                                                                                                                                                                               const GALGAS_programKind constinArgument_inProgramKind,
                                                                                                                                                                               const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                                                                                                               const GALGAS_stringset constinArgument_inUsedRegisters,
                                                                                                                                                                               const GALGAS_dataList constinArgument_inDataList,
                                                                                                                                                                               const GALGAS_pic_31__38_InterruptDefinitionList constinArgument_inInterruptDefinitionList,
                                                                                                                                                                               const GALGAS_lstringlist constinArgument_inUnusedRegisterList,
                                                                                                                                                                               const GALGAS_ramBankTable constinArgument_inRamBank,
                                                                                                                                                                               const GALGAS_bool constinArgument_inHasHighInterrupt,
                                                                                                                                                                               const GALGAS_bool constinArgument_inHasLowInterrupt,
                                                                                                                                                                               const GALGAS_string constinArgument_inProcessorName,
                                                                                                                                                                               const GALGAS_registerTable constinArgument_inPredefinedRegisters,
                                                                                                                                                                               const GALGAS_actualConfigurationMap constinArgument_inActualConfigurationMap,
                                                                                                                                                                               const GALGAS_location constinArgument_inEndOfProgram,
                                                                                                                                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                                                                               Compiler * inCompiler
                                                                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_constantMap var_constantMap_108708 = constinArgument_inConstantMap ;
  GALGAS_stringset var_usedRegisters_108742 = constinArgument_inUsedRegisters ;
  GALGAS_routineMap var_routineMap_108832 = GALGAS_routineMap::class_func_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3113)) ;
  cEnumerator_routineDeclarationList enumerator_108923 (constinArgument_inUserRoutineDeclarationListForBootloaderImplementation, EnumerationOrder::up) ;
  while (enumerator_108923.hasCurrentObject ()) {
    {
    var_routineMap_108832.setter_insertKey (enumerator_108923.current_mRoutineName (HERE), enumerator_108923.current_mIsNoReturn (HERE), enumerator_108923.current_mRequiredBank (HERE).readProperty_uint (), enumerator_108923.current_mReturnedBank (HERE).readProperty_uint (), enumerator_108923.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3115)) ;
    }
    enumerator_108923.gotoNextObject () ;
  }
  cEnumerator_routineDeclarationList enumerator_109180 (constinArgument_inBootloaderRoutineDeclarationListForUserProgramImplementation, EnumerationOrder::up) ;
  while (enumerator_109180.hasCurrentObject ()) {
    {
    var_routineMap_108832.setter_insertKey (enumerator_109180.current_mRoutineName (HERE), enumerator_109180.current_mIsNoReturn (HERE), enumerator_109180.current_mRequiredBank (HERE).readProperty_uint (), enumerator_109180.current_mReturnedBank (HERE).readProperty_uint (), enumerator_109180.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3118)) ;
    }
    enumerator_109180.gotoNextObject () ;
  }
  cEnumerator_pic_31__38_RoutineDefinitionList enumerator_109458 (constinArgument_inRoutineDefinitionList, EnumerationOrder::up) ;
  while (enumerator_109458.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (ComparisonKind::notEqual, enumerator_109458.current_mRequiredBank (HERE).readProperty_uint ().objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3121)))).operator_and (GALGAS_bool (ComparisonKind::greaterThan, enumerator_109458.current_mRequiredBank (HERE).readProperty_uint ().objectCompare (GALGAS_uint (uint32_t (15U)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3121)).boolEnum () ;
      if (kBoolTrue == test_0) {
        TC_Array <FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_109458.current_mRequiredBank (HERE).readProperty_location (), GALGAS_string ("the required bank value should be lower or equal to 15"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3122)) ;
      }
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (ComparisonKind::notEqual, enumerator_109458.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3124)))).operator_and (GALGAS_bool (ComparisonKind::greaterThan, enumerator_109458.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GALGAS_uint (uint32_t (15U)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3124)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_109458.current_mReturnedBank (HERE).readProperty_location (), GALGAS_string ("the returned bank value should be lower or equal to 15"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3125)) ;
      }
    }
    {
    var_routineMap_108832.setter_insertKey (enumerator_109458.current_mRoutineName (HERE), enumerator_109458.current_mIsNoReturn (HERE), enumerator_109458.current_mRequiredBank (HERE).readProperty_uint (), enumerator_109458.current_mReturnedBank (HERE).readProperty_uint (), enumerator_109458.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3127)) ;
    }
    enumerator_109458.gotoNextObject () ;
  }
  GALGAS_pic_31__38__5F_dataMap var_dataMap_111184 ;
  {
  routine_pic_31__38__5F_analyze_5F_data_5F_sections_3F__3F__3F__26__21__26__26_ (constinArgument_inDataList, constinArgument_inRegisterTable, var_constantMap_108708, ioArgument_ioListFileContents, var_dataMap_111184, var_constantMap_108708, var_usedRegisters_108742, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3150)) ;
  }
  {
  routine_print_5F_constant_5F_definition_3F__26_ (var_constantMap_108708, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3160)) ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inProgramKind.objectCompare (GALGAS_programKind::class_func_userProgram (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3165)))).boolEnum () ;
    if (kBoolTrue == test_4) {
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_routineMap_108832.getter_hasKey (GALGAS_string ("main") COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3166)).boolEnum () ;
        if (kBoolTrue == test_5) {
          GALGAS_bool var_isNoReturn_111602 ;
          GALGAS_uint var_requiredBank_111618 ;
          GALGAS_uint joker_111631 ; // Joker input parameter
          GALGAS_bool joker_111634 ; // Joker input parameter
          var_routineMap_108832.method_searchKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("main"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3167)), inCompiler COMMA_HERE), var_isNoReturn_111602, var_requiredBank_111618, joker_111631, joker_111634, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3167)) ;
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = var_isNoReturn_111602.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3168)).boolEnum () ;
            if (kBoolTrue == test_6) {
              TC_Array <FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3169)), GALGAS_string ("the \"main\" should be declared with \"noreturn\" qualifier: \"noreturn main requiresbank 0\""), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3169)) ;
            }
          }
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = GALGAS_bool (ComparisonKind::notEqual, var_requiredBank_111618.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
            if (kBoolTrue == test_8) {
              TC_Array <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3172)), GALGAS_string ("the \"main\" should be declared with \"requiresbank 0\" qualifier: \"noreturn main requiresbank 0\""), fixItArray9  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3172)) ;
            }
          }
        }
      }
      if (kBoolFalse == test_5) {
        TC_Array <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (constinArgument_inEndOfProgram, GALGAS_string ("the program should declare the \"main\" routine"), fixItArray10  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3175)) ;
      }
    }
  }
  GALGAS_ipic_31__38_BlockList var_generatedBlockList_112169 = GALGAS_ipic_31__38_BlockList::class_func_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3179)) ;
  GALGAS_uint var_entryPoint_112222 = GALGAS_uint (uint32_t (4U)) ;
  cEnumerator_routineDeclarationList enumerator_112266 (constinArgument_inBootloaderRoutineDeclarationListForUserProgramImplementation, EnumerationOrder::up) ;
  while (enumerator_112266.hasCurrentObject ()) {
    var_generatedBlockList_112169.addAssign_operation (GALGAS_ipic_31__38_Block::init_21__21__21__21__21__21_ (var_entryPoint_112222, enumerator_112266.current_mRoutineName (HERE), GALGAS_ipic_31__38_SequentialInstructionList::class_func_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3185)), GALGAS_ipic_31__38_ReturnTerminator::init_21_ (GALGAS_location::class_func_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3186)), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3187)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3182)) ;
    var_entryPoint_112222 = var_entryPoint_112222.add_operation (GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3190)) ;
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = GALGAS_bool (ComparisonKind::equal, var_entryPoint_112222.objectCompare (GALGAS_uint (uint32_t (8U)))).boolEnum () ;
      if (kBoolTrue == test_11) {
        var_entryPoint_112222 = GALGAS_uint (uint32_t (12U)) ;
      }
    }
    if (kBoolFalse == test_11) {
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = GALGAS_bool (ComparisonKind::equal, var_entryPoint_112222.objectCompare (GALGAS_uint (uint32_t (24U)))).boolEnum () ;
        if (kBoolTrue == test_12) {
          var_entryPoint_112222 = GALGAS_uint (uint32_t (28U)) ;
        }
      }
    }
    enumerator_112266.gotoNextObject () ;
  }
  var_entryPoint_112222 = constinArgument_inBootloaderReservedROMsize.readProperty_uint () ;
  cEnumerator_routineDeclarationList enumerator_112878 (constinArgument_inUserRoutineDeclarationListForUserProgramImplementation, EnumerationOrder::up) ;
  while (enumerator_112878.hasCurrentObject ()) {
    var_generatedBlockList_112169.addAssign_operation (GALGAS_ipic_31__38_Block::init_21__21__21__21__21__21_ (var_entryPoint_112222, GALGAS_string ("_entry_user_").add_operation (var_entryPoint_112222.getter_xString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3202)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3202)).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3202)), GALGAS_ipic_31__38_SequentialInstructionList::class_func_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3203)), GALGAS_ipic_31__38_JumpTerminator::init_21__21__21_ (enumerator_112878.current_mRoutineName (HERE).readProperty_location (), enumerator_112878.current_mRoutineName (HERE), GALGAS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3204)), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3205)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3200)) ;
    var_entryPoint_112222 = var_entryPoint_112222.add_operation (GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3208)) ;
    enumerator_112878.gotoNextObject () ;
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inProgramKind.objectCompare (GALGAS_programKind::class_func_userProgram (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3211)))).boolEnum () ;
    if (kBoolTrue == test_13) {
      var_generatedBlockList_112169.addAssign_operation (GALGAS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GALGAS_uint (uint32_t (0U)), GALGAS_string (".START").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3214)), GALGAS_ipic_31__38_SequentialInstructionList::class_func_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3215)), GALGAS_ipic_31__38_JumpTerminator::init_21__21__21_ (GALGAS_location::class_func_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3216)), GALGAS_string ("main").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3216)), GALGAS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3216)), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3217)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3212)) ;
    }
  }
  GALGAS_routineDeclarationList var_tempBootloaderRoutineDeclarationList_113811 = constinArgument_inBootloaderRoutineDeclarationListForBootloaderImplementation ;
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    test_14 = GALGAS_bool (ComparisonKind::greaterThan, var_tempBootloaderRoutineDeclarationList_113811.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3223)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_14) {
      GALGAS_lstring var_routineName_114038 ;
      {
      GALGAS_luint joker_114050 ; // Joker input parameter
      GALGAS_luint joker_114053 ; // Joker input parameter
      GALGAS_bool joker_114056 ; // Joker input parameter
      GALGAS_bool joker_114059 ; // Joker input parameter
      var_tempBootloaderRoutineDeclarationList_113811.setter_popFirst (var_routineName_114038, joker_114050, joker_114053, joker_114056, joker_114059, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3224)) ;
      }
      var_generatedBlockList_112169.addAssign_operation (GALGAS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GALGAS_uint (uint32_t (4U)), GALGAS_string ("_entry_bootloader_04").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3227)), GALGAS_ipic_31__38_SequentialInstructionList::class_func_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3228)), GALGAS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_routineName_114038.readProperty_location (), var_routineName_114038, GALGAS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3229)), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3230)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3225)) ;
    }
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = constinArgument_inHasHighInterrupt.boolEnum () ;
    if (kBoolTrue == test_15) {
      var_generatedBlockList_112169.addAssign_operation (GALGAS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GALGAS_uint (uint32_t (8U)), GALGAS_string (".HIGH_INTERRUPT").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3238)), GALGAS_ipic_31__38_SequentialInstructionList::class_func_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3239)), GALGAS_ipic_31__38_JumpTerminator::init_21__21__21_ (GALGAS_location::class_func_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3240)), GALGAS_string ("_high_interrupt").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3240)), GALGAS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3240)), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3241)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3236)) ;
    }
  }
  var_entryPoint_112222 = GALGAS_uint (uint32_t (12U)) ;
  if (var_tempBootloaderRoutineDeclarationList_113811.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3247)).isValid ()) {
    uint32_t variant_114926 = var_tempBootloaderRoutineDeclarationList_113811.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3247)).uintValue () ;
    bool loop_114926 = true ;
    while (loop_114926) {
      loop_114926 = GALGAS_bool (ComparisonKind::greaterThan, var_tempBootloaderRoutineDeclarationList_113811.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3248)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (ComparisonKind::lowerThan, var_entryPoint_112222.objectCompare (GALGAS_uint (uint32_t (24U)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3248)).isValid () ;
      if (loop_114926) {
        loop_114926 = GALGAS_bool (ComparisonKind::greaterThan, var_tempBootloaderRoutineDeclarationList_113811.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3248)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (ComparisonKind::lowerThan, var_entryPoint_112222.objectCompare (GALGAS_uint (uint32_t (24U)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3248)).boolValue () ;
      }
      if (loop_114926 && (0 == variant_114926)) {
        loop_114926 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3247)) ;
      }
      if (loop_114926) {
        variant_114926 -- ;
        GALGAS_lstring var_routineName_115132 ;
        {
        GALGAS_luint joker_115144 ; // Joker input parameter
        GALGAS_luint joker_115147 ; // Joker input parameter
        GALGAS_bool joker_115150 ; // Joker input parameter
        GALGAS_bool joker_115153 ; // Joker input parameter
        var_tempBootloaderRoutineDeclarationList_113811.setter_popFirst (var_routineName_115132, joker_115144, joker_115147, joker_115150, joker_115153, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3250)) ;
        }
        var_generatedBlockList_112169.addAssign_operation (GALGAS_ipic_31__38_Block::init_21__21__21__21__21__21_ (var_entryPoint_112222, GALGAS_string ("_entry_bootloader_").add_operation (var_entryPoint_112222.getter_xString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3253)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3253)).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3253)), GALGAS_ipic_31__38_SequentialInstructionList::class_func_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3254)), GALGAS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_routineName_115132.readProperty_location (), var_routineName_115132, GALGAS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3255)), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3256)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3251)) ;
        var_entryPoint_112222 = var_entryPoint_112222.add_operation (GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3259)) ;
      }
    }
  }
  enumGalgasBool test_16 = kBoolTrue ;
  if (kBoolTrue == test_16) {
    test_16 = constinArgument_inHasLowInterrupt.boolEnum () ;
    if (kBoolTrue == test_16) {
      var_generatedBlockList_112169.addAssign_operation (GALGAS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GALGAS_uint (uint32_t (24U)), GALGAS_string (".LOW_INTERRUPT").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3265)), GALGAS_ipic_31__38_SequentialInstructionList::class_func_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3266)), GALGAS_ipic_31__38_JumpTerminator::init_21__21__21_ (GALGAS_location::class_func_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3267)), GALGAS_string ("_low_interrupt").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3267)), GALGAS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3267)), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3268)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3263)) ;
    }
  }
  var_entryPoint_112222 = GALGAS_uint (uint32_t (28U)) ;
  cEnumerator_routineDeclarationList enumerator_116041 (var_tempBootloaderRoutineDeclarationList_113811, EnumerationOrder::up) ;
  while (enumerator_116041.hasCurrentObject ()) {
    var_generatedBlockList_112169.addAssign_operation (GALGAS_ipic_31__38_Block::init_21__21__21__21__21__21_ (var_entryPoint_112222, GALGAS_string ("_entry_bootloader_").add_operation (var_entryPoint_112222.getter_xString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3277)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3277)).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3277)), GALGAS_ipic_31__38_SequentialInstructionList::class_func_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3278)), GALGAS_ipic_31__38_JumpTerminator::init_21__21__21_ (enumerator_116041.current_mRoutineName (HERE).readProperty_location (), enumerator_116041.current_mRoutineName (HERE), GALGAS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3279)), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3280)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3275)) ;
    var_entryPoint_112222 = var_entryPoint_112222.add_operation (GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3283)) ;
    enumerator_116041.gotoNextObject () ;
  }
  GALGAS_uint var_localLabelIndex_116571 = GALGAS_uint (uint32_t (0U)) ;
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    test_17 = constinArgument_inHasLowInterrupt.boolEnum () ;
    if (kBoolTrue == test_17) {
      cEnumerator_pic_31__38_InterruptDefinitionList enumerator_116672 (constinArgument_inInterruptDefinitionList, EnumerationOrder::up) ;
      while (enumerator_116672.hasCurrentObject ()) {
        enumGalgasBool test_18 = kBoolTrue ;
        if (kBoolTrue == test_18) {
          test_18 = GALGAS_bool (ComparisonKind::equal, enumerator_116672.current_mInterruptName (HERE).readProperty_string ().objectCompare (GALGAS_string ("low"))).boolEnum () ;
          if (kBoolTrue == test_18) {
            GALGAS_uint var_currentBank_116787 = GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3291)) ;
            GALGAS_ipic_31__38_SequentialInstructionList var_generatedInstructionList_116832 = GALGAS_ipic_31__38_SequentialInstructionList::class_func_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3292)) ;
            GALGAS_lstring var_currentBlockLabel_116907 = GALGAS_lstring::init_21__21_ (GALGAS_string ("_low_interrupt"), enumerator_116672.current_mInterruptName (HERE).readProperty_location (), inCompiler COMMA_HERE) ;
            {
            routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (enumerator_116672.current_mInstructionList (HERE), var_generatedBlockList_112169, constinArgument_inAccessBankSplitOffset, var_routineMap_108832, constinArgument_inRegisterTable, var_dataMap_111184, var_constantMap_108708, constinArgument_inMacroMap, var_localLabelIndex_116571, var_generatedInstructionList_116832, var_currentBlockLabel_116907, ioArgument_ioListFileContents, var_currentBank_116787, enumerator_116672.current_mFastReturn (HERE).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3308)), GALGAS_routineKind::class_func_interruptRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3309)), var_usedRegisters_108742, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3294)) ;
            }
            enumGalgasBool test_19 = kBoolTrue ;
            if (kBoolTrue == test_19) {
              test_19 = GALGAS_bool (ComparisonKind::equal, var_currentBlockLabel_116907.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_19) {
                TC_Array <FixItDescription> fixItArray20 ;
                inCompiler->emitSemanticError (enumerator_116672.current_mEndOfInterruptLocation (HERE), GALGAS_string ("execution cannot reach the end of the interrupt routine"), fixItArray20  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3313)) ;
              }
            }
            var_generatedBlockList_112169.addAssign_operation (GALGAS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3317)), var_currentBlockLabel_116907, var_generatedInstructionList_116832, GALGAS_ipic_31__38_RetfieTerminator::init_21__21_ (enumerator_116672.current_mInterruptName (HERE).readProperty_location (), enumerator_116672.current_mFastReturn (HERE), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3321)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3316)) ;
          }
        }
        enumerator_116672.gotoNextObject () ;
      }
    }
  }
  enumGalgasBool test_21 = kBoolTrue ;
  if (kBoolTrue == test_21) {
    test_21 = constinArgument_inHasHighInterrupt.boolEnum () ;
    if (kBoolTrue == test_21) {
      cEnumerator_pic_31__38_InterruptDefinitionList enumerator_118152 (constinArgument_inInterruptDefinitionList, EnumerationOrder::up) ;
      while (enumerator_118152.hasCurrentObject ()) {
        enumGalgasBool test_22 = kBoolTrue ;
        if (kBoolTrue == test_22) {
          test_22 = GALGAS_bool (ComparisonKind::equal, enumerator_118152.current_mInterruptName (HERE).readProperty_string ().objectCompare (GALGAS_string ("high"))).boolEnum () ;
          if (kBoolTrue == test_22) {
            GALGAS_uint var_currentBank_118268 = GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3331)) ;
            GALGAS_ipic_31__38_SequentialInstructionList var_generatedInstructionList_118313 = GALGAS_ipic_31__38_SequentialInstructionList::class_func_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3332)) ;
            GALGAS_lstring var_currentBlockLabel_118388 = GALGAS_lstring::init_21__21_ (GALGAS_string ("_high_interrupt"), enumerator_118152.current_mInterruptName (HERE).readProperty_location (), inCompiler COMMA_HERE) ;
            {
            routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (enumerator_118152.current_mInstructionList (HERE), var_generatedBlockList_112169, constinArgument_inAccessBankSplitOffset, var_routineMap_108832, constinArgument_inRegisterTable, var_dataMap_111184, var_constantMap_108708, constinArgument_inMacroMap, var_localLabelIndex_116571, var_generatedInstructionList_118313, var_currentBlockLabel_118388, ioArgument_ioListFileContents, var_currentBank_118268, enumerator_118152.current_mFastReturn (HERE).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3348)), GALGAS_routineKind::class_func_interruptRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3349)), var_usedRegisters_108742, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3334)) ;
            }
            enumGalgasBool test_23 = kBoolTrue ;
            if (kBoolTrue == test_23) {
              test_23 = GALGAS_bool (ComparisonKind::equal, var_currentBlockLabel_118388.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
              if (kBoolTrue == test_23) {
                TC_Array <FixItDescription> fixItArray24 ;
                inCompiler->emitSemanticError (enumerator_118152.current_mEndOfInterruptLocation (HERE), GALGAS_string ("execution cannot reach the end of the interrupt routine"), fixItArray24  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3353)) ;
              }
            }
            var_generatedBlockList_112169.addAssign_operation (GALGAS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3357)), var_currentBlockLabel_118388, var_generatedInstructionList_118313, GALGAS_ipic_31__38_RetfieTerminator::init_21__21_ (enumerator_118152.current_mInterruptName (HERE).readProperty_location (), GALGAS_bool (true), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3361)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3356)) ;
          }
        }
        enumerator_118152.gotoNextObject () ;
      }
    }
  }
  cEnumerator_pic_31__38_RoutineDefinitionList enumerator_119614 (constinArgument_inRoutineDefinitionList, EnumerationOrder::up) ;
  while (enumerator_119614.hasCurrentObject ()) {
    GALGAS_uint var_currentBank_119662 = enumerator_119614.current_mRequiredBank (HERE).readProperty_uint () ;
    GALGAS_routineKind var_routineKind_119716 ;
    enumGalgasBool test_25 = kBoolTrue ;
    if (kBoolTrue == test_25) {
      test_25 = enumerator_119614.current_mIsNoReturn (HERE).boolEnum () ;
      if (kBoolTrue == test_25) {
        var_routineKind_119716 = GALGAS_routineKind::class_func_noReturnRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3372)) ;
      }
    }
    if (kBoolFalse == test_25) {
      var_routineKind_119716 = GALGAS_routineKind::class_func_regularRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3374)) ;
    }
    GALGAS_ipic_31__38_SequentialInstructionList var_generatedInstructionList_119876 = GALGAS_ipic_31__38_SequentialInstructionList::class_func_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3376)) ;
    GALGAS_lstring var_currentBlockLabel_119956 = enumerator_119614.current_mRoutineName (HERE) ;
    {
    routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (enumerator_119614.current_mInstructionList (HERE), var_generatedBlockList_112169, constinArgument_inAccessBankSplitOffset, var_routineMap_108832, constinArgument_inRegisterTable, var_dataMap_111184, var_constantMap_108708, constinArgument_inMacroMap, var_localLabelIndex_116571, var_generatedInstructionList_119876, var_currentBlockLabel_119956, ioArgument_ioListFileContents, var_currentBank_119662, enumerator_119614.current_mPreservesBank (HERE), var_routineKind_119716, var_usedRegisters_108742, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3378)) ;
    }
    GALGAS_bool var_continuesInSequence_120406 = GALGAS_bool (ComparisonKind::notEqual, var_currentBlockLabel_119956.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
    enumGalgasBool test_26 = kBoolTrue ;
    if (kBoolTrue == test_26) {
      test_26 = var_continuesInSequence_120406.boolEnum () ;
      if (kBoolTrue == test_26) {
        var_generatedBlockList_112169.addAssign_operation (GALGAS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3400)), var_currentBlockLabel_119956, var_generatedInstructionList_119876, GALGAS_ipic_31__38_ReturnTerminator::init_21_ (enumerator_119614.current_mRoutineName (HERE).readProperty_location (), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3404)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3399)) ;
      }
    }
    enumGalgasBool test_27 = kBoolTrue ;
    if (kBoolTrue == test_27) {
      test_27 = enumerator_119614.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3409)).operator_and (GALGAS_bool (ComparisonKind::notEqual, enumerator_119614.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3409)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3409)).operator_and (GALGAS_bool (ComparisonKind::notEqual, var_currentBank_119662.objectCompare (enumerator_119614.current_mReturnedBank (HERE).readProperty_uint ())) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3409)).boolEnum () ;
      if (kBoolTrue == test_27) {
        TC_Array <FixItDescription> fixItArray28 ;
        inCompiler->emitSemanticError (enumerator_119614.current_mRoutineName (HERE).readProperty_location (), GALGAS_string ("execution will not set bank selection to ").add_operation (enumerator_119614.current_mReturnedBank (HERE).readProperty_uint ().getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3410)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3410)), fixItArray28  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3410)) ;
      }
    }
    enumGalgasBool test_29 = kBoolTrue ;
    if (kBoolTrue == test_29) {
      test_29 = enumerator_119614.current_mIsNoReturn (HERE).operator_and (var_continuesInSequence_120406 COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3412)).boolEnum () ;
      if (kBoolTrue == test_29) {
        TC_Array <FixItDescription> fixItArray30 ;
        inCompiler->emitSemanticError (enumerator_119614.current_mRoutineName (HERE).readProperty_location (), GALGAS_string ("execution should not reach the end of a \"noreturn\" routine"), fixItArray30  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3413)) ;
      }
    }
    enumerator_119614.gotoNextObject () ;
  }
  GALGAS_registerExpression var_WREGregister_121307 = GALGAS_registerExpression::init_21__21__21_ (GALGAS_lstring::init_21__21_ (GALGAS_string ("WREG"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3420)), inCompiler COMMA_HERE), GALGAS_immediatInteger::init_21_ (GALGAS_luint::init_21__21_ (GALGAS_uint (uint32_t (0U)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3421)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3422)), inCompiler COMMA_HERE) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_WREG_5F_IPICregisterDescription_121652 ;
  GALGAS_bitSliceTable joker_121685 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_WREGregister_121307.ptr (), constinArgument_inAccessBankSplitOffset, GALGAS_uint (uint32_t (0U)), constinArgument_inRegisterTable, var_constantMap_108708, GALGAS_bool (false), var_WREG_5F_IPICregisterDescription_121652, joker_121685, var_usedRegisters_108742, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3424)) ;
  GALGAS_registerExpression var_TOSLregister_121752 = GALGAS_registerExpression::init_21__21__21_ (GALGAS_lstring::init_21__21_ (GALGAS_string ("TOSL"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3436)), inCompiler COMMA_HERE), GALGAS_immediatInteger::init_21_ (GALGAS_luint::init_21__21_ (GALGAS_uint (uint32_t (0U)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3437)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3438)), inCompiler COMMA_HERE) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_TOSL_5F_IPICregisterDescription_122096 ;
  GALGAS_bitSliceTable joker_122129 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TOSLregister_121752.ptr (), constinArgument_inAccessBankSplitOffset, GALGAS_uint (uint32_t (0U)), constinArgument_inRegisterTable, var_constantMap_108708, GALGAS_bool (true), var_TOSL_5F_IPICregisterDescription_122096, joker_122129, var_usedRegisters_108742, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3440)) ;
  GALGAS_registerExpression var_TOSHregister_122196 = GALGAS_registerExpression::init_21__21__21_ (GALGAS_lstring::init_21__21_ (GALGAS_string ("TOSH"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3452)), inCompiler COMMA_HERE), GALGAS_immediatInteger::init_21_ (GALGAS_luint::init_21__21_ (GALGAS_uint (uint32_t (0U)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3453)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3454)), inCompiler COMMA_HERE) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_TOSH_5F_IPICregisterDescription_122540 ;
  GALGAS_bitSliceTable joker_122573 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TOSHregister_122196.ptr (), constinArgument_inAccessBankSplitOffset, GALGAS_uint (uint32_t (0U)), constinArgument_inRegisterTable, var_constantMap_108708, GALGAS_bool (true), var_TOSH_5F_IPICregisterDescription_122540, joker_122573, var_usedRegisters_108742, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3456)) ;
  GALGAS_registerExpression var_TOSUregister_122640 = GALGAS_registerExpression::init_21__21__21_ (GALGAS_lstring::init_21__21_ (GALGAS_string ("TOSU"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3468)), inCompiler COMMA_HERE), GALGAS_immediatInteger::init_21_ (GALGAS_luint::init_21__21_ (GALGAS_uint (uint32_t (0U)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3469)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3470)), inCompiler COMMA_HERE) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_TOSU_5F_IPICregisterDescription_122983 ;
  GALGAS_bitSliceTable joker_123016 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TOSUregister_122640.ptr (), constinArgument_inAccessBankSplitOffset, GALGAS_uint (uint32_t (0U)), constinArgument_inRegisterTable, var_constantMap_108708, GALGAS_bool (true), var_TOSU_5F_IPICregisterDescription_122983, joker_123016, var_usedRegisters_108742, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3472)) ;
  GALGAS_ipic_31__38_SequentialInstruction var_ADDWF_5F_WREG_123083 = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::init_21__21__21__21_ (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3484)), GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_ADDWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3485)), var_WREG_5F_IPICregisterDescription_121652, GALGAS_bool (true), inCompiler COMMA_HERE) ;
  GALGAS_ipic_31__38_Block var_goto_34_Block_123296 = GALGAS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3491)), GALGAS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3492)), GALGAS_ipic_31__38_SequentialInstructionList::class_func_listWithValue (var_ADDWF_5F_WREG_123083, GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3493)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3493)), GALGAS_ipic_31__38_JumpTerminator::init_21__21__21_ (GALGAS_location::class_func_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3494)), GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3494)), GALGAS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3494)), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3495)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE) ;
  var_generatedBlockList_112169.addAssign_operation (var_goto_34_Block_123296  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3498)) ;
  GALGAS_ipic_31__38_SequentialInstructionList var_goto_32_InstructionList_123684 = GALGAS_ipic_31__38_SequentialInstructionList::class_func_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3500)) ;
  var_goto_32_InstructionList_123684.addAssign_operation (var_ADDWF_5F_WREG_123083, GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3501)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3501)) ;
  var_goto_32_InstructionList_123684.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::init_21__21__21__21_ (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3503)), GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_ADDWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3504)), var_TOSL_5F_IPICregisterDescription_122096, GALGAS_bool (false), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3506)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3502)) ;
  var_goto_32_InstructionList_123684.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3508)), GALGAS_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3509)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3510)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3507)) ;
  var_goto_32_InstructionList_123684.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::init_21__21__21__21_ (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3512)), GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_ADDWFC (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3513)), var_TOSH_5F_IPICregisterDescription_122540, GALGAS_bool (false), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3515)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3511)) ;
  var_goto_32_InstructionList_123684.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::init_21__21__21__21_ (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3517)), GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_ADDWFC (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3518)), var_TOSU_5F_IPICregisterDescription_122983, GALGAS_bool (false), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3522)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3516)) ;
  GALGAS_ipic_31__38_Block var_goto_32_Block_124656 = GALGAS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3526)), GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3527)), var_goto_32_InstructionList_123684, GALGAS_ipic_31__38_ReturnTerminator::init_21_ (GALGAS_location::class_func_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3529)), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3530)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE) ;
  var_generatedBlockList_112169.addAssign_operation (var_goto_32_Block_124656  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3533)) ;
  var_entryPoint_112222 = constinArgument_inBootloaderReservedROMsize.readProperty_uint () ;
  cEnumerator_routineDeclarationList enumerator_125049 (constinArgument_inUserRoutineDeclarationListForBootloaderImplementation, EnumerationOrder::up) ;
  while (enumerator_125049.hasCurrentObject ()) {
    enumGalgasBool test_31 = kBoolTrue ;
    if (kBoolTrue == test_31) {
      test_31 = enumerator_125049.current_mIsNoReturn (HERE).boolEnum () ;
      if (kBoolTrue == test_31) {
        var_generatedBlockList_112169.addAssign_operation (GALGAS_ipic_31__38_Block::init_21__21__21__21__21__21_ (var_entryPoint_112222, enumerator_125049.current_mRoutineName (HERE), GALGAS_ipic_31__38_SequentialInstructionList::class_func_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3541)), GALGAS_ipic_31__38_JumpTerminator::init_21__21__21_ (enumerator_125049.current_mRoutineName (HERE).readProperty_location (), enumerator_125049.current_mRoutineName (HERE), GALGAS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3542)), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3543)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3538)) ;
      }
    }
    if (kBoolFalse == test_31) {
      GALGAS_ipic_31__38_SequentialInstructionList var_instructionList_125455 = GALGAS_ipic_31__38_SequentialInstructionList::class_func_emptyList (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3547)) ;
      enumGalgasBool test_32 = kBoolTrue ;
      if (kBoolTrue == test_32) {
        test_32 = GALGAS_bool (ComparisonKind::notEqual, enumerator_125049.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3548)))).boolEnum () ;
        if (kBoolTrue == test_32) {
          var_instructionList_125455.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::init_21__21_ (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3549)), enumerator_125049.current_mReturnedBank (HERE), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3549)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3549)) ;
        }
      }
      var_generatedBlockList_112169.addAssign_operation (GALGAS_ipic_31__38_Block::init_21__21__21__21__21__21_ (var_entryPoint_112222, enumerator_125049.current_mRoutineName (HERE), var_instructionList_125455, GALGAS_ipic_31__38_ReturnTerminator::init_21_ (GALGAS_location::class_func_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3555)), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3556)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3551)) ;
    }
    var_entryPoint_112222 = var_entryPoint_112222.add_operation (GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3560)) ;
    enumerator_125049.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedDeclarationUnicity_126046 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3563)) ;
  cEnumerator_lstringlist enumerator_126094 (constinArgument_inUnusedRegisterList, EnumerationOrder::up) ;
  while (enumerator_126094.hasCurrentObject ()) {
    enumGalgasBool test_33 = kBoolTrue ;
    if (kBoolTrue == test_33) {
      test_33 = constinArgument_inRegisterTable.getter_hasKey (enumerator_126094.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3565)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3565)).boolEnum () ;
      if (kBoolTrue == test_33) {
        TC_Array <FixItDescription> fixItArray34 ;
        inCompiler->emitSemanticError (enumerator_126094.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_126094.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3566)).add_operation (GALGAS_string ("' byte is not declared"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3566)), fixItArray34  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3566)) ;
      }
    }
    if (kBoolFalse == test_33) {
      enumGalgasBool test_35 = kBoolTrue ;
      if (kBoolTrue == test_35) {
        test_35 = var_unusedDeclarationUnicity_126046.getter_hasKey (enumerator_126094.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3567)).boolEnum () ;
        if (kBoolTrue == test_35) {
          TC_Array <FixItDescription> fixItArray36 ;
          inCompiler->emitSemanticWarning (enumerator_126094.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_126094.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3568)).add_operation (GALGAS_string ("' byte is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3568)), fixItArray36  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3568)) ;
        }
      }
      if (kBoolFalse == test_35) {
        enumGalgasBool test_37 = kBoolTrue ;
        if (kBoolTrue == test_37) {
          test_37 = var_usedRegisters_108742.getter_hasKey (enumerator_126094.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3569)).boolEnum () ;
          if (kBoolTrue == test_37) {
            TC_Array <FixItDescription> fixItArray38 ;
            inCompiler->emitSemanticWarning (enumerator_126094.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_126094.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3570)).add_operation (GALGAS_string ("' byte is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3570)), fixItArray38  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3570)) ;
          }
        }
      }
    }
    var_unusedDeclarationUnicity_126046.addAssign_operation (enumerator_126094.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3572)) ;
    enumerator_126094.gotoNextObject () ;
  }
  cEnumerator_declaredByteMap enumerator_126603 (constinArgument_inDeclaredByteMap, EnumerationOrder::up) ;
  while (enumerator_126603.hasCurrentObject ()) {
    enumGalgasBool test_39 = kBoolTrue ;
    if (kBoolTrue == test_39) {
      test_39 = var_usedRegisters_108742.getter_hasKey (enumerator_126603.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3575)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3575)).operator_and (var_unusedDeclarationUnicity_126046.getter_hasKey (enumerator_126603.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3575)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3575)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3575)).boolEnum () ;
      if (kBoolTrue == test_39) {
        TC_Array <FixItDescription> fixItArray40 ;
        inCompiler->emitSemanticWarning (enumerator_126603.current_lkey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_126603.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3576)).add_operation (GALGAS_string ("' byte is unused"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3576)), fixItArray40  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3576)) ;
      }
    }
    enumerator_126603.gotoNextObject () ;
  }
  {
  routine_displayBlockList_3F__26__3F_ (GALGAS_string ("INTERMEDIATE BLOCK REPRESENTATION"), ioArgument_ioListFileContents, var_generatedBlockList_112169, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3580)) ;
  }
  enumGalgasBool test_41 = kBoolTrue ;
  if (kBoolTrue == test_41) {
    test_41 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3582)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_41) {
      {
      routine_ipic_31__38_OptimizeBlocks_26__26_ (ioArgument_ioListFileContents, var_generatedBlockList_112169, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3583)) ;
      }
      {
      routine_displayBlockList_3F__26__3F_ (GALGAS_string ("OPTIMIZED INTERMEDIATE BLOCK REPRESENTATION"), ioArgument_ioListFileContents, var_generatedBlockList_112169, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3584)) ;
      }
    }
  }
  enumGalgasBool test_42 = kBoolTrue ;
  if (kBoolTrue == test_42) {
    test_42 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3587)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_42) {
      {
      routine_ipic_31__38_OptimizeBlockOrdering_3F__26__26_ (constinArgument_inSourceFileName, ioArgument_ioListFileContents, var_generatedBlockList_112169, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3588)) ;
      }
    }
  }
  enumGalgasBool test_43 = kBoolTrue ;
  if (kBoolTrue == test_43) {
    test_43 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3595)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_43) {
      {
      routine_ipic_31__38_RelativesResolution_26__26_ (ioArgument_ioListFileContents, var_generatedBlockList_112169, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3596)) ;
      }
    }
  }
  enumGalgasBool test_44 = kBoolTrue ;
  if (kBoolTrue == test_44) {
    test_44 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3602)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (ComparisonKind::notEqual, constinArgument_inProgramKind.objectCompare (GALGAS_programKind::class_func_userProgram (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3602)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3602)).boolEnum () ;
    if (kBoolTrue == test_44) {
      {
      routine_ipic_31__38_StackComputations_26__3F_ (ioArgument_ioListFileContents, var_generatedBlockList_112169, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3603)) ;
      }
    }
  }
  GALGAS_blockDurationMap var_blockDurationMap_128119 = GALGAS_blockDurationMap::class_func_emptyMap (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3609)) ;
  enumGalgasBool test_45 = kBoolTrue ;
  if (kBoolTrue == test_45) {
    test_45 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3610)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_45) {
      {
      routine_ipic_31__38_DurationComputations_26__21_ (var_generatedBlockList_112169, var_blockDurationMap_128119, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3611)) ;
      }
    }
  }
  enumGalgasBool test_46 = kBoolTrue ;
  if (kBoolTrue == test_46) {
    test_46 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3614)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_46) {
      GALGAS_uint var_usedROMsize_128685 ;
      GALGAS_generatedCodeMap var_generatedCodeMap_128733 ;
      {
      routine_ipic_31__38_GenerateCode_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__3F__21__21_ (constinArgument_inSourceFileName, constinArgument_inProgramKind, constinArgument_inBootloaderReservedROMsize.readProperty_uint (), constinArgument_inROMSize.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3619)), constinArgument_inProcessorName, constinArgument_inPredefinedRegisters, constinArgument_inRegisterTable, var_dataMap_111184, constinArgument_inActualConfigurationMap, ioArgument_ioListFileContents, var_generatedBlockList_112169, var_usedROMsize_128685, var_generatedCodeMap_128733, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3615)) ;
      }
      enumGalgasBool test_47 = kBoolTrue ;
      if (kBoolTrue == test_47) {
        test_47 = GALGAS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3631)).boolEnum () ;
        if (kBoolTrue == test_47) {
          GALGAS_string var_verboseMessage_128888 = GALGAS_string ("Resource usage:\n") ;
          var_verboseMessage_128888.plusAssign_operation(GALGAS_string ("  ROM, used ").add_operation (var_usedROMsize_128685.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3633)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3633)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3633)) ;
          var_verboseMessage_128888.plusAssign_operation(GALGAS_string (" / ").add_operation (constinArgument_inROMSize.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3634)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3634)).add_operation (GALGAS_string (" bytes ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3634)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3634)) ;
          var_verboseMessage_128888.plusAssign_operation(var_usedROMsize_128685.multiply_operation (GALGAS_uint (uint32_t (100U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3635)).divide_operation (constinArgument_inROMSize.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3635)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3635)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3635)).add_operation (GALGAS_string ("%)\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3635)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3635)) ;
          cEnumerator_ramBankTable enumerator_129184 (constinArgument_inRamBank, EnumerationOrder::up) ;
          while (enumerator_129184.hasCurrentObject ()) {
            GALGAS_uint var_bankSize_129221 = enumerator_129184.current_mLastAddressPlusOne (HERE).substract_operation (enumerator_129184.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3637)) ;
            GALGAS_uint var_usedSize_129286 = enumerator_129184.current_mFirstFreeAddress (HERE).substract_operation (enumerator_129184.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3638)) ;
            var_verboseMessage_128888.plusAssign_operation(GALGAS_string ("  Bank '").add_operation (enumerator_129184.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3639)).add_operation (GALGAS_string ("': "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3639)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3639)) ;
            var_verboseMessage_128888.plusAssign_operation(var_usedSize_129286.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3640)).add_operation (GALGAS_string (" / "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3640)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3640)) ;
            var_verboseMessage_128888.plusAssign_operation(var_bankSize_129221.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3641)).add_operation (GALGAS_string (" bytes ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3641)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3641)) ;
            var_verboseMessage_128888.plusAssign_operation(var_usedSize_129286.multiply_operation (GALGAS_uint (uint32_t (100U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3642)).divide_operation (var_bankSize_129221, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3642)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3642)).add_operation (GALGAS_string ("%)\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3642)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3642)) ;
            enumerator_129184.gotoNextObject () ;
          }
          {
          routine_print_3F_ (var_verboseMessage_128888, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3644)) ;
          }
        }
      }
    }
  }
  enumGalgasBool test_48 = kBoolTrue ;
  if (kBoolTrue == test_48) {
    test_48 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3648)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_48) {
      {
      routine_ipic_31__38_PrintDurations_26__3F_ (ioArgument_ioListFileContents, var_blockDurationMap_128119, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3649)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedBraTerminator optimizeTerminator'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::method_optimizeTerminator (const GALGAS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                        const GALGAS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                        const GALGAS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                        const GALGAS_string /* constinArgument_inBlockLabel */,
                                                                        GALGAS_bool & /* ioArgument_ioOptimizationDone */,
                                                                        GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                        GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_ComputedBraTerminator temp_0 = this ;
  outArgument_outOptimizedTerminator = temp_0 ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedGotoTerminator optimizeTerminator'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::method_optimizeTerminator (const GALGAS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                         const GALGAS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                         const GALGAS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                         const GALGAS_string /* constinArgument_inBlockLabel */,
                                                                         GALGAS_bool & /* ioArgument_ioOptimizationDone */,
                                                                         GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                         GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_ComputedGotoTerminator temp_0 = this ;
  outArgument_outOptimizedTerminator = temp_0 ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18JumpTerminator optimizeTerminator'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_optimizeTerminator (const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                 const GALGAS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                 const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                 const GALGAS_string constinArgument_inBlockLabel,
                                                                 GALGAS_bool & ioArgument_ioOptimizationDone,
                                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                                 GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_JumpTerminator temp_0 = this ;
  outArgument_outOptimizedTerminator = temp_0 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38_JumpTerminator temp_2 = this ;
    test_1 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inBlockLabel.objectCompare (temp_2.readProperty_mLabel ().readProperty_string ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      GALGAS_uint var_targetBlockIndex_2043 ;
      const GALGAS_ipic_31__38_JumpTerminator temp_3 = this ;
      constinArgument_inSymbolTable.method_searchKey (temp_3.readProperty_mLabel (), var_targetBlockIndex_2043, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 53)) ;
      GALGAS_ipic_31__38_Block var_targetBlock_2082 = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex_2043, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 54)) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = GALGAS_bool (ComparisonKind::equal, var_targetBlock_2082.readProperty_mAddress ().objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 55)))).operator_and (GALGAS_bool (ComparisonKind::equal, var_targetBlock_2082.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas", 56)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 55)).operator_and (GALGAS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_targetBlock_2082.readProperty_mTerminator ().ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 56)).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_bool var_optimize_2360 ;
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            test_5 = GALGAS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock_2082.readProperty_mTerminator ().ptr ())).boolEnum () ;
            if (kBoolTrue == test_5) {
              GALGAS_ipic_31__38_JumpTerminator temp_6 ;
              if (var_targetBlock_2082.readProperty_mTerminator ().isValid ()) {
                if (nullptr != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock_2082.readProperty_mTerminator ().ptr ())) {
                  temp_6 = (cPtr_ipic_31__38_JumpTerminator *) var_targetBlock_2082.readProperty_mTerminator ().ptr () ;
                }else{
                  inCompiler->castError ("ipic_31__38_JumpTerminator", var_targetBlock_2082.readProperty_mTerminator ().ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 60)) ;
                }
              }
              GALGAS_ipic_31__38_JumpTerminator var_candidate_2471 = temp_6 ;
              const GALGAS_ipic_31__38_JumpTerminator temp_7 = this ;
              var_optimize_2360 = GALGAS_bool (ComparisonKind::notEqual, temp_7.readProperty_mLabel ().readProperty_string ().objectCompare (var_candidate_2471.readProperty_mLabel ().readProperty_string ())) ;
            }
          }
          if (kBoolFalse == test_5) {
            var_optimize_2360 = GALGAS_bool (true) ;
          }
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            test_8 = var_optimize_2360.boolEnum () ;
            if (kBoolTrue == test_8) {
              outArgument_outOptimizedTerminator = var_targetBlock_2082.readProperty_mTerminator () ;
              ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [P] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 68)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 68)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 68)) ;
              const GALGAS_ipic_31__38_JumpTerminator temp_9 = this ;
              ioArgument_ioListFileContents.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_JumpTerminator *) temp_9.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 69)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 69)) ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" -> "), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 70)) ;
              ioArgument_ioListFileContents.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_AbstractBlockTerminator *) outArgument_outOptimizedTerminator.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 71)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 71)) ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 72)) ;
            }
          }
        }
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ConditionalJumpTerminator optimizeTerminator'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ConditionalJumpTerminator::method_optimizeTerminator (const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                            const GALGAS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                            const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                            const GALGAS_string constinArgument_inBlockLabel,
                                                                            GALGAS_bool & ioArgument_ioOptimizationDone,
                                                                            GALGAS_string & ioArgument_ioListFileContents,
                                                                            GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_1 = this ;
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
    test_0 = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (temp_2.readProperty_mTargetLabelWhenFalse ().readProperty_string ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_3 = this ;
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
      outArgument_outOptimizedTerminator = GALGAS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_3.readProperty_mInstructionLocation (), temp_4.readProperty_mTargetLabelWhenFalse (), GALGAS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_optimize_block.galgas", 94)), inCompiler COMMA_HERE) ;
      ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_5 = this ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [U] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 97)).add_operation (GALGAS_string (", useless terminator condition: replaced by JUMP "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 97)).add_operation (temp_5.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 97)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 97)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 97)) ;
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_6 = this ;
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticWarning (temp_6.readProperty_mInstructionLocation (), GALGAS_string ("useless condition deleted"), fixItArray7  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 98)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_bool var_optimized_4033 = GALGAS_bool (false) ;
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_8 = this ;
    GALGAS_lstring var_targetLabelWhenTrue_4095 = temp_8.readProperty_mTargetLabelWhenTrue () ;
    enumGalgasBool test_9 = kBoolTrue ;
    if (kBoolTrue == test_9) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_10 = this ;
      test_9 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inBlockLabel.objectCompare (temp_10.readProperty_mTargetLabelWhenTrue ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_9) {
        GALGAS_uint var_targetBlockIndex_4273 ;
        const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_11 = this ;
        constinArgument_inSymbolTable.method_searchKey (temp_11.readProperty_mTargetLabelWhenTrue (), var_targetBlockIndex_4273, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 104)) ;
        GALGAS_ipic_31__38_Block var_targetBlock_4314 = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex_4273, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 105)) ;
        enumGalgasBool test_12 = kBoolTrue ;
        if (kBoolTrue == test_12) {
          test_12 = GALGAS_bool (ComparisonKind::equal, var_targetBlock_4314.readProperty_mAddress ().objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 106)))).boolEnum () ;
          if (kBoolTrue == test_12) {
            test_12 = GALGAS_bool (ComparisonKind::equal, var_targetBlock_4314.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas", 107)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
            if (kBoolTrue == test_12) {
              GALGAS_ipic_31__38_JumpTerminator var_targetBlockJumpTerminator_4519 (dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock_4314.readProperty_mTerminator ().ptr ())) ;
              if (nullptr == var_targetBlockJumpTerminator_4519.ptr ()) {
                test_12 = kBoolFalse ;
              }
              if (kBoolTrue == test_12) {
                var_targetLabelWhenTrue_4095 = var_targetBlockJumpTerminator_4519.readProperty_mLabel () ;
                enumGalgasBool test_13 = kBoolTrue ;
                if (kBoolTrue == test_13) {
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_14 = this ;
                  test_13 = GALGAS_bool (ComparisonKind::notEqual, temp_14.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (var_targetLabelWhenTrue_4095.readProperty_string ())).boolEnum () ;
                  if (kBoolTrue == test_13) {
                    var_optimized_4033 = GALGAS_bool (true) ;
                    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [P] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 112)).add_operation (GALGAS_string (", jump optimization: "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 112)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 112)) ;
                    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_15 = this ;
                    ioArgument_ioListFileContents.plusAssign_operation(temp_15.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 113)) ;
                    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" -> "), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 114)) ;
                    ioArgument_ioListFileContents.plusAssign_operation(var_targetLabelWhenTrue_4095.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 115)) ;
                    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 116)) ;
                  }
                }
              }
            }
          }
        }
      }
    }
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_16 = this ;
    GALGAS_lstring var_targetLabelWhenFalse_5127 = temp_16.readProperty_mTargetLabelWhenFalse () ;
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_18 = this ;
      test_17 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inBlockLabel.objectCompare (temp_18.readProperty_mTargetLabelWhenFalse ().readProperty_string ())).boolEnum () ;
      if (kBoolTrue == test_17) {
        GALGAS_uint var_targetBlockIndex_5309 ;
        const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_19 = this ;
        constinArgument_inSymbolTable.method_searchKey (temp_19.readProperty_mTargetLabelWhenFalse (), var_targetBlockIndex_5309, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 123)) ;
        GALGAS_ipic_31__38_Block var_targetBlock_5350 = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex_5309, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 124)) ;
        enumGalgasBool test_20 = kBoolTrue ;
        if (kBoolTrue == test_20) {
          test_20 = GALGAS_bool (ComparisonKind::equal, var_targetBlock_5350.readProperty_mAddress ().objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 125)))).boolEnum () ;
          if (kBoolTrue == test_20) {
            test_20 = GALGAS_bool (ComparisonKind::equal, var_targetBlock_5350.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas", 126)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
            if (kBoolTrue == test_20) {
              GALGAS_ipic_31__38_JumpTerminator var_targetBlockJumpTerminator_5553 (dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock_5350.readProperty_mTerminator ().ptr ())) ;
              if (nullptr == var_targetBlockJumpTerminator_5553.ptr ()) {
                test_20 = kBoolFalse ;
              }
              if (kBoolTrue == test_20) {
                var_targetLabelWhenFalse_5127 = var_targetBlockJumpTerminator_5553.readProperty_mLabel () ;
                enumGalgasBool test_21 = kBoolTrue ;
                if (kBoolTrue == test_21) {
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_22 = this ;
                  test_21 = GALGAS_bool (ComparisonKind::notEqual, temp_22.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (var_targetLabelWhenFalse_5127.readProperty_string ())).boolEnum () ;
                  if (kBoolTrue == test_21) {
                    var_optimized_4033 = GALGAS_bool (true) ;
                    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [P] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 131)).add_operation (GALGAS_string (", jump optimization: "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 131)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 131)) ;
                    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_23 = this ;
                    ioArgument_ioListFileContents.plusAssign_operation(temp_23.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 132)) ;
                    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" -> "), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 133)) ;
                    ioArgument_ioListFileContents.plusAssign_operation(var_targetLabelWhenFalse_5127.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 134)) ;
                    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 135)) ;
                  }
                }
              }
            }
          }
        }
      }
    }
    enumGalgasBool test_24 = kBoolTrue ;
    if (kBoolTrue == test_24) {
      test_24 = var_optimized_4033.boolEnum () ;
      if (kBoolTrue == test_24) {
        ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
        const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_25 = this ;
        const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_26 = this ;
        const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_27 = this ;
        const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_28 = this ;
        outArgument_outOptimizedTerminator = GALGAS_ipic_31__38_ConditionalJumpTerminator::init_21__21__21__21__21__21_ (temp_25.readProperty_mInstructionLocation (), temp_26.readProperty_mConditionalBranch (), var_targetLabelWhenTrue_4095, temp_27.readProperty_mBranchModeOnTrueLabel (), var_targetLabelWhenFalse_5127, temp_28.readProperty_mBranchModeOnFalseLabel (), inCompiler COMMA_HERE) ;
      }
    }
    if (kBoolFalse == test_24) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_29 = this ;
      outArgument_outOptimizedTerminator = temp_29 ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18IncDecRegisterTerminator optimizeTerminator'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_IncDecRegisterTerminator::method_optimizeTerminator (const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                           const GALGAS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                           const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                           const GALGAS_string constinArgument_inBlockLabel,
                                                                           GALGAS_bool & ioArgument_ioOptimizationDone,
                                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                                           GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_optimization_9244 = GALGAS_bool (false) ;
  GALGAS_ipic_31__38_SingleInstructionTerminator var_optimizedTrueTerminator_9470 ;
  GALGAS_ipic_31__38_SingleInstructionTerminator var_optimizedFalseTerminator_9538 ;
  GALGAS_bool var_identicalTerminators_9578 ;
  const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_0 = this ;
  callExtensionMethod_getOptimizedTerminators ((cPtr_ipic_31__38_IncDecRegisterTerminator *) temp_0.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimization_9244, ioArgument_ioListFileContents, var_optimizedTrueTerminator_9470, var_optimizedFalseTerminator_9538, var_identicalTerminators_9578, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 218)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_identicalTerminators_9578.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_2 = this ;
      outArgument_outOptimizedTerminator = temp_2 ;
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mInstructionLocation (), GALGAS_string ("useless decf/incf condition should be replaced by decf/incf instruction"), fixItArray4  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 231)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_optimization_9244.boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_6 = this ;
        const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_7 = this ;
        const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_8 = this ;
        const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_9 = this ;
        outArgument_outOptimizedTerminator = GALGAS_ipic_31__38_IncDecRegisterTerminator::init_21__21__21__21__21__21_ (temp_6.readProperty_mInstructionLocation (), var_optimizedTrueTerminator_9470, var_optimizedFalseTerminator_9538, temp_7.readProperty_mRegisterDescription (), temp_8.readProperty_mIncrement (), temp_9.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE) ;
        ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_5) {
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_10 = this ;
      outArgument_outOptimizedTerminator = temp_10 ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18BitTestTerminator optimizeTerminator'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_BitTestTerminator::method_optimizeTerminator (const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                   const GALGAS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                   const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                   const GALGAS_string constinArgument_inBlockLabel,
                                                                   GALGAS_bool & ioArgument_ioOptimizationDone,
                                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                                   GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_optimization_10574 = GALGAS_bool (false) ;
  GALGAS_ipic_31__38_SingleInstructionTerminator var_optimizedTrueTerminator_10800 ;
  GALGAS_ipic_31__38_SingleInstructionTerminator var_optimizedFalseTerminator_10868 ;
  GALGAS_bool var_identicalTerminators_10908 ;
  const GALGAS_pic_31__38_BitTestTerminator temp_0 = this ;
  callExtensionMethod_getOptimizedTerminators ((cPtr_pic_31__38_BitTestTerminator *) temp_0.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimization_10574, ioArgument_ioListFileContents, var_optimizedTrueTerminator_10800, var_optimizedFalseTerminator_10868, var_identicalTerminators_10908, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 258)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_identicalTerminators_10908.boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outOptimizedTerminator = var_optimizedTrueTerminator_10800 ;
      ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [U] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 272)).add_operation (GALGAS_string (", useless terminator condition: replaced by "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 272)).add_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) var_optimizedTrueTerminator_10800.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 272)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 272)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 272)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 272)) ;
      const GALGAS_pic_31__38_BitTestTerminator temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("useless condition deleted"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 273)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_optimization_10574.boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_pic_31__38_BitTestTerminator temp_5 = this ;
        const GALGAS_pic_31__38_BitTestTerminator temp_6 = this ;
        const GALGAS_pic_31__38_BitTestTerminator temp_7 = this ;
        outArgument_outOptimizedTerminator = GALGAS_pic_31__38_BitTestTerminator::init_21__21__21__21__21_ (temp_5.readProperty_mInstructionLocation (), var_optimizedTrueTerminator_10800, var_optimizedFalseTerminator_10868, temp_6.readProperty_mRegisterDescription (), temp_7.readProperty_mBitNumber (), inCompiler COMMA_HERE) ;
        ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_4) {
      const GALGAS_pic_31__38_BitTestTerminator temp_8 = this ;
      outArgument_outOptimizedTerminator = temp_8 ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18RegisterComparisonTerminator optimizeTerminator'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_RegisterComparisonTerminator::method_optimizeTerminator (const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                              const GALGAS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                              const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                              const GALGAS_string constinArgument_inBlockLabel,
                                                                              GALGAS_bool & ioArgument_ioOptimizationDone,
                                                                              GALGAS_string & ioArgument_ioListFileContents,
                                                                              GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_optimization_12038 = GALGAS_bool (false) ;
  GALGAS_ipic_31__38_SingleInstructionTerminator var_optimizedTrueTerminator_12259 ;
  GALGAS_ipic_31__38_SingleInstructionTerminator var_optimizedFalseTerminator_12327 ;
  GALGAS_bool var_identicalTerminators_12367 ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  callExtensionMethod_getOptimizedTerminators ((cPtr_pic_31__38_RegisterComparisonTerminator *) temp_0.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimization_12038, ioArgument_ioListFileContents, var_optimizedTrueTerminator_12259, var_optimizedFalseTerminator_12327, var_identicalTerminators_12367, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 298)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_identicalTerminators_12367.boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outOptimizedTerminator = var_optimizedTrueTerminator_12259 ;
      ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [U] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 312)).add_operation (GALGAS_string (", useless terminator condition: replaced by "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 312)).add_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) var_optimizedTrueTerminator_12259.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 312)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 312)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 312)) ;
      const GALGAS_pic_31__38_RegisterComparisonTerminator temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("useless condition deleted"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 313)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_optimization_12038.boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_pic_31__38_RegisterComparisonTerminator temp_5 = this ;
        const GALGAS_pic_31__38_RegisterComparisonTerminator temp_6 = this ;
        const GALGAS_pic_31__38_RegisterComparisonTerminator temp_7 = this ;
        outArgument_outOptimizedTerminator = GALGAS_pic_31__38_RegisterComparisonTerminator::init_21__21__21__21__21_ (temp_5.readProperty_mInstructionLocation (), var_optimizedTrueTerminator_12259, var_optimizedFalseTerminator_12327, temp_6.readProperty_mRegisterDescription (), temp_7.readProperty_mComparison (), inCompiler COMMA_HERE) ;
        ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_4) {
      const GALGAS_pic_31__38_RegisterComparisonTerminator temp_8 = this ;
      outArgument_outOptimizedTerminator = temp_8 ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18TestRegisterTerminator optimizeTerminator'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_TestRegisterTerminator::method_optimizeTerminator (const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                        const GALGAS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                        const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                        const GALGAS_string constinArgument_inBlockLabel,
                                                                        GALGAS_bool & ioArgument_ioOptimizationDone,
                                                                        GALGAS_string & ioArgument_ioListFileContents,
                                                                        GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_optimization_13503 = GALGAS_bool (false) ;
  GALGAS_ipic_31__38_SingleInstructionTerminator var_optimizedTrueTerminator_13724 ;
  GALGAS_ipic_31__38_SingleInstructionTerminator var_optimizedFalseTerminator_13792 ;
  GALGAS_bool var_identicalTerminators_13832 ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  callExtensionMethod_getOptimizedTerminators ((cPtr_pic_31__38_TestRegisterTerminator *) temp_0.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimization_13503, ioArgument_ioListFileContents, var_optimizedTrueTerminator_13724, var_optimizedFalseTerminator_13792, var_identicalTerminators_13832, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 338)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_identicalTerminators_13832.boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outOptimizedTerminator = var_optimizedTrueTerminator_13724 ;
      ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [U] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 352)).add_operation (GALGAS_string (", useless terminator condition: replaced by "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 352)).add_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) var_optimizedTrueTerminator_13724.ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 352)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 352)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 352)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 352)) ;
      const GALGAS_pic_31__38_TestRegisterTerminator temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("useless condition deleted"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 353)) ;
    }
  }
  if (kBoolFalse == test_1) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_optimization_13503.boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_pic_31__38_TestRegisterTerminator temp_5 = this ;
        const GALGAS_pic_31__38_TestRegisterTerminator temp_6 = this ;
        outArgument_outOptimizedTerminator = GALGAS_pic_31__38_TestRegisterTerminator::init_21__21__21__21_ (temp_5.readProperty_mInstructionLocation (), var_optimizedTrueTerminator_13724, var_optimizedFalseTerminator_13792, temp_6.readProperty_mRegisterDescription (), inCompiler COMMA_HERE) ;
        ioArgument_ioOptimizationDone = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_4) {
      const GALGAS_pic_31__38_TestRegisterTerminator temp_7 = this ;
      outArgument_outOptimizedTerminator = temp_7 ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18RetfieTerminator optimizeTerminator'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetfieTerminator::method_optimizeTerminator (const GALGAS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                   const GALGAS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                   const GALGAS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                   const GALGAS_string /* constinArgument_inBlockLabel */,
                                                                   GALGAS_bool & /* ioArgument_ioOptimizationDone */,
                                                                   GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                   GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_RetfieTerminator temp_0 = this ;
  outArgument_outOptimizedTerminator = temp_0 ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18RetlwTerminator optimizeTerminator'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetlwTerminator::method_optimizeTerminator (const GALGAS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                  const GALGAS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                  const GALGAS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                  const GALGAS_string /* constinArgument_inBlockLabel */,
                                                                  GALGAS_bool & /* ioArgument_ioOptimizationDone */,
                                                                  GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                  GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_RetlwTerminator temp_0 = this ;
  outArgument_outOptimizedTerminator = temp_0 ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ReturnTerminator optimizeTerminator'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ReturnTerminator::method_optimizeTerminator (const GALGAS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                   const GALGAS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                   const GALGAS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                   const GALGAS_string /* constinArgument_inBlockLabel */,
                                                                   GALGAS_bool & /* ioArgument_ioOptimizationDone */,
                                                                   GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                   GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_ReturnTerminator temp_0 = this ;
  outArgument_outOptimizedTerminator = temp_0 ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedRETLWTerminator optimizeTerminator'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::method_optimizeTerminator (const GALGAS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                          const GALGAS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                          const GALGAS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                          const GALGAS_string /* constinArgument_inBlockLabel */,
                                                                          GALGAS_bool & /* ioArgument_ioOptimizationDone */,
                                                                          GALGAS_string & /* ioArgument_ioListFileContents */,
                                                                          GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_0 = this ;
  outArgument_outOptimizedTerminator = temp_0 ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'enterGoto2block??&'
//
//--------------------------------------------------------------------------------------------------

void routine_enterGoto_32_block_3F__3F__26_ (const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                             const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                             GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (GALGAS_string ("_computed_goto_2") COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 428)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 428)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioReferencedBlockSet.addAssign_operation (GALGAS_string ("_computed_goto_2")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 429)) ;
      GALGAS_uint var_blockIndex_17044 ;
      constinArgument_inSymbolTable.method_searchKey (GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_optimize_block.galgas", 430)), var_blockIndex_17044, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 430)) ;
      GALGAS_ipic_31__38_Block var_b_17077 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_17044, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 431)) ;
      extensionMethod_enterReferencedLabels (var_b_17077, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 432)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterGoto4block??&'
//
//--------------------------------------------------------------------------------------------------

void routine_enterGoto_34_block_3F__3F__26_ (const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                             const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                             GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (GALGAS_string ("_computed_goto_4") COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 446)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 446)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioReferencedBlockSet.addAssign_operation (GALGAS_string ("_computed_goto_4")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 447)) ;
      GALGAS_uint var_blockIndex_17646 ;
      constinArgument_inSymbolTable.method_searchKey (GALGAS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_optimize_block.galgas", 448)), var_blockIndex_17646, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 448)) ;
      GALGAS_ipic_31__38_Block var_b_17679 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_17646, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 449)) ;
      extensionMethod_enterReferencedLabels (var_b_17679, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 450)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedRETLWTerminator enterTerminatorReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::method_enterTerminatorReferencedLabels (const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                       const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                       GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_enterGoto_32_block_3F__3F__26_ (constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 471)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedBraTerminator enterTerminatorReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::method_enterTerminatorReferencedLabels (const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                     const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                     GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_enterGoto_32_block_3F__3F__26_ (constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 484)) ;
  }
  const GALGAS_ipic_31__38_ComputedBraTerminator temp_0 = this ;
  cEnumerator_lstringlist enumerator_18879 (temp_0.readProperty_mTargetLabels (), EnumerationOrder::up) ;
  while (enumerator_18879.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = ioArgument_ioReferencedBlockSet.getter_hasKey (enumerator_18879.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 490)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 490)).boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioReferencedBlockSet.addAssign_operation (enumerator_18879.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 491)) ;
        GALGAS_uint var_blockIndex_19069 ;
        constinArgument_inSymbolTable.method_searchKey (enumerator_18879.current_mValue (HERE), var_blockIndex_19069, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 492)) ;
        GALGAS_ipic_31__38_Block var_b_19104 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_19069, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 493)) ;
        extensionMethod_enterReferencedLabels (var_b_19104, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 494)) ;
      }
    }
    enumerator_18879.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedGotoTerminator enterTerminatorReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::method_enterTerminatorReferencedLabels (const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                      const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                      GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_enterGoto_34_block_3F__3F__26_ (constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 509)) ;
  }
  const GALGAS_ipic_31__38_ComputedGotoTerminator temp_0 = this ;
  cEnumerator_lstringlist enumerator_19660 (temp_0.readProperty_mTargetLabels (), EnumerationOrder::up) ;
  while (enumerator_19660.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = ioArgument_ioReferencedBlockSet.getter_hasKey (enumerator_19660.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 515)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 515)).boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioReferencedBlockSet.addAssign_operation (enumerator_19660.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 516)) ;
        GALGAS_uint var_blockIndex_19850 ;
        constinArgument_inSymbolTable.method_searchKey (enumerator_19660.current_mValue (HERE), var_blockIndex_19850, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 517)) ;
        GALGAS_ipic_31__38_Block var_b_19885 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_19850, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 518)) ;
        extensionMethod_enterReferencedLabels (var_b_19885, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 519)) ;
      }
    }
    enumerator_19660.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18JumpTerminator enterTerminatorReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_enterTerminatorReferencedLabels (const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                              const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                              GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_JumpTerminator temp_1 = this ;
    test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (temp_1.readProperty_mLabel ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 534)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 534)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_ipic_31__38_JumpTerminator temp_2 = this ;
      ioArgument_ioReferencedBlockSet.addAssign_operation (temp_2.readProperty_mLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 535)) ;
      GALGAS_uint var_blockIndex_20504 ;
      const GALGAS_ipic_31__38_JumpTerminator temp_3 = this ;
      constinArgument_inSymbolTable.method_searchKey (temp_3.readProperty_mLabel (), var_blockIndex_20504, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 536)) ;
      GALGAS_ipic_31__38_Block var_b_20537 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_20504, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 537)) ;
      extensionMethod_enterReferencedLabels (var_b_20537, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 538)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ConditionalJumpTerminator enterTerminatorReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ConditionalJumpTerminator::method_enterTerminatorReferencedLabels (const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                         const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                         GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_1 = this ;
    test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (temp_1.readProperty_mTargetLabelWhenTrue ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 552)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 552)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
      ioArgument_ioReferencedBlockSet.addAssign_operation (temp_2.readProperty_mTargetLabelWhenTrue ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 553)) ;
      GALGAS_uint var_blockIndex_21191 ;
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_3 = this ;
      constinArgument_inSymbolTable.method_searchKey (temp_3.readProperty_mTargetLabelWhenTrue (), var_blockIndex_21191, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 554)) ;
      GALGAS_ipic_31__38_Block var_b_21224 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_21191, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 555)) ;
      extensionMethod_enterReferencedLabels (var_b_21224, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 556)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_5 = this ;
    test_4 = ioArgument_ioReferencedBlockSet.getter_hasKey (temp_5.readProperty_mTargetLabelWhenFalse ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 562)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 562)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_6 = this ;
      ioArgument_ioReferencedBlockSet.addAssign_operation (temp_6.readProperty_mTargetLabelWhenFalse ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 563)) ;
      GALGAS_uint var_blockIndex_21588 ;
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_7 = this ;
      constinArgument_inSymbolTable.method_searchKey (temp_7.readProperty_mTargetLabelWhenFalse (), var_blockIndex_21588, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 564)) ;
      GALGAS_ipic_31__38_Block var_b_21621 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_21588, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 565)) ;
      extensionMethod_enterReferencedLabels (var_b_21621, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 566)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18SingleInstructionTerminator enterTerminatorReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_SingleInstructionTerminator::method_enterTerminatorReferencedLabels (const GALGAS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                                           const GALGAS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                                           GALGAS_stringset & /* ioArgument_ioReferencedBlockSet */,
                                                                                           Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18AbstractConditionTerminator enterTerminatorReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_AbstractConditionTerminator::method_enterTerminatorReferencedLabels (const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                           const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                           GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_AbstractConditionTerminator temp_0 = this ;
  callExtensionMethod_enterTerminatorReferencedLabels ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 588)) ;
  const GALGAS_ipic_31__38_AbstractConditionTerminator temp_1 = this ;
  callExtensionMethod_enterTerminatorReferencedLabels ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 589)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_JSR enterInstructionReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_JSR::method_enterInstructionReferencedLabels (const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                        const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                        GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_1 = this ;
    test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (temp_1.readProperty_mTargetLabel ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 610)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 610)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_2 = this ;
      ioArgument_ioReferencedBlockSet.addAssign_operation (temp_2.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 611)) ;
      GALGAS_uint var_blockIndex_23554 ;
      const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_3 = this ;
      constinArgument_inSymbolTable.method_searchKey (temp_3.readProperty_mTargetLabel (), var_blockIndex_23554, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 612)) ;
      GALGAS_ipic_31__38_Block var_b_23587 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_23554, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 613)) ;
      extensionMethod_enterReferencedLabels (var_b_23587, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 614)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_computed_rcall enterInstructionReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::method_enterInstructionReferencedLabels (const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                                     const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                                     GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_enterGoto_34_block_3F__3F__26_ (constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 628)) ;
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_0 = this ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_24159 (temp_0.readProperty_mTargetInstructions (), EnumerationOrder::up) ;
  while (enumerator_24159.hasCurrentObject ()) {
    callExtensionMethod_enterInstructionReferencedLabels ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_24159.current_mInstruction (HERE).ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 634)) ;
    enumerator_24159.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_condition_skip_instruction enterInstructionReferencedLabels'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::method_enterInstructionReferencedLabels (const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                     const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                     GALGAS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction temp_0 = this ;
  callExtensionMethod_enterInstructionReferencedLabels ((cPtr_ipic_31__38_SequentialInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 648)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_JSR optimizeInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_JSR::method_optimizeInstruction (const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                           const GALGAS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                           const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                           const GALGAS_lstring constinArgument_inBlockLabel,
                                                                           GALGAS_bool & outArgument_outOptimizationDone,
                                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                                           GALGAS_ipic_31__38_SequentialInstruction & outArgument_outOptimizedInstruction,
                                                                           GALGAS_bool & outArgument_outNOPsubstitution,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = this ;
  outArgument_outOptimizedInstruction = temp_0 ;
  outArgument_outOptimizationDone = GALGAS_bool (false) ;
  outArgument_outNOPsubstitution = GALGAS_bool (false) ;
  GALGAS_uint var_targetBlockIndex_26055 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_1 = this ;
  constinArgument_inSymbolTable.method_searchKey (temp_1.readProperty_mTargetLabel (), var_targetBlockIndex_26055, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 691)) ;
  GALGAS_ipic_31__38_Block var_targetBloc_26093 = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex_26055, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 692)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = constinArgument_inOptimizeFlagStruct.readProperty_mRemoveEmptyRoutine ().operator_and (GALGAS_bool (ComparisonKind::equal, var_targetBloc_26093.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas", 695)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 694)).operator_and (GALGAS_bool (ComparisonKind::equal, var_targetBloc_26093.readProperty_mAddress ().objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 696)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 695)).operator_and (GALGAS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (var_targetBloc_26093.readProperty_mTerminator ().ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 696)).boolEnum () ;
    if (kBoolTrue == test_2) {
      outArgument_outOptimizationDone = GALGAS_bool (true) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [E] ").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 699)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 699)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 699)) ;
      const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_3 = this ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("call to empty ").add_operation (temp_3.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 700)).add_operation (GALGAS_string (" routine deleted"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 700)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 700)) ;
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 701)) ;
      const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_4 = this ;
      outArgument_outOptimizedInstruction = GALGAS_ipic_31__38_InstructionWithNoOperand::init_21__21_ (temp_4.readProperty_mInstructionLocation (), GALGAS_pic_31__38_InstructionWithNoOperandKind::class_func_NOP (SOURCE_FILE ("ipic18_optimize_block.galgas", 702)), inCompiler COMMA_HERE) ;
      outArgument_outNOPsubstitution = GALGAS_bool (true) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = constinArgument_inOptimizeFlagStruct.readProperty_mJSRtoRETLWreplacedByMOVLW ().operator_and (GALGAS_bool (ComparisonKind::equal, var_targetBloc_26093.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas", 706)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 705)).operator_and (GALGAS_bool (ComparisonKind::equal, var_targetBloc_26093.readProperty_mAddress ().objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 707)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 706)).operator_and (GALGAS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (var_targetBloc_26093.readProperty_mTerminator ().ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 707)).boolEnum () ;
      if (kBoolTrue == test_5) {
        GALGAS_ipic_31__38_RetlwTerminator temp_6 ;
        if (var_targetBloc_26093.readProperty_mTerminator ().isValid ()) {
          if (nullptr != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (var_targetBloc_26093.readProperty_mTerminator ().ptr ())) {
            temp_6 = (cPtr_ipic_31__38_RetlwTerminator *) var_targetBloc_26093.readProperty_mTerminator ().ptr () ;
          }else{
            inCompiler->castError ("ipic_31__38_RetlwTerminator", var_targetBloc_26093.readProperty_mTerminator ().ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 709)) ;
          }
        }
        GALGAS_ipic_31__38_RetlwTerminator var_t_27164 = temp_6 ;
        outArgument_outOptimizationDone = GALGAS_bool (true) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [R] ").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 711)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 711)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 711)) ;
        const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_7 = this ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("call to RETLW ").add_operation (temp_7.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 712)).add_operation (GALGAS_string (" routine transformed to MOVLW"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 712)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 712)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 713)) ;
        const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_8 = this ;
        outArgument_outOptimizedInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_8.readProperty_mInstructionLocation (), GALGAS_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("ipic18_optimize_block.galgas", 716)), var_t_27164.readProperty_mLiteralValue (), inCompiler COMMA_HERE) ;
      }
    }
    if (kBoolFalse == test_5) {
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = constinArgument_inOptimizeFlagStruct.readProperty_mJSRtoOneInstructionRoutineReplacedByInstruction ().operator_and (GALGAS_bool (ComparisonKind::equal, var_targetBloc_26093.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas", 720)).objectCompare (GALGAS_uint (uint32_t (1U)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 719)).operator_and (GALGAS_bool (ComparisonKind::equal, var_targetBloc_26093.readProperty_mAddress ().objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 721)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 720)).operator_and (GALGAS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (var_targetBloc_26093.readProperty_mTerminator ().ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 721)).boolEnum () ;
        if (kBoolTrue == test_9) {
          outArgument_outOptimizedInstruction = var_targetBloc_26093.readProperty_mInstructionList ().getter_mInstructionAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 723)) ;
          outArgument_outOptimizationDone = GALGAS_bool (true) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [I] ").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 725)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 725)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 725)) ;
          const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_10 = this ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("call to single instruction routine ").add_operation (temp_10.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 726)).add_operation (GALGAS_string (" replaced by this single instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 726)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 726)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 727)) ;
        }
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_computed_rcall optimizeInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::method_optimizeInstruction (const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                        const GALGAS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                                                        const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                        const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                                        GALGAS_bool & outArgument_outOptimizationDone,
                                                                                                        GALGAS_string & ioArgument_ioListFileContents,
                                                                                                        GALGAS_ipic_31__38_SequentialInstruction & outArgument_outOptimizedInstruction,
                                                                                                        GALGAS_bool & outArgument_outNOPsubstitution,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOptimizationDone = GALGAS_bool (false) ;
  outArgument_outNOPsubstitution = GALGAS_bool (false) ;
  GALGAS_ipic_31__38_SequentialInstructionList var_optimizedInstructionList_28918 = GALGAS_ipic_31__38_SequentialInstructionList::class_func_emptyList (SOURCE_FILE ("ipic18_optimize_block.galgas", 746)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_0 = this ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_28971 (temp_0.readProperty_mTargetInstructions (), EnumerationOrder::up) ;
  while (enumerator_28971.hasCurrentObject ()) {
    GALGAS_bool var_opt_29020 = GALGAS_bool (false) ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38__5F_intermediate_5F_JSR *> (enumerator_28971.current_mInstruction (HERE).ptr ())).boolEnum () ;
      if (kBoolTrue == test_1) {
        GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_2 ;
        if (enumerator_28971.current_mInstruction (HERE).isValid ()) {
          if (nullptr != dynamic_cast <const cPtr_ipic_31__38__5F_intermediate_5F_JSR *> (enumerator_28971.current_mInstruction (HERE).ptr ())) {
            temp_2 = (cPtr_ipic_31__38__5F_intermediate_5F_JSR *) enumerator_28971.current_mInstruction (HERE).ptr () ;
          }else{
            inCompiler->castError ("ipic_31__38__5F_intermediate_5F_JSR", enumerator_28971.current_mInstruction (HERE).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 750)) ;
          }
        }
        GALGAS_ipic_31__38__5F_intermediate_5F_JSR var_jsr_29125 = temp_2 ;
        GALGAS_uint var_targetBlockIndex_29235 ;
        constinArgument_inSymbolTable.method_searchKey (var_jsr_29125.readProperty_mTargetLabel (), var_targetBlockIndex_29235, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 751)) ;
        GALGAS_ipic_31__38_Block var_targetBloc_29277 = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex_29235, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 752)) ;
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (var_targetBloc_29277.readProperty_mTerminator ().ptr ())).operator_and (GALGAS_bool (ComparisonKind::equal, var_targetBloc_29277.readProperty_mAddress ().objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 754)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 753)).boolEnum () ;
          if (kBoolTrue == test_3) {
            enumGalgasBool test_4 = kBoolTrue ;
            if (kBoolTrue == test_4) {
              test_4 = constinArgument_inOptimizeFlagStruct.readProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank ().operator_and (GALGAS_bool (ComparisonKind::equal, var_targetBloc_29277.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas", 756)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 755)).boolEnum () ;
              if (kBoolTrue == test_4) {
                var_opt_29020 = GALGAS_bool (true) ;
                outArgument_outOptimizationDone = GALGAS_bool (true) ;
                var_optimizedInstructionList_28918.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::init_21__21_ (var_jsr_29125.readProperty_mInstructionLocation (), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 759)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 759)) ;
                ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [e] ").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 760)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 760)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 760)) ;
                ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("JSR ").add_operation (var_jsr_29125.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 761)).add_operation (GALGAS_string (" to empty routine replaced by BLANK 0"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 761)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 761)) ;
                ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 762)) ;
              }
            }
            if (kBoolFalse == test_4) {
              enumGalgasBool test_5 = kBoolTrue ;
              if (kBoolTrue == test_5) {
                test_5 = constinArgument_inOptimizeFlagStruct.readProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction ().operator_and (GALGAS_bool (ComparisonKind::equal, var_targetBloc_29277.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas", 764)).objectCompare (GALGAS_uint (uint32_t (1U)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 763)).boolEnum () ;
                if (kBoolTrue == test_5) {
                  GALGAS_ipic_31__38_SequentialInstruction var_inst_30274 = var_targetBloc_29277.readProperty_mInstructionList ().getter_mInstructionAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 765)) ;
                  enumGalgasBool test_6 = kBoolTrue ;
                  if (kBoolTrue == test_6) {
                    test_6 = GALGAS_bool (ComparisonKind::equal, callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) var_inst_30274.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 766)).objectCompare (GALGAS_uint (uint32_t (2U)))).boolEnum () ;
                    if (kBoolTrue == test_6) {
                      var_opt_29020 = GALGAS_bool (true) ;
                      outArgument_outOptimizationDone = GALGAS_bool (true) ;
                      var_optimizedInstructionList_28918.addAssign_operation (var_inst_30274, GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 769)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 769)) ;
                      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [i] ").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 770)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 770)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 770)) ;
                      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("JSR ").add_operation (var_jsr_29125.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 771)).add_operation (GALGAS_string (" to one instruction routine replaced by routine instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 771)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 771)) ;
                      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 772)) ;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = var_opt_29020.operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 777)).boolEnum () ;
      if (kBoolTrue == test_7) {
        var_optimizedInstructionList_28918.addAssign_operation (enumerator_28971.current_mInstruction (HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 778)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 778)) ;
      }
    }
    enumerator_28971.gotoNextObject () ;
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = outArgument_outOptimizationDone.boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_9 = this ;
      const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_10 = this ;
      outArgument_outOptimizedInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::init_21__21__21_ (temp_9.readProperty_mInstructionLocation (), var_optimizedInstructionList_28918, temp_10.readProperty_mUsesRCALL (), inCompiler COMMA_HERE) ;
    }
  }
  if (kBoolFalse == test_8) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_11 = this ;
    outArgument_outOptimizedInstruction = temp_11 ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_skip_instruction_BitTestSkip optimizeInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::method_optimizeInstruction (const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                          const GALGAS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                                          const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                          const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                          GALGAS_bool & outArgument_outOptimizationDone,
                                                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                                                          GALGAS_ipic_31__38_SequentialInstruction & outArgument_outOptimizedInstruction,
                                                                                          GALGAS_bool & outArgument_outNOPsubstitution,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outNOPsubstitution = GALGAS_bool (false) ;
  GALGAS_ipic_31__38_SequentialInstruction var_optimizedEmbeddedInstruction_31889 ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_0 = this ;
  GALGAS_bool joker_31922 ; // Joker input parameter
  callExtensionMethod_optimizeInstruction ((cPtr_ipic_31__38_SequentialInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, outArgument_outOptimizationDone, ioArgument_ioListFileContents, var_optimizedEmbeddedInstruction_31889, joker_31922, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 804)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = outArgument_outOptimizationDone.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_2 = this ;
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_3 = this ;
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_4 = this ;
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_5 = this ;
      outArgument_outOptimizedInstruction = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::init_21__21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), var_optimizedEmbeddedInstruction_31889, temp_3.readProperty_mSkipIfSet (), temp_4.readProperty_mRegisterDescription (), temp_5.readProperty_mBitNumber (), inCompiler COMMA_HERE) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_6 = this ;
    outArgument_outOptimizedInstruction = temp_6 ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_skip_instruction_compare_register optimizeInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::method_optimizeInstruction (const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                  const GALGAS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                                                  const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                  const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                                  GALGAS_bool & outArgument_outOptimizationDone,
                                                                                                  GALGAS_string & ioArgument_ioListFileContents,
                                                                                                  GALGAS_ipic_31__38_SequentialInstruction & outArgument_outOptimizedInstruction,
                                                                                                  GALGAS_bool & outArgument_outNOPsubstitution,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outNOPsubstitution = GALGAS_bool (false) ;
  GALGAS_ipic_31__38_SequentialInstruction var_optimizedEmbeddedInstruction_32955 ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_0 = this ;
  GALGAS_bool joker_32988 ; // Joker input parameter
  callExtensionMethod_optimizeInstruction ((cPtr_ipic_31__38_SequentialInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, outArgument_outOptimizationDone, ioArgument_ioListFileContents, var_optimizedEmbeddedInstruction_32955, joker_32988, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 839)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = outArgument_outOptimizationDone.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_2 = this ;
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_3 = this ;
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_4 = this ;
      outArgument_outOptimizedInstruction = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::init_21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), var_optimizedEmbeddedInstruction_32955, temp_3.readProperty_mCompareInstruction (), temp_4.readProperty_mRegisterDescription (), inCompiler COMMA_HERE) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_5 = this ;
    outArgument_outOptimizedInstruction = temp_5 ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_skip_instruction_FDA optimizeInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::method_optimizeInstruction (const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                  const GALGAS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                                  const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                  const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                  GALGAS_bool & outArgument_outOptimizationDone,
                                                                                  GALGAS_string & ioArgument_ioListFileContents,
                                                                                  GALGAS_ipic_31__38_SequentialInstruction & outArgument_outOptimizedInstruction,
                                                                                  GALGAS_bool & outArgument_outNOPsubstitution,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outNOPsubstitution = GALGAS_bool (false) ;
  GALGAS_ipic_31__38_SequentialInstruction var_optimizedEmbeddedInstruction_33999 ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_0 = this ;
  GALGAS_bool joker_34032 ; // Joker input parameter
  callExtensionMethod_optimizeInstruction ((cPtr_ipic_31__38_SequentialInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, outArgument_outOptimizationDone, ioArgument_ioListFileContents, var_optimizedEmbeddedInstruction_33999, joker_34032, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 873)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = outArgument_outOptimizationDone.boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_2 = this ;
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_3 = this ;
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_4 = this ;
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_5 = this ;
      outArgument_outOptimizedInstruction = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::init_21__21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), var_optimizedEmbeddedInstruction_33999, temp_3.readProperty_mInstruction_5F_FDA_5F_base_5F_code (), temp_4.readProperty_mRegisterDescription (), temp_5.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_6 = this ;
    outArgument_outOptimizedInstruction = temp_6 ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'instructionListOptimization?????!&!'
//
//--------------------------------------------------------------------------------------------------

void routine_instructionListOptimization_3F__3F__3F__3F__3F__21__26__21_ (const GALGAS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                          const GALGAS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                          const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                          const GALGAS_ipic_31__38_SequentialInstructionList constinArgument_inInstructionList,
                                                                          const GALGAS_lstring constinArgument_inBlockLabel,
                                                                          GALGAS_bool & outArgument_outOptimizationDone,
                                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                                          GALGAS_ipic_31__38_SequentialInstructionList & outArgument_outOptimizedInstructionList,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOptimizationDone.drop () ; // Release 'out' argument
  outArgument_outOptimizedInstructionList.drop () ; // Release 'out' argument
  outArgument_outOptimizationDone = GALGAS_bool (false) ;
  outArgument_outOptimizedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::class_func_emptyList (SOURCE_FILE ("ipic18_optimize_block.galgas", 911)) ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_35056 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_35056.hasCurrentObject ()) {
    GALGAS_bool var_optimizationDone_35227 ;
    GALGAS_ipic_31__38_SequentialInstruction var_optimizedInstruction_35311 ;
    GALGAS_bool var_NOPsubstitution_35349 ;
    callExtensionMethod_optimizeInstruction ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_35056.current_mInstruction (HERE).ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimizationDone_35227, ioArgument_ioListFileContents, var_optimizedInstruction_35311, var_NOPsubstitution_35349, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 913)) ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = var_optimizationDone_35227.boolEnum () ;
      if (kBoolTrue == test_0) {
        outArgument_outOptimizationDone = GALGAS_bool (true) ;
      }
    }
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = var_NOPsubstitution_35349.operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas", 926)).boolEnum () ;
      if (kBoolTrue == test_1) {
        outArgument_outOptimizedInstructionList.addAssign_operation (var_optimizedInstruction_35311, GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 927)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 927)) ;
      }
    }
    enumerator_35056.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18OptimizeBlocks&&'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_OptimizeBlocks_26__26_ (GALGAS_string & ioArgument_ioListFileContents,
                                                 GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_optimizeFlagStruct var_optimizeFlagStruct_41121 = GALGAS_optimizeFlagStruct::init_21__21__21__21__21__21__21_ (GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.readProperty_value ()).operator_or (GALGAS_string (gOption_piccolo_5F_options_optimizationFlags.readProperty_value ()).getter_containsCharacter (GALGAS_char (TO_UNICODE (69)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1084)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1084)), GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.readProperty_value ()).operator_or (GALGAS_string (gOption_piccolo_5F_options_optimizationFlags.readProperty_value ()).getter_containsCharacter (GALGAS_char (TO_UNICODE (82)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1085)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1085)), GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.readProperty_value ()).operator_or (GALGAS_string (gOption_piccolo_5F_options_optimizationFlags.readProperty_value ()).getter_containsCharacter (GALGAS_char (TO_UNICODE (74)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1086)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1086)), GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.readProperty_value ()).operator_or (GALGAS_string (gOption_piccolo_5F_options_optimizationFlags.readProperty_value ()).getter_containsCharacter (GALGAS_char (TO_UNICODE (77)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1087)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1087)), GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.readProperty_value ()).operator_or (GALGAS_string (gOption_piccolo_5F_options_optimizationFlags.readProperty_value ()).getter_containsCharacter (GALGAS_char (TO_UNICODE (73)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1088)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1088)), GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.readProperty_value ()).operator_or (GALGAS_string (gOption_piccolo_5F_options_optimizationFlags.readProperty_value ()).getter_containsCharacter (GALGAS_char (TO_UNICODE (105)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1089)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1089)), GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.readProperty_value ()).operator_or (GALGAS_string (gOption_piccolo_5F_options_optimizationFlags.readProperty_value ()).getter_containsCharacter (GALGAS_char (TO_UNICODE (101)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1090)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1090)), inCompiler COMMA_HERE) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1094)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1094)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1094)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("BLOCK REPRESENTATION OPTIMIZATION").getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (117U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1095)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1095)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1095)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1095)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1096)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1096)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1096)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Optimization flags:\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1097)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [D] Dead code elimination: always enabled\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1099)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [E] Empty routine elimination: ").add_operation (extensionGetter_flagValue (var_optimizeFlagStruct_41121.readProperty_mRemoveEmptyRoutine (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1100)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1100)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1100)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1100)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [e] In Computed RCALL, empty routine call replaced by BLANK: ").add_operation (extensionGetter_flagValue (var_optimizeFlagStruct_41121.readProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1101)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1101)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1101)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1101)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [I] Call to one instruction routine replaced by instruction: ").add_operation (extensionGetter_flagValue (var_optimizeFlagStruct_41121.readProperty_mJSRtoOneInstructionRoutineReplacedByInstruction (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1102)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1102)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1102)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1102)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [i] In Computed RCALL, rcall to one instruction routine replaced by instruction: ").add_operation (extensionGetter_flagValue (var_optimizeFlagStruct_41121.readProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1103)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1103)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1103)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1103)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [J] JSR followed by RETURN replaced by JUMP: ").add_operation (extensionGetter_flagValue (var_optimizeFlagStruct_41121.readProperty_mJSRfollowedByRETreplacedByJUMP (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1104)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1104)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1104)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1104)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [M] MOVLW followed by RETURN replaced by RETLW: ").add_operation (extensionGetter_flagValue (var_optimizeFlagStruct_41121.readProperty_mMOVLWfollowedByRETreplacedByRETLW (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1105)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1105)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1105)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1105)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [P] JUMP propagation: always enabled\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1106)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [R] Call to RETLW replaced by MOVLW: ").add_operation (extensionGetter_flagValue (var_optimizeFlagStruct_41121.readProperty_mJSRtoRETLWreplacedByMOVLW (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1107)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1107)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1107)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1107)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [U] Useless test elimination: always enabled\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1108)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_optimize_block.galgas", 1109)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_print_3F_ (GALGAS_string ("Optimizations:\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1110)) ;
      }
    }
  }
  GALGAS_bool var_optimizationDone_44238 = GALGAS_bool (true) ;
  GALGAS_uint var_optimizationPass_44274 = GALGAS_uint (uint32_t (0U)) ;
  if (ioArgument_ioGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas", 1115)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1115)).isValid ()) {
    uint32_t variant_44297 = ioArgument_ioGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas", 1115)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1115)).uintValue () ;
    bool loop_44297 = true ;
    while (loop_44297) {
      loop_44297 = var_optimizationDone_44238.operator_and (GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_optimize_block.galgas", 1116)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1116)).isValid () ;
      if (loop_44297) {
        loop_44297 = var_optimizationDone_44238.operator_and (GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_optimize_block.galgas", 1116)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1116)).boolValue () ;
      }
      if (loop_44297 && (0 == variant_44297)) {
        loop_44297 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_optimize_block.galgas", 1115)) ;
      }
      if (loop_44297) {
        variant_44297 -- ;
        var_optimizationDone_44238 = GALGAS_bool (false) ;
        var_optimizationPass_44274 = var_optimizationPass_44274.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1118)) ;
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n--- Pass ").add_operation (var_optimizationPass_44274.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 1119)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1119)).add_operation (GALGAS_string (" ("), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1119)).add_operation (ioArgument_ioGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas", 1119)).getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 1119)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1119)).add_operation (GALGAS_string (" blocks)\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1119)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1119)) ;
        GALGAS_uint var_blockCountBeforeOptimization_44591 = ioArgument_ioGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas", 1120)) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_optimize_block.galgas", 1121)).boolEnum () ;
          if (kBoolTrue == test_1) {
            {
            routine_print_3F_ (GALGAS_string ("  Pass ").add_operation (var_optimizationPass_44274.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 1122)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1122)).add_operation (GALGAS_string (" : "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1122)).add_operation (var_blockCountBeforeOptimization_44591.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas", 1122)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1122)).add_operation (GALGAS_string (" blocks.\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1122)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1122)) ;
            }
          }
        }
        GALGAS_symbolTableForBlockOptimization var_symbolTable_44856 = GALGAS_symbolTableForBlockOptimization::class_func_emptyMap (SOURCE_FILE ("ipic18_optimize_block.galgas", 1125)) ;
        cEnumerator_ipic_31__38_BlockList enumerator_44915 (ioArgument_ioGeneratedBlockList, EnumerationOrder::up) ;
        GALGAS_uint index_44910 (uint32_t (0)) ;
        while (enumerator_44915.hasCurrentObject ()) {
          {
          var_symbolTable_44856.setter_insertKey (enumerator_44915.current_mBlock (HERE).readProperty_mLabel (), index_44910, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1127)) ;
          }
          enumerator_44915.gotoNextObject () ;
          index_44910.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1126)) ;
        }
        GALGAS_stringset var_referencedBlockSet_45101 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("ipic18_optimize_block.galgas", 1130)) ;
        cEnumerator_ipic_31__38_BlockList enumerator_45145 (ioArgument_ioGeneratedBlockList, EnumerationOrder::up) ;
        while (enumerator_45145.hasCurrentObject ()) {
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = GALGAS_bool (ComparisonKind::notEqual, enumerator_45145.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 1132)))).boolEnum () ;
            if (kBoolTrue == test_2) {
              extensionMethod_enterReferencedLabels (enumerator_45145.current_mBlock (HERE), var_symbolTable_44856, ioArgument_ioGeneratedBlockList, var_referencedBlockSet_45101, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1133)) ;
            }
          }
          enumerator_45145.gotoNextObject () ;
        }
        GALGAS_ipic_31__38_BlockList var_optimizedBlockList_45460 = GALGAS_ipic_31__38_BlockList::class_func_emptyList (SOURCE_FILE ("ipic18_optimize_block.galgas", 1141)) ;
        cEnumerator_ipic_31__38_BlockList enumerator_45510 (ioArgument_ioGeneratedBlockList, EnumerationOrder::up) ;
        while (enumerator_45510.hasCurrentObject ()) {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            test_3 = var_referencedBlockSet_45101.getter_hasKey (enumerator_45510.current_mBlock (HERE).readProperty_mLabel ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1143)).operator_or (GALGAS_bool (ComparisonKind::notEqual, enumerator_45510.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas", 1143)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1143)).boolEnum () ;
            if (kBoolTrue == test_3) {
              GALGAS_ipic_31__38_Block var_optimizedBlock_45842 ;
              extensionMethod_optimize (enumerator_45510.current_mBlock (HERE), var_symbolTable_44856, var_optimizeFlagStruct_41121, ioArgument_ioGeneratedBlockList, var_optimizationDone_44238, ioArgument_ioListFileContents, var_optimizedBlock_45842, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1144)) ;
              var_optimizedBlockList_45460.addAssign_operation (var_optimizedBlock_45842  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1152)) ;
            }
          }
          if (kBoolFalse == test_3) {
            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  [D] ").add_operation (enumerator_45510.current_mBlock (HERE).readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1154)).add_operation (GALGAS_string (": not referenced, deleted\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1154)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1154)) ;
            var_optimizationDone_44238 = GALGAS_bool (true) ;
          }
          enumerator_45510.gotoNextObject () ;
        }
        ioArgument_ioGeneratedBlockList = var_optimizedBlockList_45460 ;
      }
    }
  }
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  No optimization.\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1160)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_optimize_block.galgas", 1161)).boolEnum () ;
    if (kBoolTrue == test_4) {
      {
      routine_print_3F_ (GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas", 1162)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_JSR buildInstructionInvocationGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_JSR::method_buildInstructionInvocationGraph (const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                       GALGAS_string & ioArgument_ioGraphVizString,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = this ;
  ioArgument_ioGraphVizString.plusAssign_operation(GALGAS_string ("  \"").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 29)).add_operation (GALGAS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 29)).add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 29)).add_operation (GALGAS_string ("\" [color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 29)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 29)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_computed_rcall buildInstructionInvocationGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::method_buildInstructionInvocationGraph (const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                                                    GALGAS_string & ioArgument_ioGraphVizString,
                                                                                                                    Compiler * inCompiler
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGraphVizString.plusAssign_operation(GALGAS_string ("  \"").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 37)).add_operation (GALGAS_string ("\" -> \"_computed_goto_4\" [color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 37)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 37)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_0 = this ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_1314 (temp_0.readProperty_mTargetInstructions (), EnumerationOrder::up) ;
  while (enumerator_1314.hasCurrentObject ()) {
    callExtensionMethod_buildInstructionInvocationGraph ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_1314.current_mInstruction (HERE).ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 39)) ;
    enumerator_1314.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_condition_skip_instruction buildInstructionInvocationGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::method_buildInstructionInvocationGraph (const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                                    GALGAS_string & ioArgument_ioGraphVizString,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction temp_0 = this ;
  callExtensionMethod_buildInstructionInvocationGraph ((cPtr_ipic_31__38_SequentialInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 51)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ReturnTerminator buildTerminatorInvocationGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ReturnTerminator::method_buildTerminatorInvocationGraph (const GALGAS_lstring /* constinArgument_inBlockLabel */,
                                                                               GALGAS_string & /* ioArgument_ioGraphVizString */,
                                                                               const GALGAS_bool /* constinArgument_inDottedArrow */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18RetlwTerminator buildTerminatorInvocationGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetlwTerminator::method_buildTerminatorInvocationGraph (const GALGAS_lstring /* constinArgument_inBlockLabel */,
                                                                              GALGAS_string & /* ioArgument_ioGraphVizString */,
                                                                              const GALGAS_bool /* constinArgument_inDottedArrow */,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18RetfieTerminator buildTerminatorInvocationGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetfieTerminator::method_buildTerminatorInvocationGraph (const GALGAS_lstring /* constinArgument_inBlockLabel */,
                                                                               GALGAS_string & /* ioArgument_ioGraphVizString */,
                                                                               const GALGAS_bool /* constinArgument_inDottedArrow */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedGotoTerminator buildTerminatorInvocationGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::method_buildTerminatorInvocationGraph (const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                     GALGAS_string & ioArgument_ioGraphVizString,
                                                                                     const GALGAS_bool /* constinArgument_inDottedArrow */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGraphVizString.plusAssign_operation(GALGAS_string ("  \"").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 98)).add_operation (GALGAS_string ("\" -> \"_computed_goto_4\" [color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 98)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 98)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedRETLWTerminator buildTerminatorInvocationGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::method_buildTerminatorInvocationGraph (const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                      GALGAS_string & ioArgument_ioGraphVizString,
                                                                                      const GALGAS_bool /* constinArgument_inDottedArrow */,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGraphVizString.plusAssign_operation(GALGAS_string ("  \"").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 107)).add_operation (GALGAS_string ("\" -> \"_computed_goto_2\" [color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 107)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 107)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedBraTerminator buildTerminatorInvocationGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::method_buildTerminatorInvocationGraph (const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                    GALGAS_string & ioArgument_ioGraphVizString,
                                                                                    const GALGAS_bool /* constinArgument_inDottedArrow */,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioGraphVizString.plusAssign_operation(GALGAS_string ("  \"").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 116)).add_operation (GALGAS_string ("\" -> \"_computed_goto_2\" [color=red] ;\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 116)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 116)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18AbstractConditionTerminator buildTerminatorInvocationGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_AbstractConditionTerminator::method_buildTerminatorInvocationGraph (const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                          GALGAS_string & ioArgument_ioGraphVizString,
                                                                                          const GALGAS_bool /* constinArgument_inDottedArrow */,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_AbstractConditionTerminator temp_0 = this ;
  callExtensionMethod_buildTerminatorInvocationGraph ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 125)) ;
  const GALGAS_ipic_31__38_AbstractConditionTerminator temp_1 = this ;
  callExtensionMethod_buildTerminatorInvocationGraph ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 126)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18RegisterComparisonTerminator buildTerminatorInvocationGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_RegisterComparisonTerminator::method_buildTerminatorInvocationGraph (const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                          GALGAS_string & ioArgument_ioGraphVizString,
                                                                                          const GALGAS_bool /* constinArgument_inDottedArrow */,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  callExtensionMethod_buildTerminatorInvocationGraph ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 135)) ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_1 = this ;
  callExtensionMethod_buildTerminatorInvocationGraph ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 136)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18TestRegisterTerminator buildTerminatorInvocationGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_TestRegisterTerminator::method_buildTerminatorInvocationGraph (const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                    GALGAS_string & ioArgument_ioGraphVizString,
                                                                                    const GALGAS_bool /* constinArgument_inDottedArrow */,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  callExtensionMethod_buildTerminatorInvocationGraph ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 145)) ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_1 = this ;
  callExtensionMethod_buildTerminatorInvocationGraph ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraphVizString, GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 146)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18JumpTerminator buildTerminatorInvocationGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_buildTerminatorInvocationGraph (const GALGAS_lstring constinArgument_inBlockLabel,
                                                                             GALGAS_string & ioArgument_ioGraphVizString,
                                                                             const GALGAS_bool constinArgument_inDottedArrow,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_JumpTerminator temp_0 = this ;
  ioArgument_ioGraphVizString.plusAssign_operation(GALGAS_string ("  \"").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 155)).add_operation (GALGAS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 155)).add_operation (temp_0.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 155)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 155)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 155)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = constinArgument_inDottedArrow.boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioGraphVizString.plusAssign_operation(GALGAS_string (" [style=dashed]"), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 157)) ;
    }
  }
  ioArgument_ioGraphVizString.plusAssign_operation(GALGAS_string (" ;\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 159)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ConditionalJumpTerminator buildTerminatorInvocationGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ConditionalJumpTerminator::method_buildTerminatorInvocationGraph (const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                        GALGAS_string & ioArgument_ioGraphVizString,
                                                                                        const GALGAS_bool constinArgument_inDottedArrow,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_0 = this ;
  ioArgument_ioGraphVizString.plusAssign_operation(GALGAS_string ("  \"").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 168)).add_operation (GALGAS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 168)).add_operation (temp_0.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 168)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 168)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = constinArgument_inDottedArrow.boolEnum () ;
    if (kBoolTrue == test_1) {
      ioArgument_ioGraphVizString.plusAssign_operation(GALGAS_string (" [style=dashed]"), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 170)) ;
    }
  }
  ioArgument_ioGraphVizString.plusAssign_operation(GALGAS_string (" ;\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 172)) ;
  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
  ioArgument_ioGraphVizString.plusAssign_operation(GALGAS_string ("  \"").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 173)).add_operation (GALGAS_string ("\" -> \""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 173)).add_operation (temp_2.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 173)).add_operation (GALGAS_string ("\""), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 173)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    test_3 = constinArgument_inDottedArrow.boolEnum () ;
    if (kBoolTrue == test_3) {
      ioArgument_ioGraphVizString.plusAssign_operation(GALGAS_string (" [style=dashed]"), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 175)) ;
    }
  }
  ioArgument_ioGraphVizString.plusAssign_operation(GALGAS_string (" ;\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 177)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ReturnTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38_ReturnTerminator::getter_needToInsertJumpInstruction (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                   Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetlwTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38_RetlwTerminator::getter_needToInsertJumpInstruction (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                  Compiler */* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetfieTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38_RetfieTerminator::getter_needToInsertJumpInstruction (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                   Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18JumpTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38_JumpTerminator::getter_needToInsertJumpInstruction (const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                 Compiler */* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
  const GALGAS_ipic_31__38_JumpTerminator temp_0 = this ;
  result_outResult = GALGAS_bool (ComparisonKind::notEqual, temp_0.readProperty_mLabel ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedGotoTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38_ComputedGotoTerminator::getter_needToInsertJumpInstruction (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                         Compiler */* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedRETLWTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38_ComputedRETLWTerminator::getter_needToInsertJumpInstruction (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                          Compiler */* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ConditionalJumpTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38_ConditionalJumpTerminator::getter_needToInsertJumpInstruction (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                            Compiler */* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedBraTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38_ComputedBraTerminator::getter_needToInsertJumpInstruction (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                        Compiler */* inCompiler */
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (false) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18AbstractConditionTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38_AbstractConditionTerminator::getter_needToInsertJumpInstruction (const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
  const GALGAS_ipic_31__38_AbstractConditionTerminator temp_0 = this ;
  const GALGAS_ipic_31__38_AbstractConditionTerminator temp_1 = this ;
  result_outResult = callExtensionGetter_needToInsertJumpInstruction ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 260)).operator_and (callExtensionGetter_needToInsertJumpInstruction ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 262)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 260)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18RegisterComparisonTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_pic_31__38_RegisterComparisonTerminator::getter_needToInsertJumpInstruction (const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  result_outResult = callExtensionGetter_needToInsertJumpInstruction ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 271)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18TestRegisterTerminator needToInsertJumpInstruction'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_pic_31__38_TestRegisterTerminator::getter_needToInsertJumpInstruction (const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
  const GALGAS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  result_outResult = callExtensionGetter_needToInsertJumpInstruction ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 280)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18JumpTerminator buildTerminatorOrderedGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_buildTerminatorOrderedGraph (const GALGAS_lstring constinArgument_inBlockLabel,
                                                                          GALGAS_blockInvocationGraph & ioArgument_ioGraph,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_ipic_31__38_JumpTerminator temp_0 = this ;
  ioArgument_ioGraph.setter_addEdge (constinArgument_inBlockLabel, temp_0.readProperty_mLabel () COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 299)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ConditionalJumpTerminator buildTerminatorOrderedGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ConditionalJumpTerminator::method_buildTerminatorOrderedGraph (const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                     GALGAS_blockInvocationGraph & ioArgument_ioGraph,
                                                                                     Compiler * /* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_0 = this ;
  ioArgument_ioGraph.setter_addEdge (constinArgument_inBlockLabel, temp_0.readProperty_mTargetLabelWhenTrue () COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 307)) ;
  }
  {
  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_1 = this ;
  ioArgument_ioGraph.setter_addEdge (constinArgument_inBlockLabel, temp_1.readProperty_mTargetLabelWhenFalse () COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 308)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18RegisterComparisonTerminator buildTerminatorOrderedGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_RegisterComparisonTerminator::method_buildTerminatorOrderedGraph (const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                       GALGAS_blockInvocationGraph & ioArgument_ioGraph,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  callExtensionMethod_buildTerminatorOrderedGraph ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 316)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18TestRegisterTerminator buildTerminatorOrderedGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_TestRegisterTerminator::method_buildTerminatorOrderedGraph (const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                 GALGAS_blockInvocationGraph & ioArgument_ioGraph,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  callExtensionMethod_buildTerminatorOrderedGraph ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 327)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18IncDecRegisterTerminator buildTerminatorOrderedGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_IncDecRegisterTerminator::method_buildTerminatorOrderedGraph (const GALGAS_lstring constinArgument_inBlockLabel,
                                                                                    GALGAS_blockInvocationGraph & ioArgument_ioGraph,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_0 = this ;
  callExtensionMethod_buildTerminatorOrderedGraph ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 338)) ;
  const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_1 = this ;
  callExtensionMethod_buildTerminatorOrderedGraph ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 342)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18BitTestTerminator buildTerminatorOrderedGraph'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_BitTestTerminator::method_buildTerminatorOrderedGraph (const GALGAS_lstring constinArgument_inBlockLabel,
                                                                            GALGAS_blockInvocationGraph & ioArgument_ioGraph,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_pic_31__38_BitTestTerminator temp_0 = this ;
  callExtensionMethod_buildTerminatorOrderedGraph ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 353)) ;
  const GALGAS_pic_31__38_BitTestTerminator temp_1 = this ;
  callExtensionMethod_buildTerminatorOrderedGraph ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inBlockLabel, ioArgument_ioGraph, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 357)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'buildOrderedGraph&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_buildOrderedGraph_26__3F__26_ (GALGAS_ipic_31__38_BlockList & ioArgument_ioBlockList,
                                            const GALGAS_string constinArgument_inSourceFileName,
                                            GALGAS_string & ioArgument_ioListFileContents,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 373)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 373)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 373)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("BLOCK ORDERING OPTIMIZATION").getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (117U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 374)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 374)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 374)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 374)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 375)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 375)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 375)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Block ordering optimization:\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 376)) ;
  GALGAS_uint var_n_13026 = function_blockDiscontinuityCount (ioArgument_ioBlockList, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 377)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  jump count before optimization: ").add_operation (var_n_13026.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 378)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 378)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 378)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 378)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_block_ordering.galgas", 380)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_print_3F_ (GALGAS_string ("Block ordering optimization... "), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 381)) ;
      }
    }
  }
  GALGAS_symbolTableForBlockOptimization var_symbolTable_13292 = GALGAS_symbolTableForBlockOptimization::class_func_emptyMap (SOURCE_FILE ("ipic18_block_ordering.galgas", 384)) ;
  cEnumerator_ipic_31__38_BlockList enumerator_13349 (ioArgument_ioBlockList, EnumerationOrder::up) ;
  GALGAS_uint index_13344 (uint32_t (0)) ;
  while (enumerator_13349.hasCurrentObject ()) {
    {
    var_symbolTable_13292.setter_insertKey (enumerator_13349.current_mBlock (HERE).readProperty_mLabel (), index_13344, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 386)) ;
    }
    enumerator_13349.gotoNextObject () ;
    index_13344.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 385)) ;
  }
  GALGAS_blockInvocationGraph var_g_13462 = GALGAS_blockInvocationGraph::class_func_emptyGraph (SOURCE_FILE ("ipic18_block_ordering.galgas", 389)) ;
  cEnumerator_ipic_31__38_BlockList enumerator_13509 (ioArgument_ioBlockList, EnumerationOrder::up) ;
  while (enumerator_13509.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (ComparisonKind::equal, enumerator_13509.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_block_ordering.galgas", 391)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        {
        var_g_13462.setter_addNode (enumerator_13509.current_mBlock (HERE).readProperty_mLabel (), enumerator_13509.current_mBlock (HERE).readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 392)) ;
        }
        callExtensionMethod_buildTerminatorOrderedGraph ((cPtr_ipic_31__38_AbstractBlockTerminator *) enumerator_13509.current_mBlock (HERE).readProperty_mTerminator ().ptr (), enumerator_13509.current_mBlock (HERE).readProperty_mLabel (), var_g_13462, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 393)) ;
      }
    }
    enumerator_13509.gotoNextObject () ;
  }
  GALGAS_lstringlist var_nodeList_13803 ;
  GALGAS_stringlist joker_13782 ; // Joker input parameter
  var_g_13462.method_nodesWithNoPredecessor (joker_13782, var_nodeList_13803 COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 397)) ;
  GALGAS_stringlist var_newOrderedLabelList_13819 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("ipic18_block_ordering.galgas", 398)) ;
  GALGAS_stringset var_visitedNodeSet_13862 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("ipic18_block_ordering.galgas", 399)) ;
  GALGAS_clusterList var_clusterList_13899 = GALGAS_clusterList::class_func_emptyList (SOURCE_FILE ("ipic18_block_ordering.galgas", 400)) ;
  cEnumerator_lstringlist enumerator_13936 (var_nodeList_13803, EnumerationOrder::up) ;
  while (enumerator_13936.hasCurrentObject ()) {
    GALGAS_blockInvocationGraph var_gg_13990 = var_g_13462.getter_subgraphFromNodes (GALGAS_lstringlist::class_func_listWithValue (enumerator_13936.current_mValue (HERE)  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 403)), var_visitedNodeSet_13862, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 402)) ;
    cEnumerator_stringlist enumerator_14099 (var_gg_13990.getter_keyList (SOURCE_FILE ("ipic18_block_ordering.galgas", 406)), EnumerationOrder::up) ;
    while (enumerator_14099.hasCurrentObject ()) {
      var_visitedNodeSet_13862.addAssign_operation (enumerator_14099.current_mValue (HERE)  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 407)) ;
      enumerator_14099.gotoNextObject () ;
    }
    {
    var_gg_13990.setter_removeEdgesToDominators (SOURCE_FILE ("ipic18_block_ordering.galgas", 409)) ;
    }
    GALGAS_stringlist var_partialOrderedLabelList_14280 ;
    GALGAS_lstringlist joker_14310_3 ; // Joker input parameter
    GALGAS_stringlist joker_14310_2 ; // Joker input parameter
    GALGAS_lstringlist joker_14310_1 ; // Joker input parameter
    var_gg_13990.getter_reversedGraph (SOURCE_FILE ("ipic18_block_ordering.galgas", 410)).method_depthFirstTopologicalSort (var_partialOrderedLabelList_14280, joker_14310_3, joker_14310_2, joker_14310_1, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 410)) ;
    var_newOrderedLabelList_13819.plusAssign_operation(var_partialOrderedLabelList_14280, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 414)) ;
    GALGAS_ipic_31__38_BlockList var_cluster_14379 = GALGAS_ipic_31__38_BlockList::class_func_emptyList (SOURCE_FILE ("ipic18_block_ordering.galgas", 415)) ;
    cEnumerator_stringlist enumerator_14418 (var_partialOrderedLabelList_14280, EnumerationOrder::up) ;
    while (enumerator_14418.hasCurrentObject ()) {
      GALGAS_uint var_blockIndex_14515 ;
      var_symbolTable_13292.method_searchKey (enumerator_14418.current_mValue (HERE).getter_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas", 417)), var_blockIndex_14515, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 417)) ;
      GALGAS_ipic_31__38_Block var_b_14550 = ioArgument_ioBlockList.getter_mBlockAtIndex (var_blockIndex_14515, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 418)) ;
      var_cluster_14379.addAssign_operation (var_b_14550  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 419)) ;
      enumerator_14418.gotoNextObject () ;
    }
    var_clusterList_13899.addAssign_operation (var_cluster_14379  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 421)) ;
    enumerator_13936.gotoNextObject () ;
  }
  cEnumerator_ipic_31__38_BlockList enumerator_14741 (ioArgument_ioBlockList, EnumerationOrder::up) ;
  while (enumerator_14741.hasCurrentObject ()) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (ComparisonKind::equal, enumerator_14741.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_block_ordering.galgas", 425)))).operator_and (var_visitedNodeSet_13862.getter_hasKey (enumerator_14741.current_mBlock (HERE).readProperty_mLabel ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 426)).operator_not (SOURCE_FILE ("ipic18_block_ordering.galgas", 426)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 425)).boolEnum () ;
      if (kBoolTrue == test_2) {
        GALGAS_blockInvocationGraph var_gg_14926 = var_g_13462.getter_subgraphFromNodes (GALGAS_lstringlist::class_func_listWithValue (enumerator_14741.current_mBlock (HERE).readProperty_mLabel ()  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 428)), var_visitedNodeSet_13862, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 427)) ;
        cEnumerator_stringlist enumerator_15050 (var_gg_14926.getter_keyList (SOURCE_FILE ("ipic18_block_ordering.galgas", 431)), EnumerationOrder::up) ;
        while (enumerator_15050.hasCurrentObject ()) {
          var_visitedNodeSet_13862.addAssign_operation (enumerator_15050.current_mValue (HERE)  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 432)) ;
          enumerator_15050.gotoNextObject () ;
        }
        {
        var_gg_14926.setter_removeEdgesToNode (enumerator_14741.current_mBlock (HERE).readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 434)) ;
        }
        {
        var_gg_14926.setter_removeEdgesToDominators (SOURCE_FILE ("ipic18_block_ordering.galgas", 435)) ;
        }
        GALGAS_stringlist var_partialOrderedLabelList_15290 ;
        GALGAS_lstringlist joker_15322_3 ; // Joker input parameter
        GALGAS_stringlist joker_15322_2 ; // Joker input parameter
        GALGAS_lstringlist joker_15322_1 ; // Joker input parameter
        var_gg_14926.getter_reversedGraph (SOURCE_FILE ("ipic18_block_ordering.galgas", 436)).method_depthFirstTopologicalSort (var_partialOrderedLabelList_15290, joker_15322_3, joker_15322_2, joker_15322_1, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 436)) ;
        var_newOrderedLabelList_13819.plusAssign_operation(var_partialOrderedLabelList_15290, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 440)) ;
        GALGAS_ipic_31__38_BlockList var_cluster_15397 = GALGAS_ipic_31__38_BlockList::class_func_emptyList (SOURCE_FILE ("ipic18_block_ordering.galgas", 441)) ;
        cEnumerator_stringlist enumerator_15438 (var_partialOrderedLabelList_15290, EnumerationOrder::up) ;
        while (enumerator_15438.hasCurrentObject ()) {
          GALGAS_uint var_blockIndex_15537 ;
          var_symbolTable_13292.method_searchKey (enumerator_15438.current_mValue (HERE).getter_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas", 443)), var_blockIndex_15537, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 443)) ;
          GALGAS_ipic_31__38_Block var_b_15574 = ioArgument_ioBlockList.getter_mBlockAtIndex (var_blockIndex_15537, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 444)) ;
          var_cluster_15397.addAssign_operation (var_b_15574  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 445)) ;
          enumerator_15438.gotoNextObject () ;
        }
        var_clusterList_13899.addAssign_operation (var_cluster_15397  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 447)) ;
      }
    }
    enumerator_14741.gotoNextObject () ;
  }
  GALGAS_ipic_31__38_BlockList var_orderedBlockList_15749 = GALGAS_ipic_31__38_BlockList::class_func_emptyList (SOURCE_FILE ("ipic18_block_ordering.galgas", 451)) ;
  GALGAS_bool var_continue_15841 = GALGAS_bool (true) ;
  cEnumerator_ipic_31__38_BlockList enumerator_15864 (ioArgument_ioBlockList, EnumerationOrder::up) ;
  bool bool_3 = var_continue_15841.isValidAndTrue () ;
  if (enumerator_15864.hasCurrentObject () && bool_3) {
    while (enumerator_15864.hasCurrentObject () && bool_3) {
      var_continue_15841 = GALGAS_bool (ComparisonKind::notEqual, enumerator_15864.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_block_ordering.galgas", 455)))) ;
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        test_4 = var_continue_15841.boolEnum () ;
        if (kBoolTrue == test_4) {
          var_orderedBlockList_15749.addAssign_operation (enumerator_15864.current_mBlock (HERE)  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 457)) ;
        }
      }
      enumerator_15864.gotoNextObject () ;
      if (enumerator_15864.hasCurrentObject ()) {
        bool_3 = var_continue_15841.isValidAndTrue () ;
      }
    }
  }
  cEnumerator_stringlist enumerator_16055 (var_newOrderedLabelList_13819, EnumerationOrder::up) ;
  while (enumerator_16055.hasCurrentObject ()) {
    GALGAS_uint var_blockIndex_16146 ;
    var_symbolTable_13292.method_searchKey (enumerator_16055.current_mValue (HERE).getter_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas", 462)), var_blockIndex_16146, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 462)) ;
    GALGAS_ipic_31__38_Block var_b_16179 = ioArgument_ioBlockList.getter_mBlockAtIndex (var_blockIndex_16146, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 463)) ;
    var_orderedBlockList_15749.addAssign_operation (var_b_16179  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 464)) ;
    enumerator_16055.gotoNextObject () ;
  }
  GALGAS_uint var_insertionIndex_16315 = var_orderedBlockList_15749.getter_count (SOURCE_FILE ("ipic18_block_ordering.galgas", 467)) ;
  var_continue_15841 = GALGAS_bool (true) ;
  cEnumerator_ipic_31__38_BlockList enumerator_16384 (ioArgument_ioBlockList, EnumerationOrder::down) ;
  bool bool_5 = var_continue_15841.isValidAndTrue () ;
  if (enumerator_16384.hasCurrentObject () && bool_5) {
    while (enumerator_16384.hasCurrentObject () && bool_5) {
      var_continue_15841 = GALGAS_bool (ComparisonKind::notEqual, enumerator_16384.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_block_ordering.galgas", 470)))) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_continue_15841.boolEnum () ;
        if (kBoolTrue == test_6) {
          {
          var_orderedBlockList_15749.setter_insertAtIndex (enumerator_16384.current_mBlock (HERE), var_insertionIndex_16315, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 472)) ;
          }
        }
      }
      enumerator_16384.gotoNextObject () ;
      if (enumerator_16384.hasCurrentObject ()) {
        bool_5 = var_continue_15841.isValidAndTrue () ;
      }
    }
  }
  GALGAS_uint var_p_16620 = function_blockDiscontinuityCount (var_orderedBlockList_15749, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 476)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  jump count after optimization: ").add_operation (var_p_16620.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 477)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 477)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 477)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 477)) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = GALGAS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_block_ordering.galgas", 478)).boolEnum () ;
    if (kBoolTrue == test_7) {
      {
      routine_print_3F_ (var_n_13026.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 479)).add_operation (GALGAS_string (" -> "), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 479)).add_operation (var_p_16620.getter_string (SOURCE_FILE ("ipic18_block_ordering.galgas", 479)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 479)).add_operation (GALGAS_string (".\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 479)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 479)) ;
      }
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (gOption_piccolo_5F_options_generateGraphvizFiles.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_8) {
      GALGAS_bool joker_17021 ; // Joker input parameter
      var_g_13462.getter_graphviz (SOURCE_FILE ("ipic18_block_ordering.galgas", 483)).method_writeToFileWhenDifferentContents (constinArgument_inSourceFileName.add_operation (GALGAS_string (".blockOrderingConstraints.dot"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 483)), joker_17021, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 483)) ;
    }
  }
  GALGAS_stringset var_newSymbolSet_17065 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("ipic18_block_ordering.galgas", 486)) ;
  GALGAS_bool var_ok_17106 = GALGAS_bool (true) ;
  cEnumerator_ipic_31__38_BlockList enumerator_17123 (var_orderedBlockList_15749, EnumerationOrder::up) ;
  while (enumerator_17123.hasCurrentObject ()) {
    enumGalgasBool test_9 = kBoolTrue ;
    if (kBoolTrue == test_9) {
      test_9 = var_newSymbolSet_17065.getter_hasKey (enumerator_17123.current_mBlock (HERE).readProperty_mLabel ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 489)).boolEnum () ;
      if (kBoolTrue == test_9) {
        GALGAS_string var_s_17229 = GALGAS_string ("BLOCK REORDERING INTERNAL ERROR: block \"").add_operation (enumerator_17123.current_mBlock (HERE).readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 490)).add_operation (GALGAS_string ("\" is duplicated"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 491)) ;
        TC_Array <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticWarning (GALGAS_location::class_func_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas", 492)), var_s_17229, fixItArray10  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 492)) ;
        ioArgument_ioListFileContents.plusAssign_operation(var_s_17229.add_operation (GALGAS_string (".\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 493)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 493)) ;
        var_ok_17106 = GALGAS_bool (false) ;
      }
    }
    if (kBoolFalse == test_9) {
      var_newSymbolSet_17065.addAssign_operation (enumerator_17123.current_mBlock (HERE).readProperty_mLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 496)) ;
    }
    enumerator_17123.gotoNextObject () ;
  }
  cEnumerator_symbolTableForBlockOptimization enumerator_17492 (var_symbolTable_13292, EnumerationOrder::up) ;
  while (enumerator_17492.hasCurrentObject ()) {
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = var_newSymbolSet_17065.getter_hasKey (enumerator_17492.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 500)).operator_not (SOURCE_FILE ("ipic18_block_ordering.galgas", 500)).boolEnum () ;
      if (kBoolTrue == test_11) {
        GALGAS_string var_s_17583 = GALGAS_string ("BLOCK REORDERING INTERNAL ERROR: block \"").add_operation (enumerator_17492.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 501)).add_operation (GALGAS_string ("\" is missing"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 502)) ;
        TC_Array <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticWarning (GALGAS_location::class_func_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas", 503)), var_s_17583, fixItArray12  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 503)) ;
        ioArgument_ioListFileContents.plusAssign_operation(var_s_17583.add_operation (GALGAS_string (".\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 504)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 504)) ;
        var_ok_17106 = GALGAS_bool (false) ;
      }
    }
    enumerator_17492.gotoNextObject () ;
  }
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = var_ok_17106.boolEnum () ;
    if (kBoolTrue == test_13) {
      ioArgument_ioBlockList = var_orderedBlockList_15749 ;
      {
      routine_displayBlockList_3F__26__3F_ (GALGAS_string ("ORDERED OPTIMIZED INTERMEDIATE BLOCK REPRESENTATION"), ioArgument_ioListFileContents, var_orderedBlockList_15749, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 511)) ;
      }
    }
  }
  if (kBoolFalse == test_13) {
    GALGAS_string var_s_18011 = GALGAS_string ("BLOCK REORDERING INTERNAL ERROR: reordered block list is inconsistent, it is not used anymore") ;
    TC_Array <FixItDescription> fixItArray14 ;
    inCompiler->emitSemanticWarning (GALGAS_location::class_func_nowhere (SOURCE_FILE ("ipic18_block_ordering.galgas", 514)), var_s_18011, fixItArray14  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 514)) ;
    ioArgument_ioListFileContents.plusAssign_operation(var_s_18011.add_operation (GALGAS_string (".\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 515)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 515)) ;
    {
    routine_displayBlockList_3F__26__3F_ (GALGAS_string ("INCONSISTENT ORDERED OPTIMIZED INTERMEDIATE BLOCK REPRESENTATION (not used)"), ioArgument_ioListFileContents, var_orderedBlockList_15749, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 516)) ;
    }
  }
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = var_ok_17106.boolEnum () ;
    if (kBoolTrue == test_15) {
      {
      routine_perform_5F_cluster_5F_ordering_3F__26__26_ (var_clusterList_13899, ioArgument_ioBlockList, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 520)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'buildInvocationGraph?!'
//
//--------------------------------------------------------------------------------------------------

void routine_buildInvocationGraph_3F__21_ (const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                           GALGAS_string & outArgument_outGraphVizString,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGraphVizString.drop () ; // Release 'out' argument
  outArgument_outGraphVizString = GALGAS_string ("digraph G {\n") ;
  outArgument_outGraphVizString.plusAssign_operation(GALGAS_string ("  node [fontname=courier]\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 534)) ;
  cEnumerator_ipic_31__38_BlockList enumerator_18765 (constinArgument_inBlockList, EnumerationOrder::up) ;
  while (enumerator_18765.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (ComparisonKind::notEqual, enumerator_18765.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_block_ordering.galgas", 536)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        outArgument_outGraphVizString.plusAssign_operation(GALGAS_string ("  \"").add_operation (enumerator_18765.current_mBlock (HERE).readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 537)).add_operation (GALGAS_string ("\" [shape=rectangle]\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 537)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 537)) ;
      }
    }
    cEnumerator_ipic_31__38_SequentialInstructionList enumerator_18959 (enumerator_18765.current_mBlock (HERE).readProperty_mInstructionList (), EnumerationOrder::up) ;
    while (enumerator_18959.hasCurrentObject ()) {
      callExtensionMethod_buildInstructionInvocationGraph ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_18959.current_mInstruction (HERE).ptr (), enumerator_18765.current_mBlock (HERE).readProperty_mLabel (), outArgument_outGraphVizString, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 540)) ;
      enumerator_18959.gotoNextObject () ;
    }
    callExtensionMethod_buildTerminatorInvocationGraph ((cPtr_ipic_31__38_AbstractBlockTerminator *) enumerator_18765.current_mBlock (HERE).readProperty_mTerminator ().ptr (), enumerator_18765.current_mBlock (HERE).readProperty_mLabel (), outArgument_outGraphVizString, GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 542)) ;
    enumerator_18765.gotoNextObject () ;
  }
  outArgument_outGraphVizString.plusAssign_operation(GALGAS_string ("}\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 544)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Function 'blockDiscontinuityCount'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint function_blockDiscontinuityCount (const GALGAS_ipic_31__38_BlockList & constinArgument_inBlockList,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint result_outResult ; // Returned variable
  result_outResult = GALGAS_uint (uint32_t (0U)) ;
  cEnumerator_ipic_31__38_BlockList enumerator_19412 (constinArgument_inBlockList, EnumerationOrder::up) ;
  GALGAS_uint index_19407 (uint32_t (0)) ;
  while (enumerator_19412.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (ComparisonKind::equal, enumerator_19412.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_block_ordering.galgas", 552)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_string var_nextBlockLabel_19536 ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_bool (ComparisonKind::lowerThan, index_19407.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 554)).objectCompare (constinArgument_inBlockList.getter_count (SOURCE_FILE ("ipic18_block_ordering.galgas", 554)))).boolEnum () ;
          if (kBoolTrue == test_1) {
            var_nextBlockLabel_19536 = constinArgument_inBlockList.getter_mBlockAtIndex (index_19407.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 555)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 555)).readProperty_mLabel ().readProperty_string () ;
          }
        }
        if (kBoolFalse == test_1) {
          var_nextBlockLabel_19536 = GALGAS_string::makeEmptyString () ;
        }
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = callExtensionGetter_needToInsertJumpInstruction ((const cPtr_ipic_31__38_AbstractBlockTerminator *) enumerator_19412.current_mBlock (HERE).readProperty_mTerminator ().ptr (), var_nextBlockLabel_19536, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 559)).boolEnum () ;
          if (kBoolTrue == test_2) {
            result_outResult.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 560)) ;
          }
        }
      }
    }
    enumerator_19412.gotoNextObject () ;
    index_19407.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 551)) ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_blockDiscontinuityCount [2] = {
  & kTypeDescriptor_GALGAS_ipic_31__38_BlockList,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_blockDiscontinuityCount (Compiler * inCompiler,
                                                                        const cObjectArray & inEffectiveParameterArray,
                                                                        const GALGAS_location & /* inErrorLocation */
                                                                        COMMA_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_BlockList operand0 = GALGAS_ipic_31__38_BlockList::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                             inCompiler
                                                                                             COMMA_THERE) ;
  return function_blockDiscontinuityCount (operand0,
                                           inCompiler
                                           COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_blockDiscontinuityCount ("blockDiscontinuityCount",
                                                                         functionWithGenericHeader_blockDiscontinuityCount,
                                                                         & kTypeDescriptor_GALGAS_uint,
                                                                         1,
                                                                         functionArgs_blockDiscontinuityCount) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18OptimizeBlockOrdering?&&'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_OptimizeBlockOrdering_3F__26__26_ (const GALGAS_string constinArgument_inSourceFileName,
                                                            GALGAS_string & ioArgument_ioListFileContents,
                                                            GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (gOption_piccolo_5F_options_generateGraphvizFiles.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_string var_invocationGraph_20206 ;
      {
      routine_buildInvocationGraph_3F__21_ (ioArgument_ioGeneratedBlockList, var_invocationGraph_20206, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 573)) ;
      }
      GALGAS_bool joker_20320 ; // Joker input parameter
      var_invocationGraph_20206.method_writeToFileWhenDifferentContents (constinArgument_inSourceFileName.add_operation (GALGAS_string (".blockInvocation.dot"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 574)), joker_20320, inCompiler COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 574)) ;
    }
  }
  GALGAS_bool var_optimize_20347 = GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.readProperty_value ()).operator_or (GALGAS_string (gOption_piccolo_5F_options_optimizationFlags.readProperty_value ()).getter_containsCharacter (GALGAS_char (TO_UNICODE (66)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 578)) COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 577)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = var_optimize_20347.boolEnum () ;
    if (kBoolTrue == test_1) {
      {
      routine_buildOrderedGraph_26__3F__26_ (ioArgument_ioGeneratedBlockList, constinArgument_inSourceFileName, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_block_ordering.galgas", 580)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Function 'sortKey'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string function_sortKey (const GALGAS_clusterList & constinArgument_inClusterList,
                                Compiler * inCompiler
                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string result_outKey ; // Returned variable
  result_outKey = GALGAS_string::makeEmptyString () ;
  cEnumerator_clusterList enumerator_604 (constinArgument_inClusterList, EnumerationOrder::up) ;
  while (enumerator_604.hasCurrentObject ()) {
    result_outKey.plusAssign_operation(enumerator_604.current_mBlockList (HERE).getter_mBlockAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 23)).readProperty_mLabel ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 23)) ;
    if (enumerator_604.hasNextObject ()) {
      result_outKey.plusAssign_operation(GALGAS_string ("."), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 25)) ;
    }
    enumerator_604.gotoNextObject () ;
  }
//---
  return result_outKey ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_sortKey [2] = {
  & kTypeDescriptor_GALGAS_clusterList,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_sortKey (Compiler * inCompiler,
                                                        const cObjectArray & inEffectiveParameterArray,
                                                        const GALGAS_location & /* inErrorLocation */
                                                        COMMA_LOCATION_ARGS) {
  const GALGAS_clusterList operand0 = GALGAS_clusterList::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                         inCompiler
                                                                         COMMA_THERE) ;
  return function_sortKey (operand0,
                           inCompiler
                           COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_sortKey ("sortKey",
                                                         functionWithGenericHeader_sortKey,
                                                         & kTypeDescriptor_GALGAS_string,
                                                         1,
                                                         functionArgs_sortKey) ;

//--------------------------------------------------------------------------------------------------
//
//Routine 'perform_cluster_ordering?&&'
//
//--------------------------------------------------------------------------------------------------

void routine_perform_5F_cluster_5F_ordering_3F__26__26_ (const GALGAS_clusterList constinArgument_inInitialClusterList,
                                                         GALGAS_ipic_31__38_BlockList & ioArgument_ioBlockList,
                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_optimize_964 = GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.readProperty_value ()).operator_and (GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.readProperty_value ()).operator_or (GALGAS_string (gOption_piccolo_5F_options_optimizationFlags.readProperty_value ()).getter_containsCharacter (GALGAS_char (TO_UNICODE (66)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 36)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 36)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 35)).operator_and (GALGAS_bool (gOption_piccolo_5F_options_doNotReorderCluster.readProperty_value ()).operator_not (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 37)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 36)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = var_optimize_964.operator_not (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 38)).boolEnum () ;
    if (kBoolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Option '--").add_operation (GALGAS_string (gOption_piccolo_5F_options_doNotReorderCluster.readProperty_string ()), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 39)).add_operation (GALGAS_string ("': this optimization is not performed.n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 39)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 39)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_uint var_clusterCount_1407 = constinArgument_inInitialClusterList.getter_count (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 41)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 42)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 42)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("CLUSTER ORDERING OPTIMIZATION").getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (117U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 43)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 43)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 43)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 44)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 44)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 44)) ;
    GALGAS_string temp_1 ;
    const enumGalgasBool test_2 = GALGAS_bool (ComparisonKind::greaterThan, var_clusterCount_1407.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
    if (kBoolTrue == test_2) {
      temp_1 = GALGAS_string ("s") ;
    }else if (kBoolFalse == test_2) {
      temp_1 = GALGAS_string::makeEmptyString () ;
    }
    GALGAS_string var_s_1733 = GALGAS_string ("Cluster ordering optimization (").add_operation (var_clusterCount_1407.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 45)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 45)).add_operation (GALGAS_string (" cluster"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 45)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 45)).add_operation (GALGAS_string ("):\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 45)) ;
    ioArgument_ioListFileContents.plusAssign_operation(var_s_1733.add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 46)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 46)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 48)).boolEnum () ;
      if (kBoolTrue == test_3) {
        {
        routine_print_3F_ (var_s_1733, inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 49)) ;
        }
      }
    }
    GALGAS_clusterList var_clusterList_2019 = constinArgument_inInitialClusterList ;
    GALGAS_neededConversionForClusterOrder var_neededConversionForClusterOrder_2062 = GALGAS_neededConversionForClusterOrder::class_func_emptyMap (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 53)) ;
    GALGAS_bool var_continue_2146 = GALGAS_bool (true) ;
    GALGAS_uint var_pass_2176 = GALGAS_uint (uint32_t (0U)) ;
    if (var_clusterList_2019.getter_count (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 56)).multiply_operation (var_clusterList_2019.getter_count (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 56)).isValid ()) {
      uint32_t variant_2189 = var_clusterList_2019.getter_count (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 56)).multiply_operation (var_clusterList_2019.getter_count (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 56)).uintValue () ;
      bool loop_2189 = true ;
      while (loop_2189) {
        loop_2189 = var_continue_2146.isValid () ;
        if (loop_2189) {
          loop_2189 = var_continue_2146.boolValue () ;
        }
        if (loop_2189 && (0 == variant_2189)) {
          loop_2189 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 56)) ;
        }
        if (loop_2189) {
          variant_2189 -- ;
          var_pass_2176.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 58)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Pass ").add_operation (var_pass_2176.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 59)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 59)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 59)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 59)) ;
          GALGAS_ipic_31__38_BlockList var_workingBlockList_2388 = GALGAS_ipic_31__38_BlockList::class_func_emptyList (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 61)) ;
          GALGAS_symbolTableForClusterOrdering var_symbolTable_2437 = GALGAS_symbolTableForClusterOrdering::class_func_emptyMap (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 62)) ;
          cEnumerator_clusterList enumerator_2496 (var_clusterList_2019, EnumerationOrder::up) ;
          GALGAS_uint index_2491 (uint32_t (0)) ;
          while (enumerator_2496.hasCurrentObject ()) {
            var_workingBlockList_2388.plusAssign_operation(enumerator_2496.current_mBlockList (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 64)) ;
            cEnumerator_ipic_31__38_BlockList enumerator_2593 (enumerator_2496.current_mBlockList (HERE), EnumerationOrder::up) ;
            while (enumerator_2593.hasCurrentObject ()) {
              {
              var_symbolTable_2437.setter_insertKey (enumerator_2593.current_mBlock (HERE).readProperty_mLabel (), index_2491, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 66)) ;
              }
              enumerator_2593.gotoNextObject () ;
            }
            enumerator_2496.gotoNextObject () ;
            index_2491.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 63)) ;
          }
          GALGAS_uint var_insertionIdx_2772 = var_workingBlockList_2388.getter_count (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 70)) ;
          cEnumerator_ipic_31__38_BlockList enumerator_2825 (ioArgument_ioBlockList, EnumerationOrder::down) ;
          bool bool_4 = var_continue_2146.isValidAndTrue () ;
          if (enumerator_2825.hasCurrentObject () && bool_4) {
            while (enumerator_2825.hasCurrentObject () && bool_4) {
              var_continue_2146 = GALGAS_bool (ComparisonKind::notEqual, enumerator_2825.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 72)))) ;
              enumGalgasBool test_5 = kBoolTrue ;
              if (kBoolTrue == test_5) {
                test_5 = var_continue_2146.boolEnum () ;
                if (kBoolTrue == test_5) {
                  {
                  var_symbolTable_2437.setter_insertKey (enumerator_2825.current_mBlock (HERE).readProperty_mLabel (), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 74)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 74)) ;
                  }
                  {
                  var_workingBlockList_2388.setter_insertAtIndex (enumerator_2825.current_mBlock (HERE), var_insertionIdx_2772, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 75)) ;
                  }
                }
              }
              enumerator_2825.gotoNextObject () ;
              if (enumerator_2825.hasCurrentObject ()) {
                bool_4 = var_continue_2146.isValidAndTrue () ;
              }
            }
          }
          GALGAS_branchOverflowMap var_overflowMap_3270 ;
          {
          routine_ipic_31__38_RelativeBranchOverflow_3F__3F__21_ (var_workingBlockList_2388, ioArgument_ioBlockList, var_overflowMap_3270, inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 79)) ;
          }
          GALGAS_uint var_overflowCount_3306 = GALGAS_uint (uint32_t (0U)) ;
          cEnumerator_branchOverflowMap enumerator_3339 (var_overflowMap_3270, EnumerationOrder::up) ;
          while (enumerator_3339.hasCurrentObject ()) {
            cEnumerator_stringlist enumerator_3378 (enumerator_3339.current_mList (HERE), EnumerationOrder::up) ;
            while (enumerator_3378.hasCurrentObject ()) {
              var_overflowCount_3306.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 87)) ;
              GALGAS_uint var_sourceCluster_3487 ;
              var_symbolTable_2437.method_searchKey (enumerator_3339.current_key (HERE).getter_nowhere (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 88)), var_sourceCluster_3487, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 88)) ;
              GALGAS_uint var_targetCluster_3564 ;
              var_symbolTable_2437.method_searchKey (enumerator_3378.current_mValue (HERE).getter_nowhere (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 89)), var_targetCluster_3564, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 89)) ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (enumerator_3339.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)).add_operation (GALGAS_string (" (cluster #"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)).add_operation (var_sourceCluster_3487.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)).add_operation (GALGAS_string (") --> "), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)).add_operation (enumerator_3378.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)).add_operation (GALGAS_string (" (cluster #"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)).add_operation (var_targetCluster_3564.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)).add_operation (GALGAS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 90)) ;
              enumerator_3378.gotoNextObject () ;
            }
            enumerator_3339.gotoNextObject () ;
          }
          {
          var_neededConversionForClusterOrder_2062.setter_insertKey (function_sortKey (var_clusterList_2019, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 94)).getter_nowhere (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 94)), var_overflowCount_3306, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 93)) ;
          }
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = GALGAS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 97)).boolEnum () ;
            if (kBoolTrue == test_6) {
              GALGAS_string var_s_3921 = GALGAS_string ("  Pass ").add_operation (var_pass_2176.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 98)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 98)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 98)) ;
              enumGalgasBool test_7 = kBoolTrue ;
              if (kBoolTrue == test_7) {
                test_7 = GALGAS_bool (ComparisonKind::equal, var_overflowCount_3306.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
                if (kBoolTrue == test_7) {
                  var_s_3921.plusAssign_operation(GALGAS_string ("no branch overflow"), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 100)) ;
                }
              }
              if (kBoolFalse == test_7) {
                enumGalgasBool test_8 = kBoolTrue ;
                if (kBoolTrue == test_8) {
                  test_8 = GALGAS_bool (ComparisonKind::equal, var_overflowCount_3306.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
                  if (kBoolTrue == test_8) {
                    var_s_3921.plusAssign_operation(GALGAS_string ("1 branch overflow"), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 102)) ;
                  }
                }
                if (kBoolFalse == test_8) {
                  var_s_3921.plusAssign_operation(var_overflowCount_3306.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 104)).add_operation (GALGAS_string (" branch overflows"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 104)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 104)) ;
                }
              }
              {
              routine_print_3F_ (var_s_3921, inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 106)) ;
              }
            }
          }
          GALGAS_bool var_correctionLoop_4243 = GALGAS_bool (true) ;
          cEnumerator_branchOverflowMap enumerator_4280 (var_overflowMap_3270, EnumerationOrder::up) ;
          bool bool_9 = var_correctionLoop_4243.isValidAndTrue () ;
          if (enumerator_4280.hasCurrentObject () && bool_9) {
            while (enumerator_4280.hasCurrentObject () && bool_9) {
              cEnumerator_stringlist enumerator_4340 (enumerator_4280.current_mList (HERE), EnumerationOrder::up) ;
              bool bool_10 = var_correctionLoop_4243.isValidAndTrue () ;
              if (enumerator_4340.hasCurrentObject () && bool_10) {
                while (enumerator_4340.hasCurrentObject () && bool_10) {
                  GALGAS_uint var_targetCluster_4444 ;
                  var_symbolTable_2437.method_searchKey (enumerator_4340.current_mValue (HERE).getter_nowhere (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 112)), var_targetCluster_4444, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 112)) ;
                  enumGalgasBool test_11 = kBoolTrue ;
                  if (kBoolTrue == test_11) {
                    test_11 = GALGAS_bool (ComparisonKind::notEqual, var_targetCluster_4444.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 113)))).boolEnum () ;
                    if (kBoolTrue == test_11) {
                      GALGAS_uint var_sourceCluster_4566 ;
                      var_symbolTable_2437.method_searchKey (enumerator_4280.current_key (HERE).getter_nowhere (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 114)), var_sourceCluster_4566, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 114)) ;
                      enumGalgasBool test_12 = kBoolTrue ;
                      if (kBoolTrue == test_12) {
                        test_12 = GALGAS_bool (ComparisonKind::equal, var_sourceCluster_4566.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 115)).objectCompare (var_targetCluster_4444)).boolEnum () ;
                        if (kBoolTrue == test_12) {
                          var_correctionLoop_4243 = GALGAS_bool (false) ;
                          var_continue_2146 = GALGAS_bool (true) ;
                          GALGAS_ipic_31__38_BlockList var_last_4770 ;
                          {
                          var_clusterList_2019.setter_removeAtIndex (var_last_4770, var_targetCluster_4444, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 118)) ;
                          }
                          GALGAS_ipic_31__38_BlockList var_first_4857 ;
                          {
                          var_clusterList_2019.setter_removeAtIndex (var_first_4857, var_sourceCluster_4566, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 119)) ;
                          }
                          {
                          var_clusterList_2019.setter_insertAtIndex (var_first_4857.add_operation (var_last_4770, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 120)), var_sourceCluster_4566, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 120)) ;
                          }
                          GALGAS_string var_m_4979 = GALGAS_string ("merge #").add_operation (var_targetCluster_4444.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 121)).add_operation (GALGAS_string (" into #"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 121)).add_operation (var_sourceCluster_4566.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 121)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 121)) ;
                          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  --> ").add_operation (var_m_4979, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 122)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 122)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 122)) ;
                          enumGalgasBool test_13 = kBoolTrue ;
                          if (kBoolTrue == test_13) {
                            test_13 = GALGAS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 123)).boolEnum () ;
                            if (kBoolTrue == test_13) {
                              {
                              routine_print_3F_ (GALGAS_string (" -> ").add_operation (var_m_4979, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 124)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 124)) ;
                              }
                            }
                          }
                        }
                      }
                      if (kBoolFalse == test_12) {
                        enumGalgasBool test_14 = kBoolTrue ;
                        if (kBoolTrue == test_14) {
                          test_14 = GALGAS_bool (ComparisonKind::equal, var_sourceCluster_4566.objectCompare (var_targetCluster_4444.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 126)))).boolEnum () ;
                          if (kBoolTrue == test_14) {
                            var_correctionLoop_4243 = GALGAS_bool (false) ;
                            var_continue_2146 = GALGAS_bool (true) ;
                            GALGAS_ipic_31__38_BlockList var_last_5394 ;
                            {
                            var_clusterList_2019.setter_removeAtIndex (var_last_5394, var_sourceCluster_4566, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 129)) ;
                            }
                            GALGAS_ipic_31__38_BlockList var_first_5481 ;
                            {
                            var_clusterList_2019.setter_removeAtIndex (var_first_5481, var_targetCluster_4444, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 130)) ;
                            }
                            {
                            var_clusterList_2019.setter_insertAtIndex (var_first_5481.add_operation (var_last_5394, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 131)), var_targetCluster_4444, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 131)) ;
                            }
                            GALGAS_string var_m_5603 = GALGAS_string ("merge #").add_operation (var_sourceCluster_4566.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 132)).add_operation (GALGAS_string (" into #"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 132)).add_operation (var_targetCluster_4444.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 132)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 132)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 132)) ;
                            ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  --> ").add_operation (var_m_5603, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 133)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 133)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 133)) ;
                            enumGalgasBool test_15 = kBoolTrue ;
                            if (kBoolTrue == test_15) {
                              test_15 = GALGAS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 134)).boolEnum () ;
                              if (kBoolTrue == test_15) {
                                {
                                routine_print_3F_ (GALGAS_string (" -> ").add_operation (var_m_5603, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 135)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 135)) ;
                                }
                              }
                            }
                          }
                        }
                        if (kBoolFalse == test_14) {
                          enumGalgasBool test_16 = kBoolTrue ;
                          if (kBoolTrue == test_16) {
                            test_16 = GALGAS_bool (ComparisonKind::lowerThan, var_sourceCluster_4566.objectCompare (var_targetCluster_4444)).boolEnum () ;
                            if (kBoolTrue == test_16) {
                              GALGAS_clusterList var_candidate_5910 = var_clusterList_2019 ;
                              GALGAS_ipic_31__38_BlockList var_b_5997 ;
                              {
                              var_candidate_5910.setter_removeAtIndex (var_b_5997, var_targetCluster_4444, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 139)) ;
                              }
                              {
                              var_candidate_5910.setter_insertAtIndex (var_b_5997, var_targetCluster_4444.add_operation (var_sourceCluster_4566, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 140)).divide_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 140)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 140)) ;
                              }
                              enumGalgasBool test_17 = kBoolTrue ;
                              if (kBoolTrue == test_17) {
                                test_17 = var_neededConversionForClusterOrder_2062.getter_hasKey (function_sortKey (var_candidate_5910, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 141)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 141)).operator_not (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 141)).boolEnum () ;
                                if (kBoolTrue == test_17) {
                                  var_clusterList_2019 = var_candidate_5910 ;
                                  var_correctionLoop_4243 = GALGAS_bool (false) ;
                                  var_continue_2146 = GALGAS_bool (true) ;
                                  GALGAS_string var_m_6327 = GALGAS_string ("roll up [#").add_operation (var_targetCluster_4444.add_operation (var_sourceCluster_4566, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 145)).divide_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 145)).getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 145)).add_operation (GALGAS_string (", #"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 145)).add_operation (var_targetCluster_4444.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 145)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 145)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 145)) ;
                                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  --> ").add_operation (var_m_6327, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 146)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 146)) ;
                                  enumGalgasBool test_18 = kBoolTrue ;
                                  if (kBoolTrue == test_18) {
                                    test_18 = GALGAS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 147)).boolEnum () ;
                                    if (kBoolTrue == test_18) {
                                      {
                                      routine_print_3F_ (GALGAS_string (" -> ").add_operation (var_m_6327, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 148)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 148)) ;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                          if (kBoolFalse == test_16) {
                            enumGalgasBool test_19 = kBoolTrue ;
                            if (kBoolTrue == test_19) {
                              test_19 = GALGAS_bool (ComparisonKind::greaterThan, var_sourceCluster_4566.objectCompare (var_targetCluster_4444)).boolEnum () ;
                              if (kBoolTrue == test_19) {
                                GALGAS_clusterList var_candidate_6683 = var_clusterList_2019 ;
                                GALGAS_ipic_31__38_BlockList var_b_6770 ;
                                {
                                var_candidate_6683.setter_removeAtIndex (var_b_6770, var_sourceCluster_4566, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 153)) ;
                                }
                                {
                                var_candidate_6683.setter_insertAtIndex (var_b_6770, var_targetCluster_4444.add_operation (var_sourceCluster_4566, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 154)).divide_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 154)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 154)) ;
                                }
                                enumGalgasBool test_20 = kBoolTrue ;
                                if (kBoolTrue == test_20) {
                                  test_20 = var_neededConversionForClusterOrder_2062.getter_hasKey (function_sortKey (var_candidate_6683, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 155)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 155)).operator_not (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 155)).boolEnum () ;
                                  if (kBoolTrue == test_20) {
                                    var_clusterList_2019 = var_candidate_6683 ;
                                    var_correctionLoop_4243 = GALGAS_bool (false) ;
                                    var_continue_2146 = GALGAS_bool (true) ;
                                    GALGAS_string var_m_7100 = GALGAS_string ("roll up [#").add_operation (var_targetCluster_4444.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 159)).add_operation (GALGAS_string (", #"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 159)).add_operation (var_targetCluster_4444.add_operation (var_sourceCluster_4566, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 159)).divide_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 159)).getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 159)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 159)).add_operation (GALGAS_string ("]"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 159)) ;
                                    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  --> ").add_operation (var_m_7100, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 160)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 160)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 160)) ;
                                    enumGalgasBool test_21 = kBoolTrue ;
                                    if (kBoolTrue == test_21) {
                                      test_21 = GALGAS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 161)).boolEnum () ;
                                      if (kBoolTrue == test_21) {
                                        {
                                        routine_print_3F_ (GALGAS_string (" -> ").add_operation (var_m_7100, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 162)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 162)) ;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  enumerator_4340.gotoNextObject () ;
                  if (enumerator_4340.hasCurrentObject ()) {
                    bool_10 = var_correctionLoop_4243.isValidAndTrue () ;
                  }
                }
              }
              enumerator_4280.gotoNextObject () ;
              if (enumerator_4280.hasCurrentObject ()) {
                bool_9 = var_correctionLoop_4243.isValidAndTrue () ;
              }
            }
          }
          enumGalgasBool test_22 = kBoolTrue ;
          if (kBoolTrue == test_22) {
            test_22 = GALGAS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 169)).boolEnum () ;
            if (kBoolTrue == test_22) {
              {
              routine_print_3F_ (GALGAS_string (".\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 170)) ;
              }
            }
          }
        }
      }
    }
    enumGalgasBool test_23 = kBoolTrue ;
    if (kBoolTrue == test_23) {
      test_23 = GALGAS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 173)).boolEnum () ;
      if (kBoolTrue == test_23) {
        {
        routine_print_3F_ (GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 174)) ;
        }
      }
    }
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 176)) ;
    GALGAS_ipic_31__38_BlockList var_newBlockList_7682 = GALGAS_ipic_31__38_BlockList::class_func_emptyList (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 178)) ;
    var_continue_2146 = GALGAS_bool (true) ;
    cEnumerator_ipic_31__38_BlockList enumerator_7789 (ioArgument_ioBlockList, EnumerationOrder::up) ;
    bool bool_24 = var_continue_2146.isValidAndTrue () ;
    if (enumerator_7789.hasCurrentObject () && bool_24) {
      while (enumerator_7789.hasCurrentObject () && bool_24) {
        var_continue_2146 = GALGAS_bool (ComparisonKind::notEqual, enumerator_7789.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 182)))) ;
        enumGalgasBool test_25 = kBoolTrue ;
        if (kBoolTrue == test_25) {
          test_25 = var_continue_2146.boolEnum () ;
          if (kBoolTrue == test_25) {
            var_newBlockList_7682.addAssign_operation (enumerator_7789.current_mBlock (HERE)  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 184)) ;
          }
        }
        enumerator_7789.gotoNextObject () ;
        if (enumerator_7789.hasCurrentObject ()) {
          bool_24 = var_continue_2146.isValidAndTrue () ;
        }
      }
    }
    cEnumerator_clusterList enumerator_7990 (var_clusterList_2019, EnumerationOrder::up) ;
    while (enumerator_7990.hasCurrentObject ()) {
      var_newBlockList_7682.plusAssign_operation(enumerator_7990.current_mBlockList (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 189)) ;
      enumerator_7990.gotoNextObject () ;
    }
    GALGAS_uint var_insertionIndex_8119 = var_newBlockList_7682.getter_count (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 192)) ;
    var_continue_2146 = GALGAS_bool (true) ;
    cEnumerator_ipic_31__38_BlockList enumerator_8188 (ioArgument_ioBlockList, EnumerationOrder::down) ;
    bool bool_26 = var_continue_2146.isValidAndTrue () ;
    if (enumerator_8188.hasCurrentObject () && bool_26) {
      while (enumerator_8188.hasCurrentObject () && bool_26) {
        var_continue_2146 = GALGAS_bool (ComparisonKind::notEqual, enumerator_8188.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_cluster_ordering.galgas", 195)))) ;
        enumGalgasBool test_27 = kBoolTrue ;
        if (kBoolTrue == test_27) {
          test_27 = var_continue_2146.boolEnum () ;
          if (kBoolTrue == test_27) {
            {
            var_newBlockList_7682.setter_insertAtIndex (enumerator_8188.current_mBlock (HERE), var_insertionIndex_8119, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas", 197)) ;
            }
          }
        }
        enumerator_8188.gotoNextObject () ;
        if (enumerator_8188.hasCurrentObject ()) {
          bool_26 = var_continue_2146.isValidAndTrue () ;
        }
      }
    }
    ioArgument_ioBlockList = var_newBlockList_7682 ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'performRelativesResolution?&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_performRelativesResolution_3F__26__26__26_ (const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                         GALGAS_ipic_31__38_BlockList & ioArgument_ioBlockList,
                                                         GALGAS_uint & ioArgument_ioConversionCount,
                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38_BlockList var_modifiedBlockList_1594 = GALGAS_ipic_31__38_BlockList::class_func_emptyList (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 56)) ;
  GALGAS_uint var_blockStartAddress_1646 = GALGAS_uint (uint32_t (0U)) ;
  cEnumerator_ipic_31__38_BlockList enumerator_1675 (ioArgument_ioBlockList, EnumerationOrder::up) ;
  GALGAS_uint index_1670 (uint32_t (0)) ;
  while (enumerator_1675.hasCurrentObject ()) {
    GALGAS_string var_nextBlockLabel_1730 ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (ComparisonKind::lowerThan, index_1670.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 60)).objectCompare (ioArgument_ioBlockList.getter_count (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 60)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_nextBlockLabel_1730 = ioArgument_ioBlockList.getter_mBlockAtIndex (index_1670.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 61)).readProperty_mLabel ().readProperty_string () ;
      }
    }
    if (kBoolFalse == test_0) {
      var_nextBlockLabel_1730 = GALGAS_string::makeEmptyString () ;
    }
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (ComparisonKind::notEqual, enumerator_1675.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 65)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_blockStartAddress_1646 = enumerator_1675.current_mBlock (HERE).readProperty_mAddress () ;
      }
    }
    GALGAS_ipic_31__38_Block var_modifiedBlock_2209 ;
    extensionMethod_performRelativesResolution (enumerator_1675.current_mBlock (HERE), constinArgument_inSymbolTable, var_nextBlockLabel_1730, var_blockStartAddress_1646, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_modifiedBlock_2209, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 68)) ;
    var_modifiedBlockList_1594.addAssign_operation (var_modifiedBlock_2209  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 76)) ;
    GALGAS_uint var_blockSize_2283 = extensionGetter_blockSize (enumerator_1675.current_mBlock (HERE), var_nextBlockLabel_1730, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 77)) ;
    var_blockStartAddress_1646 = var_blockStartAddress_1646.add_operation (var_blockSize_2283, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 78)) ;
    enumerator_1675.gotoNextObject () ;
    index_1670.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 58)) ;
  }
  ioArgument_ioBlockList = var_modifiedBlockList_1594 ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'computeLabelAbsoluteAddressMap??!!'
//
//--------------------------------------------------------------------------------------------------

void routine_computeLabelAbsoluteAddressMap_3F__3F__21__21_ (const GALGAS_ipic_31__38_BlockList constinArgument_inGeneratedBlockList,
                                                             const GALGAS_ipic_31__38_BlockList constinArgument_inInitialBlockList,
                                                             GALGAS_symbolTableForRelativesResolution & outArgument_outSymbolTable,
                                                             GALGAS_uint & outArgument_outFreeAddress,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outSymbolTable.drop () ; // Release 'out' argument
  outArgument_outFreeAddress.drop () ; // Release 'out' argument
  outArgument_outSymbolTable = GALGAS_symbolTableForRelativesResolution::class_func_emptyMap (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 105)) ;
  outArgument_outFreeAddress = GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 106)) ;
  GALGAS_uint var_blockStartAddress_3333 = GALGAS_uint (uint32_t (0U)) ;
  cEnumerator_ipic_31__38_BlockList enumerator_3362 (constinArgument_inGeneratedBlockList, EnumerationOrder::up) ;
  GALGAS_uint index_3357 (uint32_t (0)) ;
  while (enumerator_3362.hasCurrentObject ()) {
    GALGAS_string var_nextBlockLabel_3426 ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (ComparisonKind::lowerThan, index_3357.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 111)).objectCompare (constinArgument_inGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 111)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_nextBlockLabel_3426 = constinArgument_inGeneratedBlockList.getter_mBlockAtIndex (index_3357.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 112)).readProperty_mLabel ().readProperty_string () ;
      }
    }
    if (kBoolFalse == test_0) {
      var_nextBlockLabel_3426 = GALGAS_string::makeEmptyString () ;
    }
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (ComparisonKind::notEqual, enumerator_3362.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 116)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_blockStartAddress_3333 = enumerator_3362.current_mBlock (HERE).readProperty_mAddress () ;
      }
    }
    {
    outArgument_outSymbolTable.setter_insertKey (enumerator_3362.current_mBlock (HERE).readProperty_mLabel (), var_blockStartAddress_3333, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 119)) ;
    }
    GALGAS_uint var_blockSize_3820 = extensionGetter_blockSize (enumerator_3362.current_mBlock (HERE), var_nextBlockLabel_3426, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 120)) ;
    var_blockStartAddress_3333 = var_blockStartAddress_3333.add_operation (var_blockSize_3820, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 121)) ;
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (ComparisonKind::equal, enumerator_3362.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 122)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        outArgument_outFreeAddress = var_blockStartAddress_3333 ;
      }
    }
    enumerator_3362.gotoNextObject () ;
    index_3357.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 109)) ;
  }
  cEnumerator_ipic_31__38_BlockList enumerator_4050 (constinArgument_inInitialBlockList, EnumerationOrder::up) ;
  while (enumerator_4050.hasCurrentObject ()) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (ComparisonKind::notEqual, enumerator_4050.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 128)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = outArgument_outSymbolTable.getter_hasKey (enumerator_4050.current_mBlock (HERE).readProperty_mLabel ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 129)).operator_not (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 129)).boolEnum () ;
          if (kBoolTrue == test_4) {
            {
            outArgument_outSymbolTable.setter_insertKey (enumerator_4050.current_mBlock (HERE).readProperty_mLabel (), enumerator_4050.current_mBlock (HERE).readProperty_mAddress (), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 130)) ;
            }
          }
        }
      }
    }
    enumerator_4050.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18RelativesResolution&&'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_RelativesResolution_26__26_ (GALGAS_string & ioArgument_ioListFileContents,
                                                      GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 142)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_print_3F_ (GALGAS_string ("Relative branch conversion to absolute:\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 143)) ;
      }
    }
  }
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 145)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 145)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("RELATIVES RESOLUTION").getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (117U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 146)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 146)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 147)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 147)), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 147)) ;
  GALGAS_bool var_resolutionDone_4862 = GALGAS_bool (false) ;
  GALGAS_uint var_pass_4897 = GALGAS_uint (uint32_t (0U)) ;
  if (ioArgument_ioGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 151)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 151)).isValid ()) {
    uint32_t variant_4908 = ioArgument_ioGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 151)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 151)).uintValue () ;
    bool loop_4908 = true ;
    while (loop_4908) {
      loop_4908 = var_resolutionDone_4862.operator_not (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 152)).operator_and (GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 152)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 152)).isValid () ;
      if (loop_4908) {
        loop_4908 = var_resolutionDone_4862.operator_not (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 152)).operator_and (GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 152)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 152)).boolValue () ;
      }
      if (loop_4908 && (0 == variant_4908)) {
        loop_4908 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 151)) ;
      }
      if (loop_4908) {
        variant_4908 -- ;
        var_pass_4897.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 153)) ;
        GALGAS_symbolTableForRelativesResolution var_symbolTable_5160 ;
        {
        GALGAS_uint joker_5178 ; // Joker input parameter
        routine_computeLabelAbsoluteAddressMap_3F__3F__21__21_ (ioArgument_ioGeneratedBlockList, GALGAS_ipic_31__38_BlockList::class_func_emptyList (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 156)), var_symbolTable_5160, joker_5178, inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 154)) ;
        }
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\nPass ").add_operation (var_pass_4897.getter_string (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 160)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 160)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 160)), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 160)) ;
        GALGAS_uint var_conversionCount_5252 = GALGAS_uint (uint32_t (0U)) ;
        {
        routine_performRelativesResolution_3F__26__26__26_ (var_symbolTable_5160, ioArgument_ioGeneratedBlockList, var_conversionCount_5252, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 162)) ;
        }
        var_resolutionDone_4862 = GALGAS_bool (ComparisonKind::equal, var_conversionCount_5252.objectCompare (GALGAS_uint (uint32_t (0U)))) ;
        enumGalgasBool test_1 = kBoolTrue ;
        if (kBoolTrue == test_1) {
          test_1 = GALGAS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 169)).boolEnum () ;
          if (kBoolTrue == test_1) {
            GALGAS_string var_s_5509 = GALGAS_string ("  Pass ").add_operation (var_pass_4897.getter_string (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 170)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 170)).add_operation (GALGAS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 170)) ;
            enumGalgasBool test_2 = kBoolTrue ;
            if (kBoolTrue == test_2) {
              test_2 = GALGAS_bool (ComparisonKind::equal, var_conversionCount_5252.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
              if (kBoolTrue == test_2) {
                var_s_5509.plusAssign_operation(GALGAS_string ("none."), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 172)) ;
              }
            }
            if (kBoolFalse == test_2) {
              enumGalgasBool test_3 = kBoolTrue ;
              if (kBoolTrue == test_3) {
                test_3 = GALGAS_bool (ComparisonKind::equal, var_conversionCount_5252.objectCompare (GALGAS_uint (uint32_t (1U)))).boolEnum () ;
                if (kBoolTrue == test_3) {
                  var_s_5509.plusAssign_operation(GALGAS_string ("1 conversion"), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 174)) ;
                }
              }
              if (kBoolFalse == test_3) {
                var_s_5509.plusAssign_operation(var_conversionCount_5252.getter_string (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 176)).add_operation (GALGAS_string (" conversions"), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 176)), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 176)) ;
              }
            }
            {
            routine_print_3F_ (var_s_5509.add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 178)), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 178)) ;
            }
          }
        }
      }
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 181)).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  No conversion.\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 182)) ;
      {
      routine_print_3F_ (GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 183)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18RelativeBranchOverflow??!'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_RelativeBranchOverflow_3F__3F__21_ (const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                             const GALGAS_ipic_31__38_BlockList constinArgument_inInitialBlockList,
                                                             GALGAS_branchOverflowMap & outArgument_outOverflowMap,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOverflowMap.drop () ; // Release 'out' argument
  GALGAS_symbolTableForRelativesResolution var_symbolTable_7205 ;
  {
  GALGAS_uint joker_7221 ; // Joker input parameter
  routine_computeLabelAbsoluteAddressMap_3F__3F__21__21_ (constinArgument_inBlockList, constinArgument_inInitialBlockList, var_symbolTable_7205, joker_7221, inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 226)) ;
  }
  outArgument_outOverflowMap = GALGAS_branchOverflowMap::class_func_emptyMap (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 233)) ;
  GALGAS_uint var_blockStartAddress_7287 = GALGAS_uint (uint32_t (0U)) ;
  cEnumerator_ipic_31__38_BlockList enumerator_7316 (constinArgument_inBlockList, EnumerationOrder::up) ;
  GALGAS_uint index_7311 (uint32_t (0)) ;
  while (enumerator_7316.hasCurrentObject ()) {
    GALGAS_string var_nextBlockLabel_7371 ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (ComparisonKind::lowerThan, index_7311.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 237)).objectCompare (constinArgument_inBlockList.getter_count (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 237)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_nextBlockLabel_7371 = constinArgument_inBlockList.getter_mBlockAtIndex (index_7311.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 238)), inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 238)).readProperty_mLabel ().readProperty_string () ;
      }
    }
    if (kBoolFalse == test_0) {
      var_nextBlockLabel_7371 = GALGAS_string::makeEmptyString () ;
    }
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (ComparisonKind::notEqual, enumerator_7316.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_relatives_resolution.galgas", 242)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_blockStartAddress_7287 = enumerator_7316.current_mBlock (HERE).readProperty_mAddress () ;
      }
    }
    extensionMethod_relativeBranchOverflow (enumerator_7316.current_mBlock (HERE), var_symbolTable_7205, var_nextBlockLabel_7371, var_blockStartAddress_7287, outArgument_outOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 245)) ;
    GALGAS_uint var_blockSize_7810 = extensionGetter_blockSize (enumerator_7316.current_mBlock (HERE), var_nextBlockLabel_7371, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 251)) ;
    var_blockStartAddress_7287 = var_blockStartAddress_7287.add_operation (var_blockSize_7810, inCompiler COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 252)) ;
    enumerator_7316.gotoNextObject () ;
    index_7311.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_relatives_resolution.galgas", 235)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateLineWithCode?????&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateLineWithCode_3F__3F__3F__3F__3F__26_ (const GALGAS_uint constinArgument_inAddress,
                                                           const GALGAS_codeList constinArgument_inCode,
                                                           const GALGAS_stringlist constinArgument_inIpicText,
                                                           const GALGAS_uint constinArgument_inMin,
                                                           const GALGAS_uint constinArgument_inMax,
                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringlist var_ipicText_1391 = constinArgument_inIpicText ;
  if (constinArgument_inCode.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas", 41)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 41)).isValid ()) {
    uint32_t variant_1415 = constinArgument_inCode.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas", 41)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 41)).uintValue () ;
    bool loop_1415 = true ;
    while (loop_1415) {
      loop_1415 = GALGAS_bool (ComparisonKind::lowerThan, var_ipicText_1391.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas", 42)).objectCompare (constinArgument_inCode.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas", 42)))).isValid () ;
      if (loop_1415) {
        loop_1415 = GALGAS_bool (ComparisonKind::lowerThan, var_ipicText_1391.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas", 42)).objectCompare (constinArgument_inCode.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas", 42)))).boolValue () ;
      }
      if (loop_1415 && (0 == variant_1415)) {
        loop_1415 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_code_generation.galgas", 41)) ;
      }
      if (loop_1415) {
        variant_1415 -- ;
        var_ipicText_1391.addAssign_operation (GALGAS_string::makeEmptyString ()  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 43)) ;
      }
    }
  }
  GALGAS_uint var_address_1529 = constinArgument_inAddress ;
  GALGAS_bool var_first_1555 = GALGAS_bool (true) ;
  cEnumerator_stringlist enumerator_1575 (var_ipicText_1391, EnumerationOrder::up) ;
  cEnumerator_codeList enumerator_1612 (constinArgument_inCode, EnumerationOrder::up) ;
  while (enumerator_1575.hasCurrentObject () && enumerator_1612.hasCurrentObject ()) {
    ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_x_36_string (var_address_1529, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 49)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 49)) ;
    var_address_1529 = var_address_1529.add_operation (GALGAS_uint (uint32_t (2U)).multiply_operation (enumerator_1612.current_mBinaryCode (HERE).getter_count (SOURCE_FILE ("ipic18_code_generation.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 50)) ;
    GALGAS_string var_s_1748 = GALGAS_string (" ") ;
    cEnumerator_uintlist enumerator_1765 (enumerator_1612.current_mBinaryCode (HERE), EnumerationOrder::up) ;
    while (enumerator_1765.hasCurrentObject ()) {
      var_s_1748.plusAssign_operation(GALGAS_string (" ").add_operation (extensionGetter_x_34_string (enumerator_1765.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 53)) ;
      enumerator_1765.gotoNextObject () ;
    }
    ioArgument_ioListFileContents.plusAssign_operation(var_s_1748.getter_stringByRightPadding (GALGAS_uint (uint32_t (13U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 55)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 55)) ;
    var_s_1748 = GALGAS_string::makeEmptyString () ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      GALGAS_bool test_1 = var_first_1555 ;
      if (kBoolTrue == test_1.boolEnum ()) {
        test_1 = GALGAS_bool (ComparisonKind::lowerOrEqual, constinArgument_inMin.objectCompare (constinArgument_inMax)) ;
      }
      test_0 = test_1.boolEnum () ;
      if (kBoolTrue == test_0) {
        enumGalgasBool test_2 = kBoolTrue ;
        if (kBoolTrue == test_2) {
          test_2 = GALGAS_bool (ComparisonKind::lowerOrEqual, constinArgument_inMin.objectCompare (GALGAS_uint (uint32_t (99999U)))).boolEnum () ;
          if (kBoolTrue == test_2) {
            var_s_1748.plusAssign_operation(constinArgument_inMin.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 59)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 59)) ;
          }
        }
        if (kBoolFalse == test_2) {
          var_s_1748.plusAssign_operation(GALGAS_string ("*****"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 61)) ;
        }
        var_s_1748.plusAssign_operation(GALGAS_string ("-"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 63)) ;
        enumGalgasBool test_3 = kBoolTrue ;
        if (kBoolTrue == test_3) {
          test_3 = GALGAS_bool (ComparisonKind::lowerOrEqual, constinArgument_inMax.objectCompare (GALGAS_uint (uint32_t (99999U)))).boolEnum () ;
          if (kBoolTrue == test_3) {
            var_s_1748.plusAssign_operation(constinArgument_inMax.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 65)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 65)) ;
          }
        }
        if (kBoolFalse == test_3) {
          var_s_1748.plusAssign_operation(GALGAS_string ("*****"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 67)) ;
        }
        var_s_1748.plusAssign_operation(GALGAS_string (" "), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 69)) ;
      }
    }
    ioArgument_ioListFileContents.plusAssign_operation(var_s_1748.getter_stringByRightPadding (GALGAS_uint (uint32_t (12U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 71)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 71)) ;
    ioArgument_ioListFileContents.plusAssign_operation(enumerator_1612.current_mAssemblyCode (HERE).getter_stringByRightPadding (GALGAS_uint (uint32_t (50U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 72)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 72)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string (" "), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 73)) ;
    ioArgument_ioListFileContents.plusAssign_operation(enumerator_1575.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 74)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 75)) ;
    var_first_1555 = GALGAS_bool (false) ;
    enumerator_1575.gotoNextObject () ;
    enumerator_1612.gotoNextObject () ;
  }
  cEnumerator_stringlist enumerator_2480 (var_ipicText_1391.getter_subListFromIndex (constinArgument_inCode.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas", 79)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 79)), EnumerationOrder::up) ;
  while (enumerator_2480.hasCurrentObject ()) {
    ioArgument_ioListFileContents.plusAssign_operation(extensionGetter_x_36_string (var_address_1529, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 80)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 80)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByRightPadding (GALGAS_uint (uint32_t (76U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 81)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 81)) ;
    ioArgument_ioListFileContents.plusAssign_operation(enumerator_2480.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 82)) ;
    ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 83)) ;
    enumerator_2480.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18GenerateCode?????????&?!!'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_GenerateCode_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__3F__21__21_ (const GALGAS_string constinArgument_inSourceFileName,
                                                                                           const GALGAS_programKind constinArgument_inProgramKind,
                                                                                           const GALGAS_uint constinArgument_inBootloaderReservedROMsize,
                                                                                           const GALGAS_uint constinArgument_inROMsize,
                                                                                           const GALGAS_string constinArgument_inProcessorName,
                                                                                           const GALGAS_registerTable constinArgument_inPredefinedRegisters,
                                                                                           const GALGAS_registerTable constinArgument_inAllRegisters,
                                                                                           const GALGAS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                                           const GALGAS_actualConfigurationMap constinArgument_inActualConfigurationMap,
                                                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                                                           const GALGAS_ipic_31__38_BlockList constinArgument_inGeneratedBlockList,
                                                                                           GALGAS_uint & outArgument_outUsedROMsize,
                                                                                           GALGAS_generatedCodeMap & outArgument_outGeneratedCodeMap,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUsedROMsize.drop () ; // Release 'out' argument
  outArgument_outGeneratedCodeMap.drop () ; // Release 'out' argument
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 219)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 219)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 219)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("CODE GENERATION").getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (117U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 220)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 220)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 220)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 220)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 221)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 221)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 221)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_code_generation.galgas", 222)).boolEnum () ;
    if (kBoolTrue == test_0) {
      {
      routine_print_3F_ (GALGAS_string ("Code generation:\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 223)) ;
      }
    }
  }
  GALGAS_symbolTableForRelativesResolution var_symbolTable_7615 ;
  GALGAS_uint var_firstDataAddress_7642 ;
  {
  routine_computeLabelAbsoluteAddressMap_3F__3F__21__21_ (constinArgument_inGeneratedBlockList, GALGAS_ipic_31__38_BlockList::class_func_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 228)), var_symbolTable_7615, var_firstDataAddress_7642, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 226)) ;
  }
  GALGAS_uint var_dataAddress_7733 = var_firstDataAddress_7642 ;
  GALGAS_pic_31__38__5F_dataAddressMap var_dataAddressMap_7792 = GALGAS_pic_31__38__5F_dataAddressMap::class_func_emptyMap (SOURCE_FILE ("ipic18_code_generation.galgas", 234)) ;
  cEnumerator_pic_31__38__5F_dataMap enumerator_7831 (constinArgument_inDataMap, EnumerationOrder::up) ;
  while (enumerator_7831.hasCurrentObject ()) {
    {
    var_dataAddressMap_7792.setter_insertKey (enumerator_7831.current_lkey (HERE), var_dataAddress_7733, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 236)) ;
    }
    var_dataAddress_7733 = var_dataAddress_7733.add_operation (enumerator_7831.current_mData (HERE).getter_count (SOURCE_FILE ("ipic18_code_generation.galgas", 237)).multiply_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 237)) ;
    enumerator_7831.gotoNextObject () ;
  }
  {
  routine_initCodeGenerator (inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 240)) ;
  }
  GALGAS_string var_assemblyString_8040 = GALGAS_string::makeEmptyString () ;
  GALGAS_bigint var_relocatableCodeSize_8066 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 242)) ;
  GALGAS_bigint var_blockStartAddress_8096 = GALGAS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 243)) ;
  outArgument_outGeneratedCodeMap = GALGAS_generatedCodeMap::class_func_emptyMap (SOURCE_FILE ("ipic18_code_generation.galgas", 244)) ;
  cEnumerator_ipic_31__38_BlockList enumerator_8153 (constinArgument_inGeneratedBlockList, EnumerationOrder::up) ;
  GALGAS_uint index_8148 (uint32_t (0)) ;
  while (enumerator_8153.hasCurrentObject ()) {
    GALGAS_string var_nextBlockLabel_8217 ;
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = GALGAS_bool (ComparisonKind::lowerThan, index_8148.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 247)).objectCompare (constinArgument_inGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas", 247)))).boolEnum () ;
      if (kBoolTrue == test_1) {
        var_nextBlockLabel_8217 = constinArgument_inGeneratedBlockList.getter_mBlockAtIndex (index_8148.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 248)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 248)).readProperty_mLabel ().readProperty_string () ;
      }
    }
    if (kBoolFalse == test_1) {
      var_nextBlockLabel_8217 = GALGAS_string::makeEmptyString () ;
    }
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (ComparisonKind::notEqual, enumerator_8153.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_code_generation.galgas", 252)))).boolEnum () ;
      if (kBoolTrue == test_2) {
        var_blockStartAddress_8096 = enumerator_8153.current_mBlock (HERE).readProperty_mAddress ().getter_bigint (SOURCE_FILE ("ipic18_code_generation.galgas", 253)) ;
        {
        routine_setEmitAddress_3F_ (var_blockStartAddress_8096.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 254)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 254)) ;
        }
      }
    }
    extensionMethod_generateCodeForBlock (enumerator_8153.current_mBlock (HERE), var_symbolTable_7615, var_dataAddressMap_7792, var_blockStartAddress_8096.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 259)), var_nextBlockLabel_8217, ioArgument_ioListFileContents, var_assemblyString_8040, outArgument_outGeneratedCodeMap, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 256)) ;
    GALGAS_uint var_blockSize_8785 = extensionGetter_blockSize (enumerator_8153.current_mBlock (HERE), var_nextBlockLabel_8217, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 265)) ;
    var_blockStartAddress_8096 = var_blockStartAddress_8096.add_operation (var_blockSize_8785.getter_bigint (SOURCE_FILE ("ipic18_code_generation.galgas", 266)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 266)) ;
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (ComparisonKind::equal, enumerator_8153.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_code_generation.galgas", 267)))).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_relocatableCodeSize_8066 = var_relocatableCodeSize_8066.add_operation (var_blockSize_8785.getter_bigint (SOURCE_FILE ("ipic18_code_generation.galgas", 268)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 268)) ;
      }
    }
    enumerator_8153.gotoNextObject () ;
    index_8148.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 245)) ;
  }
  var_dataAddress_7733 = var_firstDataAddress_7642 ;
  cEnumerator_pic_31__38__5F_dataMap enumerator_9069 (constinArgument_inDataMap, EnumerationOrder::up) ;
  const bool bool_4 = true ;
  if (enumerator_9069.hasCurrentObject () && bool_4) {
    {
    routine_setEmitAddress_3F_ (var_dataAddress_7733, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 275)) ;
    }
    {
    GALGAS_codeList temp_5 = GALGAS_codeList::class_func_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 278)) ;
    temp_5.addAssign_operation (GALGAS_string ("    ORG ").add_operation (var_dataAddress_7733.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 278)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 278)), GALGAS_uintlist::class_func_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 278))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 278)) ;
    GALGAS_stringlist temp_6 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 279)) ;
    temp_6.addAssign_operation (GALGAS_string ("    ORG ").add_operation (var_dataAddress_7733.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 279)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 279))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 279)) ;
    routine_generateLineWithCode_3F__3F__3F__3F__3F__26_ (var_dataAddress_7733, temp_5, temp_6, GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_code_generation.galgas", 280)), GALGAS_uint (uint32_t (0U)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 276)) ;
    }
    var_assemblyString_8040.plusAssign_operation(GALGAS_string ("    ORG ").add_operation (var_dataAddress_7733.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 284)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 284)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 284)) ;
    while (enumerator_9069.hasCurrentObject () && bool_4) {
      {
      GALGAS_codeList temp_7 = GALGAS_codeList::class_func_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 288)) ;
      temp_7.addAssign_operation (GALGAS_string ("_data_").add_operation (enumerator_9069.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 288)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 288)), GALGAS_uintlist::class_func_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 288))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 288)) ;
      GALGAS_stringlist temp_8 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 289)) ;
      temp_8.addAssign_operation (GALGAS_string ("_data_").add_operation (enumerator_9069.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 289)).add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 289))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 289)) ;
      routine_generateLineWithCode_3F__3F__3F__3F__3F__26_ (var_dataAddress_7733, temp_7, temp_8, GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_code_generation.galgas", 290)), GALGAS_uint (uint32_t (0U)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 286)) ;
      }
      var_assemblyString_8040.plusAssign_operation(GALGAS_string ("_data_").add_operation (enumerator_9069.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 294)).add_operation (GALGAS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 294)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 294)) ;
      cEnumerator_uintlist enumerator_9650 (enumerator_9069.current_mData (HERE), EnumerationOrder::up) ;
      while (enumerator_9650.hasCurrentObject ()) {
        var_assemblyString_8040.plusAssign_operation(GALGAS_string ("    DW ").add_operation (enumerator_9650.current_mValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 296)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 296)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 296)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 296)) ;
        {
        routine_emitCode_3F_ (enumerator_9650.current_mValue (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 297)) ;
        }
        {
        GALGAS_codeList temp_9 = GALGAS_codeList::class_func_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 300)) ;
        GALGAS_uintlist temp_10 = GALGAS_uintlist::class_func_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 300)) ;
        temp_10.addAssign_operation (enumerator_9650.current_mValue (HERE)  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 300)) ;
        temp_9.addAssign_operation (GALGAS_string ("    DW ").add_operation (enumerator_9650.current_mValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 300)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 300)), temp_10  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 300)) ;
        GALGAS_stringlist temp_11 = GALGAS_stringlist::class_func_emptyList (SOURCE_FILE ("ipic18_code_generation.galgas", 301)) ;
        temp_11.addAssign_operation (GALGAS_string ("    DW ").add_operation (enumerator_9650.current_mValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 301)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 301))  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 301)) ;
        routine_generateLineWithCode_3F__3F__3F__3F__3F__26_ (var_dataAddress_7733, temp_9, temp_11, GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_code_generation.galgas", 302)), GALGAS_uint (uint32_t (0U)), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 298)) ;
        }
        var_dataAddress_7733 = var_dataAddress_7733.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 306)) ;
        enumerator_9650.gotoNextObject () ;
      }
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 308)) ;
      enumerator_9069.gotoNextObject () ;
    }
  }
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = GALGAS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_code_generation.galgas", 310)).boolEnum () ;
    if (kBoolTrue == test_12) {
      {
      routine_print_3F_ (GALGAS_string ("  Relocatable code size: ").add_operation (var_relocatableCodeSize_8066.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 311)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 311)).add_operation (GALGAS_string (" bytes.\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 311)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 311)) ;
      }
    }
  }
  outArgument_outUsedROMsize = var_dataAddress_7733 ;
  switch (constinArgument_inProgramKind.enumValue ()) {
  case GALGAS_programKind::kNotBuilt:
    break ;
  case GALGAS_programKind::kEnum_regularProgram:
  case GALGAS_programKind::kEnum_userProgram:
    {
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (ComparisonKind::greaterThan, outArgument_outUsedROMsize.objectCompare (constinArgument_inROMsize)).boolEnum () ;
        if (kBoolTrue == test_13) {
          TC_Array <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 318)), GALGAS_string ("the program uses ").add_operation (outArgument_outUsedROMsize.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 318)).add_operation (GALGAS_string (" bytes, greater than reserved size ("), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 318)).add_operation (constinArgument_inROMsize.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 318)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 318)).add_operation (GALGAS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 318)), fixItArray14  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 318)) ;
        }
      }
    }
    break ;
  case GALGAS_programKind::kEnum_bootloaderProgram:
    {
      enumGalgasBool test_15 = kBoolTrue ;
      if (kBoolTrue == test_15) {
        test_15 = GALGAS_bool (ComparisonKind::greaterThan, outArgument_outUsedROMsize.objectCompare (constinArgument_inBootloaderReservedROMsize)).boolEnum () ;
        if (kBoolTrue == test_15) {
          TC_Array <FixItDescription> fixItArray16 ;
          inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 322)), GALGAS_string ("the bootloader uses ").add_operation (outArgument_outUsedROMsize.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 322)).add_operation (GALGAS_string (" bytes, greater than reserved size ("), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 322)).add_operation (constinArgument_inBootloaderReservedROMsize.getter_string (SOURCE_FILE ("ipic18_code_generation.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 322)).add_operation (GALGAS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 322)), fixItArray16  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 322)) ;
        }
      }
    }
    break ;
  }
  cEnumerator_actualConfigurationMap enumerator_10823 (constinArgument_inActualConfigurationMap, EnumerationOrder::up) ;
  while (enumerator_10823.hasCurrentObject ()) {
    {
    routine_setEmitAddress_3F_ (enumerator_10823.current_mRegisterAddress (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 328)) ;
    }
    {
    routine_emitByte_3F_ (enumerator_10823.current_mRegisterValue (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 329)) ;
    }
    enumerator_10823.gotoNextObject () ;
  }
  GALGAS_string var_contents_11003 ;
  {
  routine_getGeneratedContents_21_ (var_contents_11003, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 332)) ;
  }
  GALGAS_string var_destinationFile_11019 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("ipic18_code_generation.galgas", 333)).add_operation (GALGAS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 333)) ;
  GALGAS_bool joker_11157 ; // Joker input parameter
  var_contents_11003.method_writeToFileWhenDifferentContents (var_destinationFile_11019, joker_11157, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 334)) ;
  enumGalgasBool test_17 = kBoolTrue ;
  if (kBoolTrue == test_17) {
    test_17 = GALGAS_bool (gOption_piccolo_5F_options_output_5F_C_5F_Array.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_17) {
      GALGAS_string var_baseName_11260 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("ipic18_code_generation.galgas", 337)).getter_stringByDeletingPathExtension (SOURCE_FILE ("ipic18_code_generation.galgas", 337)) ;
      GALGAS_string var_cContents_11394 ;
      {
      routine_get_5F_C_5F_ArrayImplementation_3F__21_ (var_baseName_11260, var_cContents_11394, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 338)) ;
      }
      var_destinationFile_11019 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("ipic18_code_generation.galgas", 339)).add_operation (GALGAS_string (".c"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 339)) ;
      GALGAS_bool joker_11548 ; // Joker input parameter
      var_cContents_11394.method_writeToFileWhenDifferentContents (var_destinationFile_11019, joker_11548, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 340)) ;
      GALGAS_string var_hContents_11598 ;
      {
      routine_get_5F_C_5F_ArrayHeader_3F__21_ (var_baseName_11260, var_hContents_11598, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 341)) ;
      }
      var_destinationFile_11019 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("ipic18_code_generation.galgas", 342)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 342)) ;
      GALGAS_bool joker_11752 ; // Joker input parameter
      var_hContents_11598.method_writeToFileWhenDifferentContents (var_destinationFile_11019, joker_11752, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 343)) ;
    }
  }
  enumGalgasBool test_18 = kBoolTrue ;
  if (kBoolTrue == test_18) {
    test_18 = GALGAS_bool (gOption_piccolo_5F_options_generateAssembly.readProperty_value ()).operator_and (GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_code_generation.galgas", 346)).objectCompare (GALGAS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 346)).boolEnum () ;
    if (kBoolTrue == test_18) {
      {
      routine_pic_31__38_GenerateAssemblyFile_3F__3F__3F__3F__3F__3F_ (constinArgument_inSourceFileName, constinArgument_inProcessorName, constinArgument_inPredefinedRegisters, constinArgument_inAllRegisters, constinArgument_inActualConfigurationMap, var_assemblyString_8040, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 347)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'pic18GenerateAssemblyFile??????'
//
//--------------------------------------------------------------------------------------------------

void routine_pic_31__38_GenerateAssemblyFile_3F__3F__3F__3F__3F__3F_ (const GALGAS_string constinArgument_inSourceFileName,
                                                                      const GALGAS_string constinArgument_inProcessorName,
                                                                      const GALGAS_registerTable constinArgument_inPredefinedRegisters,
                                                                      const GALGAS_registerTable constinArgument_inAllRegisters,
                                                                      const GALGAS_actualConfigurationMap constinArgument_inActualConfigurationMap,
                                                                      const GALGAS_string constinArgument_inAssemblyCode,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_assemblyString_12775 = GALGAS_string ("  PROCESSOR ").add_operation (constinArgument_inProcessorName, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 371)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 371)) ;
  var_assemblyString_12775.plusAssign_operation(GALGAS_string (";--- Code\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 373)) ;
  var_assemblyString_12775.plusAssign_operation(constinArgument_inAssemblyCode, inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 374)) ;
  var_assemblyString_12775.plusAssign_operation(GALGAS_string (";--- Prefefined registers\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 376)) ;
  cEnumerator_registerTable enumerator_13024 (constinArgument_inPredefinedRegisters, EnumerationOrder::up) ;
  while (enumerator_13024.hasCurrentObject ()) {
    GALGAS_uint var_firstRegister_13099 ;
    enumerator_13024.current_mRegisterAddressList (HERE).method_first (var_firstRegister_13099, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 378)) ;
    var_assemblyString_12775.plusAssign_operation(enumerator_13024.current_lkey (HERE).readProperty_string ().add_operation (GALGAS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 379)).add_operation (var_firstRegister_13099.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 379)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 379)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 379)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 379)) ;
    enumerator_13024.gotoNextObject () ;
  }
  var_assemblyString_12775.plusAssign_operation(GALGAS_string ("\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 381)) ;
  var_assemblyString_12775.plusAssign_operation(GALGAS_string (";--- User defined registers (in RAM)\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 383)) ;
  cEnumerator_registerTable enumerator_13361 (constinArgument_inAllRegisters, EnumerationOrder::up) ;
  while (enumerator_13361.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = constinArgument_inPredefinedRegisters.getter_hasKey (enumerator_13361.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 385)).operator_not (SOURCE_FILE ("ipic18_code_generation.galgas", 385)).boolEnum () ;
      if (kBoolTrue == test_0) {
        GALGAS_uint var_firstRegister_13491 ;
        enumerator_13361.current_mRegisterAddressList (HERE).method_first (var_firstRegister_13491, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 386)) ;
        var_assemblyString_12775.plusAssign_operation(enumerator_13361.current_lkey (HERE).readProperty_string ().add_operation (GALGAS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 387)).add_operation (var_firstRegister_13491.getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 387)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 387)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 387)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 387)) ;
      }
    }
    enumerator_13361.gotoNextObject () ;
  }
  var_assemblyString_12775.plusAssign_operation(GALGAS_string ("\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 390)) ;
  var_assemblyString_12775.plusAssign_operation(GALGAS_string (";--- Piccolo defined symbols\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 392)) ;
  var_assemblyString_12775.plusAssign_operation(GALGAS_string ("W EQU 1\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 393)) ;
  var_assemblyString_12775.plusAssign_operation(GALGAS_string ("FAST EQU 1\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 394)) ;
  var_assemblyString_12775.plusAssign_operation(GALGAS_string ("BSR_ACCESS EQU 1\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 395)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::greaterThan, constinArgument_inActualConfigurationMap.getter_count (SOURCE_FILE ("ipic18_code_generation.galgas", 397)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_1) {
      var_assemblyString_12775.plusAssign_operation(GALGAS_string (";--- Configuration\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 398)) ;
      cEnumerator_actualConfigurationMap enumerator_13994 (constinArgument_inActualConfigurationMap, EnumerationOrder::up) ;
      while (enumerator_13994.hasCurrentObject ()) {
        var_assemblyString_12775.plusAssign_operation(GALGAS_string ("  __config ").add_operation (enumerator_13994.current_mRegisterAddress (HERE).getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 400)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 400)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 400)).add_operation (enumerator_13994.current_mRegisterValue (HERE).operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 400)).getter_hexString (SOURCE_FILE ("ipic18_code_generation.galgas", 400)), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 400)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 400)), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 400)) ;
        enumerator_13994.gotoNextObject () ;
      }
    }
  }
  var_assemblyString_12775.plusAssign_operation(GALGAS_string (";---\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 404)) ;
  var_assemblyString_12775.plusAssign_operation(GALGAS_string ("  END\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 405)) ;
  GALGAS_string var_asmDestinationFile_14337 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("ipic18_code_generation.galgas", 407)).add_operation (GALGAS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 407)) ;
  GALGAS_bool joker_14486 ; // Joker input parameter
  var_assemblyString_12775.method_writeToFileWhenDifferentContents (var_asmDestinationFile_14337, joker_14486, inCompiler COMMA_SOURCE_FILE ("ipic18_code_generation.galgas", 408)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18AbstractConditionTerminator exploreAccessibleBlocksForStackComputations'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_AbstractConditionTerminator::method_exploreAccessibleBlocksForStackComputations (GALGAS_stringset & ioArgument_ioBlockToExploreSet,
                                                                                                       GALGAS_stringset & ioArgument_ioExploredBlockSet,
                                                                                                       GALGAS_uint & outArgument_outStackNeeds,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_trueStackNeeds_1598 ;
  const GALGAS_ipic_31__38_AbstractConditionTerminator temp_0 = this ;
  callExtensionMethod_exploreAccessibleBlocksForStackComputations ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), ioArgument_ioBlockToExploreSet, ioArgument_ioExploredBlockSet, var_trueStackNeeds_1598, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 41)) ;
  GALGAS_uint var_falseStackNeeds_1774 ;
  const GALGAS_ipic_31__38_AbstractConditionTerminator temp_1 = this ;
  callExtensionMethod_exploreAccessibleBlocksForStackComputations ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), ioArgument_ioBlockToExploreSet, ioArgument_ioExploredBlockSet, var_falseStackNeeds_1774, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 46)) ;
  GALGAS_uint temp_2 ;
  const enumGalgasBool test_3 = GALGAS_bool (ComparisonKind::greaterThan, var_trueStackNeeds_1598.objectCompare (var_falseStackNeeds_1774)).boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = var_trueStackNeeds_1598 ;
  }else if (kBoolFalse == test_3) {
    temp_2 = var_falseStackNeeds_1774 ;
  }
  outArgument_outStackNeeds = temp_2 ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedBraTerminator exploreAccessibleBlocksForStackComputations'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::method_exploreAccessibleBlocksForStackComputations (GALGAS_stringset & ioArgument_ioBlockToExploreSet,
                                                                                                 GALGAS_stringset & ioArgument_ioExploredBlockSet,
                                                                                                 GALGAS_uint & outArgument_outStackNeeds,
                                                                                                 Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_ComputedBraTerminator temp_0 = this ;
  cEnumerator_lstringlist enumerator_2166 (temp_0.readProperty_mTargetLabels (), EnumerationOrder::up) ;
  while (enumerator_2166.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = ioArgument_ioExploredBlockSet.getter_hasKey (enumerator_2166.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 62)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 62)).boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioBlockToExploreSet.addAssign_operation (enumerator_2166.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 63)) ;
      }
    }
    enumerator_2166.gotoNextObject () ;
  }
  outArgument_outStackNeeds = GALGAS_uint (uint32_t (1U)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedGotoTerminator exploreAccessibleBlocksForStackComputations'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::method_exploreAccessibleBlocksForStackComputations (GALGAS_stringset & ioArgument_ioBlockToExploreSet,
                                                                                                  GALGAS_stringset & ioArgument_ioExploredBlockSet,
                                                                                                  GALGAS_uint & outArgument_outStackNeeds,
                                                                                                  Compiler * /* inCompiler */
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_ComputedGotoTerminator temp_0 = this ;
  cEnumerator_lstringlist enumerator_2611 (temp_0.readProperty_mTargetLabels (), EnumerationOrder::up) ;
  while (enumerator_2611.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = ioArgument_ioExploredBlockSet.getter_hasKey (enumerator_2611.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 77)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 77)).boolEnum () ;
      if (kBoolTrue == test_1) {
        ioArgument_ioBlockToExploreSet.addAssign_operation (enumerator_2611.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 78)) ;
      }
    }
    enumerator_2611.gotoNextObject () ;
  }
  outArgument_outStackNeeds = GALGAS_uint (uint32_t (1U)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18JumpTerminator exploreAccessibleBlocksForStackComputations'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_exploreAccessibleBlocksForStackComputations (GALGAS_stringset & ioArgument_ioBlockToExploreSet,
                                                                                          GALGAS_stringset & ioArgument_ioExploredBlockSet,
                                                                                          GALGAS_uint & outArgument_outStackNeeds,
                                                                                          Compiler * /* inCompiler */
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_JumpTerminator temp_1 = this ;
    test_0 = ioArgument_ioExploredBlockSet.getter_hasKey (temp_1.readProperty_mLabel ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 91)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 91)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_ipic_31__38_JumpTerminator temp_2 = this ;
      ioArgument_ioBlockToExploreSet.addAssign_operation (temp_2.readProperty_mLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 92)) ;
    }
  }
  outArgument_outStackNeeds = GALGAS_uint (uint32_t (0U)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ConditionalJumpTerminator exploreAccessibleBlocksForStackComputations'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ConditionalJumpTerminator::method_exploreAccessibleBlocksForStackComputations (GALGAS_stringset & ioArgument_ioBlockToExploreSet,
                                                                                                     GALGAS_stringset & ioArgument_ioExploredBlockSet,
                                                                                                     GALGAS_uint & outArgument_outStackNeeds,
                                                                                                     Compiler * /* inCompiler */
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_1 = this ;
    test_0 = ioArgument_ioExploredBlockSet.getter_hasKey (temp_1.readProperty_mTargetLabelWhenTrue ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 104)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 104)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
      ioArgument_ioBlockToExploreSet.addAssign_operation (temp_2.readProperty_mTargetLabelWhenTrue ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 105)) ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
    test_3 = ioArgument_ioExploredBlockSet.getter_hasKey (temp_4.readProperty_mTargetLabelWhenFalse ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 107)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 107)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_5 = this ;
      ioArgument_ioBlockToExploreSet.addAssign_operation (temp_5.readProperty_mTargetLabelWhenFalse ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 108)) ;
    }
  }
  outArgument_outStackNeeds = GALGAS_uint (uint32_t (0U)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedRETLWTerminator exploreAccessibleBlocksForStackComputations'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::method_exploreAccessibleBlocksForStackComputations (GALGAS_stringset & /* ioArgument_ioBlockToExploreSet */,
                                                                                                   GALGAS_stringset & /* ioArgument_ioExploredBlockSet */,
                                                                                                   GALGAS_uint & outArgument_outStackNeeds,
                                                                                                   Compiler * /* inCompiler */
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outStackNeeds = GALGAS_uint (uint32_t (1U)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ReturnTerminator exploreAccessibleBlocksForStackComputations'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ReturnTerminator::method_exploreAccessibleBlocksForStackComputations (GALGAS_stringset & /* ioArgument_ioBlockToExploreSet */,
                                                                                            GALGAS_stringset & /* ioArgument_ioExploredBlockSet */,
                                                                                            GALGAS_uint & outArgument_outStackNeeds,
                                                                                            Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outStackNeeds = GALGAS_uint (uint32_t (0U)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18RetlwTerminator exploreAccessibleBlocksForStackComputations'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetlwTerminator::method_exploreAccessibleBlocksForStackComputations (GALGAS_stringset & /* ioArgument_ioBlockToExploreSet */,
                                                                                           GALGAS_stringset & /* ioArgument_ioExploredBlockSet */,
                                                                                           GALGAS_uint & outArgument_outStackNeeds,
                                                                                           Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outStackNeeds = GALGAS_uint (uint32_t (0U)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18RetfieTerminator exploreAccessibleBlocksForStackComputations'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetfieTerminator::method_exploreAccessibleBlocksForStackComputations (GALGAS_stringset & /* ioArgument_ioBlockToExploreSet */,
                                                                                            GALGAS_stringset & /* ioArgument_ioExploredBlockSet */,
                                                                                            GALGAS_uint & outArgument_outStackNeeds,
                                                                                            Compiler * /* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outStackNeeds = GALGAS_uint (uint32_t (0U)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_JSR buildCalledRoutineSetForStackComputations'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_JSR::method_buildCalledRoutineSetForStackComputations (GALGAS_stringset & ioArgument_ioRoutineCalledSet,
                                                                                                 Compiler * /* inCompiler */
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = this ;
  ioArgument_ioRoutineCalledSet.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 168)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_computed_rcall buildCalledRoutineSetForStackComputations'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::method_buildCalledRoutineSetForStackComputations (GALGAS_stringset & ioArgument_ioRoutineCalledSet,
                                                                                                                              Compiler * inCompiler
                                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_0 = this ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_5769 (temp_0.readProperty_mTargetInstructions (), EnumerationOrder::up) ;
  while (enumerator_5769.hasCurrentObject ()) {
    callExtensionMethod_buildCalledRoutineSetForStackComputations ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_5769.current_mInstruction (HERE).ptr (), ioArgument_ioRoutineCalledSet, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 176)) ;
    enumerator_5769.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_condition_skip_instruction buildCalledRoutineSetForStackComputations'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::method_buildCalledRoutineSetForStackComputations (GALGAS_stringset & ioArgument_ioRoutineCalledSet,
                                                                                                              Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction temp_0 = this ;
  callExtensionMethod_buildCalledRoutineSetForStackComputations ((cPtr_ipic_31__38_SequentialInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), ioArgument_ioRoutineCalledSet, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 184)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18StackComputations&?'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_StackComputations_26__3F_ (GALGAS_string & ioArgument_ioListFileContents,
                                                    const GALGAS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 197)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 197)), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 197)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("STACK COMPUTATIONS").getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (117U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 198)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 198)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 198)), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 198)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 199)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 199)), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 199)) ;
  GALGAS_stringset var_startLabelsToExplore_6779 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("ipic18_stack_computations.galgas", 201)) ;
  GALGAS_blockMapForStackComputation var_blockMapForStackComputation_6822 = GALGAS_blockMapForStackComputation::class_func_emptyMap (SOURCE_FILE ("ipic18_stack_computations.galgas", 202)) ;
  cEnumerator_ipic_31__38_BlockList enumerator_6891 (constinArgument_inBlockList, EnumerationOrder::up) ;
  while (enumerator_6891.hasCurrentObject ()) {
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (ComparisonKind::notEqual, enumerator_6891.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_stack_computations.galgas", 204)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_startLabelsToExplore_6779.addAssign_operation (enumerator_6891.current_mBlock (HERE).readProperty_mLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 205)) ;
      }
    }
    {
    var_blockMapForStackComputation_6822.setter_insertKey (enumerator_6891.current_mBlock (HERE).readProperty_mLabel (), enumerator_6891.current_mBlock (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 207)) ;
    }
    enumerator_6891.gotoNextObject () ;
  }
  GALGAS_routineCallMap var_routineCallMap_7188 = GALGAS_routineCallMap::class_func_emptyMap (SOURCE_FILE ("ipic18_stack_computations.galgas", 210)) ;
  if (constinArgument_inBlockList.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 211)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 211)).isValid ()) {
    uint32_t variant_7211 = constinArgument_inBlockList.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 211)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 211)).uintValue () ;
    bool loop_7211 = true ;
    while (loop_7211) {
      loop_7211 = GALGAS_bool (ComparisonKind::greaterThan, var_startLabelsToExplore_6779.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 212)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValid () ;
      if (loop_7211) {
        loop_7211 = GALGAS_bool (ComparisonKind::greaterThan, var_startLabelsToExplore_6779.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 212)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_7211 && (0 == variant_7211)) {
        loop_7211 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_stack_computations.galgas", 211)) ;
      }
      if (loop_7211) {
        variant_7211 -- ;
        GALGAS_string var_startLabel_7296 = var_startLabelsToExplore_6779.getter_anyString (inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 214)) ;
        {
        var_startLabelsToExplore_6779.setter_removeKey (var_startLabel_7296 COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 215)) ;
        }
        GALGAS_stringset var_blockToExploreSet_7434 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("ipic18_stack_computations.galgas", 217)) ;
        var_blockToExploreSet_7434.addAssign_operation (var_startLabel_7296  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 218)) ;
        GALGAS_stringset var_exploredBlockSet_7524 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("ipic18_stack_computations.galgas", 219)) ;
        GALGAS_stringset var_calledRoutineSet_7566 = GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("ipic18_stack_computations.galgas", 220)) ;
        GALGAS_uint var_terminatorStackNeeds_7603 = GALGAS_uint (uint32_t (0U)) ;
        if (constinArgument_inBlockList.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 222)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 222)).isValid ()) {
          uint32_t variant_7632 = constinArgument_inBlockList.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 222)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 222)).uintValue () ;
          bool loop_7632 = true ;
          while (loop_7632) {
            loop_7632 = GALGAS_bool (ComparisonKind::greaterThan, var_blockToExploreSet_7434.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 223)).objectCompare (GALGAS_uint (uint32_t (0U)))).isValid () ;
            if (loop_7632) {
              loop_7632 = GALGAS_bool (ComparisonKind::greaterThan, var_blockToExploreSet_7434.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 223)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolValue () ;
            }
            if (loop_7632 && (0 == variant_7632)) {
              loop_7632 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_stack_computations.galgas", 222)) ;
            }
            if (loop_7632) {
              variant_7632 -- ;
              GALGAS_string var_b_7728 = var_blockToExploreSet_7434.getter_anyString (inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 225)) ;
              {
              var_blockToExploreSet_7434.setter_removeKey (var_b_7728 COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 226)) ;
              }
              var_exploredBlockSet_7524.addAssign_operation (var_b_7728  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 227)) ;
              GALGAS_ipic_31__38_Block var_aBlock_7908 ;
              var_blockMapForStackComputation_6822.method_searchKey (var_b_7728.getter_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas", 228)), var_aBlock_7908, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 228)) ;
              GALGAS_uint var_tsn_8054 ;
              callExtensionMethod_exploreAccessibleBlocksForStackComputations ((cPtr_ipic_31__38_AbstractBlockTerminator *) var_aBlock_7908.readProperty_mTerminator ().ptr (), var_blockToExploreSet_7434, var_exploredBlockSet_7524, var_tsn_8054, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 229)) ;
              enumGalgasBool test_1 = kBoolTrue ;
              if (kBoolTrue == test_1) {
                test_1 = GALGAS_bool (ComparisonKind::greaterThan, var_tsn_8054.objectCompare (var_terminatorStackNeeds_7603)).boolEnum () ;
                if (kBoolTrue == test_1) {
                  var_terminatorStackNeeds_7603 = var_tsn_8054 ;
                }
              }
              cEnumerator_ipic_31__38_SequentialInstructionList enumerator_8178 (var_aBlock_7908.readProperty_mInstructionList (), EnumerationOrder::up) ;
              while (enumerator_8178.hasCurrentObject ()) {
                callExtensionMethod_buildCalledRoutineSetForStackComputations ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_8178.current_mInstruction (HERE).ptr (), var_calledRoutineSet_7566, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 238)) ;
                enumerator_8178.gotoNextObject () ;
              }
            }
          }
        }
        {
        var_routineCallMap_7188.setter_insertKey (var_startLabel_7296.getter_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas", 241)), var_calledRoutineSet_7566, var_terminatorStackNeeds_7603, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 241)) ;
        }
        cEnumerator_stringset enumerator_8417 (var_calledRoutineSet_7566, EnumerationOrder::up) ;
        while (enumerator_8417.hasCurrentObject ()) {
          enumGalgasBool test_2 = kBoolTrue ;
          if (kBoolTrue == test_2) {
            test_2 = var_routineCallMap_7188.getter_hasKey (enumerator_8417.current_key (HERE) COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 243)).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 243)).boolEnum () ;
            if (kBoolTrue == test_2) {
              var_startLabelsToExplore_6779.addAssign_operation (enumerator_8417.current_key (HERE)  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 244)) ;
            }
          }
          enumerator_8417.gotoNextObject () ;
        }
      }
    }
  }
  GALGAS_routineStackRequirementMap var_routineStackRequirementMap_8660 = GALGAS_routineStackRequirementMap::class_func_emptyMap (SOURCE_FILE ("ipic18_stack_computations.galgas", 250)) ;
  GALGAS_bool var_progress_8699 = GALGAS_bool (true) ;
  if (var_routineCallMap_7188.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 252)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 252)).isValid ()) {
    uint32_t variant_8717 = var_routineCallMap_7188.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 252)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 252)).uintValue () ;
    bool loop_8717 = true ;
    while (loop_8717) {
      loop_8717 = var_progress_8699.isValid () ;
      if (loop_8717) {
        loop_8717 = var_progress_8699.boolValue () ;
      }
      if (loop_8717 && (0 == variant_8717)) {
        loop_8717 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_stack_computations.galgas", 252)) ;
      }
      if (loop_8717) {
        variant_8717 -- ;
        var_progress_8699 = GALGAS_bool (false) ;
        GALGAS_routineCallMap var_tempRoutineCallMap_8818 = var_routineCallMap_7188 ;
        var_routineCallMap_7188 = GALGAS_routineCallMap::class_func_emptyMap (SOURCE_FILE ("ipic18_stack_computations.galgas", 257)) ;
        cEnumerator_routineCallMap enumerator_8911 (var_tempRoutineCallMap_8818, EnumerationOrder::up) ;
        while (enumerator_8911.hasCurrentObject ()) {
          GALGAS_uint var_levels_8976 = enumerator_8911.current_mTerminatorStackNeeds (HERE) ;
          GALGAS_bool var_solved_9023 = GALGAS_bool (true) ;
          cEnumerator_stringset enumerator_9048 (enumerator_8911.current_mCalledRoutineSet (HERE), EnumerationOrder::up) ;
          bool bool_3 = var_solved_9023.isValidAndTrue () ;
          if (enumerator_9048.hasCurrentObject () && bool_3) {
            while (enumerator_9048.hasCurrentObject () && bool_3) {
              var_solved_9023 = var_routineStackRequirementMap_8660.getter_hasKey (enumerator_9048.current_key (HERE) COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 262)) ;
              enumGalgasBool test_4 = kBoolTrue ;
              if (kBoolTrue == test_4) {
                test_4 = var_solved_9023.boolEnum () ;
                if (kBoolTrue == test_4) {
                  GALGAS_uint var_rLevel_9245 ;
                  var_routineStackRequirementMap_8660.method_searchKey (enumerator_9048.current_key (HERE).getter_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas", 264)), var_rLevel_9245, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 264)) ;
                  enumGalgasBool test_5 = kBoolTrue ;
                  if (kBoolTrue == test_5) {
                    test_5 = GALGAS_bool (ComparisonKind::lowerOrEqual, var_levels_8976.objectCompare (var_rLevel_9245)).boolEnum () ;
                    if (kBoolTrue == test_5) {
                      var_levels_8976 = var_rLevel_9245.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 266)) ;
                    }
                  }
                }
              }
              enumerator_9048.gotoNextObject () ;
              if (enumerator_9048.hasCurrentObject ()) {
                bool_3 = var_solved_9023.isValidAndTrue () ;
              }
            }
          }
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            test_6 = var_solved_9023.boolEnum () ;
            if (kBoolTrue == test_6) {
              {
              var_routineStackRequirementMap_8660.setter_insertKey (enumerator_8911.current_lkey (HERE), var_levels_8976, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 271)) ;
              }
              var_progress_8699 = GALGAS_bool (true) ;
            }
          }
          if (kBoolFalse == test_6) {
            {
            var_routineCallMap_7188.setter_insertKey (enumerator_8911.current_lkey (HERE), enumerator_8911.current_mCalledRoutineSet (HERE), enumerator_8911.current_mTerminatorStackNeeds (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 274)) ;
            }
          }
          enumerator_8911.gotoNextObject () ;
        }
      }
    }
  }
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Levels Routine\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 278)) ;
  cEnumerator_routineStackRequirementMap enumerator_9639 (var_routineStackRequirementMap_8660, EnumerationOrder::up) ;
  while (enumerator_9639.hasCurrentObject ()) {
    ioArgument_ioListFileContents.plusAssign_operation(enumerator_9639.current_mLevels (HERE).getter_string (SOURCE_FILE ("ipic18_stack_computations.galgas", 280)).getter_stringByLeftPadding (GALGAS_uint (uint32_t (6U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 280)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 280)).add_operation (enumerator_9639.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 280)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 280)), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 280)) ;
    enumerator_9639.gotoNextObject () ;
  }
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 282)) ;
  GALGAS_bool var_noRecursiveRoutine_9845 = GALGAS_bool (ComparisonKind::equal, var_routineCallMap_7188.getter_count (SOURCE_FILE ("ipic18_stack_computations.galgas", 284)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
  enumGalgasBool test_7 = kBoolTrue ;
  if (kBoolTrue == test_7) {
    test_7 = var_noRecursiveRoutine_9845.operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 285)).boolEnum () ;
    if (kBoolTrue == test_7) {
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        test_8 = GALGAS_bool (gOption_piccolo_5F_options_doNotWarnRecursive.readProperty_value ()).operator_not (SOURCE_FILE ("ipic18_stack_computations.galgas", 286)).boolEnum () ;
        if (kBoolTrue == test_8) {
          TC_Array <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticWarning (GALGAS_location::class_func_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas", 287)), GALGAS_string ("There are recursive routines"), fixItArray9  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 287)) ;
        }
      }
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("The following routines are recursive:\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 289)) ;
      cEnumerator_routineCallMap enumerator_10150 (var_routineCallMap_7188, EnumerationOrder::up) ;
      while (enumerator_10150.hasCurrentObject ()) {
        ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  - ").add_operation (enumerator_10150.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 291)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 291)), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 291)) ;
        enumerator_10150.gotoNextObject () ;
      }
      ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 293)) ;
    }
  }
  enumGalgasBool test_10 = kBoolTrue ;
  if (kBoolTrue == test_10) {
    test_10 = var_noRecursiveRoutine_9845.boolEnum () ;
    if (kBoolTrue == test_10) {
      GALGAS_uint var_mainLevels_10403 ;
      var_routineStackRequirementMap_8660.method_searchKey (GALGAS_string (".START").getter_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas", 297)), var_mainLevels_10403, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 297)) ;
      GALGAS_uint var_totalLevels_10429 = var_mainLevels_10403 ;
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = var_routineStackRequirementMap_8660.getter_hasKey (GALGAS_string (".HIGH_INTERRUPT") COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 299)).boolEnum () ;
        if (kBoolTrue == test_11) {
          GALGAS_uint var_highIntLevels_10605 ;
          var_routineStackRequirementMap_8660.method_searchKey (GALGAS_string (".HIGH_INTERRUPT").getter_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas", 300)), var_highIntLevels_10605, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 300)) ;
          var_totalLevels_10429 = var_totalLevels_10429.add_operation (var_highIntLevels_10605, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 301)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 301)) ;
        }
      }
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        test_12 = var_routineStackRequirementMap_8660.getter_hasKey (GALGAS_string (".LOW_INTERRUPT") COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 303)).boolEnum () ;
        if (kBoolTrue == test_12) {
          GALGAS_uint var_lowIntLevels_10829 ;
          var_routineStackRequirementMap_8660.method_searchKey (GALGAS_string (".LOW_INTERRUPT").getter_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas", 304)), var_lowIntLevels_10829, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 304)) ;
          var_totalLevels_10429 = var_totalLevels_10429.add_operation (var_lowIntLevels_10829, inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 305)).add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 305)) ;
        }
      }
      {
      routine_print_3F_ (GALGAS_string ("Max stack depth: ").add_operation (var_totalLevels_10429.getter_string (SOURCE_FILE ("ipic18_stack_computations.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 307)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 307)), inCompiler  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 307)) ;
      }
      enumGalgasBool test_13 = kBoolTrue ;
      if (kBoolTrue == test_13) {
        test_13 = GALGAS_bool (ComparisonKind::greaterThan, var_totalLevels_10429.objectCompare (GALGAS_uint (uint32_t (31U)))).boolEnum () ;
        if (kBoolTrue == test_13) {
          TC_Array <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("ipic18_stack_computations.galgas", 309)), GALGAS_string ("Max stack depth is greater than 31"), fixItArray14  COMMA_SOURCE_FILE ("ipic18_stack_computations.galgas", 309)) ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ReturnTerminator terminatorMinMaxDuration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ReturnTerminator::method_terminatorMinMaxDuration (const GALGAS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                         const GALGAS_string /* constinArgument_inNextLabel */,
                                                                         GALGAS_uint & outArgument_outMin,
                                                                         GALGAS_uint & outArgument_outMax,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint (uint32_t (2U)) ;
  outArgument_outMax = GALGAS_uint (uint32_t (2U)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18RetlwTerminator terminatorMinMaxDuration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetlwTerminator::method_terminatorMinMaxDuration (const GALGAS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                        const GALGAS_string /* constinArgument_inNextLabel */,
                                                                        GALGAS_uint & outArgument_outMin,
                                                                        GALGAS_uint & outArgument_outMax,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint (uint32_t (2U)) ;
  outArgument_outMax = GALGAS_uint (uint32_t (2U)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18RetfieTerminator terminatorMinMaxDuration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetfieTerminator::method_terminatorMinMaxDuration (const GALGAS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                         const GALGAS_string /* constinArgument_inNextLabel */,
                                                                         GALGAS_uint & outArgument_outMin,
                                                                         GALGAS_uint & outArgument_outMax,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint (uint32_t (2U)) ;
  outArgument_outMax = GALGAS_uint (uint32_t (2U)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18JumpTerminator terminatorMinMaxDuration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_terminatorMinMaxDuration (const GALGAS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                       const GALGAS_string constinArgument_inNextLabel,
                                                                       GALGAS_uint & outArgument_outMin,
                                                                       GALGAS_uint & outArgument_outMax,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_JumpTerminator temp_1 = this ;
    test_0 = constinArgument_inExploredBlockMap.getter_hasKey (temp_1.readProperty_mLabel ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 63)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_uint var_min_2100 ;
      GALGAS_uint var_max_2115 ;
      const GALGAS_ipic_31__38_JumpTerminator temp_2 = this ;
      constinArgument_inExploredBlockMap.method_searchKey (temp_2.readProperty_mLabel (), var_min_2100, var_max_2115, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 64)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        const GALGAS_ipic_31__38_JumpTerminator temp_4 = this ;
        test_3 = GALGAS_bool (ComparisonKind::equal, temp_4.readProperty_mLabel ().readProperty_string ().objectCompare (constinArgument_inNextLabel)).boolEnum () ;
        if (kBoolTrue == test_3) {
          outArgument_outMin = var_min_2100 ;
          outArgument_outMax = var_max_2115 ;
        }
      }
      if (kBoolFalse == test_3) {
        outArgument_outMin = GALGAS_uint (uint32_t (2U)).add_operation (var_min_2100, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 69)) ;
        outArgument_outMax = GALGAS_uint (uint32_t (2U)).add_operation (var_max_2115, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 70)) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outMin = GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 73)) ;
    outArgument_outMax = GALGAS_uint (uint32_t (0U)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18TestRegisterTerminator terminatorMinMaxDuration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_TestRegisterTerminator::method_terminatorMinMaxDuration (const GALGAS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                              const GALGAS_string constinArgument_inNextLabel,
                                                                              GALGAS_uint & outArgument_outMin,
                                                                              GALGAS_uint & outArgument_outMax,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_trueMin_2727 ;
  GALGAS_uint var_trueMax_2740 ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  callExtensionMethod_duration ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inExploredBlockMap, constinArgument_inNextLabel, var_trueMin_2727, var_trueMax_2740, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 86)) ;
  GALGAS_uint var_falseMin_2840 ;
  GALGAS_uint var_falseMax_2854 ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_1 = this ;
  callExtensionMethod_duration ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inExploredBlockMap, GALGAS_string::makeEmptyString (), var_falseMin_2840, var_falseMax_2854, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 87)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    GALGAS_bool test_3 = GALGAS_bool (ComparisonKind::lowerOrEqual, var_trueMin_2727.objectCompare (var_trueMax_2740)) ;
    if (kBoolTrue == test_3.boolEnum ()) {
      test_3 = GALGAS_bool (ComparisonKind::lowerOrEqual, var_falseMin_2840.objectCompare (var_falseMax_2854)) ;
    }
    test_2 = test_3.boolEnum () ;
    if (kBoolTrue == test_2) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_pic_31__38_TestRegisterTerminator temp_5 = this ;
        test_4 = GALGAS_bool (ComparisonKind::equal, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_5.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 89)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_uint var_trueBranchMinDuration_3066 = var_trueMin_2727.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 90)) ;
          GALGAS_uint var_trueBranchMaxDuration_3112 = var_trueMax_2740.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 91)) ;
          GALGAS_uint var_falseBranchMinDuration_3158 = var_falseMin_2840.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 92)) ;
          GALGAS_uint var_falseBranchMaxDuration_3206 = var_falseMax_2854.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 93)) ;
          GALGAS_uint temp_6 ;
          const enumGalgasBool test_7 = GALGAS_bool (ComparisonKind::lowerThan, var_falseBranchMinDuration_3158.objectCompare (var_trueBranchMinDuration_3066)).boolEnum () ;
          if (kBoolTrue == test_7) {
            temp_6 = var_falseBranchMinDuration_3158 ;
          }else if (kBoolFalse == test_7) {
            temp_6 = var_trueBranchMinDuration_3066 ;
          }
          outArgument_outMin = temp_6 ;
          GALGAS_uint temp_8 ;
          const enumGalgasBool test_9 = GALGAS_bool (ComparisonKind::greaterThan, var_falseBranchMaxDuration_3206.objectCompare (var_trueBranchMaxDuration_3112)).boolEnum () ;
          if (kBoolTrue == test_9) {
            temp_8 = var_falseBranchMaxDuration_3206 ;
          }else if (kBoolFalse == test_9) {
            temp_8 = var_trueBranchMaxDuration_3112 ;
          }
          outArgument_outMax = temp_8 ;
        }
      }
      if (kBoolFalse == test_4) {
        GALGAS_uint var_trueBranchMinDuration_3511 = var_trueMin_2727.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 97)) ;
        GALGAS_uint var_trueBranchMaxDuration_3557 = var_trueMax_2740.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 98)) ;
        GALGAS_uint var_falseBranchMinDuration_3603 = var_falseMin_2840.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 99)) ;
        GALGAS_uint var_falseBranchMaxDuration_3651 = var_falseMax_2854.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 100)) ;
        GALGAS_uint temp_10 ;
        const enumGalgasBool test_11 = GALGAS_bool (ComparisonKind::lowerThan, var_falseBranchMinDuration_3603.objectCompare (var_trueBranchMinDuration_3511)).boolEnum () ;
        if (kBoolTrue == test_11) {
          temp_10 = var_falseBranchMinDuration_3603 ;
        }else if (kBoolFalse == test_11) {
          temp_10 = var_trueBranchMinDuration_3511 ;
        }
        outArgument_outMin = temp_10 ;
        GALGAS_uint temp_12 ;
        const enumGalgasBool test_13 = GALGAS_bool (ComparisonKind::greaterThan, var_falseBranchMaxDuration_3651.objectCompare (var_trueBranchMaxDuration_3557)).boolEnum () ;
        if (kBoolTrue == test_13) {
          temp_12 = var_falseBranchMaxDuration_3651 ;
        }else if (kBoolFalse == test_13) {
          temp_12 = var_trueBranchMaxDuration_3557 ;
        }
        outArgument_outMax = temp_12 ;
      }
    }
  }
  if (kBoolFalse == test_2) {
    outArgument_outMin = GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 105)) ;
    outArgument_outMax = GALGAS_uint (uint32_t (0U)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18RegisterComparisonTerminator terminatorMinMaxDuration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_RegisterComparisonTerminator::method_terminatorMinMaxDuration (const GALGAS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                                    const GALGAS_string constinArgument_inNextLabel,
                                                                                    GALGAS_uint & outArgument_outMin,
                                                                                    GALGAS_uint & outArgument_outMax,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_trueMin_4414 ;
  GALGAS_uint var_trueMax_4427 ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  callExtensionMethod_duration ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inExploredBlockMap, constinArgument_inNextLabel, var_trueMin_4414, var_trueMax_4427, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 118)) ;
  GALGAS_uint var_falseMin_4536 ;
  GALGAS_uint var_falseMax_4550 ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_1 = this ;
  callExtensionMethod_duration ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inExploredBlockMap, constinArgument_inNextLabel, var_falseMin_4536, var_falseMax_4550, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 119)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    GALGAS_bool test_3 = GALGAS_bool (ComparisonKind::lowerOrEqual, var_trueMin_4414.objectCompare (var_trueMax_4427)) ;
    if (kBoolTrue == test_3.boolEnum ()) {
      test_3 = GALGAS_bool (ComparisonKind::lowerOrEqual, var_falseMin_4536.objectCompare (var_falseMax_4550)) ;
    }
    test_2 = test_3.boolEnum () ;
    if (kBoolTrue == test_2) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_pic_31__38_RegisterComparisonTerminator temp_5 = this ;
        test_4 = GALGAS_bool (ComparisonKind::equal, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_5.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 121)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_uint var_trueBranchMinDuration_4762 = var_trueMin_4414.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 122)) ;
          GALGAS_uint var_trueBranchMaxDuration_4808 = var_trueMax_4427.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 123)) ;
          GALGAS_uint var_falseBranchMinDuration_4854 = var_falseMin_4536.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 124)) ;
          GALGAS_uint var_falseBranchMaxDuration_4902 = var_falseMax_4550.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 125)) ;
          GALGAS_uint temp_6 ;
          const enumGalgasBool test_7 = GALGAS_bool (ComparisonKind::lowerThan, var_falseBranchMinDuration_4854.objectCompare (var_trueBranchMinDuration_4762)).boolEnum () ;
          if (kBoolTrue == test_7) {
            temp_6 = var_falseBranchMinDuration_4854 ;
          }else if (kBoolFalse == test_7) {
            temp_6 = var_trueBranchMinDuration_4762 ;
          }
          outArgument_outMin = temp_6 ;
          GALGAS_uint temp_8 ;
          const enumGalgasBool test_9 = GALGAS_bool (ComparisonKind::greaterThan, var_falseBranchMaxDuration_4902.objectCompare (var_trueBranchMaxDuration_4808)).boolEnum () ;
          if (kBoolTrue == test_9) {
            temp_8 = var_falseBranchMaxDuration_4902 ;
          }else if (kBoolFalse == test_9) {
            temp_8 = var_trueBranchMaxDuration_4808 ;
          }
          outArgument_outMax = temp_8 ;
        }
      }
      if (kBoolFalse == test_4) {
        GALGAS_uint var_trueBranchMinDuration_5207 = var_trueMin_4414.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 129)) ;
        GALGAS_uint var_trueBranchMaxDuration_5253 = var_trueMax_4427.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 130)) ;
        GALGAS_uint var_falseBranchMinDuration_5299 = var_falseMin_4536.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 131)) ;
        GALGAS_uint var_falseBranchMaxDuration_5347 = var_falseMax_4550.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 132)) ;
        GALGAS_uint temp_10 ;
        const enumGalgasBool test_11 = GALGAS_bool (ComparisonKind::lowerThan, var_falseBranchMinDuration_5299.objectCompare (var_trueBranchMinDuration_5207)).boolEnum () ;
        if (kBoolTrue == test_11) {
          temp_10 = var_falseBranchMinDuration_5299 ;
        }else if (kBoolFalse == test_11) {
          temp_10 = var_trueBranchMinDuration_5207 ;
        }
        outArgument_outMin = temp_10 ;
        GALGAS_uint temp_12 ;
        const enumGalgasBool test_13 = GALGAS_bool (ComparisonKind::greaterThan, var_falseBranchMaxDuration_5347.objectCompare (var_trueBranchMaxDuration_5253)).boolEnum () ;
        if (kBoolTrue == test_13) {
          temp_12 = var_falseBranchMaxDuration_5347 ;
        }else if (kBoolFalse == test_13) {
          temp_12 = var_trueBranchMaxDuration_5253 ;
        }
        outArgument_outMax = temp_12 ;
      }
    }
  }
  if (kBoolFalse == test_2) {
    outArgument_outMin = GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 137)) ;
    outArgument_outMax = GALGAS_uint (uint32_t (0U)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18BitTestTerminator terminatorMinMaxDuration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_BitTestTerminator::method_terminatorMinMaxDuration (const GALGAS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                         const GALGAS_string constinArgument_inNextLabel,
                                                                         GALGAS_uint & outArgument_outMin,
                                                                         GALGAS_uint & outArgument_outMax,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_trueMin_6099 ;
  GALGAS_uint var_trueMax_6112 ;
  const GALGAS_pic_31__38_BitTestTerminator temp_0 = this ;
  callExtensionMethod_duration ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inExploredBlockMap, constinArgument_inNextLabel, var_trueMin_6099, var_trueMax_6112, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 150)) ;
  GALGAS_uint var_falseMin_6221 ;
  GALGAS_uint var_falseMax_6235 ;
  const GALGAS_pic_31__38_BitTestTerminator temp_1 = this ;
  callExtensionMethod_duration ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inExploredBlockMap, constinArgument_inNextLabel, var_falseMin_6221, var_falseMax_6235, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 151)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    GALGAS_bool test_3 = GALGAS_bool (ComparisonKind::lowerOrEqual, var_trueMin_6099.objectCompare (var_trueMax_6112)) ;
    if (kBoolTrue == test_3.boolEnum ()) {
      test_3 = GALGAS_bool (ComparisonKind::lowerOrEqual, var_falseMin_6221.objectCompare (var_falseMax_6235)) ;
    }
    test_2 = test_3.boolEnum () ;
    if (kBoolTrue == test_2) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_pic_31__38_BitTestTerminator temp_5 = this ;
        test_4 = GALGAS_bool (ComparisonKind::equal, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_5.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 153)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_uint var_trueBranchMinDuration_6447 = var_trueMin_6099.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 154)) ;
          GALGAS_uint var_trueBranchMaxDuration_6493 = var_trueMax_6112.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 155)) ;
          GALGAS_uint var_falseBranchMinDuration_6539 = var_falseMin_6221.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 156)) ;
          GALGAS_uint var_falseBranchMaxDuration_6587 = var_falseMax_6235.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 157)) ;
          GALGAS_uint temp_6 ;
          const enumGalgasBool test_7 = GALGAS_bool (ComparisonKind::lowerThan, var_falseBranchMinDuration_6539.objectCompare (var_trueBranchMinDuration_6447)).boolEnum () ;
          if (kBoolTrue == test_7) {
            temp_6 = var_falseBranchMinDuration_6539 ;
          }else if (kBoolFalse == test_7) {
            temp_6 = var_trueBranchMinDuration_6447 ;
          }
          outArgument_outMin = temp_6 ;
          GALGAS_uint temp_8 ;
          const enumGalgasBool test_9 = GALGAS_bool (ComparisonKind::greaterThan, var_falseBranchMaxDuration_6587.objectCompare (var_trueBranchMaxDuration_6493)).boolEnum () ;
          if (kBoolTrue == test_9) {
            temp_8 = var_falseBranchMaxDuration_6587 ;
          }else if (kBoolFalse == test_9) {
            temp_8 = var_trueBranchMaxDuration_6493 ;
          }
          outArgument_outMax = temp_8 ;
        }
      }
      if (kBoolFalse == test_4) {
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          const GALGAS_pic_31__38_BitTestTerminator temp_11 = this ;
          test_10 = GALGAS_bool (ComparisonKind::equal, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_11.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inNextLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 160)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_10) {
            GALGAS_uint var_falseBranchMinDuration_7014 = var_falseMin_6221.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 161)) ;
            GALGAS_uint var_falseBranchMaxDuration_7062 = var_falseMax_6235.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 162)) ;
            GALGAS_uint var_trueBranchMinDuration_7110 = var_trueMin_6099.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 163)) ;
            GALGAS_uint var_trueBranchMaxDuration_7156 = var_trueMax_6112.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 164)) ;
            GALGAS_uint temp_12 ;
            const enumGalgasBool test_13 = GALGAS_bool (ComparisonKind::lowerThan, var_falseBranchMinDuration_7014.objectCompare (var_trueBranchMinDuration_7110)).boolEnum () ;
            if (kBoolTrue == test_13) {
              temp_12 = var_falseBranchMinDuration_7014 ;
            }else if (kBoolFalse == test_13) {
              temp_12 = var_trueBranchMinDuration_7110 ;
            }
            outArgument_outMin = temp_12 ;
            GALGAS_uint temp_14 ;
            const enumGalgasBool test_15 = GALGAS_bool (ComparisonKind::greaterThan, var_falseBranchMaxDuration_7062.objectCompare (var_trueBranchMaxDuration_7156)).boolEnum () ;
            if (kBoolTrue == test_15) {
              temp_14 = var_falseBranchMaxDuration_7062 ;
            }else if (kBoolFalse == test_15) {
              temp_14 = var_trueBranchMaxDuration_7156 ;
            }
            outArgument_outMax = temp_14 ;
          }
        }
        if (kBoolFalse == test_10) {
          GALGAS_uint var_trueBranchMinDuration_7459 = var_trueMin_6099.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 168)) ;
          GALGAS_uint var_trueBranchMaxDuration_7505 = var_trueMax_6112.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 169)) ;
          GALGAS_uint var_falseBranchMinDuration_7551 = var_falseMin_6221.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 170)) ;
          GALGAS_uint var_falseBranchMaxDuration_7599 = var_falseMax_6235.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 171)) ;
          GALGAS_uint temp_16 ;
          const enumGalgasBool test_17 = GALGAS_bool (ComparisonKind::lowerThan, var_trueBranchMinDuration_7459.objectCompare (var_falseBranchMinDuration_7551)).boolEnum () ;
          if (kBoolTrue == test_17) {
            temp_16 = var_trueBranchMinDuration_7459 ;
          }else if (kBoolFalse == test_17) {
            temp_16 = var_falseBranchMinDuration_7551 ;
          }
          outArgument_outMin = temp_16 ;
          GALGAS_uint temp_18 ;
          const enumGalgasBool test_19 = GALGAS_bool (ComparisonKind::greaterThan, var_trueBranchMaxDuration_7505.objectCompare (var_falseBranchMaxDuration_7599)).boolEnum () ;
          if (kBoolTrue == test_19) {
            temp_18 = var_trueBranchMaxDuration_7505 ;
          }else if (kBoolFalse == test_19) {
            temp_18 = var_falseBranchMaxDuration_7599 ;
          }
          outArgument_outMax = temp_18 ;
        }
      }
    }
  }
  if (kBoolFalse == test_2) {
    outArgument_outMin = GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 176)) ;
    outArgument_outMax = GALGAS_uint (uint32_t (0U)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ConditionalJumpTerminator terminatorMinMaxDuration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ConditionalJumpTerminator::method_terminatorMinMaxDuration (const GALGAS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                                  const GALGAS_string constinArgument_inNextLabel,
                                                                                  GALGAS_uint & outArgument_outMin,
                                                                                  GALGAS_uint & outArgument_outMax,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_1 = this ;
    GALGAS_bool test_2 = constinArgument_inExploredBlockMap.getter_hasKey (temp_1.readProperty_mTargetLabelWhenTrue ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 189)) ;
    if (kBoolTrue == test_2.boolEnum ()) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_3 = this ;
      test_2 = constinArgument_inExploredBlockMap.getter_hasKey (temp_3.readProperty_mTargetLabelWhenFalse ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 189)) ;
    }
    test_0 = test_2.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_uint var_trueMin_8465 ;
      GALGAS_uint var_trueMax_8478 ;
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
      constinArgument_inExploredBlockMap.method_searchKey (temp_4.readProperty_mTargetLabelWhenTrue (), var_trueMin_8465, var_trueMax_8478, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 190)) ;
      GALGAS_uint var_falseMin_8554 ;
      GALGAS_uint var_falseMax_8568 ;
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_5 = this ;
      constinArgument_inExploredBlockMap.method_searchKey (temp_5.readProperty_mTargetLabelWhenFalse (), var_falseMin_8554, var_falseMax_8568, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 191)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_7 = this ;
        test_6 = GALGAS_bool (ComparisonKind::equal, temp_7.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (constinArgument_inNextLabel)).boolEnum () ;
        if (kBoolTrue == test_6) {
          GALGAS_uint var_trueBranchMinDuration_8678 = var_trueMin_8465.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 193)) ;
          GALGAS_uint var_trueBranchMaxDuration_8724 = var_trueMax_8478.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 194)) ;
          GALGAS_uint var_falseBranchMinDuration_8770 = var_falseMin_8554.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 195)) ;
          GALGAS_uint var_falseBranchMaxDuration_8818 = var_falseMax_8568.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 196)) ;
          GALGAS_uint temp_8 ;
          const enumGalgasBool test_9 = GALGAS_bool (ComparisonKind::lowerThan, var_trueBranchMinDuration_8678.objectCompare (var_falseBranchMinDuration_8770)).boolEnum () ;
          if (kBoolTrue == test_9) {
            temp_8 = var_trueBranchMinDuration_8678 ;
          }else if (kBoolFalse == test_9) {
            temp_8 = var_falseBranchMinDuration_8770 ;
          }
          outArgument_outMin = temp_8 ;
          GALGAS_uint temp_10 ;
          const enumGalgasBool test_11 = GALGAS_bool (ComparisonKind::greaterThan, var_trueBranchMaxDuration_8724.objectCompare (var_falseBranchMaxDuration_8818)).boolEnum () ;
          if (kBoolTrue == test_11) {
            temp_10 = var_trueBranchMaxDuration_8724 ;
          }else if (kBoolFalse == test_11) {
            temp_10 = var_falseBranchMaxDuration_8818 ;
          }
          outArgument_outMax = temp_10 ;
        }
      }
      if (kBoolFalse == test_6) {
        enumGalgasBool test_12 = kBoolTrue ;
        if (kBoolTrue == test_12) {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_13 = this ;
          test_12 = GALGAS_bool (ComparisonKind::equal, temp_13.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (constinArgument_inNextLabel)).boolEnum () ;
          if (kBoolTrue == test_12) {
            GALGAS_uint var_falseBranchMinDuration_9209 = var_falseMin_8554.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 200)) ;
            GALGAS_uint var_falseBranchMaxDuration_9257 = var_falseMax_8568.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 201)) ;
            GALGAS_uint var_trueBranchMinDuration_9305 = var_trueMin_8465.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 202)) ;
            GALGAS_uint var_trueBranchMaxDuration_9351 = var_trueMax_8478.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 203)) ;
            GALGAS_uint temp_14 ;
            const enumGalgasBool test_15 = GALGAS_bool (ComparisonKind::lowerThan, var_trueBranchMinDuration_9305.objectCompare (var_falseBranchMinDuration_9209)).boolEnum () ;
            if (kBoolTrue == test_15) {
              temp_14 = var_trueBranchMinDuration_9305 ;
            }else if (kBoolFalse == test_15) {
              temp_14 = var_falseBranchMinDuration_9209 ;
            }
            outArgument_outMin = temp_14 ;
            GALGAS_uint temp_16 ;
            const enumGalgasBool test_17 = GALGAS_bool (ComparisonKind::greaterThan, var_trueBranchMaxDuration_9351.objectCompare (var_falseBranchMaxDuration_9257)).boolEnum () ;
            if (kBoolTrue == test_17) {
              temp_16 = var_trueBranchMaxDuration_9351 ;
            }else if (kBoolFalse == test_17) {
              temp_16 = var_falseBranchMaxDuration_9257 ;
            }
            outArgument_outMax = temp_16 ;
          }
        }
        if (kBoolFalse == test_12) {
          GALGAS_uint var_trueBranchMinDuration_9654 = var_trueMin_8465.add_operation (GALGAS_uint (uint32_t (3U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 207)) ;
          GALGAS_uint var_trueBranchMaxDuration_9700 = var_trueMax_8478.add_operation (GALGAS_uint (uint32_t (3U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 208)) ;
          GALGAS_uint var_falseBranchMinDuration_9746 = var_falseMin_8554.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 209)) ;
          GALGAS_uint var_falseBranchMaxDuration_9794 = var_falseMax_8568.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 210)) ;
          GALGAS_uint temp_18 ;
          const enumGalgasBool test_19 = GALGAS_bool (ComparisonKind::lowerThan, var_trueBranchMinDuration_9654.objectCompare (var_falseBranchMinDuration_9746)).boolEnum () ;
          if (kBoolTrue == test_19) {
            temp_18 = var_trueBranchMinDuration_9654 ;
          }else if (kBoolFalse == test_19) {
            temp_18 = var_falseBranchMinDuration_9746 ;
          }
          outArgument_outMin = temp_18 ;
          GALGAS_uint temp_20 ;
          const enumGalgasBool test_21 = GALGAS_bool (ComparisonKind::greaterThan, var_trueBranchMaxDuration_9700.objectCompare (var_falseBranchMaxDuration_9794)).boolEnum () ;
          if (kBoolTrue == test_21) {
            temp_20 = var_trueBranchMaxDuration_9700 ;
          }else if (kBoolFalse == test_21) {
            temp_20 = var_falseBranchMaxDuration_9794 ;
          }
          outArgument_outMax = temp_20 ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outMin = GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 215)) ;
    outArgument_outMax = GALGAS_uint (uint32_t (0U)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18IncDecRegisterTerminator terminatorMinMaxDuration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_IncDecRegisterTerminator::method_terminatorMinMaxDuration (const GALGAS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                                 const GALGAS_string constinArgument_inNextLabel,
                                                                                 GALGAS_uint & outArgument_outMin,
                                                                                 GALGAS_uint & outArgument_outMax,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_trueMin_10554 ;
  GALGAS_uint var_trueMax_10567 ;
  const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_0 = this ;
  callExtensionMethod_duration ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inExploredBlockMap, constinArgument_inNextLabel, var_trueMin_10554, var_trueMax_10567, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 228)) ;
  GALGAS_uint var_falseMin_10676 ;
  GALGAS_uint var_falseMax_10690 ;
  const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_1 = this ;
  callExtensionMethod_duration ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inExploredBlockMap, constinArgument_inNextLabel, var_falseMin_10676, var_falseMax_10690, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 229)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    GALGAS_bool test_3 = GALGAS_bool (ComparisonKind::lowerOrEqual, var_trueMin_10554.objectCompare (var_trueMax_10567)) ;
    if (kBoolTrue == test_3.boolEnum ()) {
      test_3 = GALGAS_bool (ComparisonKind::lowerOrEqual, var_falseMin_10676.objectCompare (var_falseMax_10690)) ;
    }
    test_2 = test_3.boolEnum () ;
    if (kBoolTrue == test_2) {
      enumGalgasBool test_4 = kBoolTrue ;
      if (kBoolTrue == test_4) {
        const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_5 = this ;
        test_4 = GALGAS_bool (ComparisonKind::equal, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_5.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 231)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
        if (kBoolTrue == test_4) {
          GALGAS_uint var_trueBranchMinDuration_10902 = var_trueMin_10554.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 232)) ;
          GALGAS_uint var_trueBranchMaxDuration_10948 = var_trueMax_10567.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 233)) ;
          GALGAS_uint var_falseBranchMinDuration_10994 = var_falseMin_10676.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 234)) ;
          GALGAS_uint var_falseBranchMaxDuration_11042 = var_falseMax_10690.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 235)) ;
          GALGAS_uint temp_6 ;
          const enumGalgasBool test_7 = GALGAS_bool (ComparisonKind::lowerThan, var_trueBranchMinDuration_10902.objectCompare (var_falseBranchMinDuration_10994)).boolEnum () ;
          if (kBoolTrue == test_7) {
            temp_6 = var_trueBranchMinDuration_10902 ;
          }else if (kBoolFalse == test_7) {
            temp_6 = var_falseBranchMinDuration_10994 ;
          }
          outArgument_outMin = temp_6 ;
          GALGAS_uint temp_8 ;
          const enumGalgasBool test_9 = GALGAS_bool (ComparisonKind::greaterThan, var_trueBranchMaxDuration_10948.objectCompare (var_falseBranchMaxDuration_11042)).boolEnum () ;
          if (kBoolTrue == test_9) {
            temp_8 = var_trueBranchMaxDuration_10948 ;
          }else if (kBoolFalse == test_9) {
            temp_8 = var_falseBranchMaxDuration_11042 ;
          }
          outArgument_outMax = temp_8 ;
        }
      }
      if (kBoolFalse == test_4) {
        enumGalgasBool test_10 = kBoolTrue ;
        if (kBoolTrue == test_10) {
          const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_11 = this ;
          test_10 = GALGAS_bool (ComparisonKind::equal, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_11.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inNextLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 238)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
          if (kBoolTrue == test_10) {
            GALGAS_uint var_falseBranchMinDuration_11469 = var_falseMin_10676.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 239)) ;
            GALGAS_uint var_falseBranchMaxDuration_11517 = var_falseMax_10690.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 240)) ;
            GALGAS_uint var_trueBranchMinDuration_11565 = var_trueMin_10554.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 241)) ;
            GALGAS_uint var_trueBranchMaxDuration_11611 = var_trueMax_10567.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 242)) ;
            GALGAS_uint temp_12 ;
            const enumGalgasBool test_13 = GALGAS_bool (ComparisonKind::lowerThan, var_falseBranchMinDuration_11469.objectCompare (var_trueBranchMinDuration_11565)).boolEnum () ;
            if (kBoolTrue == test_13) {
              temp_12 = var_falseBranchMinDuration_11469 ;
            }else if (kBoolFalse == test_13) {
              temp_12 = var_trueBranchMinDuration_11565 ;
            }
            outArgument_outMin = temp_12 ;
            GALGAS_uint temp_14 ;
            const enumGalgasBool test_15 = GALGAS_bool (ComparisonKind::greaterThan, var_falseBranchMaxDuration_11517.objectCompare (var_trueBranchMaxDuration_11611)).boolEnum () ;
            if (kBoolTrue == test_15) {
              temp_14 = var_falseBranchMaxDuration_11517 ;
            }else if (kBoolFalse == test_15) {
              temp_14 = var_trueBranchMaxDuration_11611 ;
            }
            outArgument_outMax = temp_14 ;
          }
        }
        if (kBoolFalse == test_10) {
          GALGAS_uint var_trueBranchMinDuration_11914 = var_trueMin_10554.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 246)) ;
          GALGAS_uint var_trueBranchMaxDuration_11960 = var_trueMax_10567.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 247)) ;
          GALGAS_uint var_falseBranchMinDuration_12006 = var_falseMin_10676.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 248)) ;
          GALGAS_uint var_falseBranchMaxDuration_12054 = var_falseMax_10690.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 249)) ;
          GALGAS_uint temp_16 ;
          const enumGalgasBool test_17 = GALGAS_bool (ComparisonKind::lowerThan, var_trueBranchMinDuration_11914.objectCompare (var_falseBranchMinDuration_12006)).boolEnum () ;
          if (kBoolTrue == test_17) {
            temp_16 = var_trueBranchMinDuration_11914 ;
          }else if (kBoolFalse == test_17) {
            temp_16 = var_falseBranchMinDuration_12006 ;
          }
          outArgument_outMin = temp_16 ;
          GALGAS_uint temp_18 ;
          const enumGalgasBool test_19 = GALGAS_bool (ComparisonKind::greaterThan, var_trueBranchMaxDuration_11960.objectCompare (var_falseBranchMaxDuration_12054)).boolEnum () ;
          if (kBoolTrue == test_19) {
            temp_18 = var_trueBranchMaxDuration_11960 ;
          }else if (kBoolFalse == test_19) {
            temp_18 = var_falseBranchMaxDuration_12054 ;
          }
          outArgument_outMax = temp_18 ;
        }
      }
    }
  }
  if (kBoolFalse == test_2) {
    outArgument_outMin = GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 254)) ;
    outArgument_outMax = GALGAS_uint (uint32_t (0U)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedGotoTerminator terminatorMinMaxDuration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::method_terminatorMinMaxDuration (const GALGAS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                               const GALGAS_string /* constinArgument_inNextLabel */,
                                                                               GALGAS_uint & outArgument_outMin,
                                                                               GALGAS_uint & outArgument_outMax,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 267)) ;
  outArgument_outMax = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_bool var_solved_12765 = GALGAS_bool (true) ;
  const GALGAS_ipic_31__38_ComputedGotoTerminator temp_0 = this ;
  cEnumerator_lstringlist enumerator_12786 (temp_0.readProperty_mTargetLabels (), EnumerationOrder::up) ;
  bool bool_1 = var_solved_12765.isValidAndTrue () ;
  if (enumerator_12786.hasCurrentObject () && bool_1) {
    while (enumerator_12786.hasCurrentObject () && bool_1) {
      var_solved_12765 = constinArgument_inExploredBlockMap.getter_hasKey (enumerator_12786.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 272)) ;
      enumerator_12786.gotoNextObject () ;
      if (enumerator_12786.hasCurrentObject ()) {
        bool_1 = var_solved_12765.isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_solved_12765.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_ipic_31__38_ComputedGotoTerminator temp_3 = this ;
      cEnumerator_lstringlist enumerator_12925 (temp_3.readProperty_mTargetLabels (), EnumerationOrder::up) ;
      while (enumerator_12925.hasCurrentObject ()) {
        GALGAS_uint var_min_13007 ;
        GALGAS_uint var_max_13016 ;
        constinArgument_inExploredBlockMap.method_searchKey (enumerator_12925.current_mValue (HERE), var_min_13007, var_max_13016, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 277)) ;
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (ComparisonKind::lowerThan, var_min_13007.objectCompare (outArgument_outMin)).boolEnum () ;
          if (kBoolTrue == test_4) {
            outArgument_outMin = var_min_13007 ;
          }
        }
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = GALGAS_bool (ComparisonKind::greaterThan, var_max_13016.objectCompare (outArgument_outMax)).boolEnum () ;
          if (kBoolTrue == test_5) {
            outArgument_outMax = var_max_13016 ;
          }
        }
        enumerator_12925.gotoNextObject () ;
      }
      outArgument_outMin = outArgument_outMin.add_operation (GALGAS_uint (uint32_t (12U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 286)) ;
      outArgument_outMax = outArgument_outMax.add_operation (GALGAS_uint (uint32_t (12U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 287)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedRETLWTerminator terminatorMinMaxDuration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::method_terminatorMinMaxDuration (const GALGAS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                                                const GALGAS_string /* constinArgument_inNextLabel */,
                                                                                GALGAS_uint & outArgument_outMin,
                                                                                GALGAS_uint & outArgument_outMax,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint (uint32_t (11U)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().operator_not (SOURCE_FILE ("ipic18_duration_computations.galgas", 300)).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outMin.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 301)) ;
    }
  }
  outArgument_outMax = outArgument_outMin ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedBraTerminator terminatorMinMaxDuration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::method_terminatorMinMaxDuration (const GALGAS_blockDurationMap constinArgument_inExploredBlockMap,
                                                                              const GALGAS_string /* constinArgument_inNextLabel */,
                                                                              GALGAS_uint & outArgument_outMin,
                                                                              GALGAS_uint & outArgument_outMax,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 314)) ;
  outArgument_outMax = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_bool var_solved_14069 = GALGAS_bool (true) ;
  const GALGAS_ipic_31__38_ComputedBraTerminator temp_0 = this ;
  cEnumerator_lstringlist enumerator_14090 (temp_0.readProperty_mTargetLabels (), EnumerationOrder::up) ;
  bool bool_1 = var_solved_14069.isValidAndTrue () ;
  if (enumerator_14090.hasCurrentObject () && bool_1) {
    while (enumerator_14090.hasCurrentObject () && bool_1) {
      var_solved_14069 = constinArgument_inExploredBlockMap.getter_hasKey (enumerator_14090.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 319)) ;
      enumerator_14090.gotoNextObject () ;
      if (enumerator_14090.hasCurrentObject ()) {
        bool_1 = var_solved_14069.isValidAndTrue () ;
      }
    }
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = var_solved_14069.boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_ipic_31__38_ComputedBraTerminator temp_3 = this ;
      cEnumerator_lstringlist enumerator_14229 (temp_3.readProperty_mTargetLabels (), EnumerationOrder::up) ;
      while (enumerator_14229.hasCurrentObject ()) {
        GALGAS_uint var_min_14311 ;
        GALGAS_uint var_max_14320 ;
        constinArgument_inExploredBlockMap.method_searchKey (enumerator_14229.current_mValue (HERE), var_min_14311, var_max_14320, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 324)) ;
        enumGalgasBool test_4 = kBoolTrue ;
        if (kBoolTrue == test_4) {
          test_4 = GALGAS_bool (ComparisonKind::lowerThan, var_min_14311.objectCompare (outArgument_outMin)).boolEnum () ;
          if (kBoolTrue == test_4) {
            outArgument_outMin = var_min_14311 ;
          }
        }
        enumGalgasBool test_5 = kBoolTrue ;
        if (kBoolTrue == test_5) {
          test_5 = GALGAS_bool (ComparisonKind::greaterThan, var_max_14320.objectCompare (outArgument_outMax)).boolEnum () ;
          if (kBoolTrue == test_5) {
            outArgument_outMax = var_max_14320 ;
          }
        }
        enumerator_14229.gotoNextObject () ;
      }
      outArgument_outMin = outArgument_outMin.add_operation (GALGAS_uint (uint32_t (11U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 333)) ;
      outArgument_outMax = outArgument_outMax.add_operation (GALGAS_uint (uint32_t (11U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 334)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ReturnTerminator duration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ReturnTerminator::method_duration (const GALGAS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                         const GALGAS_string /* constinArgument_inNextLabel */,
                                                         GALGAS_uint & outArgument_outMin,
                                                         GALGAS_uint & outArgument_outMax,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint (uint32_t (2U)) ;
  outArgument_outMax = GALGAS_uint (uint32_t (2U)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18RetlwTerminator duration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetlwTerminator::method_duration (const GALGAS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                        const GALGAS_string /* constinArgument_inNextLabel */,
                                                        GALGAS_uint & outArgument_outMin,
                                                        GALGAS_uint & outArgument_outMax,
                                                        Compiler * /* inCompiler */
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint (uint32_t (2U)) ;
  outArgument_outMax = GALGAS_uint (uint32_t (2U)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18RetfieTerminator duration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetfieTerminator::method_duration (const GALGAS_blockDurationMap /* constinArgument_inExploredBlockMap */,
                                                         const GALGAS_string /* constinArgument_inNextLabel */,
                                                         GALGAS_uint & outArgument_outMin,
                                                         GALGAS_uint & outArgument_outMax,
                                                         Compiler * /* inCompiler */
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint (uint32_t (2U)) ;
  outArgument_outMax = GALGAS_uint (uint32_t (2U)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18JumpTerminator duration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_duration (const GALGAS_blockDurationMap constinArgument_inExploredBlockMap,
                                                       const GALGAS_string constinArgument_inNextLabel,
                                                       GALGAS_uint & outArgument_outMin,
                                                       GALGAS_uint & outArgument_outMax,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_JumpTerminator temp_1 = this ;
    test_0 = constinArgument_inExploredBlockMap.getter_hasKey (temp_1.readProperty_mLabel ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 392)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_uint var_min_16395 ;
      GALGAS_uint var_max_16404 ;
      const GALGAS_ipic_31__38_JumpTerminator temp_2 = this ;
      constinArgument_inExploredBlockMap.method_searchKey (temp_2.readProperty_mLabel (), var_min_16395, var_max_16404, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 393)) ;
      outArgument_outMin = var_min_16395 ;
      outArgument_outMax = var_max_16404 ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        const GALGAS_ipic_31__38_JumpTerminator temp_4 = this ;
        test_3 = GALGAS_bool (ComparisonKind::notEqual, temp_4.readProperty_mLabel ().readProperty_string ().objectCompare (constinArgument_inNextLabel)).boolEnum () ;
        if (kBoolTrue == test_3) {
          outArgument_outMin = outArgument_outMin.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 397)) ;
          outArgument_outMax = outArgument_outMax.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 398)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outMin = GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 401)) ;
    outArgument_outMax = GALGAS_uint (uint32_t (0U)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_TBLRD minMaxDuration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::method_minMaxDuration (GALGAS_blockDurationMap /* inArgument_inExploredBlockMap */,
                                                                                       GALGAS_uint & outArgument_outMin,
                                                                                       GALGAS_uint & outArgument_outMax,
                                                                                       Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint (uint32_t (2U)) ;
  outArgument_outMax = GALGAS_uint (uint32_t (2U)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_TBLWT minMaxDuration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::method_minMaxDuration (GALGAS_blockDurationMap /* inArgument_inExploredBlockMap */,
                                                                                       GALGAS_uint & outArgument_outMin,
                                                                                       GALGAS_uint & outArgument_outMax,
                                                                                       Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint (uint32_t (2U)) ;
  outArgument_outMax = GALGAS_uint (uint32_t (2U)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_MNOP minMaxDuration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::method_minMaxDuration (GALGAS_blockDurationMap /* inArgument_inExploredBlockMap */,
                                                                                      GALGAS_uint & outArgument_outMin,
                                                                                      GALGAS_uint & outArgument_outMax,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP temp_0 = this ;
  outArgument_outMin = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint () ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP temp_1 = this ;
  outArgument_outMax = temp_1.readProperty_mOccurrenceFactor ().readProperty_uint () ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_NOPBRA minMaxDuration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::method_minMaxDuration (GALGAS_blockDurationMap /* inArgument_inExploredBlockMap */,
                                                                                        GALGAS_uint & outArgument_outMin,
                                                                                        GALGAS_uint & outArgument_outMax,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA temp_0 = this ;
  outArgument_outMin = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().multiply_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 459)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA temp_1 = this ;
  outArgument_outMax = temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ().multiply_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 460)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_LFSR minMaxDuration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::method_minMaxDuration (GALGAS_blockDurationMap /* inArgument_inExploredBlockMap */,
                                                                                      GALGAS_uint & outArgument_outMin,
                                                                                      GALGAS_uint & outArgument_outMax,
                                                                                      Compiler * /* inCompiler */
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint (uint32_t (2U)) ;
  outArgument_outMax = GALGAS_uint (uint32_t (2U)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_MOVFF minMaxDuration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::method_minMaxDuration (GALGAS_blockDurationMap /* inArgument_inExploredBlockMap */,
                                                                                       GALGAS_uint & outArgument_outMin,
                                                                                       GALGAS_uint & outArgument_outMax,
                                                                                       Compiler * /* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outMin = GALGAS_uint (uint32_t (2U)) ;
  outArgument_outMax = GALGAS_uint (uint32_t (2U)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_JSR minMaxDuration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_JSR::method_minMaxDuration (GALGAS_blockDurationMap inArgument_inExploredBlockMap,
                                                                      GALGAS_uint & outArgument_outMin,
                                                                      GALGAS_uint & outArgument_outMax,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_1 = this ;
    test_0 = inArgument_inExploredBlockMap.getter_hasKey (temp_1.readProperty_mTargetLabel ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 492)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_2 = this ;
      inArgument_inExploredBlockMap.method_searchKey (temp_2.readProperty_mTargetLabel (), outArgument_outMin, outArgument_outMax, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 493)) ;
      outArgument_outMin = outArgument_outMin.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 494)) ;
      outArgument_outMax = outArgument_outMax.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 495)) ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outMin = GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_duration_computations.galgas", 497)) ;
    outArgument_outMax = GALGAS_uint (uint32_t (0U)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_condition_skip_instruction minMaxDuration'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::method_minMaxDuration (GALGAS_blockDurationMap inArgument_inExploredBlockMap,
                                                                                   GALGAS_uint & outArgument_outMin,
                                                                                   GALGAS_uint & outArgument_outMax,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction temp_0 = this ;
  callExtensionMethod_minMaxDuration ((cPtr_ipic_31__38_SequentialInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), inArgument_inExploredBlockMap, outArgument_outMin, outArgument_outMax, inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 509)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::lowerOrEqual, outArgument_outMin.objectCompare (outArgument_outMax)).boolEnum () ;
    if (kBoolTrue == test_1) {
      outArgument_outMin = outArgument_outMin.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 511)) ;
      outArgument_outMax = outArgument_outMax.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_duration_computations.galgas", 512)) ;
    }
  }
}
