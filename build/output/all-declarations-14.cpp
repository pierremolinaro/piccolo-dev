#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-14.h"

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_JSR analyzeSimpleInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_JSR::method_analyzeSimpleInstruction (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                          const GGS_routineMap constinArgument_inRoutineMap,
                                                                          const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                          const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                          const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                          GGS_uint & ioArgument_ioCurrentBank,
                                                                          const GGS_bool constinArgument_inShouldPreserveBSR,
                                                                          GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                          GGS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_isNoReturn_13968 ;
  GGS_uint var_requiredBank_13990 ;
  GGS_uint var_returnedBank_14014 ;
  GGS_bool var_preservesBank_14038 ;
  const GGS_pic_31__38_Instruction_5F_JSR temp_0 = this ;
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_13968, var_requiredBank_13990, var_returnedBank_14014, var_preservesBank_14038, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 382)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_13990.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 383)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_requiredBank_13990.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 383)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_pic_31__38_Instruction_5F_JSR temp_2 = this ;
      GGS_string var_errorMessage_14142 = GGS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 384)).add_operation (GGS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 384)).add_operation (var_requiredBank_13990.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 384)) ;
      var_errorMessage_14142.plusAssignOperation(GGS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 385)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 386)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          var_errorMessage_14142.plusAssignOperation(GGS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 387)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        var_errorMessage_14142.plusAssignOperation(GGS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 389)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 389)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 389)) ;
      }
      const GGS_pic_31__38_Instruction_5F_JSR temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_14142, fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 391)) ;
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = var_isNoReturn_13968.boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_pic_31__38_Instruction_5F_JSR temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("a \"noreturn\" routine should be called with a BRA, GOTO, Bcc or JUMP instruction"), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 394)) ;
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = var_preservesBank_14038.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 396)).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      ioArgument_ioCurrentBank = var_returnedBank_14014 ;
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        test_10 = constinArgument_inShouldPreserveBSR.boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          const GGS_pic_31__38_Instruction_5F_JSR temp_11 = this ;
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("the routine call should preserve bank selection"), fixItArray12  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 399)) ;
        }
      }
    }
  }
  const GGS_pic_31__38_Instruction_5F_JSR temp_13 = this ;
  const GGS_pic_31__38_Instruction_5F_JSR temp_14 = this ;
  const GGS_pic_31__38_Instruction_5F_JSR temp_15 = this ;
  outArgument_outInstruction = GGS_ipic_31__38__5F_intermediate_5F_JSR::init_21__21__21_ (temp_13.readProperty_mInstructionLocation (), temp_14.readProperty_mTargetLabel (), temp_15.readProperty_mKind (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_checkbank analyze'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_checkbank::method_analyze (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                               GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                               const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                               const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                               const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                               const GGS_constantMap /* constinArgument_inConstantMap */,
                                                               const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                               GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                               GGS_ipic_31__38_SequentialInstructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                               GGS_lstring & /* ioArgument_ioBlockLabel */,
                                                               GGS_string & /* ioArgument_ioListFileContents */,
                                                               GGS_uint & ioArgument_ioCurrentBank,
                                                               const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                               const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                               GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_pic_31__38_Instruction_5F_checkbank temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mBankIndex ().objectCompare (GGS_uint (uint32_t (15U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_pic_31__38_Instruction_5F_checkbank temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("Bank index should be <= 15"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 452)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 453)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_pic_31__38_Instruction_5F_checkbank temp_5 = this ;
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("checkbank fail: there is no selected bank"), fixItArray6  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 454)) ;
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        const GGS_pic_31__38_Instruction_5F_checkbank temp_8 = this ;
        test_7 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (temp_8.readProperty_mBankIndex ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_pic_31__38_Instruction_5F_checkbank temp_9 = this ;
          const GGS_pic_31__38_Instruction_5F_checkbank temp_10 = this ;
          GenericArray <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GGS_string ("checkbank fail: the selected bank is ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 456)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 456)).add_operation (GGS_string (", required bank is "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 456)).add_operation (temp_10.readProperty_mBankIndex ().getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 456)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 456)), fixItArray11  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 456)) ;
        }
      }
    }
  }
  const GGS_pic_31__38_Instruction_5F_checkbank temp_12 = this ;
  ioArgument_ioCurrentBank = temp_12.readProperty_mBankIndex () ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_checknobank analyze'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_checknobank::method_analyze (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                 GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                 const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                 const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                 const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                 const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                 const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                 GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                 GGS_ipic_31__38_SequentialInstructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                                 GGS_lstring & /* ioArgument_ioBlockLabel */,
                                                                 GGS_string & /* ioArgument_ioListFileContents */,
                                                                 GGS_uint & ioArgument_ioCurrentBank,
                                                                 const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                 const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                 GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 480)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_pic_31__38_Instruction_5F_checknobank temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("checknobank fail: the ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 481)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 481)).add_operation (GGS_string (" bank is selected"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 481)), fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 481)) ;
      ioArgument_ioCurrentBank = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 482)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18PiccoloSimpleInstruction analyze'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_PiccoloSimpleInstruction::method_analyze (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                               GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                               const GGS_routineMap constinArgument_inRoutineMap,
                                                               const GGS_registerTable constinArgument_inRegisterTable,
                                                               const GGS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                               const GGS_constantMap constinArgument_inConstantMap,
                                                               const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                               GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                               GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                               GGS_lstring & /* ioArgument_ioBlockLabel */,
                                                               GGS_string & /* ioArgument_ioListFileContents */,
                                                               GGS_uint & ioArgument_ioCurrentBank,
                                                               const GGS_bool constinArgument_inShouldPreserveBSR,
                                                               const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                               GGS_stringset & ioArgument_ioUsedRegisters,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38_SequentialInstruction var_instruction_18778 ;
  const GGS_pic_31__38_PiccoloSimpleInstruction temp_0 = this ;
  callExtensionMethod_analyzeSimpleInstruction ((cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_0.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_instruction_18778, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 504)) ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (var_instruction_18778, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 515)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 515)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_FOREVER analyze'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FOREVER::method_analyze (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                             GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                             const GGS_routineMap constinArgument_inRoutineMap,
                                                             const GGS_registerTable constinArgument_inRegisterTable,
                                                             const GGS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                             const GGS_constantMap constinArgument_inConstantMap,
                                                             const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                             GGS_uint & ioArgument_ioLocalLabelIndex,
                                                             GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                             GGS_lstring & ioArgument_ioBlockLabel,
                                                             GGS_string & ioArgument_ioListFileContents,
                                                             GGS_uint & ioArgument_ioCurrentBank,
                                                             const GGS_bool constinArgument_inShouldPreserveBSR,
                                                             const GGS_routineKind constinArgument_inRoutineKind,
                                                             GGS_stringset & ioArgument_ioUsedRegisters,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  switch (constinArgument_inRoutineKind.enumValue ()) {
  case GGS_routineKind::Enumeration::invalid:
    break ;
  case GGS_routineKind::Enumeration::enum_regularRoutine:
    {
      const GGS_pic_31__38_Instruction_5F_FOREVER temp_0 = this ;
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (temp_0.readProperty_mInstructionLocation (), GGS_string ("a regular routine does not accept the \"forever\" instruction"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 538)) ;
    }
    break ;
  case GGS_routineKind::Enumeration::enum_noReturnRoutine:
    break ;
  case GGS_routineKind::Enumeration::enum_interruptRoutine:
    {
      const GGS_pic_31__38_Instruction_5F_FOREVER temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("an interrupt routine does not accept the \"forever\" instruction"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 541)) ;
    }
    break ;
  }
  GGS_uint var_finalBank_19809 = ioArgument_ioCurrentBank ;
  const GGS_pic_31__38_Instruction_5F_FOREVER temp_4 = this ;
  GGS_lstring var_loopLabel_19862 = GGS_lstring::init_21__21_ (GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 545)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 545)), temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 546)) ;
  const GGS_pic_31__38_Instruction_5F_FOREVER temp_5 = this ;
  ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 549)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_5.readProperty_mInstructionLocation (), var_loopLabel_19862, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 552)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 553)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 548)) ;
  ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  ioArgument_ioBlockLabel = var_loopLabel_19862 ;
  {
  const GGS_pic_31__38_Instruction_5F_FOREVER temp_6 = this ;
  routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (temp_6.readProperty_mInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 559)) ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::equal, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_pic_31__38_Instruction_5F_FOREVER temp_8 = this ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mEndOfInstructionList (), GGS_string ("\"forever\" instruction list execution is endless"), fixItArray9  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 579)) ;
    }
  }
  if (GalgasBool::boolFalse == test_7) {
    const GGS_pic_31__38_Instruction_5F_FOREVER temp_10 = this ;
    ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 582)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_10.readProperty_mInstructionLocation (), var_loopLabel_19862, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 585)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 586)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 581)) ;
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank_19809)).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_pic_31__38_Instruction_5F_FOREVER temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mEndOfInstructionList (), GGS_string ("\"forever\" instruction list does not leave bank selection unchanged"), fixItArray13  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 592)) ;
    }
  }
  ioArgument_ioBlockLabel = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 595)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_nobanksel analyze'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_nobanksel::method_analyze (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                               GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                               const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                               const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                               const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                               const GGS_constantMap /* constinArgument_inConstantMap */,
                                                               const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                               GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                               GGS_ipic_31__38_SequentialInstructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                               GGS_lstring & /* ioArgument_ioBlockLabel */,
                                                               GGS_string & /* ioArgument_ioListFileContents */,
                                                               GGS_uint & ioArgument_ioCurrentBank,
                                                               const GGS_bool constinArgument_inShouldPreserveBSR,
                                                               const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                               GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inShouldPreserveBSR.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_pic_31__38_Instruction_5F_nobanksel temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("cannot use \"nobank\" here: bank selection should be preserved (use it in a \"banksave\" construct)"), fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 617)) ;
    }
  }
  ioArgument_ioCurrentBank = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 619)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_savebank analyze'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_savebank::method_analyze (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                              GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                              const GGS_routineMap constinArgument_inRoutineMap,
                                                              const GGS_registerTable constinArgument_inRegisterTable,
                                                              const GGS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                              const GGS_constantMap constinArgument_inConstantMap,
                                                              const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                              GGS_uint & ioArgument_ioLocalLabelIndex,
                                                              GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                              GGS_lstring & ioArgument_ioBlockLabel,
                                                              GGS_string & ioArgument_ioListFileContents,
                                                              GGS_uint & ioArgument_ioCurrentBank,
                                                              const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                              const GGS_routineKind constinArgument_inRoutineKind,
                                                              GGS_stringset & ioArgument_ioUsedRegisters,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_registerExpression var_BSRregister_23120 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("BSR"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 644)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 645)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 646)), inCompiler COMMA_HERE) ;
  GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_BSR_5F_IPICregisterDescription_23425 ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((cPtr_registerExpression *) var_BSRregister_23120.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_BSR_5F_IPICregisterDescription_23425, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 648)) ;
  GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_save_5F_IPICregisterDescription_23719 ;
  const GGS_pic_31__38_Instruction_5F_savebank temp_0 = this ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((cPtr_registerExpression *) temp_0.readProperty_mRegister ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_save_5F_IPICregisterDescription_23719, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 656)) ;
  const GGS_pic_31__38_Instruction_5F_savebank temp_1 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::init_21__21__21_ (temp_1.readProperty_mInstructionLocation (), var_BSR_5F_IPICregisterDescription_23425, var_save_5F_IPICregisterDescription_23719, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 669)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 664)) ;
  GGS_uint var_finalBank_24066 = ioArgument_ioCurrentBank ;
  {
  const GGS_pic_31__38_Instruction_5F_savebank temp_2 = this ;
  routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (temp_2.readProperty_mInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_finalBank_24066, GGS_bool (false), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 673)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::equal, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_pic_31__38_Instruction_5F_savebank temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mEndOfSaveBankInstruction (), GGS_string ("useless saving: execution does not reach the end of \"savebank\" instruction list"), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 692)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_savebank temp_6 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::init_21__21__21_ (temp_6.readProperty_mInstructionLocation (), var_save_5F_IPICregisterDescription_23719, var_BSR_5F_IPICregisterDescription_23425, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 700)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 695)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_repetitionStatique analyze'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_repetitionStatique::method_analyze (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                        GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                        const GGS_routineMap constinArgument_inRoutineMap,
                                                                        const GGS_registerTable constinArgument_inRegisterTable,
                                                                        const GGS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                        const GGS_constantMap constinArgument_inConstantMap,
                                                                        const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                        GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                        GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                        GGS_lstring & ioArgument_ioBlockLabel,
                                                                        GGS_string & ioArgument_ioListFileContents,
                                                                        GGS_uint & ioArgument_ioCurrentBank,
                                                                        const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                        const GGS_routineKind constinArgument_inRoutineKind,
                                                                        GGS_stringset & ioArgument_ioUsedRegisters,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_lowerBound_25669 ;
  const GGS_pic_31__38_Instruction_5F_repetitionStatique temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLowerBoundExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_lowerBound_25669, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 723)) ;
  GGS_sint_36__34_ var_upperBound_25779 ;
  const GGS_pic_31__38_Instruction_5F_repetitionStatique temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mUpperBoundExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_upperBound_25779, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 724)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::greaterThan, var_lowerBound_25669.objectCompare (var_upperBound_25779)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_pic_31__38_Instruction_5F_repetitionStatique temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mInstructionLocation (), GGS_string ("lower bound (").add_operation (var_lowerBound_25669.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 727)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 727)).add_operation (GGS_string (") greater then upper bound ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 727)).add_operation (var_upperBound_25779.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 727)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 727)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 727)), fixItArray4  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 727)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::greaterThan, var_upperBound_25779.substract_operation (var_lowerBound_25669, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 728)).objectCompare (GGS_sint_36__34_ (int64_t (16777215LL)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_pic_31__38_Instruction_5F_repetitionStatique temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mInstructionLocation (), GGS_string ("repeat count (").add_operation (var_upperBound_25779.substract_operation (var_lowerBound_25669, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)).add_operation (GGS_string (") too large (should be <= 0xFF_FFFF)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)) ;
      }
    }
  }
  GGS_uint var_finalBank_26220 = ioArgument_ioCurrentBank ;
  GGS_constantMap var_tempConstantMap_26252 = constinArgument_inConstantMap ;
  {
  const GGS_pic_31__38_Instruction_5F_repetitionStatique temp_8 = this ;
  var_tempConstantMap_26252.setter_insertKey (temp_8.readProperty_mConstantName (), var_lowerBound_25669, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 734)) ;
  }
  {
  const GGS_pic_31__38_Instruction_5F_repetitionStatique temp_9 = this ;
  routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (temp_9.readProperty_mInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, var_tempConstantMap_26252, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_finalBank_26220, GGS_bool (true), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 735)) ;
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = GGS_bool (ComparisonKind::equal, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_pic_31__38_Instruction_5F_repetitionStatique temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mEndOfInstruction (), GGS_string ("useless do: execution does not reach the end of enclosed instruction list"), fixItArray12  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 754)) ;
    }
  }
  GalgasBool test_13 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_13) {
    test_13 = GGS_bool (ComparisonKind::notEqual, var_finalBank_26220.objectCompare (ioArgument_ioCurrentBank)).boolEnum () ;
    if (GalgasBool::boolTrue == test_13) {
      const GGS_pic_31__38_Instruction_5F_repetitionStatique temp_14 = this ;
      GenericArray <FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_14.readProperty_mEndOfInstruction (), GGS_string ("enclosed instruction list should not modify bank selection"), fixItArray15  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 757)) ;
    }
  }
  GGS_sint_36__34_ var_idx_27084 = var_lowerBound_25669.add_operation (GGS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 760)) ;
  if (var_upperBound_25779.substract_operation (var_lowerBound_25669, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 761)).add_operation (GGS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 761)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 761)).isValid ()) {
    uint32_t variant_27107 = var_upperBound_25779.substract_operation (var_lowerBound_25669, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 761)).add_operation (GGS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 761)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 761)).uintValue () ;
    bool loop_27107 = true ;
    while (loop_27107) {
      GGS_bool test_16 = GGS_bool (ComparisonKind::lowerOrEqual, var_idx_27084.objectCompare (var_upperBound_25779)) ;
      if (GalgasBool::boolTrue == test_16.boolEnum ()) {
        test_16 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 761)).objectCompare (GGS_uint (uint32_t (0U)))) ;
      }
      loop_27107 = test_16.isValid () ;
      if (loop_27107) {
        loop_27107 = test_16.boolValue () ;
      }
      if (loop_27107 && (0 == variant_27107)) {
        loop_27107 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_build_block_representation.galgas", 761)) ;
      }
      if (loop_27107) {
        variant_27107 -= 1 ;
        GGS_constantMap var_constantMap_27213 = constinArgument_inConstantMap ;
        {
        const GGS_pic_31__38_Instruction_5F_repetitionStatique temp_17 = this ;
        var_constantMap_27213.setter_insertKey (temp_17.readProperty_mConstantName (), var_idx_27084, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)) ;
        }
        {
        const GGS_pic_31__38_Instruction_5F_repetitionStatique temp_18 = this ;
        routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (temp_18.readProperty_mInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, var_constantMap_27213, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, GGS_bool (true), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 764)) ;
        }
        var_idx_27084.plusAssignOperation(GGS_sint_36__34_ (int64_t (1LL)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 782)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_banksel analyze'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_banksel::method_analyze (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                             GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                             const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                             const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                             const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                             const GGS_constantMap /* constinArgument_inConstantMap */,
                                                             const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                             GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                             GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                             GGS_lstring & /* ioArgument_ioBlockLabel */,
                                                             GGS_string & /* ioArgument_ioListFileContents */,
                                                             GGS_uint & ioArgument_ioCurrentBank,
                                                             const GGS_bool constinArgument_inShouldPreserveBSR,
                                                             const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                             GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inShouldPreserveBSR.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_pic_31__38_Instruction_5F_banksel temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("cannot use \"banksel\" here: bank selection should be preserved (use \"banksave\" instruction)"), fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 805)) ;
    }
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_pic_31__38_Instruction_5F_banksel temp_4 = this ;
    test_3 = GGS_bool (ComparisonKind::greaterThan, temp_4.readProperty_mBankIndex ().readProperty_uint ().objectCompare (GGS_uint (uint32_t (15U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_pic_31__38_Instruction_5F_banksel temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mBankIndex ().readProperty_location (), GGS_string ("selected bank idx should be lower or equal to 15"), fixItArray6  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 808)) ;
      ioArgument_ioCurrentBank = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 809)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_pic_31__38_Instruction_5F_banksel temp_8 = this ;
      test_7 = GGS_bool (ComparisonKind::notEqual, temp_8.readProperty_mBankIndex ().readProperty_uint ().objectCompare (ioArgument_ioCurrentBank)).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        const GGS_pic_31__38_Instruction_5F_banksel temp_9 = this ;
        ioArgument_ioCurrentBank = temp_9.readProperty_mBankIndex ().readProperty_uint () ;
        const GGS_pic_31__38_Instruction_5F_banksel temp_10 = this ;
        const GGS_pic_31__38_Instruction_5F_banksel temp_11 = this ;
        ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::init_21__21_ (temp_10.readProperty_mInstructionLocation (), temp_11.readProperty_mBankIndex (), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 812)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 812)) ;
      }
    }
    if (GalgasBool::boolFalse == test_7) {
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        const GGS_pic_31__38_Instruction_5F_banksel temp_13 = this ;
        test_12 = temp_13.readProperty_mWarningOnUselessBanksel ().boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          const GGS_pic_31__38_Instruction_5F_banksel temp_14 = this ;
          GenericArray <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticWarning (temp_14.readProperty_mBankIndex ().readProperty_location (), GGS_string ("useless instruction: the bank ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 814)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 814)).add_operation (GGS_string (" is already selected"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 814)), fixItArray15  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 814)) ;
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_banksel_register analyze'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_banksel_5F_register::method_analyze (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                         GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                         const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                         const GGS_registerTable constinArgument_inRegisterTable,
                                                                         const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                         const GGS_constantMap constinArgument_inConstantMap,
                                                                         const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                         GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                         GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                         GGS_lstring & /* ioArgument_ioBlockLabel */,
                                                                         GGS_string & /* ioArgument_ioListFileContents */,
                                                                         GGS_uint & ioArgument_ioCurrentBank,
                                                                         const GGS_bool constinArgument_inShouldPreserveBSR,
                                                                         const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                         GGS_stringset & ioArgument_ioUsedRegisters,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inShouldPreserveBSR.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_pic_31__38_Instruction_5F_banksel_5F_register temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("cannot use \"banksel\" here: bank selection should be preserved (use \"banksave\" instruction)"), fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 838)) ;
    }
  }
  GGS_uint var_registerAddress_30196 ;
  const GGS_pic_31__38_Instruction_5F_banksel_5F_register temp_3 = this ;
  callExtensionMethod_getRegisterAddress ((cPtr_registerExpression *) temp_3.readProperty_mRegisterExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (false), ioArgument_ioUsedRegisters, var_registerAddress_30196, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 840)) ;
  GGS_uint var_newBank_30318 = var_registerAddress_30196.right_shift_operation (GGS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 848)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 848)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (var_newBank_30318)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      ioArgument_ioCurrentBank = var_newBank_30318 ;
      const GGS_pic_31__38_Instruction_5F_banksel_5F_register temp_5 = this ;
      const GGS_pic_31__38_Instruction_5F_banksel_5F_register temp_6 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::init_21__21_ (temp_5.readProperty_mInstructionLocation (), GGS_luint::init_21__21_ (var_newBank_30318, temp_6.readProperty_mRegisterExpression ().readProperty_mRegisterName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 855)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 851)) ;
    }
  }
  if (GalgasBool::boolFalse == test_4) {
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_pic_31__38_Instruction_5F_banksel_5F_register temp_8 = this ;
      test_7 = temp_8.readProperty_mWarningOnUselessBanksel ().boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        const GGS_pic_31__38_Instruction_5F_banksel_5F_register temp_9 = this ;
        GenericArray <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticWarning (temp_9.readProperty_mRegisterExpression ().readProperty_mRegisterName ().readProperty_location (), GGS_string ("useless instruction: the bank ").add_operation (var_newBank_30318.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 858)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 858)).add_operation (GGS_string (" is already selected"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 858)), fixItArray10  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 858)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_TBLRD analyzeSimpleInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_TBLRD::method_analyzeSimpleInstruction (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                            const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                            const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                            const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                            const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                            GGS_uint & /* ioArgument_ioCurrentBank */,
                                                                            const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                            GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                            GGS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_TBLRD temp_0 = this ;
  const GGS_pic_31__38_Instruction_5F_TBLRD temp_1 = this ;
  outArgument_outInstruction = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::init_21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mOption (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_TBLWT analyzeSimpleInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_TBLWT::method_analyzeSimpleInstruction (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                            const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                            const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                            const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                            const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                            GGS_uint & /* ioArgument_ioCurrentBank */,
                                                                            const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                            GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                            GGS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_TBLWT temp_0 = this ;
  const GGS_pic_31__38_Instruction_5F_TBLWT temp_1 = this ;
  outArgument_outInstruction = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::init_21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mOption (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_MNOP analyze'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_MNOP::method_analyze (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                          GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                          const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                          const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                          const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                          const GGS_constantMap /* constinArgument_inConstantMap */,
                                                          const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                          GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                          GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                          GGS_lstring & /* ioArgument_ioBlockLabel */,
                                                          GGS_string & /* ioArgument_ioListFileContents */,
                                                          GGS_uint & /* ioArgument_ioCurrentBank */,
                                                          const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                          const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                          GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_pic_31__38_Instruction_5F_MNOP temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ().objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_pic_31__38_Instruction_5F_MNOP temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mOccurrenceFactor ().readProperty_location (), GGS_string ("occurrence argument is zero: no generated code"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 918)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_MNOP temp_4 = this ;
  const GGS_pic_31__38_Instruction_5F_MNOP temp_5 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::init_21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mOccurrenceFactor (), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 925)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 921)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_NOPBRA analyze'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_NOPBRA::method_analyze (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                            GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                            const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                            const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                            const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                            const GGS_constantMap /* constinArgument_inConstantMap */,
                                                            const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                            GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                            GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                            GGS_lstring & /* ioArgument_ioBlockLabel */,
                                                            GGS_string & /* ioArgument_ioListFileContents */,
                                                            GGS_uint & /* ioArgument_ioCurrentBank */,
                                                            const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                            const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                            GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_pic_31__38_Instruction_5F_NOPBRA temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ().objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_pic_31__38_Instruction_5F_NOPBRA temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mOccurrenceFactor ().readProperty_location (), GGS_string ("occurrence argument is zero: no generated code"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 949)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_NOPBRA temp_4 = this ;
  const GGS_pic_31__38_Instruction_5F_NOPBRA temp_5 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::init_21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mOccurrenceFactor (), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 956)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 952)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_LTBLPTR analyze'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LTBLPTR::method_analyze (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                             GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                             const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                             const GGS_registerTable constinArgument_inRegisterTable,
                                                             const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                             const GGS_constantMap constinArgument_inConstantMap,
                                                             const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                             GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                             GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                             GGS_lstring & /* ioArgument_ioBlockLabel */,
                                                             GGS_string & /* ioArgument_ioListFileContents */,
                                                             GGS_uint & ioArgument_ioCurrentBank,
                                                             const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                             const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                             GGS_stringset & ioArgument_ioUsedRegisters,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_result_34820 ;
  const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mImmediatExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_34820, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 978)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::greaterThan, var_result_34820.objectCompare (GGS_sint_36__34_ (int64_t (16777215LL)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_result_34820.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 980)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("immediate value is evaluated as ").add_operation (var_result_34820.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 981)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 981)).add_operation (GGS_string (" (should be between 0 and 0xFF_FFFF)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 981)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 981)) ;
    }
  }
  GGS_uint var_address_35046 = var_result_34820.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 983)) ;
  const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_4 = this ;
  GGS_registerExpression var_TBLPTRU_35093 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("TBLPTRU"), temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 987)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 988)), inCompiler COMMA_HERE) ;
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_outIPICregisterDescription_35430 ;
  GGS_bitSliceTable joker_35461 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRU_35093.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_outIPICregisterDescription_35430, joker_35461, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 990)) ;
  GGS_uint var_upper_35502 = var_address_35046.right_shift_operation (GGS_bigint ("16", inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1000)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1000)) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::equal, var_upper_35502.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_6 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_6.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1004)), var_outIPICregisterDescription_35430, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1007)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1002)) ;
    }
  }
  if (GalgasBool::boolFalse == test_5) {
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      test_7 = GGS_bool (ComparisonKind::equal, var_upper_35502.objectCompare (GGS_uint (uint32_t (255U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_8 = this ;
        ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_8.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1012)), var_outIPICregisterDescription_35430, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1015)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1010)) ;
      }
    }
    if (GalgasBool::boolFalse == test_7) {
      const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_9 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_9.readProperty_mInstructionLocation (), GGS_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1020)), var_upper_35502, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1023)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1018)) ;
      const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_10 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_10.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1027)), var_outIPICregisterDescription_35430, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1030)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1025)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_11 = this ;
  GGS_registerExpression var_TBLPTRH_36471 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("TBLPTRH"), temp_11.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1036)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1037)), inCompiler COMMA_HERE) ;
  GGS_bitSliceTable joker_36795 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRH_36471.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_outIPICregisterDescription_35430, joker_36795, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1039)) ;
  GGS_uint var_high_36836 = var_address_35046.right_shift_operation (GGS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1049)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1049)).operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1049)) ;
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    test_12 = GGS_bool (ComparisonKind::equal, var_high_36836.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_13 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_13.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1053)), var_outIPICregisterDescription_35430, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1056)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1051)) ;
    }
  }
  if (GalgasBool::boolFalse == test_12) {
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      test_14 = GGS_bool (ComparisonKind::equal, var_high_36836.objectCompare (GGS_uint (uint32_t (255U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_15 = this ;
        ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_15.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1061)), var_outIPICregisterDescription_35430, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1064)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1059)) ;
      }
    }
    if (GalgasBool::boolFalse == test_14) {
      const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_16 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_16.readProperty_mInstructionLocation (), GGS_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1069)), var_high_36836, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1072)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1067)) ;
      const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_17 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_17.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1076)), var_outIPICregisterDescription_35430, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1079)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1074)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_18 = this ;
  GGS_registerExpression var_TBLPTRL_37808 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("TBLPTRL"), temp_18.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1085)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1086)), inCompiler COMMA_HERE) ;
  GGS_bitSliceTable joker_38131 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRL_37808.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_outIPICregisterDescription_35430, joker_38131, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1088)) ;
  GGS_uint var_low_38172 = var_address_35046.operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1098)) ;
  GalgasBool test_19 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_19) {
    test_19 = GGS_bool (ComparisonKind::equal, var_low_38172.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_19) {
      const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_20 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_20.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1102)), var_outIPICregisterDescription_35430, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1105)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1100)) ;
    }
  }
  if (GalgasBool::boolFalse == test_19) {
    GalgasBool test_21 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_21) {
      test_21 = GGS_bool (ComparisonKind::equal, var_low_38172.objectCompare (GGS_uint (uint32_t (255U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_21) {
        const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_22 = this ;
        ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_22.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1110)), var_outIPICregisterDescription_35430, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1113)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1108)) ;
      }
    }
    if (GalgasBool::boolFalse == test_21) {
      const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_23 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_23.readProperty_mInstructionLocation (), GGS_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1118)), var_low_38172, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1121)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1116)) ;
      const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_24 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_24.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1125)), var_outIPICregisterDescription_35430, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1128)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1123)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_LDATA16PTR analyze'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR::method_analyze (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                      GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                      const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                      const GGS_registerTable constinArgument_inRegisterTable,
                                                                      const GGS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                      const GGS_constantMap constinArgument_inConstantMap,
                                                                      const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                      GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                      GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                      GGS_lstring & /* ioArgument_ioBlockLabel */,
                                                                      GGS_string & /* ioArgument_ioListFileContents */,
                                                                      GGS_uint & ioArgument_ioCurrentBank,
                                                                      const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                      const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                      GGS_stringset & ioArgument_ioUsedRegisters,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uintlist var_data_39856 ;
  GGS_bool var_isData_38__39866 ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_0 = this ;
  constinArgument_inDataMap.method_searchKey (temp_0.readProperty_mDataName (), var_data_39856, var_isData_38__39866, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1152)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_isData_38__39866.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mDataName ().readProperty_location (), GGS_string ("this data is a byte array; use ldata8ptr"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1154)) ;
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_5 = this ;
    test_4 = GGS_bool (ComparisonKind::greaterOrEqual, temp_5.readProperty_mDataIndex ().readProperty_uint ().objectCompare (var_data_39856.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1157)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mDataIndex ().readProperty_location (), GGS_string ("index should be < ").add_operation (var_data_39856.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1158)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1158)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1158)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1158)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_8 = this ;
  GGS_registerExpression var_TBLPTRU_40126 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("TBLPTRU"), temp_8.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1163)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1164)), inCompiler COMMA_HERE) ;
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_outIPICregisterDescription_40463 ;
  GGS_bitSliceTable joker_40494 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRU_40126.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_outIPICregisterDescription_40463, joker_40494, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1166)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_9 = this ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_10 = this ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_11 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::init_21__21__21__21_ (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mDataName (), temp_11.readProperty_mDataIndex ().readProperty_uint ().multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1179)), GGS_uint (uint32_t (16U)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1182)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1176)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_12 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_12.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1186)), var_outIPICregisterDescription_40463, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1189)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1184)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_13 = this ;
  GGS_registerExpression var_TBLPTRH_40931 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("TBLPTRH"), temp_13.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1194)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1195)), inCompiler COMMA_HERE) ;
  GGS_bitSliceTable joker_41254 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRH_40931.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_outIPICregisterDescription_40463, joker_41254, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1197)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_14 = this ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_15 = this ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_16 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::init_21__21__21__21_ (temp_14.readProperty_mInstructionLocation (), temp_15.readProperty_mDataName (), temp_16.readProperty_mDataIndex ().readProperty_uint ().multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1210)), GGS_uint (uint32_t (8U)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1213)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1207)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_17 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_17.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1217)), var_outIPICregisterDescription_40463, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1220)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1215)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_18 = this ;
  GGS_registerExpression var_TBLPTRL_41689 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("TBLPTRL"), temp_18.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1225)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1226)), inCompiler COMMA_HERE) ;
  GGS_bitSliceTable joker_42013 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRL_41689.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_outIPICregisterDescription_40463, joker_42013, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1228)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_19 = this ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_20 = this ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_21 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::init_21__21__21__21_ (temp_19.readProperty_mInstructionLocation (), temp_20.readProperty_mDataName (), temp_21.readProperty_mDataIndex ().readProperty_uint ().multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1241)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1244)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1238)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_22 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_22.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1248)), var_outIPICregisterDescription_40463, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1251)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1246)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_LDATA8PTR analyze'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR::method_analyze (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                  GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                  const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                  const GGS_registerTable constinArgument_inRegisterTable,
                                                                  const GGS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                  const GGS_constantMap constinArgument_inConstantMap,
                                                                  const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                  GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                  GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                  GGS_lstring & /* ioArgument_ioBlockLabel */,
                                                                  GGS_string & /* ioArgument_ioListFileContents */,
                                                                  GGS_uint & ioArgument_ioCurrentBank,
                                                                  const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                  const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                  GGS_stringset & ioArgument_ioUsedRegisters,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uintlist var_data_43170 ;
  GGS_bool var_isData_38__43180 ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_0 = this ;
  constinArgument_inDataMap.method_searchKey (temp_0.readProperty_mDataName (), var_data_43170, var_isData_38__43180, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1274)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_isData_38__43180.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1275)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mDataName ().readProperty_location (), GGS_string ("this data is a 16-bit word array; use ldata16ptr"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1276)) ;
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_5 = this ;
    test_4 = GGS_bool (ComparisonKind::greaterOrEqual, temp_5.readProperty_mDataIndex ().readProperty_uint ().objectCompare (var_data_43170.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1279)).multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1279)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mDataIndex ().readProperty_location (), GGS_string ("index should be < ").add_operation (var_data_43170.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1280)).multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1280)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1280)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1280)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1280)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_8 = this ;
  GGS_registerExpression var_TBLPTRU_43464 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("TBLPTRU"), temp_8.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1285)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1286)), inCompiler COMMA_HERE) ;
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_outIPICregisterDescription_43801 ;
  GGS_bitSliceTable joker_43832 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRU_43464.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_outIPICregisterDescription_43801, joker_43832, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1288)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_9 = this ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_10 = this ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_11 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::init_21__21__21__21_ (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mDataName (), temp_11.readProperty_mDataIndex ().readProperty_uint (), GGS_uint (uint32_t (16U)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1304)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1298)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_12 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_12.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1308)), var_outIPICregisterDescription_43801, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1311)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1306)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_13 = this ;
  GGS_registerExpression var_TBLPTRH_44265 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("TBLPTRH"), temp_13.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1316)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1317)), inCompiler COMMA_HERE) ;
  GGS_bitSliceTable joker_44588 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRH_44265.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_outIPICregisterDescription_43801, joker_44588, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1319)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_14 = this ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_15 = this ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_16 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::init_21__21__21__21_ (temp_14.readProperty_mInstructionLocation (), temp_15.readProperty_mDataName (), temp_16.readProperty_mDataIndex ().readProperty_uint (), GGS_uint (uint32_t (8U)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1335)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1329)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_17 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_17.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1339)), var_outIPICregisterDescription_43801, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1342)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1337)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_18 = this ;
  GGS_registerExpression var_TBLPTRL_45019 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("TBLPTRL"), temp_18.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1347)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1348)), inCompiler COMMA_HERE) ;
  GGS_bitSliceTable joker_45343 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRL_45019.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_outIPICregisterDescription_43801, joker_45343, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1350)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_19 = this ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_20 = this ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_21 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::init_21__21__21__21_ (temp_19.readProperty_mInstructionLocation (), temp_20.readProperty_mDataName (), temp_21.readProperty_mDataIndex ().readProperty_uint (), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1366)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1360)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_22 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_22.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1370)), var_outIPICregisterDescription_43801, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1373)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1368)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_JUMP analyze'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_JUMP::method_analyze (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                          GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                          const GGS_routineMap constinArgument_inRoutineMap,
                                                          const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                          const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                          const GGS_constantMap /* constinArgument_inConstantMap */,
                                                          const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                          GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                          GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                          GGS_lstring & ioArgument_ioBlockLabel,
                                                          GGS_string & /* ioArgument_ioListFileContents */,
                                                          GGS_uint & ioArgument_ioCurrentBank,
                                                          const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                          const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                          GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_isNoReturn_46531 ;
  GGS_uint var_requiredBank_46553 ;
  const GGS_pic_31__38_Instruction_5F_JUMP temp_0 = this ;
  GGS_uint joker_46566 ; // Joker input parameter
  GGS_bool joker_46569 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_46531, var_requiredBank_46553, joker_46566, joker_46569, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1396)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_46553.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1397)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_requiredBank_46553.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1397)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_pic_31__38_Instruction_5F_JUMP temp_2 = this ;
      GGS_string var_errorMessage_46662 = GGS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1398)).add_operation (GGS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1398)).add_operation (var_requiredBank_46553.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1398)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1398)) ;
      var_errorMessage_46662.plusAssignOperation(GGS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1399)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1400)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          var_errorMessage_46662.plusAssignOperation(GGS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1401)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        var_errorMessage_46662.plusAssignOperation(GGS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1403)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1403)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1403)) ;
      }
      const GGS_pic_31__38_Instruction_5F_JUMP temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_46662, fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1405)) ;
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = var_isNoReturn_46531.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1407)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_pic_31__38_Instruction_5F_JUMP temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("a regular routine should be called with a RCALL, CALL or JSR instruction"), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1408)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_JUMP temp_9 = this ;
  const GGS_pic_31__38_Instruction_5F_JUMP temp_10 = this ;
  ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1412)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mTargetLabel (), GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1415)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1416)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1411)) ;
  ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  ioArgument_ioBlockLabel = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1421)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_computed_rcall analyze'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_computed_5F_rcall::method_analyze (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                       GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                       const GGS_routineMap constinArgument_inRoutineMap,
                                                                       const GGS_registerTable constinArgument_inRegisterTable,
                                                                       const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                       const GGS_constantMap constinArgument_inConstantMap,
                                                                       const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                       GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                       GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                       GGS_lstring & /* ioArgument_ioBlockLabel */,
                                                                       GGS_string & /* ioArgument_ioListFileContents */,
                                                                       GGS_uint & ioArgument_ioCurrentBank,
                                                                       const GGS_bool constinArgument_inShouldPreserveBSR,
                                                                       const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                       GGS_stringset & ioArgument_ioUsedRegisters,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_someReturnsBank_48274 = GGS_bool (false) ;
  GGS_uint var_returnedBankSelection_48310 = ioArgument_ioCurrentBank ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_rcall temp_0 = this ;
  UpEnumerator_lstringlist enumerator_48355 (temp_0.readProperty_mTargetLabels ()) ;
  while (enumerator_48355.hasCurrentObject ()) {
    GGS_bool var_isNoReturn_48436 ;
    GGS_uint var_requiredBank_48458 ;
    GGS_uint var_returnedBank_48482 ;
    GGS_bool var_preservesBank_48506 ;
    constinArgument_inRoutineMap.method_searchKey (enumerator_48355.current_mValue (HERE), var_isNoReturn_48436, var_requiredBank_48458, var_returnedBank_48482, var_preservesBank_48506, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1446)) ;
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_48458.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1447)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_requiredBank_48458.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1447)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GGS_string var_errorMessage_48614 = GGS_string ("the routine '").add_operation (enumerator_48355.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1448)).add_operation (GGS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1448)).add_operation (var_requiredBank_48458.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1448)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1448)) ;
        var_errorMessage_48614.plusAssignOperation(GGS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1449)) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1450)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            var_errorMessage_48614.plusAssignOperation(GGS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1451)) ;
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          var_errorMessage_48614.plusAssignOperation(GGS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1453)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1453)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1453)) ;
        }
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_48355.current_mValue (HERE).readProperty_location (), var_errorMessage_48614, fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1455)) ;
      }
    }
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = var_isNoReturn_48436.boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_48355.current_mValue (HERE).readProperty_location (), GGS_string ("for being named in a computed rcall, the '").add_operation (enumerator_48355.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1458)).add_operation (GGS_string ("' routine should be declared without the \"noreturn\" qualifier"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1458)), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1458)) ;
      }
    }
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = constinArgument_inShouldPreserveBSR.operator_and (var_preservesBank_48506.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1460)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1460)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_48355.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_48355.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1461)).add_operation (GGS_string ("' routine should preserved bank selection"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1461)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1461)) ;
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        test_8 = constinArgument_inShouldPreserveBSR.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1462)).operator_and (var_preservesBank_48506.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1462)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1462)).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = var_someReturnsBank_48274.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1463)).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              var_returnedBankSelection_48310 = var_returnedBank_48482 ;
              var_someReturnsBank_48274 = GGS_bool (true) ;
            }
          }
          if (GalgasBool::boolFalse == test_9) {
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::notEqual, var_returnedBankSelection_48310.objectCompare (var_returnedBank_48482)).boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                GGS_string var_errorMessage_49528 = GGS_string ("the '").add_operation (enumerator_48355.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1467)).add_operation (GGS_string ("' routine returns "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1467)) ;
                GalgasBool test_11 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_11) {
                  test_11 = GGS_bool (ComparisonKind::equal, var_returnedBank_48482.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1468)))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_11) {
                    var_errorMessage_49528.plusAssignOperation(GGS_string ("no bank selection"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1469)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_11) {
                  var_errorMessage_49528.plusAssignOperation(GGS_string ("bank selection set to  ").add_operation (var_returnedBank_48482.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1471)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1471)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1471)) ;
                }
                var_errorMessage_49528.plusAssignOperation(GGS_string (", but previous routine(s) return(s) "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1473)) ;
                GalgasBool test_12 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_12) {
                  test_12 = GGS_bool (ComparisonKind::equal, var_returnedBankSelection_48310.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1474)))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_12) {
                    var_errorMessage_49528.plusAssignOperation(GGS_string ("no bank selection"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1475)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_12) {
                  var_errorMessage_49528.plusAssignOperation(GGS_string ("bank selection set to  ").add_operation (var_returnedBankSelection_48310.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1477)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1477)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1477)) ;
                }
                GenericArray <FixItDescription> fixItArray13 ;
                inCompiler->emitSemanticError (enumerator_48355.current_mValue (HERE).readProperty_location (), var_errorMessage_49528, fixItArray13  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1479)) ;
              }
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_8) {
        GalgasBool test_14 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_14) {
          test_14 = constinArgument_inShouldPreserveBSR.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1481)).operator_and (var_preservesBank_48506 COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1481)).boolEnum () ;
          if (GalgasBool::boolTrue == test_14) {
          }
        }
      }
    }
    enumerator_48355.gotoNextObject () ;
  }
  ioArgument_ioCurrentBank = var_returnedBankSelection_48310 ;
  GGS_sint_36__34_ var_size_50284 ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_rcall temp_15 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_15.readProperty_mSizeExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size_50284, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1487)) ;
  GalgasBool test_16 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_16) {
    test_16 = GGS_bool (ComparisonKind::lowerThan, var_size_50284.objectCompare (GGS_sint_36__34_ (int64_t (2LL)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_16) {
      const GGS_pic_31__38_Instruction_5F_computed_5F_rcall temp_17 = this ;
      GenericArray <FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticError (temp_17.readProperty_mInstructionLocation (), GGS_string ("the computed range (").add_operation (var_size_50284.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1489)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1489)).add_operation (GGS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1489)), fixItArray18  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1489)) ;
    }
  }
  if (GalgasBool::boolFalse == test_16) {
    GalgasBool test_19 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_19) {
      test_19 = GGS_bool (ComparisonKind::greaterThan, var_size_50284.objectCompare (GGS_sint_36__34_ (int64_t (64LL)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_19) {
        const GGS_pic_31__38_Instruction_5F_computed_5F_rcall temp_20 = this ;
        GenericArray <FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (temp_20.readProperty_mInstructionLocation (), GGS_string ("the computed range (").add_operation (var_size_50284.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1491)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1491)).add_operation (GGS_string (") should be lower or equal to 64"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1491)), fixItArray21  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1491)) ;
      }
    }
    if (GalgasBool::boolFalse == test_19) {
      GalgasBool test_22 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_22) {
        const GGS_pic_31__38_Instruction_5F_computed_5F_rcall temp_23 = this ;
        test_22 = GGS_bool (ComparisonKind::notEqual, var_size_50284.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1492)).objectCompare (temp_23.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1492)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_22) {
          const GGS_pic_31__38_Instruction_5F_computed_5F_rcall temp_24 = this ;
          const GGS_pic_31__38_Instruction_5F_computed_5F_rcall temp_25 = this ;
          GenericArray <FixItDescription> fixItArray26 ;
          inCompiler->emitSemanticError (temp_24.readProperty_mInstructionLocation (), GGS_string ("the routine name list length (").add_operation (temp_25.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1493)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1493)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1493)).add_operation (GGS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1493)).add_operation (var_size_50284.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1493)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1493)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1493)), fixItArray26  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1493)) ;
        }
      }
    }
  }
  GGS_ipic_31__38_SequentialInstructionList var_targetInstructionList_50823 = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_rcall temp_27 = this ;
  UpEnumerator_lstringlist enumerator_50889 (temp_27.readProperty_mTargetLabels ()) ;
  while (enumerator_50889.hasCurrentObject ()) {
    var_targetInstructionList_50823.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_JSR::init_21__21__21_ (enumerator_50889.current_mValue (HERE).readProperty_location (), enumerator_50889.current_mValue (HERE), GGS_jumpInstructionKind::class_func_relative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1498)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1498)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1498)) ;
    enumerator_50889.gotoNextObject () ;
  }
  const GGS_pic_31__38_Instruction_5F_computed_5F_rcall temp_28 = this ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_rcall temp_29 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::init_21__21__21_ (temp_28.readProperty_mInstructionLocation (), var_targetInstructionList_50823, temp_29.readProperty_mUsesRelativeCall (), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1507)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1501)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_computed_goto analyze'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_computed_5F_goto::method_analyze (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                      GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                      const GGS_routineMap constinArgument_inRoutineMap,
                                                                      const GGS_registerTable constinArgument_inRegisterTable,
                                                                      const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                      const GGS_constantMap constinArgument_inConstantMap,
                                                                      const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                      GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                      GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                      GGS_lstring & ioArgument_ioBlockLabel,
                                                                      GGS_string & /* ioArgument_ioListFileContents */,
                                                                      GGS_uint & ioArgument_ioCurrentBank,
                                                                      const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                      const GGS_routineKind constinArgument_inRoutineKind,
                                                                      GGS_stringset & ioArgument_ioUsedRegisters,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_computed_5F_goto temp_0 = this ;
  UpEnumerator_lstringlist enumerator_51951 (temp_0.readProperty_mTargetLabels ()) ;
  while (enumerator_51951.hasCurrentObject ()) {
    GGS_bool var_isNoReturn_52032 ;
    GGS_uint var_requiredBank_52054 ;
    GGS_uint joker_52067 ; // Joker input parameter
    GGS_bool joker_52070 ; // Joker input parameter
    constinArgument_inRoutineMap.method_searchKey (enumerator_51951.current_mValue (HERE), var_isNoReturn_52032, var_requiredBank_52054, joker_52067, joker_52070, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1531)) ;
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_52054.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1532)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_requiredBank_52054.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1532)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GGS_string var_errorMessage_52167 = GGS_string ("the routine '").add_operation (enumerator_51951.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1533)).add_operation (GGS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1533)).add_operation (var_requiredBank_52054.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1533)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1533)) ;
        var_errorMessage_52167.plusAssignOperation(GGS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1534)) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1535)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            var_errorMessage_52167.plusAssignOperation(GGS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1536)) ;
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          var_errorMessage_52167.plusAssignOperation(GGS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1538)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1538)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1538)) ;
        }
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_51951.current_mValue (HERE).readProperty_location (), var_errorMessage_52167, fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1540)) ;
      }
    }
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::notEqual, GGS_routineKind::class_func_regularRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1542)).objectCompare (constinArgument_inRoutineKind)).operator_and (var_isNoReturn_52032.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1542)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1542)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_51951.current_mValue (HERE).readProperty_location (), GGS_string ("for being named in a computed goto, the '").add_operation (enumerator_51951.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1543)).add_operation (GGS_string ("' routine should be declared with the \"noreturn\" qualifier"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1543)), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1543)) ;
      }
    }
    enumerator_51951.gotoNextObject () ;
  }
  switch (constinArgument_inRoutineKind.enumValue ()) {
  case GGS_routineKind::Enumeration::invalid:
    break ;
  case GGS_routineKind::Enumeration::enum_regularRoutine:
    break ;
  case GGS_routineKind::Enumeration::enum_noReturnRoutine:
    break ;
  case GGS_routineKind::Enumeration::enum_interruptRoutine:
    {
      const GGS_pic_31__38_Instruction_5F_computed_5F_goto temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mInstructionLocation (), GGS_string ("an interrupt routine does not accept computed goto instruction"), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1550)) ;
    }
    break ;
  }
  GGS_sint_36__34_ var_size_53050 ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_goto temp_8 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_8.readProperty_mSizeExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size_53050, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1553)) ;
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = GGS_bool (ComparisonKind::lowerThan, var_size_53050.objectCompare (GGS_sint_36__34_ (int64_t (2LL)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_pic_31__38_Instruction_5F_computed_5F_goto temp_10 = this ;
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GGS_string ("the computed range (").add_operation (var_size_53050.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1555)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1555)).add_operation (GGS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1555)), fixItArray11  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1555)) ;
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      test_12 = GGS_bool (ComparisonKind::greaterThan, var_size_53050.objectCompare (GGS_sint_36__34_ (int64_t (64LL)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        const GGS_pic_31__38_Instruction_5F_computed_5F_goto temp_13 = this ;
        GenericArray <FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (temp_13.readProperty_mInstructionLocation (), GGS_string ("the computed range (").add_operation (var_size_53050.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1557)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1557)).add_operation (GGS_string (") should be lower or equal to 64"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1557)), fixItArray14  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1557)) ;
      }
    }
    if (GalgasBool::boolFalse == test_12) {
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        const GGS_pic_31__38_Instruction_5F_computed_5F_goto temp_16 = this ;
        test_15 = GGS_bool (ComparisonKind::notEqual, var_size_53050.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1558)).objectCompare (temp_16.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1558)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          const GGS_pic_31__38_Instruction_5F_computed_5F_goto temp_17 = this ;
          const GGS_pic_31__38_Instruction_5F_computed_5F_goto temp_18 = this ;
          GenericArray <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (temp_17.readProperty_mInstructionLocation (), GGS_string ("the routine name list length (").add_operation (temp_18.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1559)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1559)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1559)).add_operation (GGS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1559)).add_operation (var_size_53050.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1559)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1559)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1559)), fixItArray19  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1559)) ;
        }
      }
    }
  }
  const GGS_pic_31__38_Instruction_5F_computed_5F_goto temp_20 = this ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_goto temp_21 = this ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_goto temp_22 = this ;
  ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1563)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_ComputedGotoTerminator::init_21__21__21_ (temp_20.readProperty_mInstructionLocation (), temp_21.readProperty_mTargetLabels (), temp_22.readProperty_mUsesRelativeCall (), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1570)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1562)) ;
  ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  ioArgument_ioBlockLabel = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1575)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_computed_bra analyze'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_computed_5F_bra::method_analyze (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                     GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                     const GGS_routineMap constinArgument_inRoutineMap,
                                                                     const GGS_registerTable constinArgument_inRegisterTable,
                                                                     const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                     const GGS_constantMap constinArgument_inConstantMap,
                                                                     const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                     GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                     GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                     GGS_lstring & ioArgument_ioBlockLabel,
                                                                     GGS_string & /* ioArgument_ioListFileContents */,
                                                                     GGS_uint & ioArgument_ioCurrentBank,
                                                                     const GGS_bool constinArgument_inShouldPreserveBSR,
                                                                     const GGS_routineKind constinArgument_inRoutineKind,
                                                                     GGS_stringset & ioArgument_ioUsedRegisters,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_allPreserveBankSetting_54683 = GGS_bool (true) ;
  GGS_bool var_allReturnBank_54725 = GGS_bool (true) ;
  GGS_uint var_returnedBankValue_54752 = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1599)) ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_0 = this ;
  UpEnumerator_lstringlist enumerator_54788 (temp_0.readProperty_mTargetLabels ()) ;
  while (enumerator_54788.hasCurrentObject ()) {
    GGS_bool var_isNoReturn_54869 ;
    GGS_uint var_requiredBank_54891 ;
    GGS_uint var_returnedBank_54915 ;
    GGS_bool var_preservesBank_54939 ;
    constinArgument_inRoutineMap.method_searchKey (enumerator_54788.current_mValue (HERE), var_isNoReturn_54869, var_requiredBank_54891, var_returnedBank_54915, var_preservesBank_54939, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1601)) ;
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_54891.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1603)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_requiredBank_54891.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1603)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GGS_string var_errorMessage_55077 = GGS_string ("the routine '").add_operation (enumerator_54788.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1604)).add_operation (GGS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1604)).add_operation (var_requiredBank_54891.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1604)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1604)) ;
        var_errorMessage_55077.plusAssignOperation(GGS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1605)) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1606)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            var_errorMessage_55077.plusAssignOperation(GGS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1607)) ;
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          var_errorMessage_55077.plusAssignOperation(GGS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1609)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1609)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1609)) ;
        }
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_54788.current_mValue (HERE).readProperty_location (), var_errorMessage_55077, fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1611)) ;
      }
    }
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = var_preservesBank_54939.boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        var_allReturnBank_54725 = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = GGS_bool (ComparisonKind::notEqual, var_returnedBankValue_54752.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1616)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_returnedBankValue_54752.objectCompare (var_returnedBank_54915)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1616)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_54788.current_mValue (HERE).readProperty_location (), GGS_string ("this routine ensures setting of bank '").add_operation (var_returnedBank_54915.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1617)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1617)).add_operation (GGS_string ("', but "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1617)).add_operation (GGS_string ("previous routine(s) ensure setting of bank '"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1617)).add_operation (var_returnedBankValue_54752.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1618)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1618)).add_operation (GGS_string ("'."), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1618)), fixItArray6  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1617)) ;
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        var_allPreserveBankSetting_54683 = GGS_bool (false) ;
        var_returnedBankValue_54752 = var_returnedBank_54915 ;
      }
    }
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      test_7 = GGS_bool (ComparisonKind::notEqual, GGS_routineKind::class_func_regularRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1623)).objectCompare (constinArgument_inRoutineKind)).operator_and (var_isNoReturn_54869.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1623)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1623)).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_54788.current_mValue (HERE).readProperty_location (), GGS_string ("for being named in a computed bra from a regular routine, the '").add_operation (enumerator_54788.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1624)).add_operation (GGS_string ("' routine should be declared without any \"noreturn\" qualifier"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1624)), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1624)) ;
      }
    }
    enumerator_54788.gotoNextObject () ;
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = var_allReturnBank_54725.operator_and (var_allPreserveBankSetting_54683.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1628)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1628)).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      ioArgument_ioCurrentBank = var_returnedBankValue_54752 ;
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      test_10 = var_allReturnBank_54725.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1630)).operator_and (var_allPreserveBankSetting_54683.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1630)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1630)).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_11 = this ;
        GenericArray <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (temp_11.readProperty_mInstructionLocation (), GGS_string ("invoked routine should either all preserve bank, eihter return the same selected bank"), fixItArray12  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1631)) ;
      }
    }
  }
  GalgasBool test_13 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_13) {
    test_13 = constinArgument_inShouldPreserveBSR.operator_and (var_allPreserveBankSetting_54683.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1633)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1633)).boolEnum () ;
    if (GalgasBool::boolTrue == test_13) {
      const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_14 = this ;
      GenericArray <FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GGS_string ("invoked routine(s) do(es) not preserve bank selection"), fixItArray15  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1634)) ;
    }
  }
  switch (constinArgument_inRoutineKind.enumValue ()) {
  case GGS_routineKind::Enumeration::invalid:
    break ;
  case GGS_routineKind::Enumeration::enum_regularRoutine:
    break ;
  case GGS_routineKind::Enumeration::enum_noReturnRoutine:
    break ;
  case GGS_routineKind::Enumeration::enum_interruptRoutine:
    {
      const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_16 = this ;
      GenericArray <FixItDescription> fixItArray17 ;
      inCompiler->emitSemanticError (temp_16.readProperty_mInstructionLocation (), GGS_string ("an interrupt routine does not accept computed bra instruction"), fixItArray17  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1641)) ;
    }
    break ;
  }
  GGS_sint_36__34_ var_size_56898 ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_18 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_18.readProperty_mSizeExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size_56898, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1644)) ;
  GalgasBool test_19 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_19) {
    test_19 = GGS_bool (ComparisonKind::lowerThan, var_size_56898.objectCompare (GGS_sint_36__34_ (int64_t (2LL)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_19) {
      const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_20 = this ;
      GenericArray <FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_20.readProperty_mInstructionLocation (), GGS_string ("the computed range (").add_operation (var_size_56898.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1646)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1646)).add_operation (GGS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1646)), fixItArray21  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1646)) ;
    }
  }
  if (GalgasBool::boolFalse == test_19) {
    GalgasBool test_22 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_22) {
      test_22 = GGS_bool (ComparisonKind::greaterThan, var_size_56898.objectCompare (GGS_sint_36__34_ (int64_t (128LL)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_22) {
        const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_23 = this ;
        GenericArray <FixItDescription> fixItArray24 ;
        inCompiler->emitSemanticError (temp_23.readProperty_mInstructionLocation (), GGS_string ("the computed range (").add_operation (var_size_56898.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1648)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1648)).add_operation (GGS_string (") should be lower or equal to 128"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1648)), fixItArray24  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1648)) ;
      }
    }
    if (GalgasBool::boolFalse == test_22) {
      GalgasBool test_25 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_25) {
        const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_26 = this ;
        test_25 = GGS_bool (ComparisonKind::notEqual, var_size_56898.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1649)).objectCompare (temp_26.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1649)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_25) {
          const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_27 = this ;
          const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_28 = this ;
          GenericArray <FixItDescription> fixItArray29 ;
          inCompiler->emitSemanticError (temp_27.readProperty_mInstructionLocation (), GGS_string ("the routine name list length (").add_operation (temp_28.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1650)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1650)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1650)).add_operation (GGS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1650)).add_operation (var_size_56898.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1650)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1650)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1650)), fixItArray29  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1650)) ;
        }
      }
    }
  }
  const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_30 = this ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_31 = this ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_32 = this ;
  ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1654)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_ComputedBraTerminator::init_21__21__21_ (temp_30.readProperty_mInstructionLocation (), temp_31.readProperty_mTargetLabels (), temp_32.readProperty_mUsesRelativeCall (), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1661)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1653)) ;
  ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  ioArgument_ioBlockLabel = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1666)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_computed_retlw analyze'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_computed_5F_retlw::method_analyze (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                       GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                       const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                       const GGS_registerTable constinArgument_inRegisterTable,
                                                                       const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                       const GGS_constantMap constinArgument_inConstantMap,
                                                                       const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                       GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                       GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                       GGS_lstring & ioArgument_ioBlockLabel,
                                                                       GGS_string & /* ioArgument_ioListFileContents */,
                                                                       GGS_uint & /* ioArgument_ioCurrentBank */,
                                                                       const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                       const GGS_routineKind constinArgument_inRoutineKind,
                                                                       GGS_stringset & ioArgument_ioUsedRegisters,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  switch (constinArgument_inRoutineKind.enumValue ()) {
  case GGS_routineKind::Enumeration::invalid:
    break ;
  case GGS_routineKind::Enumeration::enum_regularRoutine:
    break ;
  case GGS_routineKind::Enumeration::enum_noReturnRoutine:
    {
      const GGS_pic_31__38_Instruction_5F_computed_5F_retlw temp_0 = this ;
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (temp_0.readProperty_mInstructionLocation (), GGS_string ("a \"noreturn\" routine does not accept computed retlw instruction"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1690)) ;
    }
    break ;
  case GGS_routineKind::Enumeration::enum_interruptRoutine:
    {
      const GGS_pic_31__38_Instruction_5F_computed_5F_retlw temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("an interrupt routine does not accept computed retlw instruction"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1692)) ;
    }
    break ;
  }
  GGS_sint_36__34_ var_size_58933 ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_retlw temp_4 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_4.readProperty_mSizeExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size_58933, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1695)) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::lowerThan, var_size_58933.objectCompare (GGS_sint_36__34_ (int64_t (2LL)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_pic_31__38_Instruction_5F_computed_5F_retlw temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mInstructionLocation (), GGS_string ("the computed range (").add_operation (var_size_58933.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1697)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1697)).add_operation (GGS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1697)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1697)) ;
    }
  }
  if (GalgasBool::boolFalse == test_5) {
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      test_8 = GGS_bool (ComparisonKind::greaterThan, var_size_58933.objectCompare (GGS_sint_36__34_ (int64_t (128LL)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        const GGS_pic_31__38_Instruction_5F_computed_5F_retlw temp_9 = this ;
        GenericArray <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GGS_string ("the computed range (").add_operation (var_size_58933.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1699)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1699)).add_operation (GGS_string (") should be lower or equal to 128"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1699)), fixItArray10  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1699)) ;
      }
    }
    if (GalgasBool::boolFalse == test_8) {
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        const GGS_pic_31__38_Instruction_5F_computed_5F_retlw temp_12 = this ;
        test_11 = GGS_bool (ComparisonKind::notEqual, var_size_58933.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1700)).objectCompare (temp_12.readProperty_mImmediateExpressionList ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1700)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          const GGS_pic_31__38_Instruction_5F_computed_5F_retlw temp_13 = this ;
          const GGS_pic_31__38_Instruction_5F_computed_5F_retlw temp_14 = this ;
          GenericArray <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mInstructionLocation (), GGS_string ("the constant list length (").add_operation (temp_14.readProperty_mImmediateExpressionList ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1701)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1701)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1701)).add_operation (GGS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1701)).add_operation (var_size_58933.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1701)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1701)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1701)), fixItArray15  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1701)) ;
        }
      }
    }
  }
  GGS_uintlist var_literalValues_59493 = GGS_uintlist::init (inCompiler COMMA_HERE) ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_retlw temp_16 = this ;
  UpEnumerator_immediatExpressionList enumerator_59540 (temp_16.readProperty_mImmediateExpressionList ()) ;
  GGS_uint index_59523 (uint32_t (0)) ;
  while (enumerator_59540.hasCurrentObject ()) {
    GGS_sint_36__34_ var_v_59652 ;
    callExtensionMethod_eval ((cPtr_immediatExpression *) enumerator_59540.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_v_59652, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1706)) ;
    GalgasBool test_17 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_17) {
      test_17 = GGS_bool (ComparisonKind::greaterThan, var_v_59652.objectCompare (GGS_sint_36__34_ (int64_t (255LL)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_v_59652.objectCompare (GGS_sint_36__34_ (int64_t (-128LL)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1707)).boolEnum () ;
      if (GalgasBool::boolTrue == test_17) {
        const GGS_pic_31__38_Instruction_5F_computed_5F_retlw temp_18 = this ;
        GenericArray <FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (temp_18.readProperty_mInstructionLocation (), GGS_string ("immediate value with idx ").add_operation (index_59523.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1708)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1708)).add_operation (GGS_string (" is evaluated as "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1708)).add_operation (var_v_59652.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1708)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1708)).add_operation (GGS_string (" (should be <= 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1708)), fixItArray19  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1708)) ;
      }
    }
    var_literalValues_59493.addAssignOperation (var_v_59652.operator_and (GGS_sint_36__34_ (int64_t (255LL)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1710)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1710))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1710)) ;
    enumerator_59540.gotoNextObject () ;
    index_59523.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1705)) ;
  }
  const GGS_pic_31__38_Instruction_5F_computed_5F_retlw temp_20 = this ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_retlw temp_21 = this ;
  ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1714)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_ComputedRETLWTerminator::init_21__21__21_ (temp_20.readProperty_mInstructionLocation (), var_literalValues_59493, temp_21.readProperty_mUsesRelativeCall (), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1721)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1713)) ;
  ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  ioArgument_ioBlockLabel = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1726)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_JUMPCC analyze'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_JUMPCC::method_analyze (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                            GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                            const GGS_routineMap constinArgument_inRoutineMap,
                                                            const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                            const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                            const GGS_constantMap /* constinArgument_inConstantMap */,
                                                            const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                            GGS_uint & ioArgument_ioLocalLabelIndex,
                                                            GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                            GGS_lstring & ioArgument_ioBlockLabel,
                                                            GGS_string & /* ioArgument_ioListFileContents */,
                                                            GGS_uint & ioArgument_ioCurrentBank,
                                                            const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                            const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                            GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_isNoReturn_61069 ;
  GGS_uint var_requiredBank_61091 ;
  const GGS_pic_31__38_Instruction_5F_JUMPCC temp_0 = this ;
  GGS_uint joker_61104 ; // Joker input parameter
  GGS_bool joker_61107 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_61069, var_requiredBank_61091, joker_61104, joker_61107, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1747)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_61091.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1748)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_requiredBank_61091.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1748)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_pic_31__38_Instruction_5F_JUMPCC temp_2 = this ;
      GGS_string var_errorMessage_61200 = GGS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1749)).add_operation (GGS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1749)).add_operation (var_requiredBank_61091.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1749)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1749)) ;
      var_errorMessage_61200.plusAssignOperation(GGS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1750)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1751)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          var_errorMessage_61200.plusAssignOperation(GGS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1752)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        var_errorMessage_61200.plusAssignOperation(GGS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1754)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1754)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1754)) ;
      }
      const GGS_pic_31__38_Instruction_5F_JUMPCC temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_61200, fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1756)) ;
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = var_isNoReturn_61069.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1758)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_pic_31__38_Instruction_5F_JUMPCC temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("a regular routine should be called with a RCALL, CALL or JSR instruction"), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1759)) ;
    }
  }
  GGS_conditionalBranchMode var_mode_61735 ;
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_pic_31__38_Instruction_5F_JUMPCC temp_10 = this ;
    test_9 = temp_10.readProperty_mIsBcc ().boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      var_mode_61735 = GGS_conditionalBranchMode::class_func_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1764)) ;
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    var_mode_61735 = GGS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1766)) ;
  }
  const GGS_pic_31__38_Instruction_5F_JUMPCC temp_11 = this ;
  GGS_lstring var_label_30__61902 = GGS_lstring::init_21__21_ (GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1769)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1769)), temp_11.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1770)) ;
  const GGS_pic_31__38_Instruction_5F_JUMPCC temp_12 = this ;
  const GGS_pic_31__38_Instruction_5F_JUMPCC temp_13 = this ;
  const GGS_pic_31__38_Instruction_5F_JUMPCC temp_14 = this ;
  ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1773)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_ConditionalJumpTerminator::init_21__21__21__21__21__21_ (temp_12.readProperty_mInstructionLocation (), temp_13.readProperty_mConditionalBranch (), temp_14.readProperty_mTargetLabel (), var_mode_61735, var_label_30__61902, var_mode_61735, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1783)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1772)) ;
  ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  ioArgument_ioBlockLabel = var_label_30__61902 ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_IF_BitTest analyze'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::method_analyze (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                   GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                   const GGS_routineMap constinArgument_inRoutineMap,
                                                                   const GGS_registerTable constinArgument_inRegisterTable,
                                                                   const GGS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                   const GGS_constantMap constinArgument_inConstantMap,
                                                                   const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                   GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                   GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                   GGS_lstring & /* ioArgument_ioBlockLabel */,
                                                                   GGS_string & /* ioArgument_ioListFileContents */,
                                                                   GGS_uint & ioArgument_ioCurrentBank,
                                                                   const GGS_bool constinArgument_inShouldPreserveBSR,
                                                                   const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                   GGS_stringset & ioArgument_ioUsedRegisters,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_63389 ;
  GGS_bitSliceTable var_bitSliceTable_63437 ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_0 = this ;
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (false), var_IPICregisterDescription_63389, var_bitSliceTable_63437, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1810)) ;
  GGS_uint var_bitNumber_63605 ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_1 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_63437, var_bitNumber_63605, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1820)) ;
  GGS_uint var_currentBank_63666 = ioArgument_ioCurrentBank ;
  GGS_ipic_31__38_SequentialInstruction var_embeddedInstruction_63953 ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_2 = this ;
  callExtensionMethod_analyzeSimpleInstruction ((cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_2.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, var_currentBank_63666, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_embeddedInstruction_63953, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1829)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::notEqual, var_currentBank_63666.objectCompare (var_currentBank_63666)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mEmbeddedInstruction ().readProperty_mInstructionLocation (), GGS_string ("this instruction does not preserve bank setting"), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1842)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_6 = this ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_7 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::init_21__21__21__21__21_ (temp_6.readProperty_mInstructionLocation (), var_embeddedInstruction_63953, temp_7.readProperty_mSkipIfSet (), var_IPICregisterDescription_63389, var_bitNumber_63605, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1852)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1845)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_IF_FA_SEMI_COLON analyze'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::method_analyze (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                               GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                               const GGS_routineMap constinArgument_inRoutineMap,
                                                                               const GGS_registerTable constinArgument_inRegisterTable,
                                                                               const GGS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                               const GGS_constantMap constinArgument_inConstantMap,
                                                                               const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                               GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                               GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                               GGS_lstring & /* ioArgument_ioBlockLabel */,
                                                                               GGS_string & /* ioArgument_ioListFileContents */,
                                                                               GGS_uint & ioArgument_ioCurrentBank,
                                                                               const GGS_bool constinArgument_inShouldPreserveBSR,
                                                                               const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                               GGS_stringset & ioArgument_ioUsedRegisters,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code var_baseCode_65148 ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON temp_0 = this ;
  switch (temp_0.readProperty_mOpCode ().enumValue ()) {
  case GGS_if_5F_semi_5F_colon_5F_op::Enumeration::invalid:
    break ;
  case GGS_if_5F_semi_5F_colon_5F_op::Enumeration::enum_CPFSEQ:
    {
      var_baseCode_65148 = GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::class_func_CPFSEQ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1876)) ;
    }
    break ;
  case GGS_if_5F_semi_5F_colon_5F_op::Enumeration::enum_CPFSGT:
    {
      var_baseCode_65148 = GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::class_func_CPFSGT (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1877)) ;
    }
    break ;
  case GGS_if_5F_semi_5F_colon_5F_op::Enumeration::enum_CPFSLT:
    {
      var_baseCode_65148 = GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::class_func_CPFSLT (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1878)) ;
    }
    break ;
  case GGS_if_5F_semi_5F_colon_5F_op::Enumeration::enum_TSTFSZ:
    {
      var_baseCode_65148 = GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::class_func_TSTFSZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1879)) ;
    }
    break ;
  }
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_65735 ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON temp_1 = this ;
  GGS_bitSliceTable joker_65763 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_1.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (false), var_IPICregisterDescription_65735, joker_65763, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1881)) ;
  GGS_uint var_currentBank_65839 = ioArgument_ioCurrentBank ;
  GGS_ipic_31__38_SequentialInstruction var_embeddedInstruction_66126 ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON temp_2 = this ;
  callExtensionMethod_analyzeSimpleInstruction ((cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_2.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, var_currentBank_65839, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_embeddedInstruction_66126, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1893)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::notEqual, var_currentBank_65839.objectCompare (var_currentBank_65839)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mEmbeddedInstruction ().readProperty_mInstructionLocation (), GGS_string ("this instruction does not preserve bank setting"), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1906)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON temp_6 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::init_21__21__21__21_ (temp_6.readProperty_mInstructionLocation (), var_embeddedInstruction_66126, var_baseCode_65148, var_IPICregisterDescription_65735, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1915)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1909)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_IF_IncDec analyze'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::method_analyze (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                  GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                  const GGS_routineMap constinArgument_inRoutineMap,
                                                                  const GGS_registerTable constinArgument_inRegisterTable,
                                                                  const GGS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                  const GGS_constantMap constinArgument_inConstantMap,
                                                                  const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                  GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                  GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                  GGS_lstring & /* ioArgument_ioBlockLabel */,
                                                                  GGS_string & /* ioArgument_ioListFileContents */,
                                                                  GGS_uint & ioArgument_ioCurrentBank,
                                                                  const GGS_bool constinArgument_inShouldPreserveBSR,
                                                                  const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                  GGS_stringset & ioArgument_ioUsedRegisters,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code var_baseCode_67288 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_1 = this ;
    const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_2 = this ;
    test_0 = temp_1.readProperty_mIncrement ().operator_and (temp_2.readProperty_mSkipIfZero () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1939)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_baseCode_67288 = GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::class_func_INCFSZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1940)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_4 = this ;
      const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_5 = this ;
      test_3 = temp_4.readProperty_mIncrement ().operator_and (temp_5.readProperty_mSkipIfZero ().operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1941)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1941)).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        var_baseCode_67288 = GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::class_func_INFSNZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1942)) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_7 = this ;
        const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_8 = this ;
        test_6 = temp_7.readProperty_mIncrement ().operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1943)).operator_and (temp_8.readProperty_mSkipIfZero () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1943)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          var_baseCode_67288 = GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::class_func_DECFSZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1944)) ;
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        var_baseCode_67288 = GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::class_func_DCFSNZ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1946)) ;
      }
    }
  }
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_67900 ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_9 = this ;
  GGS_bitSliceTable joker_67928 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_9.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_IPICregisterDescription_67900, joker_67928, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1949)) ;
  GGS_uint var_currentBank_68004 = ioArgument_ioCurrentBank ;
  GGS_ipic_31__38_SequentialInstruction var_embeddedInstruction_68291 ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_10 = this ;
  callExtensionMethod_analyzeSimpleInstruction ((cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_10.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, var_currentBank_68004, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_embeddedInstruction_68291, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1961)) ;
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::notEqual, var_currentBank_68004.objectCompare (var_currentBank_68004)).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mEmbeddedInstruction ().readProperty_mInstructionLocation (), GGS_string ("this instruction does not preserve bank setting"), fixItArray13  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1974)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_14 = this ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_15 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::init_21__21__21__21__21_ (temp_14.readProperty_mInstructionLocation (), var_embeddedInstruction_68291, var_baseCode_67288, var_IPICregisterDescription_67900, temp_15.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1984)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1977)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_structured_if analyze'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_structured_5F_if::method_analyze (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                      GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                      const GGS_routineMap constinArgument_inRoutineMap,
                                                                      const GGS_registerTable constinArgument_inRegisterTable,
                                                                      const GGS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                      const GGS_constantMap constinArgument_inConstantMap,
                                                                      const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                      GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                      GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                      GGS_lstring & ioArgument_ioBlockLabel,
                                                                      GGS_string & ioArgument_ioListFileContents,
                                                                      GGS_uint & ioArgument_ioCurrentBank,
                                                                      const GGS_bool constinArgument_inShouldPreserveBSR,
                                                                      const GGS_routineKind constinArgument_inRoutineKind,
                                                                      GGS_stringset & ioArgument_ioUsedRegisters,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_elseBranchFinalBank_69423 = ioArgument_ioCurrentBank ;
  GGS_uint var_thenBranchFinalBank_69471 = ioArgument_ioCurrentBank ;
  const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_0 = this ;
  GGS_lstring var_conditionTrueLabel_69526 = GGS_lstring::init_21__21_ (GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2010)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2010)), temp_0.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2011)) ;
  const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_1 = this ;
  GGS_lstring var_conditionFalseLabel_69653 = GGS_lstring::init_21__21_ (GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2012)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2012)), temp_1.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2013)) ;
  const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_2 = this ;
  GGS_lstring var_exitLabel_69781 = GGS_lstring::init_21__21_ (GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2014)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2014)), temp_2.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2015)) ;
  GGS_ipic_31__38_AbstractBlockTerminator var_testTerminator_70206 ;
  const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_3 = this ;
  callExtensionMethod_analyzeCondition ((cPtr_pic_31__38_ConditionExpression *) temp_3.readProperty_mIfCondition ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel_69526, var_conditionFalseLabel_69653, ioArgument_ioUsedRegisters, var_testTerminator_70206, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2017)) ;
  ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2031)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_testTerminator_70206, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2035)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2030)) ;
  ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  ioArgument_ioBlockLabel = var_conditionTrueLabel_69526 ;
  {
  const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_4 = this ;
  routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (temp_4.readProperty_mThenInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_thenBranchFinalBank_69471, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2041)) ;
  }
  GGS_bool var_thenContinuesInSequence_70978 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = var_thenContinuesInSequence_70978.boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_6 = this ;
      ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2062)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_6.readProperty_mInstructionLocation (), var_exitLabel_69781, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2065)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2066)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2061)) ;
    }
  }
  ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  ioArgument_ioBlockLabel = var_conditionFalseLabel_69653 ;
  {
  const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_7 = this ;
  routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (temp_7.readProperty_mElseInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_elseBranchFinalBank_69423, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2073)) ;
  }
  GGS_bool var_elseContinuesInSequence_71873 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())) ;
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = var_elseContinuesInSequence_71873.boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_9 = this ;
      ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2094)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_9.readProperty_mInstructionLocation (), var_exitLabel_69781, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2097)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2098)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2093)) ;
    }
  }
  ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = GGS_bool (ComparisonKind::equal, var_elseBranchFinalBank_69423.objectCompare (var_thenBranchFinalBank_69471)).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      ioArgument_ioCurrentBank = var_elseBranchFinalBank_69423 ;
    }
  }
  if (GalgasBool::boolFalse == test_10) {
    const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_11 = this ;
    GenericArray <FixItDescription> fixItArray12 ;
    inCompiler->emitSemanticError (temp_11.readProperty_mEndOfElsePartLocation (), GGS_string ("This branch does not leave bank selection value as the first one does"), fixItArray12  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2107)) ;
    var_elseBranchFinalBank_69423 = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2108)) ;
  }
  GalgasBool test_13 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_13) {
    test_13 = var_thenContinuesInSequence_70978.operator_or (var_elseContinuesInSequence_71873 COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2111)).boolEnum () ;
    if (GalgasBool::boolTrue == test_13) {
      ioArgument_ioBlockLabel = var_exitLabel_69781 ;
    }
  }
  if (GalgasBool::boolFalse == test_13) {
    ioArgument_ioBlockLabel = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2114)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_macro analyze'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_macro::method_analyze (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                           GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                           const GGS_routineMap constinArgument_inRoutineMap,
                                                           const GGS_registerTable constinArgument_inRegisterTable,
                                                           const GGS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                           const GGS_constantMap constinArgument_inConstantMap,
                                                           const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                           GGS_uint & ioArgument_ioLocalLabelIndex,
                                                           GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                           GGS_lstring & ioArgument_ioBlockLabel,
                                                           GGS_string & ioArgument_ioListFileContents,
                                                           GGS_uint & ioArgument_ioCurrentBank,
                                                           const GGS_bool constinArgument_inShouldPreserveBSR,
                                                           const GGS_routineKind constinArgument_inRoutineKind,
                                                           GGS_stringset & ioArgument_ioUsedRegisters,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstringlist var_constantNameList_73405 ;
  GGS_pic_31__38_InstructionList var_instructionList_73427 ;
  const GGS_pic_31__38_Instruction_5F_macro temp_0 = this ;
  constinArgument_inMacroMap.method_searchKey (temp_0.readProperty_mMacroName (), var_constantNameList_73405, var_instructionList_73427, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2137)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_pic_31__38_Instruction_5F_macro temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2138)).objectCompare (var_constantNameList_73405.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2138)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_pic_31__38_Instruction_5F_macro temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mInstructionLocation (), var_constantNameList_73405.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2140)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2140)).add_operation (GGS_string (" argument(s) required"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2140)), fixItArray4  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2139)) ;
    }
  }
  GGS_constantMap var_constantMap_73638 = constinArgument_inConstantMap ;
  const GGS_pic_31__38_Instruction_5F_macro temp_5 = this ;
  UpEnumerator_immediatExpressionList enumerator_73685 (temp_5.readProperty_mExpressionList ()) ;
  UpEnumerator_lstringlist enumerator_73714 (var_constantNameList_73405) ;
  while (enumerator_73685.hasCurrentObject () && enumerator_73714.hasCurrentObject ()) {
    GGS_sint_36__34_ var_expressionValue_73816 ;
    callExtensionMethod_eval ((cPtr_immediatExpression *) enumerator_73685.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, var_constantMap_73638, var_expressionValue_73816, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2144)) ;
    {
    var_constantMap_73638.setter_insertKey (enumerator_73714.current_mValue (HERE), var_expressionValue_73816, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2145)) ;
    }
    enumerator_73685.gotoNextObject () ;
    enumerator_73714.gotoNextObject () ;
  }
  {
  routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (var_instructionList_73427, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, var_constantMap_73638, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2148)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_do_while analyze'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_do_5F_while::method_analyze (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                 GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                 const GGS_routineMap constinArgument_inRoutineMap,
                                                                 const GGS_registerTable constinArgument_inRegisterTable,
                                                                 const GGS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                 const GGS_constantMap constinArgument_inConstantMap,
                                                                 const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                 GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                 GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                 GGS_lstring & ioArgument_ioBlockLabel,
                                                                 GGS_string & ioArgument_ioListFileContents,
                                                                 GGS_uint & ioArgument_ioCurrentBank,
                                                                 const GGS_bool constinArgument_inShouldPreserveBSR,
                                                                 const GGS_routineKind constinArgument_inRoutineKind,
                                                                 GGS_stringset & ioArgument_ioUsedRegisters,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_do_5F_while temp_0 = this ;
  GGS_lstring var_startLabel_75008 = GGS_lstring::init_21__21_ (GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2187)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2187)), temp_0.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2188)) ;
  const GGS_pic_31__38_Instruction_5F_do_5F_while temp_1 = this ;
  ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2191)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_1.readProperty_mInstructionLocation (), var_startLabel_75008, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2194)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2195)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2190)) ;
  ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  ioArgument_ioBlockLabel = var_startLabel_75008 ;
  GGS_uint var_repeatedBranchFinalBank_75539 = ioArgument_ioCurrentBank ;
  {
  const GGS_pic_31__38_Instruction_5F_do_5F_while temp_2 = this ;
  routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (temp_2.readProperty_mRepeatedInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_repeatedBranchFinalBank_75539, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2202)) ;
  }
  GGS_bool var_repeatedInstructionsContinuesInSequence_75999 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (var_repeatedBranchFinalBank_75539)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_pic_31__38_Instruction_5F_do_5F_while temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mEndOfRepeatedInstructionList (), GGS_string ("This branch does not leave bank selection value unchanged"), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2222)) ;
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = var_repeatedInstructionsContinuesInSequence_75999.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2224)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_pic_31__38_Instruction_5F_do_5F_while temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mEndOfRepeatedInstructionList (), GGS_string ("This branch makes the next code unreachable"), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2225)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_do_5F_while temp_9 = this ;
  UpEnumerator_pic_31__38_DoWhilePartList enumerator_76436 (temp_9.readProperty_mWhilePartList ()) ;
  while (enumerator_76436.hasCurrentObject ()) {
    const GGS_pic_31__38_Instruction_5F_do_5F_while temp_10 = this ;
    GGS_lstring var_conditionTrueLabel_76506 = GGS_lstring::init_21__21_ (GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2230)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2230)), temp_10.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
    ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2231)) ;
    const GGS_pic_31__38_Instruction_5F_do_5F_while temp_11 = this ;
    GGS_lstring var_conditionFalseLabel_76636 = GGS_lstring::init_21__21_ (GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2232)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2232)), temp_11.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
    ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2233)) ;
    GGS_ipic_31__38_AbstractBlockTerminator var_testTerminator_77089 ;
    callExtensionMethod_analyzeCondition ((cPtr_pic_31__38_ConditionExpression *) enumerator_76436.current_mCondition (HERE).ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel_76506, var_conditionFalseLabel_76636, ioArgument_ioUsedRegisters, var_testTerminator_77089, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2235)) ;
    ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2248)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_testTerminator_77089, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2252)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2247)) ;
    ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
    ioArgument_ioBlockLabel = var_conditionTrueLabel_76506 ;
    GGS_uint var_branchFinalBank_77416 = ioArgument_ioCurrentBank ;
    {
    routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (enumerator_76436.current_mInstructionList (HERE), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_branchFinalBank_77416, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2258)) ;
    }
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      test_12 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (var_branchFinalBank_77416)).boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_76436.current_mEndOfPartLocation (HERE), GGS_string ("This branch does not leave bank selection value unchanged"), fixItArray13  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2277)) ;
      }
    }
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      test_14 = GGS_bool (ComparisonKind::equal, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        GenericArray <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (enumerator_76436.current_mEndOfPartLocation (HERE), GGS_string ("This branch makes the next code unreachable"), fixItArray15  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2280)) ;
      }
    }
    const GGS_pic_31__38_Instruction_5F_do_5F_while temp_16 = this ;
    ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2283)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_16.readProperty_mInstructionLocation (), var_startLabel_75008, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2286)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2287)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2282)) ;
    ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
    ioArgument_ioBlockLabel = var_conditionFalseLabel_76636 ;
    enumerator_76436.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@exitBlockTerminationForBlockInstruction addVisitedBlocks'
//--------------------------------------------------------------------------------------------------

void cPtr_exitBlockTerminationForBlockInstruction::method_addVisitedBlocks (GGS_stringset & /* ioArgument_ioVisitedBlockSet */,
                                                                            const GGS_blockInstructionBlockMap /* constinArgument_inBlockMap */,
                                                                            const GGS_string constinArgument_inCurrentBlockName,
                                                                            const GGS_uint constinArgument_inInitialBlockSetting,
                                                                            GGS_blockInitialBankSelectionMap & ioArgument_ioBlockInitialBankSelectionMap,
                                                                            GGS_bool & ioArgument_ioContinuesInSequence,
                                                                            GGS_bool & /* ioArgument_ioContinueAccessibilityExploration */,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioContinuesInSequence = GGS_bool (true) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = ioArgument_ioBlockInitialBankSelectionMap.getter_hasKey (GGS_string ("-") COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2340)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_uint var_otherInitialBlockSetting_80379 ;
      GGS_string var_otherBlockName_80417 ;
      ioArgument_ioBlockInitialBankSelectionMap.method_searchKey (GGS_string ("-").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2341)), var_otherInitialBlockSetting_80379, var_otherBlockName_80417, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2341)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::notEqual, var_otherInitialBlockSetting_80379.objectCompare (constinArgument_inInitialBlockSetting)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_exitBlockTerminationForBlockInstruction temp_2 = this ;
          GGS_string temp_3 ;
          const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, constinArgument_inInitialBlockSetting.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2344)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            temp_3 = GGS_string ("no bank") ;
          }else if (GalgasBool::boolFalse == test_4) {
            temp_3 = constinArgument_inInitialBlockSetting.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2344)) ;
          }
          GGS_string temp_5 ;
          const GalgasBool test_6 = GGS_bool (ComparisonKind::equal, var_otherInitialBlockSetting_80379.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2346)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_6) {
            temp_5 = GGS_string ("no bank") ;
          }else if (GalgasBool::boolFalse == test_6) {
            temp_5 = var_otherInitialBlockSetting_80379.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2346)) ;
          }
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mLocation (), GGS_string ("this block exits from block instruction and sets bank selection to ").add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2343)).add_operation (GGS_string (", '"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2344)).add_operation (var_otherBlockName_80417, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2345)).add_operation (GGS_string ("' block also exits, but sets bank selection to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2345)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2345)).add_operation (GGS_string ("; theses two settings should be the same"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2346)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2343)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    ioArgument_ioBlockInitialBankSelectionMap.setter_insertKey (GGS_string ("-").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2350)), constinArgument_inInitialBlockSetting, constinArgument_inCurrentBlockName, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2350)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@gotoTerminationForBlockInstruction addVisitedBlocks'
//--------------------------------------------------------------------------------------------------

void cPtr_gotoTerminationForBlockInstruction::method_addVisitedBlocks (GGS_stringset & ioArgument_ioVisitedBlockSet,
                                                                       const GGS_blockInstructionBlockMap constinArgument_inBlockMap,
                                                                       const GGS_string constinArgument_inCurrentBlockName,
                                                                       const GGS_uint constinArgument_inInitialBlockSetting,
                                                                       GGS_blockInitialBankSelectionMap & ioArgument_ioBlockInitialBankSelectionMap,
                                                                       GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                       GGS_bool & ioArgument_ioContinueAccessibilityExploration,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_gotoTerminationForBlockInstruction temp_1 = this ;
    test_0 = ioArgument_ioVisitedBlockSet.getter_hasKey (temp_1.readProperty_mNextBlock ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2364)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2364)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_gotoTerminationForBlockInstruction temp_2 = this ;
      ioArgument_ioVisitedBlockSet.plusPlusAssignOperation (temp_2.readProperty_mNextBlock ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2365)) ;
      ioArgument_ioContinueAccessibilityExploration = GGS_bool (true) ;
      const GGS_gotoTerminationForBlockInstruction temp_3 = this ;
      GGS_pic_31__38_InstructionList joker_81694 ; // Joker input parameter
      GGS_abstractBlockTerminationForBlockInstruction joker_81697 ; // Joker input parameter
      GGS_location joker_81700 ; // Joker input parameter
      constinArgument_inBlockMap.method_searchKey (temp_3.readProperty_mNextBlock (), joker_81694, joker_81697, joker_81700, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2367)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_gotoTerminationForBlockInstruction temp_5 = this ;
        test_4 = ioArgument_ioBlockInitialBankSelectionMap.getter_hasKey (temp_5.readProperty_mNextBlock ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2368)).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GGS_uint var_otherInitialBlockSetting_81856 ;
          GGS_string var_otherBlockName_81894 ;
          const GGS_gotoTerminationForBlockInstruction temp_6 = this ;
          ioArgument_ioBlockInitialBankSelectionMap.method_searchKey (temp_6.readProperty_mNextBlock (), var_otherInitialBlockSetting_81856, var_otherBlockName_81894, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2369)) ;
          GalgasBool test_7 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_7) {
            test_7 = GGS_bool (ComparisonKind::notEqual, var_otherInitialBlockSetting_81856.objectCompare (constinArgument_inInitialBlockSetting)).boolEnum () ;
            if (GalgasBool::boolTrue == test_7) {
              const GGS_gotoTerminationForBlockInstruction temp_8 = this ;
              const GGS_gotoTerminationForBlockInstruction temp_9 = this ;
              GGS_string temp_10 ;
              const GalgasBool test_11 = GGS_bool (ComparisonKind::equal, constinArgument_inInitialBlockSetting.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2372)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_11) {
                temp_10 = GGS_string ("no bank") ;
              }else if (GalgasBool::boolFalse == test_11) {
                temp_10 = constinArgument_inInitialBlockSetting.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2372)) ;
              }
              GGS_string temp_12 ;
              const GalgasBool test_13 = GGS_bool (ComparisonKind::equal, var_otherInitialBlockSetting_81856.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2374)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_13) {
                temp_12 = GGS_string ("no bank") ;
              }else if (GalgasBool::boolFalse == test_13) {
                temp_12 = var_otherInitialBlockSetting_81856.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2374)) ;
              }
              GenericArray <FixItDescription> fixItArray14 ;
              inCompiler->emitSemanticError (temp_8.readProperty_mNextBlock ().readProperty_location (), GGS_string ("this block goes to '").add_operation (temp_9.readProperty_mNextBlock ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2371)).add_operation (GGS_string ("' block and sets bank selection to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2371)).add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2371)).add_operation (GGS_string (", '"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2372)).add_operation (var_otherBlockName_81894, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2373)).add_operation (GGS_string ("' block goes to the same block, but sets bank selection to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2373)).add_operation (temp_12, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2373)).add_operation (GGS_string ("; theses two settings should be the same"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2374)), fixItArray14  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2371)) ;
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        {
        const GGS_gotoTerminationForBlockInstruction temp_15 = this ;
        ioArgument_ioBlockInitialBankSelectionMap.setter_insertKey (temp_15.readProperty_mNextBlock (), constinArgument_inInitialBlockSetting, constinArgument_inCurrentBlockName, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2378)) ;
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@testTerminationForBlockInstruction addVisitedBlocks'
//--------------------------------------------------------------------------------------------------

void cPtr_testTerminationForBlockInstruction::method_addVisitedBlocks (GGS_stringset & ioArgument_ioVisitedBlockSet,
                                                                       const GGS_blockInstructionBlockMap constinArgument_inBlockMap,
                                                                       const GGS_string constinArgument_inCurrentBlockName,
                                                                       const GGS_uint constinArgument_inInitialBlockSetting,
                                                                       GGS_blockInitialBankSelectionMap & ioArgument_ioBlockInitialBankSelectionMap,
                                                                       GGS_bool & ioArgument_ioContinuesInSequence,
                                                                       GGS_bool & ioArgument_ioContinueAccessibilityExploration,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_testTerminationForBlockInstruction temp_0 = this ;
  callExtensionMethod_addVisitedBlocks ((cPtr_abstractBlockTerminationForBlockInstruction *) temp_0.readProperty_mTrueTermination ().ptr (), ioArgument_ioVisitedBlockSet, constinArgument_inBlockMap, constinArgument_inCurrentBlockName, constinArgument_inInitialBlockSetting, ioArgument_ioBlockInitialBankSelectionMap, ioArgument_ioContinuesInSequence, ioArgument_ioContinueAccessibilityExploration, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2393)) ;
  const GGS_testTerminationForBlockInstruction temp_1 = this ;
  callExtensionMethod_addVisitedBlocks ((cPtr_abstractBlockTerminationForBlockInstruction *) temp_1.readProperty_mFalseTermination ().ptr (), ioArgument_ioVisitedBlockSet, constinArgument_inBlockMap, constinArgument_inCurrentBlockName, constinArgument_inInitialBlockSetting, ioArgument_ioBlockInitialBankSelectionMap, ioArgument_ioContinuesInSequence, ioArgument_ioContinueAccessibilityExploration, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2402)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@gotoTerminationForBlockInstruction generateBlock'
//--------------------------------------------------------------------------------------------------

void cPtr_gotoTerminationForBlockInstruction::method_generateBlock (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                    const GGS_uint /* constinArgument_inCurrentBank */,
                                                                    const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                    const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                    GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                    GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                    GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                    const GGS_string constinArgument_inLabelForBlock,
                                                                    GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outTerminator,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_gotoTerminationForBlockInstruction temp_0 = this ;
  const GGS_gotoTerminationForBlockInstruction temp_1 = this ;
  const GGS_gotoTerminationForBlockInstruction temp_2 = this ;
  outArgument_outTerminator = GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_0.readProperty_mNextBlock ().readProperty_location (), GGS_lstring::init_21__21_ (constinArgument_inLabelForBlock.add_operation (temp_1.readProperty_mNextBlock ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2440)), temp_2.readProperty_mNextBlock ().readProperty_location (), inCompiler COMMA_HERE), GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2441)), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@exitBlockTerminationForBlockInstruction generateBlock'
//--------------------------------------------------------------------------------------------------

void cPtr_exitBlockTerminationForBlockInstruction::method_generateBlock (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                         const GGS_uint /* constinArgument_inCurrentBank */,
                                                                         const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                         const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                         GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                         GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                         GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                         const GGS_string constinArgument_inLabelForBlock,
                                                                         GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outTerminator,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_exitBlockTerminationForBlockInstruction temp_0 = this ;
  const GGS_exitBlockTerminationForBlockInstruction temp_1 = this ;
  outArgument_outTerminator = GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_0.readProperty_mLocation (), GGS_lstring::init_21__21_ (constinArgument_inLabelForBlock.add_operation (GGS_string ("_exit"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2459)), temp_1.readProperty_mLocation (), inCompiler COMMA_HERE), GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2460)), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@testTerminationForBlockInstruction generateBlock'
//--------------------------------------------------------------------------------------------------

void cPtr_testTerminationForBlockInstruction::method_generateBlock (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                    const GGS_uint constinArgument_inCurrentBank,
                                                                    const GGS_registerTable constinArgument_inRegisterTable,
                                                                    const GGS_constantMap constinArgument_inConstantMap,
                                                                    GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                    GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                    GGS_stringset & ioArgument_ioUsedRegisters,
                                                                    const GGS_string constinArgument_inLabelForBlock,
                                                                    GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outTerminator,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_testTerminationForBlockInstruction temp_0 = this ;
  GGS_lstring var_conditionTrueLabel_85753 = GGS_lstring::init_21__21_ (GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2476)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2476)), temp_0.readProperty_mLocation (), inCompiler COMMA_HERE) ;
  ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2477)) ;
  const GGS_testTerminationForBlockInstruction temp_1 = this ;
  GGS_lstring var_conditionFalseLabel_85869 = GGS_lstring::init_21__21_ (GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2478)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2478)), temp_1.readProperty_mLocation (), inCompiler COMMA_HERE) ;
  ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2479)) ;
  const GGS_testTerminationForBlockInstruction temp_2 = this ;
  callExtensionMethod_analyzeCondition ((cPtr_pic_31__38_ConditionExpression *) temp_2.readProperty_mCondition ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel_85753, var_conditionFalseLabel_85869, ioArgument_ioUsedRegisters, outArgument_outTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2481)) ;
  GGS_ipic_31__38_AbstractBlockTerminator var_trueTerminator_86573 ;
  const GGS_testTerminationForBlockInstruction temp_3 = this ;
  callExtensionMethod_generateBlock ((cPtr_abstractBlockTerminationForBlockInstruction *) temp_3.readProperty_mTrueTermination ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, ioArgument_ioUsedRegisters, constinArgument_inLabelForBlock, var_trueTerminator_86573, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2494)) ;
  ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2506)), var_conditionTrueLabel_85753, GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE), var_trueTerminator_86573, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2510)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2505)) ;
  GGS_ipic_31__38_AbstractBlockTerminator var_falseTerminator_87077 ;
  const GGS_testTerminationForBlockInstruction temp_4 = this ;
  callExtensionMethod_generateBlock ((cPtr_abstractBlockTerminationForBlockInstruction *) temp_4.readProperty_mFalseTermination ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, ioArgument_ioUsedRegisters, constinArgument_inLabelForBlock, var_falseTerminator_87077, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2514)) ;
  ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2526)), var_conditionFalseLabel_85869, GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE), var_falseTerminator_87077, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2530)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2525)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_block analyze'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_block::method_analyze (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                           GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                           const GGS_routineMap constinArgument_inRoutineMap,
                                                           const GGS_registerTable constinArgument_inRegisterTable,
                                                           const GGS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                           const GGS_constantMap constinArgument_inConstantMap,
                                                           const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                           GGS_uint & ioArgument_ioLocalLabelIndex,
                                                           GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                           GGS_lstring & ioArgument_ioBlockLabel,
                                                           GGS_string & ioArgument_ioListFileContents,
                                                           GGS_uint & ioArgument_ioCurrentBank,
                                                           const GGS_bool constinArgument_inShouldPreserveBSR,
                                                           const GGS_routineKind constinArgument_inRoutineKind,
                                                           GGS_stringset & ioArgument_ioUsedRegisters,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_labelForBlock_87966 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2555)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2555)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2555)) ;
  ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2556)) ;
  const GGS_pic_31__38_Instruction_5F_block temp_0 = this ;
  const GGS_pic_31__38_Instruction_5F_block temp_1 = this ;
  const GGS_pic_31__38_Instruction_5F_block temp_2 = this ;
  ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2559)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_0.readProperty_mStartBlockName ().readProperty_location (), GGS_lstring::init_21__21_ (var_labelForBlock_87966.add_operation (temp_1.readProperty_mStartBlockName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2564)), temp_2.readProperty_mStartBlockName ().readProperty_location (), inCompiler COMMA_HERE), GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2565)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2566)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2558)) ;
  ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  GGS_blockInstructionBlockMap var_blockMap_88531 = GGS_blockInstructionBlockMap::init (inCompiler COMMA_HERE) ;
  const GGS_pic_31__38_Instruction_5F_block temp_3 = this ;
  UpEnumerator_pic_31__38_BlockInstructionBlockList enumerator_88642 (temp_3.readProperty_mBlockList ()) ;
  while (enumerator_88642.hasCurrentObject ()) {
    {
    var_blockMap_88531.setter_insertKey (enumerator_88642.current_mBlockName (HERE), enumerator_88642.current_mInstructionList (HERE), enumerator_88642.current_mBlockTerminaisonForBlockInstruction (HERE), enumerator_88642.current_mEndOfBlock (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2573)) ;
    }
    enumerator_88642.gotoNextObject () ;
  }
  const GGS_pic_31__38_Instruction_5F_block temp_4 = this ;
  GGS_pic_31__38_InstructionList joker_88872 ; // Joker input parameter
  GGS_abstractBlockTerminationForBlockInstruction joker_88875 ; // Joker input parameter
  GGS_location joker_88878 ; // Joker input parameter
  var_blockMap_88531.method_searchKey (temp_4.readProperty_mStartBlockName (), joker_88872, joker_88875, joker_88878, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2576)) ;
  GGS_blockInitialBankSelectionMap var_blockInitialBankSelectionMap_88888 = GGS_blockInitialBankSelectionMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_pic_31__38_Instruction_5F_block temp_5 = this ;
  var_blockInitialBankSelectionMap_88888.setter_insertKey (temp_5.readProperty_mStartBlockName (), ioArgument_ioCurrentBank, GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2578)) ;
  }
  const GGS_pic_31__38_Instruction_5F_block temp_6 = this ;
  GGS_stringset var_accessibleBlockSet_89076 = GGS_stringset::class_func_setWithString (temp_6.readProperty_mStartBlockName ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2580)) ;
  GGS_stringset var_handledBlockSet_89158 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_bool var_continueAccessibilityExploration_89201 = GGS_bool (true) ;
  GGS_bool var_continuesInSequence_89253 = GGS_bool (false) ;
  const GGS_pic_31__38_Instruction_5F_block temp_7 = this ;
  if (temp_7.readProperty_mBlockList ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2584)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2584)).isValid ()) {
    uint32_t variant_89283 = temp_7.readProperty_mBlockList ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2584)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2584)).uintValue () ;
    bool loop_89283 = true ;
    while (loop_89283) {
      loop_89283 = var_continueAccessibilityExploration_89201.isValid () ;
      if (loop_89283) {
        loop_89283 = var_continueAccessibilityExploration_89201.boolValue () ;
      }
      if (loop_89283 && (0 == variant_89283)) {
        loop_89283 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2584)) ;
      }
      if (loop_89283) {
        variant_89283 -= 1 ;
        var_continueAccessibilityExploration_89201 = GGS_bool (false) ;
        UpEnumerator_stringset enumerator_89454 (var_accessibleBlockSet_89076.substract_operation (var_handledBlockSet_89158, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2586))) ;
        while (enumerator_89454.hasCurrentObject ()) {
          var_handledBlockSet_89158.plusPlusAssignOperation (enumerator_89454.current (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2587)) ;
          GGS_pic_31__38_InstructionList var_instructionList_89613 ;
          GGS_abstractBlockTerminationForBlockInstruction var_blockTermination_89687 ;
          GGS_location var_endOfBlock_89727 ;
          var_blockMap_88531.method_searchKey (enumerator_89454.current (HERE).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2589)), var_instructionList_89613, var_blockTermination_89687, var_endOfBlock_89727, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2588)) ;
          GGS_uint var_currentBank_89855 ;
          GGS_string joker_89867 ; // Joker input parameter
          var_blockInitialBankSelectionMap_88888.method_searchKey (enumerator_89454.current (HERE).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2595)), var_currentBank_89855, joker_89867, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2595)) ;
          ioArgument_ioBlockLabel = GGS_lstring::init_21__21_ (var_labelForBlock_87966.add_operation (enumerator_89454.current (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2596)), var_blockMap_88531.getter_locationForKey (enumerator_89454.current (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2596)), inCompiler COMMA_HERE) ;
          {
          routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (var_instructionList_89613, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_currentBank_89855, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2597)) ;
          }
          GGS_ipic_31__38_AbstractBlockTerminator var_terminator_90729 ;
          callExtensionMethod_generateBlock ((cPtr_abstractBlockTerminationForBlockInstruction *) var_blockTermination_89687.ptr (), constinArgument_inAccessBankSplitOffset, var_currentBank_89855, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, ioArgument_ioUsedRegisters, var_labelForBlock_87966, var_terminator_90729, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2615)) ;
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = GGS_bool (ComparisonKind::equal, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              GenericArray <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (var_endOfBlock_89727, GGS_string ("execution will not reach the end of the block, but endless block is not allowed"), fixItArray9  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2627)) ;
            }
          }
          ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2630)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_terminator_90729, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2634)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2629)) ;
          ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
          callExtensionMethod_addVisitedBlocks ((cPtr_abstractBlockTerminationForBlockInstruction *) var_blockTermination_89687.ptr (), var_accessibleBlockSet_89076, var_blockMap_88531, enumerator_89454.current (HERE), var_currentBank_89855, var_blockInitialBankSelectionMap_88888, var_continuesInSequence_89253, var_continueAccessibilityExploration_89201, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2639)) ;
          enumerator_89454.gotoNextObject () ;
        }
      }
    }
  }
  const GGS_pic_31__38_Instruction_5F_block temp_10 = this ;
  UpEnumerator_pic_31__38_BlockInstructionBlockList enumerator_91436 (temp_10.readProperty_mBlockList ()) ;
  while (enumerator_91436.hasCurrentObject ()) {
    GalgasBool test_11 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_11) {
      test_11 = var_accessibleBlockSet_89076.getter_hasKey (enumerator_91436.current_mBlockName (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2644)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2644)).boolEnum () ;
      if (GalgasBool::boolTrue == test_11) {
        const GGS_pic_31__38_Instruction_5F_block temp_12 = this ;
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticWarning (enumerator_91436.current_mBlockName (HERE).readProperty_location (), GGS_string ("this block is not accessible from '").add_operation (temp_12.readProperty_mStartBlockName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2645)).add_operation (GGS_string ("' block"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2645)), fixItArray13  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2645)) ;
      }
    }
    enumerator_91436.gotoNextObject () ;
  }
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    test_14 = var_continuesInSequence_89253.boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      const GGS_pic_31__38_Instruction_5F_block temp_15 = this ;
      ioArgument_ioBlockLabel = GGS_lstring::init_21__21_ (var_labelForBlock_87966.add_operation (GGS_string ("_exit"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2650)), temp_15.readProperty_mStartBlockName ().readProperty_location (), inCompiler COMMA_HERE) ;
      GGS_string joker_91834 ; // Joker input parameter
      var_blockInitialBankSelectionMap_88888.method_searchKey (GGS_string ("-").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2651)), ioArgument_ioCurrentBank, joker_91834, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2651)) ;
    }
  }
  if (GalgasBool::boolFalse == test_14) {
    ioArgument_ioBlockLabel = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2653)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18BccInStructuredCondition analyzeCondition'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_BccInStructuredCondition::method_analyzeCondition (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                        const GGS_uint /* constinArgument_inCurrentBank */,
                                                                        const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                        const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                        GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                        GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                        const GGS_lstring constinArgument_inConditionTrueLabel,
                                                                        const GGS_lstring constinArgument_inConditionFalseLabel,
                                                                        GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                        GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outCurrentBlockTerminator,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_BccInStructuredCondition temp_0 = this ;
  const GGS_pic_31__38_BccInStructuredCondition temp_1 = this ;
  outArgument_outCurrentBlockTerminator = GGS_ipic_31__38_ConditionalJumpTerminator::init_21__21__21__21__21__21_ (temp_0.readProperty_mConditionLocation (), temp_1.readProperty_mCondition (), constinArgument_inConditionTrueLabel, GGS_conditionalBranchMode::class_func_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2693)), constinArgument_inConditionFalseLabel, GGS_conditionalBranchMode::class_func_native (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2695)), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18RegisterComparisonCondition analyzeCondition'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_RegisterComparisonCondition::method_analyzeCondition (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                           const GGS_uint constinArgument_inCurrentBank,
                                                                           const GGS_registerTable constinArgument_inRegisterTable,
                                                                           const GGS_constantMap constinArgument_inConstantMap,
                                                                           GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                           GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                           const GGS_lstring constinArgument_inConditionTrueLabel,
                                                                           const GGS_lstring constinArgument_inConditionFalseLabel,
                                                                           GGS_stringset & ioArgument_ioUsedRegisters,
                                                                           GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outCurrentBlockTerminator,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_94032 ;
  const GGS_pic_31__38_RegisterComparisonCondition temp_0 = this ;
  GGS_bitSliceTable joker_94060 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (false), var_IPICregisterDescription_94032, joker_94060, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2711)) ;
  GGS_ipic_31__38_RegisterComparison var_ipicComparison_94145 ;
  GGS_bool var_complementaryBranch_94172 ;
  const GGS_pic_31__38_RegisterComparisonCondition temp_1 = this ;
  switch (temp_1.readProperty_mComparison ().enumValue ()) {
  case GGS_pic_31__38_RegisterComparison::Enumeration::invalid:
    break ;
  case GGS_pic_31__38_RegisterComparison::Enumeration::enum_equal:
    {
      var_ipicComparison_94145 = GGS_ipic_31__38_RegisterComparison::class_func_registerEqualsToW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2726)) ;
      var_complementaryBranch_94172 = GGS_bool (false) ;
    }
    break ;
  case GGS_pic_31__38_RegisterComparison::Enumeration::enum_greater:
    {
      var_ipicComparison_94145 = GGS_ipic_31__38_RegisterComparison::class_func_registerGreaterThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2729)) ;
      var_complementaryBranch_94172 = GGS_bool (false) ;
    }
    break ;
  case GGS_pic_31__38_RegisterComparison::Enumeration::enum_lower:
    {
      var_ipicComparison_94145 = GGS_ipic_31__38_RegisterComparison::class_func_registerLowerThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2732)) ;
      var_complementaryBranch_94172 = GGS_bool (false) ;
    }
    break ;
  case GGS_pic_31__38_RegisterComparison::Enumeration::enum_greaterOrEqual:
    {
      var_ipicComparison_94145 = GGS_ipic_31__38_RegisterComparison::class_func_registerLowerThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2735)) ;
      var_complementaryBranch_94172 = GGS_bool (true) ;
    }
    break ;
  case GGS_pic_31__38_RegisterComparison::Enumeration::enum_lowerOrEqual:
    {
      var_ipicComparison_94145 = GGS_ipic_31__38_RegisterComparison::class_func_registerGreaterThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2738)) ;
      var_complementaryBranch_94172 = GGS_bool (true) ;
    }
    break ;
  case GGS_pic_31__38_RegisterComparison::Enumeration::enum_notEqual:
    {
      var_ipicComparison_94145 = GGS_ipic_31__38_RegisterComparison::class_func_registerEqualsToW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2741)) ;
      var_complementaryBranch_94172 = GGS_bool (true) ;
    }
    break ;
  }
  const GGS_pic_31__38_RegisterComparisonCondition temp_2 = this ;
  GGS_location var_location_94983 = temp_2.readProperty_mRegisterExpression ().readProperty_mRegisterName ().readProperty_location () ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_complementaryBranch_94172.boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      outArgument_outCurrentBlockTerminator = GGS_pic_31__38_RegisterComparisonTerminator::init_21__21__21__21__21_ (var_location_94983, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_94983, constinArgument_inConditionFalseLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2749)), inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_94983, constinArgument_inConditionTrueLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2750)), inCompiler COMMA_HERE), var_IPICregisterDescription_94032, var_ipicComparison_94145, inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    outArgument_outCurrentBlockTerminator = GGS_pic_31__38_RegisterComparisonTerminator::init_21__21__21__21__21_ (var_location_94983, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_94983, constinArgument_inConditionTrueLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2756)), inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_94983, constinArgument_inConditionFalseLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2757)), inCompiler COMMA_HERE), var_IPICregisterDescription_94032, var_ipicComparison_94145, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18IncDecRegisterInCondition analyzeCondition'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_IncDecRegisterInCondition::method_analyzeCondition (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                         const GGS_uint constinArgument_inCurrentBank,
                                                                         const GGS_registerTable constinArgument_inRegisterTable,
                                                                         const GGS_constantMap constinArgument_inConstantMap,
                                                                         GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                         GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                         const GGS_lstring constinArgument_inConditionTrueLabel,
                                                                         const GGS_lstring constinArgument_inConditionFalseLabel,
                                                                         GGS_stringset & ioArgument_ioUsedRegisters,
                                                                         GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outCurrentBlockTerminator,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_96491 ;
  const GGS_pic_31__38_IncDecRegisterInCondition temp_0 = this ;
  GGS_bitSliceTable joker_96519 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_IPICregisterDescription_96491, joker_96519, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2776)) ;
  const GGS_pic_31__38_IncDecRegisterInCondition temp_1 = this ;
  GGS_location var_location_96603 = temp_1.readProperty_mRegisterExpression ().readProperty_mRegisterName ().readProperty_location () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_pic_31__38_IncDecRegisterInCondition temp_3 = this ;
    test_2 = temp_3.readProperty_mBranchIfZero ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_pic_31__38_IncDecRegisterInCondition temp_4 = this ;
      const GGS_pic_31__38_IncDecRegisterInCondition temp_5 = this ;
      outArgument_outCurrentBlockTerminator = GGS_ipic_31__38_IncDecRegisterTerminator::init_21__21__21__21__21__21_ (var_location_96603, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_96603, constinArgument_inConditionTrueLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2791)), inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_96603, constinArgument_inConditionFalseLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2792)), inCompiler COMMA_HERE), var_IPICregisterDescription_96491, temp_4.readProperty_mIncrement (), temp_5.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_pic_31__38_IncDecRegisterInCondition temp_6 = this ;
    const GGS_pic_31__38_IncDecRegisterInCondition temp_7 = this ;
    outArgument_outCurrentBlockTerminator = GGS_ipic_31__38_IncDecRegisterTerminator::init_21__21__21__21__21__21_ (var_location_96603, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_96603, constinArgument_inConditionFalseLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2799)), inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_96603, constinArgument_inConditionTrueLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2800)), inCompiler COMMA_HERE), var_IPICregisterDescription_96491, temp_6.readProperty_mIncrement (), temp_7.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18RegisterTestCondition analyzeCondition'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_RegisterTestCondition::method_analyzeCondition (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                     const GGS_uint constinArgument_inCurrentBank,
                                                                     const GGS_registerTable constinArgument_inRegisterTable,
                                                                     const GGS_constantMap constinArgument_inConstantMap,
                                                                     GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                     GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                     const GGS_lstring constinArgument_inConditionTrueLabel,
                                                                     const GGS_lstring constinArgument_inConditionFalseLabel,
                                                                     GGS_stringset & ioArgument_ioUsedRegisters,
                                                                     GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outCurrentBlockTerminator,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_98163 ;
  const GGS_pic_31__38_RegisterTestCondition temp_0 = this ;
  GGS_bitSliceTable joker_98191 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (false), var_IPICregisterDescription_98163, joker_98191, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2820)) ;
  const GGS_pic_31__38_RegisterTestCondition temp_1 = this ;
  GGS_location var_location_98275 = temp_1.readProperty_mRegisterExpression ().readProperty_mRegisterName ().readProperty_location () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_pic_31__38_RegisterTestCondition temp_3 = this ;
    test_2 = temp_3.readProperty_mBranchIfZero ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      outArgument_outCurrentBlockTerminator = GGS_pic_31__38_TestRegisterTerminator::init_21__21__21__21_ (var_location_98275, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_98275, constinArgument_inConditionTrueLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2835)), inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_98275, constinArgument_inConditionFalseLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2836)), inCompiler COMMA_HERE), var_IPICregisterDescription_98163, inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    outArgument_outCurrentBlockTerminator = GGS_pic_31__38_TestRegisterTerminator::init_21__21__21__21_ (var_location_98275, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_98275, constinArgument_inConditionFalseLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2841)), inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_98275, constinArgument_inConditionTrueLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2842)), inCompiler COMMA_HERE), var_IPICregisterDescription_98163, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18BitTestInStructuredCondition analyzeCondition'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_BitTestInStructuredCondition::method_analyzeCondition (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                            const GGS_uint constinArgument_inCurrentBank,
                                                                            const GGS_registerTable constinArgument_inRegisterTable,
                                                                            const GGS_constantMap constinArgument_inConstantMap,
                                                                            GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                            GGS_ipic_31__38_BlockList & /* ioArgument_ioGeneratedBlockList */,
                                                                            const GGS_lstring constinArgument_inConditionTrueLabel,
                                                                            const GGS_lstring constinArgument_inConditionFalseLabel,
                                                                            GGS_stringset & ioArgument_ioUsedRegisters,
                                                                            GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outCurrentBlockTerminator,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_99730 ;
  GGS_bitSliceTable var_bitSliceTable_99778 ;
  const GGS_pic_31__38_BitTestInStructuredCondition temp_0 = this ;
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (false), var_IPICregisterDescription_99730, var_bitSliceTable_99778, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2860)) ;
  GGS_uint var_bitNumber_99946 ;
  const GGS_pic_31__38_BitTestInStructuredCondition temp_1 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_99778, var_bitNumber_99946, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2870)) ;
  const GGS_pic_31__38_BitTestInStructuredCondition temp_2 = this ;
  GGS_location var_location_100015 = temp_2.readProperty_mRegisterExpression ().readProperty_mRegisterName ().readProperty_location () ;
  outArgument_outCurrentBlockTerminator = GGS_pic_31__38_BitTestTerminator::init_21__21__21__21__21_ (var_location_100015, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_100015, constinArgument_inConditionFalseLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2881)), inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_100015, constinArgument_inConditionTrueLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2882)), inCompiler COMMA_HERE), var_IPICregisterDescription_99730, var_bitNumber_99946, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18NegateCondition analyzeCondition'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_NegateCondition::method_analyzeCondition (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                               const GGS_uint constinArgument_inCurrentBank,
                                                               const GGS_registerTable constinArgument_inRegisterTable,
                                                               const GGS_constantMap constinArgument_inConstantMap,
                                                               GGS_uint & ioArgument_ioLocalLabelIndex,
                                                               GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                               const GGS_lstring constinArgument_inConditionTrueLabel,
                                                               const GGS_lstring constinArgument_inConditionFalseLabel,
                                                               GGS_stringset & ioArgument_ioUsedRegisters,
                                                               GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outCurrentBlockTerminator,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_NegateCondition temp_0 = this ;
  callExtensionMethod_analyzeCondition ((cPtr_pic_31__38_ConditionExpression *) temp_0.readProperty_mCondition ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, constinArgument_inConditionFalseLabel, constinArgument_inConditionTrueLabel, ioArgument_ioUsedRegisters, outArgument_outCurrentBlockTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2901)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18AndCondition analyzeCondition'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_AndCondition::method_analyzeCondition (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                            const GGS_uint constinArgument_inCurrentBank,
                                                            const GGS_registerTable constinArgument_inRegisterTable,
                                                            const GGS_constantMap constinArgument_inConstantMap,
                                                            GGS_uint & ioArgument_ioLocalLabelIndex,
                                                            GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                            const GGS_lstring constinArgument_inConditionTrueLabel,
                                                            const GGS_lstring constinArgument_inConditionFalseLabel,
                                                            GGS_stringset & ioArgument_ioUsedRegisters,
                                                            GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outCurrentBlockTerminator,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_conditionTrueLabel_101733 = GGS_lstring::init_21__21_ (GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2929)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2929)), constinArgument_inConditionTrueLabel.readProperty_location (), inCompiler COMMA_HERE) ;
  ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2930)) ;
  const GGS_pic_31__38_AndCondition temp_0 = this ;
  callExtensionMethod_analyzeCondition ((cPtr_pic_31__38_ConditionExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel_101733, constinArgument_inConditionFalseLabel, ioArgument_ioUsedRegisters, outArgument_outCurrentBlockTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2932)) ;
  GGS_ipic_31__38_AbstractBlockTerminator var_secondTestBlockTerminator_102487 ;
  const GGS_pic_31__38_AndCondition temp_1 = this ;
  callExtensionMethod_analyzeCondition ((cPtr_pic_31__38_ConditionExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, constinArgument_inConditionTrueLabel, constinArgument_inConditionFalseLabel, ioArgument_ioUsedRegisters, var_secondTestBlockTerminator_102487, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2945)) ;
  ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2959)), var_conditionTrueLabel_101733, GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE), var_secondTestBlockTerminator_102487, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2963)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2958)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyzeInstructionList?&??????&&&&&??&'
//
//--------------------------------------------------------------------------------------------------

void routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (const GGS_pic_31__38_InstructionList constinArgument_inInstructionList,
                                                                                                     GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                                                     const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                                                     const GGS_routineMap constinArgument_inRoutineMap,
                                                                                                     const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                     const GGS_pic_31__38__5F_dataMap constinArgument_inDataMap,
                                                                                                     const GGS_constantMap constinArgument_inConstantMap,
                                                                                                     const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                                     GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                     GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                     GGS_lstring & ioArgument_ioBlockLabel,
                                                                                                     GGS_string & ioArgument_ioListFileContents,
                                                                                                     GGS_uint & ioArgument_ioCurrentBank,
                                                                                                     const GGS_bool constinArgument_inShouldPreserveBSR,
                                                                                                     const GGS_routineKind constinArgument_inRoutineKind,
                                                                                                     GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_pic_31__38_InstructionList enumerator_103519 (constinArgument_inInstructionList) ;
  while (enumerator_103519.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GenericArray <FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_103519.current_mInstruction (HERE).readProperty_mInstructionLocation (), GGS_string ("Unreachable code"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2993)) ;
        ioArgument_ioBlockLabel = GGS_string ("\?").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 2994)) ;
      }
    }
    callExtensionMethod_analyze ((cPtr_pic_31__38_PiccoloInstruction *) enumerator_103519.current_mInstruction (HERE).ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioGeneratedBlockList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 2996)) ;
    enumerator_103519.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'pic18_analyze_data_sections???&!&&'
//
//--------------------------------------------------------------------------------------------------

void routine_pic_31__38__5F_analyze_5F_data_5F_sections_3F__3F__3F__26__21__26__26_ (const GGS_dataList constinArgument_inDataDefinitionList,
                                                                                     const GGS_registerTable constinArgument_inRegisterTable,
                                                                                     const GGS_constantMap constinArgument_inConstantMap,
                                                                                     GGS_string & ioArgument_ioListFileContents,
                                                                                     GGS_pic_31__38__5F_dataMap & outArgument_outDataMap,
                                                                                     GGS_constantMap & ioArgument_ioConstantMap,
                                                                                     GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outDataMap.drop () ; // Release 'out' argument
  outArgument_outDataMap = GGS_pic_31__38__5F_dataMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_dataList enumerator_104818 (constinArgument_inDataDefinitionList) ;
  const bool bool_0 = true ;
  if (enumerator_104818.hasCurrentObject () && bool_0) {
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3034)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3034)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3034)) ;
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("DATA DECLARATION").getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3035)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3035)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3035)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3035)) ;
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3036)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3036)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3036)) ;
    while (enumerator_104818.hasCurrentObject () && bool_0) {
      GGS_uintlist var_data_105137 = GGS_uintlist::init (inCompiler COMMA_HERE) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = enumerator_104818.current_mIsByteList (HERE).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GalgasBool test_2 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_2) {
            test_2 = GGS_bool (ComparisonKind::notEqual, enumerator_104818.current_mValueList (HERE).getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3040)).operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3040)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_2) {
              GenericArray <FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (enumerator_104818.current_mDataName (HERE).readProperty_location (), GGS_string ("the data8 byte count should be even"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3041)) ;
            }
          }
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Data8 '").add_operation (enumerator_104818.current_mDataName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3043)).add_operation (GGS_string ("', "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3043)).add_operation (enumerator_104818.current_mValueList (HERE).getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3043)).divide_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3043)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3043)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3043)).add_operation (GGS_string (" words ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3043)).add_operation (enumerator_104818.current_mValueList (HERE).getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3044)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3044)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3044)).add_operation (GGS_string (" bytes).\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3044)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3043)) ;
          {
          ioArgument_ioConstantMap.setter_insertKey (GGS_lstring::init_21__21_ (enumerator_104818.current_mDataName (HERE).readProperty_string ().add_operation (GGS_string ("_BYTE_COUNT"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3045)), enumerator_104818.current_mDataName (HERE).readProperty_location (), inCompiler COMMA_HERE), enumerator_104818.current_mValueList (HERE).getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3045)).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3045)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3045)) ;
          }
          GGS_sint var_byte_105535 = GGS_sint (int32_t (0L)) ;
          UpEnumerator_immediatExpressionList enumerator_105566 (enumerator_104818.current_mValueList (HERE)) ;
          GGS_uint index_105550 (uint32_t (0)) ;
          while (enumerator_105566.hasCurrentObject ()) {
            GGS_sint_36__34_ var_value_105674 ;
            callExtensionMethod_eval ((cPtr_immediatExpression *) enumerator_105566.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_value_105674, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3048)) ;
            GalgasBool test_4 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_4) {
              test_4 = GGS_bool (ComparisonKind::lowerThan, var_value_105674.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_4) {
                GenericArray <FixItDescription> fixItArray5 ;
                inCompiler->emitSemanticError (enumerator_105566.current_mErrorLocation (HERE), GGS_string ("data8 value is ").add_operation (var_value_105674.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3050)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3050)).add_operation (GGS_string (" (negative)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3050)), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3050)) ;
              }
            }
            if (GalgasBool::boolFalse == test_4) {
              GalgasBool test_6 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_6) {
                test_6 = GGS_bool (ComparisonKind::greaterThan, var_value_105674.objectCompare (GGS_sint_36__34_ (int64_t (255LL)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_6) {
                  GenericArray <FixItDescription> fixItArray7 ;
                  inCompiler->emitSemanticError (enumerator_105566.current_mErrorLocation (HERE), GGS_string ("data8 value is ").add_operation (var_value_105674.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3052)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3052)).add_operation (GGS_string (" (greater than 255"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3052)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3052)) ;
                }
              }
              if (GalgasBool::boolFalse == test_6) {
                GalgasBool test_8 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_8) {
                  test_8 = GGS_bool (ComparisonKind::equal, index_105550.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3053)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_8) {
                    var_byte_105535 = var_value_105674.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3054)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_8) {
                  var_data_105137.addAssignOperation (var_value_105674.left_shift_operation (GGS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3056)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3056)).operator_or (var_byte_105535.getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3056)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3056)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3056))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3056)) ;
                }
              }
            }
            enumerator_105566.gotoNextObject () ;
            index_105550.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3047)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Data16 '").add_operation (enumerator_104818.current_mDataName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3060)).add_operation (GGS_string ("', "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3060)).add_operation (enumerator_104818.current_mValueList (HERE).getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3060)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3060)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3060)).add_operation (GGS_string (" words ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3060)).add_operation (enumerator_104818.current_mValueList (HERE).getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3061)).multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3061)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3061)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3061)).add_operation (GGS_string (" bytes).\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3061)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3060)) ;
        {
        ioArgument_ioConstantMap.setter_insertKey (GGS_lstring::init_21__21_ (enumerator_104818.current_mDataName (HERE).readProperty_string ().add_operation (GGS_string ("_BYTE_COUNT"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3062)), enumerator_104818.current_mDataName (HERE).readProperty_location (), inCompiler COMMA_HERE), enumerator_104818.current_mValueList (HERE).getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3062)).multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3062)).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3062)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3062)) ;
        }
        UpEnumerator_immediatExpressionList enumerator_106321 (enumerator_104818.current_mValueList (HERE)) ;
        while (enumerator_106321.hasCurrentObject ()) {
          GGS_sint_36__34_ var_value_106425 ;
          callExtensionMethod_eval ((cPtr_immediatExpression *) enumerator_106321.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_value_106425, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3064)) ;
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = GGS_bool (ComparisonKind::lowerThan, var_value_106425.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              GenericArray <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (enumerator_106321.current_mErrorLocation (HERE), GGS_string ("data16 value is ").add_operation (var_value_106425.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3066)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3066)).add_operation (GGS_string (" (negative)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3066)), fixItArray10  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3066)) ;
            }
          }
          if (GalgasBool::boolFalse == test_9) {
            GalgasBool test_11 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_11) {
              test_11 = GGS_bool (ComparisonKind::greaterThan, var_value_106425.objectCompare (GGS_sint_36__34_ (int64_t (65535LL)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_11) {
                GenericArray <FixItDescription> fixItArray12 ;
                inCompiler->emitSemanticError (enumerator_106321.current_mErrorLocation (HERE), GGS_string ("data16 value is ").add_operation (var_value_106425.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3068)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3068)).add_operation (GGS_string (" (greater than 2**16-1)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3068)), fixItArray12  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3068)) ;
              }
            }
            if (GalgasBool::boolFalse == test_11) {
              var_data_105137.addAssignOperation (var_value_106425.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3070))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3070)) ;
            }
          }
          enumerator_106321.gotoNextObject () ;
        }
      }
      {
      outArgument_outDataMap.setter_insertKey (enumerator_104818.current_mDataName (HERE), var_data_105137, enumerator_104818.current_mIsByteList (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3074)) ;
      }
      enumerator_104818.gotoNextObject () ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'build_ipic18_block_representation_list?????????????????????????&'
//
//--------------------------------------------------------------------------------------------------

void routine_build_5F_ipic_31__38__5F_block_5F_representation_5F_list_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__26_ (const GGS_string constinArgument_inSourceFileName,
                                                                                                                                                                               const GGS_sint_36__34_ constinArgument_inROMSize,
                                                                                                                                                                               const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                                                                                                               const GGS_routineDeclarationList constinArgument_inBootloaderRoutineDeclarationListForBootloaderImplementation,
                                                                                                                                                                               const GGS_routineDeclarationList constinArgument_inUserRoutineDeclarationListForBootloaderImplementation,
                                                                                                                                                                               const GGS_luint constinArgument_inBootloaderReservedROMsize,
                                                                                                                                                                               const GGS_routineDeclarationList constinArgument_inBootloaderRoutineDeclarationListForUserProgramImplementation,
                                                                                                                                                                               const GGS_routineDeclarationList constinArgument_inUserRoutineDeclarationListForUserProgramImplementation,
                                                                                                                                                                               const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                                                                                                                               const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                                                                                               const GGS_declaredByteMap constinArgument_inDeclaredByteMap,
                                                                                                                                                                               const GGS_pic_31__38_RoutineDefinitionList constinArgument_inRoutineDefinitionList,
                                                                                                                                                                               const GGS_programKind constinArgument_inProgramKind,
                                                                                                                                                                               const GGS_constantMap constinArgument_inConstantMap,
                                                                                                                                                                               const GGS_stringset constinArgument_inUsedRegisters,
                                                                                                                                                                               const GGS_dataList constinArgument_inDataList,
                                                                                                                                                                               const GGS_pic_31__38_InterruptDefinitionList constinArgument_inInterruptDefinitionList,
                                                                                                                                                                               const GGS_lstringlist constinArgument_inUnusedRegisterList,
                                                                                                                                                                               const GGS_ramBankTable constinArgument_inRamBank,
                                                                                                                                                                               const GGS_bool constinArgument_inHasHighInterrupt,
                                                                                                                                                                               const GGS_bool constinArgument_inHasLowInterrupt,
                                                                                                                                                                               const GGS_string constinArgument_inProcessorName,
                                                                                                                                                                               const GGS_registerTable constinArgument_inPredefinedRegisters,
                                                                                                                                                                               const GGS_actualConfigurationMap constinArgument_inActualConfigurationMap,
                                                                                                                                                                               const GGS_location constinArgument_inEndOfProgram,
                                                                                                                                                                               GGS_string & ioArgument_ioListFileContents,
                                                                                                                                                                               Compiler * inCompiler
                                                                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_constantMap var_constantMap_108130 = constinArgument_inConstantMap ;
  GGS_stringset var_usedRegisters_108164 = constinArgument_inUsedRegisters ;
  GGS_routineMap var_routineMap_108255 = GGS_routineMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_routineDeclarationList enumerator_108345 (constinArgument_inUserRoutineDeclarationListForBootloaderImplementation) ;
  while (enumerator_108345.hasCurrentObject ()) {
    {
    var_routineMap_108255.setter_insertKey (enumerator_108345.current_mRoutineName (HERE), enumerator_108345.current_mIsNoReturn (HERE), enumerator_108345.current_mRequiredBank (HERE).readProperty_uint (), enumerator_108345.current_mReturnedBank (HERE).readProperty_uint (), enumerator_108345.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3113)) ;
    }
    enumerator_108345.gotoNextObject () ;
  }
  UpEnumerator_routineDeclarationList enumerator_108602 (constinArgument_inBootloaderRoutineDeclarationListForUserProgramImplementation) ;
  while (enumerator_108602.hasCurrentObject ()) {
    {
    var_routineMap_108255.setter_insertKey (enumerator_108602.current_mRoutineName (HERE), enumerator_108602.current_mIsNoReturn (HERE), enumerator_108602.current_mRequiredBank (HERE).readProperty_uint (), enumerator_108602.current_mReturnedBank (HERE).readProperty_uint (), enumerator_108602.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3116)) ;
    }
    enumerator_108602.gotoNextObject () ;
  }
  UpEnumerator_pic_31__38_RoutineDefinitionList enumerator_108880 (constinArgument_inRoutineDefinitionList) ;
  while (enumerator_108880.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, enumerator_108880.current_mRequiredBank (HERE).readProperty_uint ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3119)))).operator_and (GGS_bool (ComparisonKind::greaterThan, enumerator_108880.current_mRequiredBank (HERE).readProperty_uint ().objectCompare (GGS_uint (uint32_t (15U)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3119)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GenericArray <FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_108880.current_mRequiredBank (HERE).readProperty_location (), GGS_string ("the required bank value should be lower or equal to 15"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3120)) ;
      }
    }
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::notEqual, enumerator_108880.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3122)))).operator_and (GGS_bool (ComparisonKind::greaterThan, enumerator_108880.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GGS_uint (uint32_t (15U)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3122)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_108880.current_mReturnedBank (HERE).readProperty_location (), GGS_string ("the returned bank value should be lower or equal to 15"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3123)) ;
      }
    }
    {
    var_routineMap_108255.setter_insertKey (enumerator_108880.current_mRoutineName (HERE), enumerator_108880.current_mIsNoReturn (HERE), enumerator_108880.current_mRequiredBank (HERE).readProperty_uint (), enumerator_108880.current_mReturnedBank (HERE).readProperty_uint (), enumerator_108880.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3125)) ;
    }
    enumerator_108880.gotoNextObject () ;
  }
  GGS_pic_31__38__5F_dataMap var_dataMap_109547 ;
  {
  routine_pic_31__38__5F_analyze_5F_data_5F_sections_3F__3F__3F__26__21__26__26_ (constinArgument_inDataList, constinArgument_inRegisterTable, var_constantMap_108130, ioArgument_ioListFileContents, var_dataMap_109547, var_constantMap_108130, var_usedRegisters_108164, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3128)) ;
  }
  {
  routine_print_5F_constant_5F_definition_3F__26_ (var_constantMap_108130, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3138)) ;
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, constinArgument_inProgramKind.objectCompare (GGS_programKind::class_func_userProgram (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3143)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = var_routineMap_108255.getter_hasKey (GGS_string ("main") COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3144)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          GGS_bool var_isNoReturn_109962 ;
          GGS_uint var_requiredBank_109978 ;
          GGS_uint joker_109991 ; // Joker input parameter
          GGS_bool joker_109994 ; // Joker input parameter
          var_routineMap_108255.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("main"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3145)), inCompiler COMMA_HERE), var_isNoReturn_109962, var_requiredBank_109978, joker_109991, joker_109994, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3145)) ;
          GalgasBool test_6 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_6) {
            test_6 = var_isNoReturn_109962.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3146)).boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              GenericArray <FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3147)), GGS_string ("the \"main\" should be declared with \"noreturn\" qualifier: \"noreturn main requiresbank 0\""), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3147)) ;
            }
          }
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_109978.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              GenericArray <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3150)), GGS_string ("the \"main\" should be declared with \"requiresbank 0\" qualifier: \"noreturn main requiresbank 0\""), fixItArray9  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3150)) ;
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        GenericArray <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (constinArgument_inEndOfProgram, GGS_string ("the program should declare the \"main\" routine"), fixItArray10  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3153)) ;
      }
    }
  }
  GGS_ipic_31__38_BlockList var_generatedBlockList_110530 = GGS_ipic_31__38_BlockList::init (inCompiler COMMA_HERE) ;
  GGS_uint var_entryPoint_110582 = GGS_uint (uint32_t (4U)) ;
  UpEnumerator_routineDeclarationList enumerator_110626 (constinArgument_inBootloaderRoutineDeclarationListForUserProgramImplementation) ;
  while (enumerator_110626.hasCurrentObject ()) {
    var_generatedBlockList_110530.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (var_entryPoint_110582, enumerator_110626.current_mRoutineName (HERE), GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE), GGS_ipic_31__38_ReturnTerminator::init_21_ (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3164)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3165)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3160)) ;
    var_entryPoint_110582 = var_entryPoint_110582.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3168)) ;
    GalgasBool test_11 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_11) {
      test_11 = GGS_bool (ComparisonKind::equal, var_entryPoint_110582.objectCompare (GGS_uint (uint32_t (8U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_11) {
        var_entryPoint_110582 = GGS_uint (uint32_t (12U)) ;
      }
    }
    if (GalgasBool::boolFalse == test_11) {
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        test_12 = GGS_bool (ComparisonKind::equal, var_entryPoint_110582.objectCompare (GGS_uint (uint32_t (24U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          var_entryPoint_110582 = GGS_uint (uint32_t (28U)) ;
        }
      }
    }
    enumerator_110626.gotoNextObject () ;
  }
  var_entryPoint_110582 = constinArgument_inBootloaderReservedROMsize.readProperty_uint () ;
  UpEnumerator_routineDeclarationList enumerator_111228 (constinArgument_inUserRoutineDeclarationListForUserProgramImplementation) ;
  while (enumerator_111228.hasCurrentObject ()) {
    var_generatedBlockList_110530.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (var_entryPoint_110582, GGS_string ("_entry_user_").add_operation (var_entryPoint_110582.getter_xString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3180)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3180)).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3180)), GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (enumerator_111228.current_mRoutineName (HERE).readProperty_location (), enumerator_111228.current_mRoutineName (HERE), GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3182)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3183)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3178)) ;
    var_entryPoint_110582 = var_entryPoint_110582.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3186)) ;
    enumerator_111228.gotoNextObject () ;
  }
  GalgasBool test_13 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_13) {
    test_13 = GGS_bool (ComparisonKind::notEqual, constinArgument_inProgramKind.objectCompare (GGS_programKind::class_func_userProgram (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3189)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_13) {
      var_generatedBlockList_110530.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint (uint32_t (0U)), GGS_string (".START").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3192)), GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3194)), GGS_string ("main").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3194)), GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3194)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3195)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3190)) ;
    }
  }
  GGS_routineDeclarationList var_tempBootloaderRoutineDeclarationList_112141 = constinArgument_inBootloaderRoutineDeclarationListForBootloaderImplementation ;
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    test_14 = GGS_bool (ComparisonKind::greaterThan, var_tempBootloaderRoutineDeclarationList_112141.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3201)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      GGS_lstring var_routineName_112368 ;
      {
      GGS_luint joker_112380 ; // Joker input parameter
      GGS_luint joker_112383 ; // Joker input parameter
      GGS_bool joker_112386 ; // Joker input parameter
      GGS_bool joker_112389 ; // Joker input parameter
      var_tempBootloaderRoutineDeclarationList_112141.setter_popFirst (var_routineName_112368, joker_112380, joker_112383, joker_112386, joker_112389, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3202)) ;
      }
      var_generatedBlockList_110530.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint (uint32_t (4U)), GGS_string ("_entry_bootloader_04").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3205)), GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_routineName_112368.readProperty_location (), var_routineName_112368, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3207)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3208)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3203)) ;
    }
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    test_15 = constinArgument_inHasHighInterrupt.boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      var_generatedBlockList_110530.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint (uint32_t (8U)), GGS_string (".HIGH_INTERRUPT").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3216)), GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3218)), GGS_string ("_high_interrupt").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3218)), GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3218)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3219)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3214)) ;
    }
  }
  var_entryPoint_110582 = GGS_uint (uint32_t (12U)) ;
  if (var_tempBootloaderRoutineDeclarationList_112141.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3225)).isValid ()) {
    uint32_t variant_113236 = var_tempBootloaderRoutineDeclarationList_112141.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3225)).uintValue () ;
    bool loop_113236 = true ;
    while (loop_113236) {
      loop_113236 = GGS_bool (ComparisonKind::greaterThan, var_tempBootloaderRoutineDeclarationList_112141.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3226)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::lowerThan, var_entryPoint_110582.objectCompare (GGS_uint (uint32_t (24U)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3226)).isValid () ;
      if (loop_113236) {
        loop_113236 = GGS_bool (ComparisonKind::greaterThan, var_tempBootloaderRoutineDeclarationList_112141.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3226)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::lowerThan, var_entryPoint_110582.objectCompare (GGS_uint (uint32_t (24U)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3226)).boolValue () ;
      }
      if (loop_113236 && (0 == variant_113236)) {
        loop_113236 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3225)) ;
      }
      if (loop_113236) {
        variant_113236 -= 1 ;
        GGS_lstring var_routineName_113442 ;
        {
        GGS_luint joker_113454 ; // Joker input parameter
        GGS_luint joker_113457 ; // Joker input parameter
        GGS_bool joker_113460 ; // Joker input parameter
        GGS_bool joker_113463 ; // Joker input parameter
        var_tempBootloaderRoutineDeclarationList_112141.setter_popFirst (var_routineName_113442, joker_113454, joker_113457, joker_113460, joker_113463, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3228)) ;
        }
        var_generatedBlockList_110530.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (var_entryPoint_110582, GGS_string ("_entry_bootloader_").add_operation (var_entryPoint_110582.getter_xString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3231)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3231)).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3231)), GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_routineName_113442.readProperty_location (), var_routineName_113442, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3233)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3234)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3229)) ;
        var_entryPoint_110582 = var_entryPoint_110582.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3237)) ;
      }
    }
  }
  GalgasBool test_16 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_16) {
    test_16 = constinArgument_inHasLowInterrupt.boolEnum () ;
    if (GalgasBool::boolTrue == test_16) {
      var_generatedBlockList_110530.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint (uint32_t (24U)), GGS_string (".LOW_INTERRUPT").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3243)), GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3245)), GGS_string ("_low_interrupt").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3245)), GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3245)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3246)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3241)) ;
    }
  }
  var_entryPoint_110582 = GGS_uint (uint32_t (28U)) ;
  UpEnumerator_routineDeclarationList enumerator_114331 (var_tempBootloaderRoutineDeclarationList_112141) ;
  while (enumerator_114331.hasCurrentObject ()) {
    var_generatedBlockList_110530.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (var_entryPoint_110582, GGS_string ("_entry_bootloader_").add_operation (var_entryPoint_110582.getter_xString (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3255)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3255)).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3255)), GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (enumerator_114331.current_mRoutineName (HERE).readProperty_location (), enumerator_114331.current_mRoutineName (HERE), GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3257)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3258)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3253)) ;
    var_entryPoint_110582 = var_entryPoint_110582.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3261)) ;
    enumerator_114331.gotoNextObject () ;
  }
  GGS_uint var_localLabelIndex_114852 = GGS_uint (uint32_t (0U)) ;
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    test_17 = constinArgument_inHasLowInterrupt.boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      UpEnumerator_pic_31__38_InterruptDefinitionList enumerator_114953 (constinArgument_inInterruptDefinitionList) ;
      while (enumerator_114953.hasCurrentObject ()) {
        GalgasBool test_18 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_18) {
          test_18 = GGS_bool (ComparisonKind::equal, enumerator_114953.current_mInterruptName (HERE).readProperty_string ().objectCompare (GGS_string ("low"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_18) {
            GGS_uint var_currentBank_115068 = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3269)) ;
            GGS_ipic_31__38_SequentialInstructionList var_generatedInstructionList_115114 = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
            GGS_lstring var_currentBlockLabel_115188 = GGS_lstring::init_21__21_ (GGS_string ("_low_interrupt"), enumerator_114953.current_mInterruptName (HERE).readProperty_location (), inCompiler COMMA_HERE) ;
            {
            routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (enumerator_114953.current_mInstructionList (HERE), var_generatedBlockList_110530, constinArgument_inAccessBankSplitOffset, var_routineMap_108255, constinArgument_inRegisterTable, var_dataMap_109547, var_constantMap_108130, constinArgument_inMacroMap, var_localLabelIndex_114852, var_generatedInstructionList_115114, var_currentBlockLabel_115188, ioArgument_ioListFileContents, var_currentBank_115068, enumerator_114953.current_mFastReturn (HERE).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3286)), GGS_routineKind::class_func_interruptRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3287)), var_usedRegisters_108164, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3272)) ;
            }
            GalgasBool test_19 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_19) {
              test_19 = GGS_bool (ComparisonKind::equal, var_currentBlockLabel_115188.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_19) {
                GenericArray <FixItDescription> fixItArray20 ;
                inCompiler->emitSemanticError (enumerator_114953.current_mEndOfInterruptLocation (HERE), GGS_string ("execution cannot reach the end of the interrupt routine"), fixItArray20  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3291)) ;
              }
            }
            var_generatedBlockList_110530.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3295)), var_currentBlockLabel_115188, var_generatedInstructionList_115114, GGS_ipic_31__38_RetfieTerminator::init_21__21_ (enumerator_114953.current_mInterruptName (HERE).readProperty_location (), enumerator_114953.current_mFastReturn (HERE), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3299)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3294)) ;
          }
        }
        enumerator_114953.gotoNextObject () ;
      }
    }
  }
  GalgasBool test_21 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_21) {
    test_21 = constinArgument_inHasHighInterrupt.boolEnum () ;
    if (GalgasBool::boolTrue == test_21) {
      UpEnumerator_pic_31__38_InterruptDefinitionList enumerator_116424 (constinArgument_inInterruptDefinitionList) ;
      while (enumerator_116424.hasCurrentObject ()) {
        GalgasBool test_22 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_22) {
          test_22 = GGS_bool (ComparisonKind::equal, enumerator_116424.current_mInterruptName (HERE).readProperty_string ().objectCompare (GGS_string ("high"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_22) {
            GGS_uint var_currentBank_116540 = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3309)) ;
            GGS_ipic_31__38_SequentialInstructionList var_generatedInstructionList_116586 = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
            GGS_lstring var_currentBlockLabel_116660 = GGS_lstring::init_21__21_ (GGS_string ("_high_interrupt"), enumerator_116424.current_mInterruptName (HERE).readProperty_location (), inCompiler COMMA_HERE) ;
            {
            routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (enumerator_116424.current_mInstructionList (HERE), var_generatedBlockList_110530, constinArgument_inAccessBankSplitOffset, var_routineMap_108255, constinArgument_inRegisterTable, var_dataMap_109547, var_constantMap_108130, constinArgument_inMacroMap, var_localLabelIndex_114852, var_generatedInstructionList_116586, var_currentBlockLabel_116660, ioArgument_ioListFileContents, var_currentBank_116540, enumerator_116424.current_mFastReturn (HERE).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3326)), GGS_routineKind::class_func_interruptRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3327)), var_usedRegisters_108164, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3312)) ;
            }
            GalgasBool test_23 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_23) {
              test_23 = GGS_bool (ComparisonKind::equal, var_currentBlockLabel_116660.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_23) {
                GenericArray <FixItDescription> fixItArray24 ;
                inCompiler->emitSemanticError (enumerator_116424.current_mEndOfInterruptLocation (HERE), GGS_string ("execution cannot reach the end of the interrupt routine"), fixItArray24  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3331)) ;
              }
            }
            var_generatedBlockList_110530.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3335)), var_currentBlockLabel_116660, var_generatedInstructionList_116586, GGS_ipic_31__38_RetfieTerminator::init_21__21_ (enumerator_116424.current_mInterruptName (HERE).readProperty_location (), GGS_bool (true), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3339)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3334)) ;
          }
        }
        enumerator_116424.gotoNextObject () ;
      }
    }
  }
  UpEnumerator_pic_31__38_RoutineDefinitionList enumerator_117877 (constinArgument_inRoutineDefinitionList) ;
  while (enumerator_117877.hasCurrentObject ()) {
    GGS_uint var_currentBank_117925 = enumerator_117877.current_mRequiredBank (HERE).readProperty_uint () ;
    GGS_routineKind var_routineKind_117979 ;
    GalgasBool test_25 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_25) {
      test_25 = enumerator_117877.current_mIsNoReturn (HERE).boolEnum () ;
      if (GalgasBool::boolTrue == test_25) {
        var_routineKind_117979 = GGS_routineKind::class_func_noReturnRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3350)) ;
      }
    }
    if (GalgasBool::boolFalse == test_25) {
      var_routineKind_117979 = GGS_routineKind::class_func_regularRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3352)) ;
    }
    GGS_ipic_31__38_SequentialInstructionList var_generatedInstructionList_118139 = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
    GGS_lstring var_currentBlockLabel_118218 = enumerator_117877.current_mRoutineName (HERE) ;
    {
    routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (enumerator_117877.current_mInstructionList (HERE), var_generatedBlockList_110530, constinArgument_inAccessBankSplitOffset, var_routineMap_108255, constinArgument_inRegisterTable, var_dataMap_109547, var_constantMap_108130, constinArgument_inMacroMap, var_localLabelIndex_114852, var_generatedInstructionList_118139, var_currentBlockLabel_118218, ioArgument_ioListFileContents, var_currentBank_117925, enumerator_117877.current_mPreservesBank (HERE), var_routineKind_117979, var_usedRegisters_108164, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3356)) ;
    }
    GGS_bool var_continuesInSequence_118668 = GGS_bool (ComparisonKind::notEqual, var_currentBlockLabel_118218.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())) ;
    GalgasBool test_26 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_26) {
      test_26 = var_continuesInSequence_118668.boolEnum () ;
      if (GalgasBool::boolTrue == test_26) {
        var_generatedBlockList_110530.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3378)), var_currentBlockLabel_118218, var_generatedInstructionList_118139, GGS_ipic_31__38_ReturnTerminator::init_21_ (enumerator_117877.current_mRoutineName (HERE).readProperty_location (), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3382)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3377)) ;
      }
    }
    GalgasBool test_27 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_27) {
      test_27 = enumerator_117877.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3387)).operator_and (GGS_bool (ComparisonKind::notEqual, enumerator_117877.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3387)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3387)).operator_and (GGS_bool (ComparisonKind::notEqual, var_currentBank_117925.objectCompare (enumerator_117877.current_mReturnedBank (HERE).readProperty_uint ())) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3387)).boolEnum () ;
      if (GalgasBool::boolTrue == test_27) {
        GenericArray <FixItDescription> fixItArray28 ;
        inCompiler->emitSemanticError (enumerator_117877.current_mRoutineName (HERE).readProperty_location (), GGS_string ("execution will not set bank selection to ").add_operation (enumerator_117877.current_mReturnedBank (HERE).readProperty_uint ().getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3388)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3388)), fixItArray28  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3388)) ;
      }
    }
    GalgasBool test_29 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_29) {
      test_29 = enumerator_117877.current_mIsNoReturn (HERE).operator_and (var_continuesInSequence_118668 COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3390)).boolEnum () ;
      if (GalgasBool::boolTrue == test_29) {
        GenericArray <FixItDescription> fixItArray30 ;
        inCompiler->emitSemanticError (enumerator_117877.current_mRoutineName (HERE).readProperty_location (), GGS_string ("execution should not reach the end of a \"noreturn\" routine"), fixItArray30  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3391)) ;
      }
    }
    enumerator_117877.gotoNextObject () ;
  }
  GGS_registerExpression var_WREGregister_119565 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("WREG"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3398)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3399)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3400)), inCompiler COMMA_HERE) ;
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_WREG_5F_IPICregisterDescription_119892 ;
  GGS_bitSliceTable joker_119925 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_WREGregister_119565.ptr (), constinArgument_inAccessBankSplitOffset, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, var_constantMap_108130, GGS_bool (false), var_WREG_5F_IPICregisterDescription_119892, joker_119925, var_usedRegisters_108164, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3402)) ;
  GGS_registerExpression var_TOSLregister_119993 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("TOSL"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3414)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3415)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3416)), inCompiler COMMA_HERE) ;
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_TOSL_5F_IPICregisterDescription_120319 ;
  GGS_bitSliceTable joker_120352 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TOSLregister_119993.ptr (), constinArgument_inAccessBankSplitOffset, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, var_constantMap_108130, GGS_bool (true), var_TOSL_5F_IPICregisterDescription_120319, joker_120352, var_usedRegisters_108164, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3418)) ;
  GGS_registerExpression var_TOSHregister_120420 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("TOSH"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3430)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3431)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3432)), inCompiler COMMA_HERE) ;
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_TOSH_5F_IPICregisterDescription_120746 ;
  GGS_bitSliceTable joker_120779 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TOSHregister_120420.ptr (), constinArgument_inAccessBankSplitOffset, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, var_constantMap_108130, GGS_bool (true), var_TOSH_5F_IPICregisterDescription_120746, joker_120779, var_usedRegisters_108164, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3434)) ;
  GGS_registerExpression var_TOSUregister_120847 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("TOSU"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3446)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3447)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3448)), inCompiler COMMA_HERE) ;
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_TOSU_5F_IPICregisterDescription_121172 ;
  GGS_bitSliceTable joker_121205 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TOSUregister_120847.ptr (), constinArgument_inAccessBankSplitOffset, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, var_constantMap_108130, GGS_bool (true), var_TOSU_5F_IPICregisterDescription_121172, joker_121205, var_usedRegisters_108164, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3450)) ;
  GGS_ipic_31__38_SequentialInstruction var_ADDWF_5F_WREG_121273 = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3462)), GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_ADDWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3463)), var_WREG_5F_IPICregisterDescription_119892, GGS_bool (true), inCompiler COMMA_HERE) ;
  GGS_ipic_31__38_Block var_goto_34_Block_121483 = GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3469)), GGS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3470)), GGS_ipic_31__38_SequentialInstructionList::class_func_listWithValue (var_ADDWF_5F_WREG_121273, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3471)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3471)), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3472)), GGS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3472)), GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3472)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3473)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE) ;
  var_generatedBlockList_110530.addAssignOperation (var_goto_34_Block_121483  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3476)) ;
  GGS_ipic_31__38_SequentialInstructionList var_goto_32_InstructionList_121863 = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  var_goto_32_InstructionList_121863.addAssignOperation (var_ADDWF_5F_WREG_121273, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3479)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3479)) ;
  var_goto_32_InstructionList_121863.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3481)), GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_ADDWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3482)), var_TOSL_5F_IPICregisterDescription_120319, GGS_bool (false), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3484)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3480)) ;
  var_goto_32_InstructionList_121863.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3486)), GGS_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3487)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3488)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3485)) ;
  var_goto_32_InstructionList_121863.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3490)), GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_ADDWFC (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3491)), var_TOSH_5F_IPICregisterDescription_120746, GGS_bool (false), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3493)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3489)) ;
  var_goto_32_InstructionList_121863.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3495)), GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_ADDWFC (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3496)), var_TOSU_5F_IPICregisterDescription_121172, GGS_bool (false), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3500)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3494)) ;
  GGS_ipic_31__38_Block var_goto_32_Block_122819 = GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3504)), GGS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3505)), var_goto_32_InstructionList_121863, GGS_ipic_31__38_ReturnTerminator::init_21_ (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3507)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3508)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE) ;
  var_generatedBlockList_110530.addAssignOperation (var_goto_32_Block_122819  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3511)) ;
  var_entryPoint_110582 = constinArgument_inBootloaderReservedROMsize.readProperty_uint () ;
  UpEnumerator_routineDeclarationList enumerator_123204 (constinArgument_inUserRoutineDeclarationListForBootloaderImplementation) ;
  while (enumerator_123204.hasCurrentObject ()) {
    GalgasBool test_31 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_31) {
      test_31 = enumerator_123204.current_mIsNoReturn (HERE).boolEnum () ;
      if (GalgasBool::boolTrue == test_31) {
        var_generatedBlockList_110530.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (var_entryPoint_110582, enumerator_123204.current_mRoutineName (HERE), GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (enumerator_123204.current_mRoutineName (HERE).readProperty_location (), enumerator_123204.current_mRoutineName (HERE), GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3520)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3521)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3516)) ;
      }
    }
    if (GalgasBool::boolFalse == test_31) {
      GGS_ipic_31__38_SequentialInstructionList var_instructionList_123599 = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
      GalgasBool test_32 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_32) {
        test_32 = GGS_bool (ComparisonKind::notEqual, enumerator_123204.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3526)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_32) {
          var_instructionList_123599.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::init_21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3527)), enumerator_123204.current_mReturnedBank (HERE), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3527)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3527)) ;
        }
      }
      var_generatedBlockList_110530.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (var_entryPoint_110582, enumerator_123204.current_mRoutineName (HERE), var_instructionList_123599, GGS_ipic_31__38_ReturnTerminator::init_21_ (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3533)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3534)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3529)) ;
    }
    var_entryPoint_110582 = var_entryPoint_110582.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3538)) ;
    enumerator_123204.gotoNextObject () ;
  }
  GGS_stringset var_unusedDeclarationUnicity_124175 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_lstringlist enumerator_124222 (constinArgument_inUnusedRegisterList) ;
  while (enumerator_124222.hasCurrentObject ()) {
    GalgasBool test_33 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_33) {
      test_33 = constinArgument_inRegisterTable.getter_hasKey (enumerator_124222.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3543)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3543)).boolEnum () ;
      if (GalgasBool::boolTrue == test_33) {
        GenericArray <FixItDescription> fixItArray34 ;
        inCompiler->emitSemanticError (enumerator_124222.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_124222.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3544)).add_operation (GGS_string ("' byte is not declared"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3544)), fixItArray34  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3544)) ;
      }
    }
    if (GalgasBool::boolFalse == test_33) {
      GalgasBool test_35 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_35) {
        test_35 = var_unusedDeclarationUnicity_124175.getter_hasKey (enumerator_124222.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3545)).boolEnum () ;
        if (GalgasBool::boolTrue == test_35) {
          GenericArray <FixItDescription> fixItArray36 ;
          inCompiler->emitSemanticWarning (enumerator_124222.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_124222.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3546)).add_operation (GGS_string ("' byte is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3546)), fixItArray36  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3546)) ;
        }
      }
      if (GalgasBool::boolFalse == test_35) {
        GalgasBool test_37 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_37) {
          test_37 = var_usedRegisters_108164.getter_hasKey (enumerator_124222.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3547)).boolEnum () ;
          if (GalgasBool::boolTrue == test_37) {
            GenericArray <FixItDescription> fixItArray38 ;
            inCompiler->emitSemanticWarning (enumerator_124222.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_124222.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3548)).add_operation (GGS_string ("' byte is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3548)), fixItArray38  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3548)) ;
          }
        }
      }
    }
    var_unusedDeclarationUnicity_124175.plusPlusAssignOperation (enumerator_124222.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3550)) ;
    enumerator_124222.gotoNextObject () ;
  }
  UpEnumerator_declaredByteMap enumerator_124731 (constinArgument_inDeclaredByteMap) ;
  while (enumerator_124731.hasCurrentObject ()) {
    GalgasBool test_39 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_39) {
      test_39 = var_usedRegisters_108164.getter_hasKey (enumerator_124731.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3553)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3553)).operator_and (var_unusedDeclarationUnicity_124175.getter_hasKey (enumerator_124731.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3553)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3553)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3553)).boolEnum () ;
      if (GalgasBool::boolTrue == test_39) {
        GenericArray <FixItDescription> fixItArray40 ;
        inCompiler->emitSemanticWarning (enumerator_124731.current_lkey (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_124731.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3554)).add_operation (GGS_string ("' byte is unused"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3554)), fixItArray40  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3554)) ;
      }
    }
    enumerator_124731.gotoNextObject () ;
  }
  {
  routine_displayBlockList_3F__26__3F_ (GGS_string ("INTERMEDIATE BLOCK REPRESENTATION"), ioArgument_ioListFileContents, var_generatedBlockList_110530, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3558)) ;
  }
  GalgasBool test_41 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_41) {
    test_41 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3560)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_41) {
      {
      routine_ipic_31__38_OptimizeBlocks_26__26_ (ioArgument_ioListFileContents, var_generatedBlockList_110530, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3561)) ;
      }
      {
      routine_displayBlockList_3F__26__3F_ (GGS_string ("OPTIMIZED INTERMEDIATE BLOCK REPRESENTATION"), ioArgument_ioListFileContents, var_generatedBlockList_110530, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3562)) ;
      }
    }
  }
  GalgasBool test_42 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_42) {
    test_42 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3565)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_42) {
      {
      routine_ipic_31__38_OptimizeBlockOrdering_3F__26__26_ (constinArgument_inSourceFileName, ioArgument_ioListFileContents, var_generatedBlockList_110530, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3566)) ;
      }
    }
  }
  GalgasBool test_43 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_43) {
    test_43 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3573)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_43) {
      {
      routine_ipic_31__38_RelativesResolution_26__26_ (ioArgument_ioListFileContents, var_generatedBlockList_110530, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3574)) ;
      }
    }
  }
  GalgasBool test_44 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_44) {
    test_44 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3580)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::notEqual, constinArgument_inProgramKind.objectCompare (GGS_programKind::class_func_userProgram (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3580)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3580)).boolEnum () ;
    if (GalgasBool::boolTrue == test_44) {
      {
      routine_ipic_31__38_StackComputations_26__3F_ (ioArgument_ioListFileContents, var_generatedBlockList_110530, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3581)) ;
      }
    }
  }
  GGS_blockDurationMap var_blockDurationMap_126253 = GGS_blockDurationMap::init (inCompiler COMMA_HERE) ;
  GalgasBool test_45 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_45) {
    test_45 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3588)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_45) {
      {
      routine_ipic_31__38_DurationComputations_26__21_ (var_generatedBlockList_110530, var_blockDurationMap_126253, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3589)) ;
      }
    }
  }
  GalgasBool test_46 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_46) {
    test_46 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3592)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_46) {
      GGS_uint var_usedROMsize_126820 ;
      GGS_generatedCodeMap var_generatedCodeMap_126868 ;
      {
      routine_ipic_31__38_GenerateCode_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__3F__21__21_ (constinArgument_inSourceFileName, constinArgument_inProgramKind, constinArgument_inBootloaderReservedROMsize.readProperty_uint (), constinArgument_inROMSize.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3597)), constinArgument_inProcessorName, constinArgument_inPredefinedRegisters, constinArgument_inRegisterTable, var_dataMap_109547, constinArgument_inActualConfigurationMap, ioArgument_ioListFileContents, var_generatedBlockList_110530, var_usedROMsize_126820, var_generatedCodeMap_126868, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3593)) ;
      }
      GalgasBool test_47 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_47) {
        test_47 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3609)).boolEnum () ;
        if (GalgasBool::boolTrue == test_47) {
          GGS_string var_verboseMessage_127024 = GGS_string ("Resource usage:\n") ;
          var_verboseMessage_127024.plusAssignOperation(GGS_string ("  ROM, used ").add_operation (var_usedROMsize_126820.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3611)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3611)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3611)) ;
          var_verboseMessage_127024.plusAssignOperation(GGS_string (" / ").add_operation (constinArgument_inROMSize.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3612)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3612)).add_operation (GGS_string (" bytes ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3612)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3612)) ;
          var_verboseMessage_127024.plusAssignOperation(var_usedROMsize_126820.multiply_operation (GGS_uint (uint32_t (100U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3613)).divide_operation (constinArgument_inROMSize.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3613)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3613)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3613)).add_operation (GGS_string ("%)\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3613)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3613)) ;
          UpEnumerator_ramBankTable enumerator_127320 (constinArgument_inRamBank) ;
          while (enumerator_127320.hasCurrentObject ()) {
            GGS_uint var_bankSize_127357 = enumerator_127320.current_mLastAddressPlusOne (HERE).substract_operation (enumerator_127320.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3615)) ;
            GGS_uint var_usedSize_127422 = enumerator_127320.current_mFirstFreeAddress (HERE).substract_operation (enumerator_127320.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3616)) ;
            var_verboseMessage_127024.plusAssignOperation(GGS_string ("  Bank '").add_operation (enumerator_127320.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3617)).add_operation (GGS_string ("': "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3617)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3617)) ;
            var_verboseMessage_127024.plusAssignOperation(var_usedSize_127422.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3618)).add_operation (GGS_string (" / "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3618)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3618)) ;
            var_verboseMessage_127024.plusAssignOperation(var_bankSize_127357.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3619)).add_operation (GGS_string (" bytes ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3619)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3619)) ;
            var_verboseMessage_127024.plusAssignOperation(var_usedSize_127422.multiply_operation (GGS_uint (uint32_t (100U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3620)).divide_operation (var_bankSize_127357, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3620)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3620)).add_operation (GGS_string ("%)\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3620)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3620)) ;
            enumerator_127320.gotoNextObject () ;
          }
          {
          routine_print_3F_ (var_verboseMessage_127024, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3622)) ;
          }
        }
      }
    }
  }
  GalgasBool test_48 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_48) {
    test_48 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 3626)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_48) {
      {
      routine_ipic_31__38_PrintDurations_26__3F_ (ioArgument_ioListFileContents, var_blockDurationMap_126253, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 3627)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_condition_skip_instruction instructionSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::getter_instructionSize (Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction temp_0 = this ;
  result_outSize = GGS_uint (uint32_t (2U)).add_operation (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 14)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 14)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_condition_skip_instruction instructionRelativeBranchOverflow'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::method_instructionRelativeBranchOverflow (const GGS_uint constinArgument_inAddress,
                                                                                                      const GGS_string constinArgument_inBlockLabel,
                                                                                                      const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                      GGS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction temp_0 = this ;
  callExtensionMethod_instructionRelativeBranchOverflow ((cPtr_ipic_31__38_SequentialInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 41)), constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 40)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18InstructionWithNoOperand instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38_InstructionWithNoOperand::getter_instructionDisplay (Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  const GGS_ipic_31__38_InstructionWithNoOperand temp_0 = this ;
  result_outResult = GGS_stringlist::class_func_listWithValue (extensionGetter_mnemonic (temp_0.readProperty_mKind (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 80))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 80)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18InstructionWithNoOperand generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_InstructionWithNoOperand::method_generateCode (const GGS_uint /* constinArgument_inAddress */,
                                                                     const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                     const GGS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                     GGS_codeList & outArgument_outCode,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_c_2930 ;
  const GGS_ipic_31__38_InstructionWithNoOperand temp_0 = this ;
  switch (temp_0.readProperty_mKind ().enumValue ()) {
  case GGS_pic_31__38_InstructionWithNoOperandKind::Enumeration::invalid:
    break ;
  case GGS_pic_31__38_InstructionWithNoOperandKind::Enumeration::enum_CLRWDT:
    {
      var_c_2930 = GGS_uint (uint32_t (4U)) ;
    }
    break ;
  case GGS_pic_31__38_InstructionWithNoOperandKind::Enumeration::enum_DAW:
    {
      var_c_2930 = GGS_uint (uint32_t (7U)) ;
    }
    break ;
  case GGS_pic_31__38_InstructionWithNoOperandKind::Enumeration::enum_NOP:
    {
      var_c_2930 = GGS_uint (uint32_t (0U)) ;
    }
    break ;
  case GGS_pic_31__38_InstructionWithNoOperandKind::Enumeration::enum_POP:
    {
      var_c_2930 = GGS_uint (uint32_t (6U)) ;
    }
    break ;
  case GGS_pic_31__38_InstructionWithNoOperandKind::Enumeration::enum_PUSH:
    {
      var_c_2930 = GGS_uint (uint32_t (5U)) ;
    }
    break ;
  case GGS_pic_31__38_InstructionWithNoOperandKind::Enumeration::enum_RESET:
    {
      var_c_2930 = GGS_uint (uint32_t (255U)) ;
    }
    break ;
  case GGS_pic_31__38_InstructionWithNoOperandKind::Enumeration::enum_SLEEP:
    {
      var_c_2930 = GGS_uint (uint32_t (3U)) ;
    }
    break ;
  }
  const GGS_ipic_31__38_InstructionWithNoOperand temp_1 = this ;
  GGS_uintlist temp_2 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 109)) ;
  temp_2.plusPlusAssignOperation (GGS_uintlist_2E_element::init_21_ (var_c_2930, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 109)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    ").add_operation (extensionGetter_mnemonic (temp_1.readProperty_mKind (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 108)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 108)), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 107)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_FDA instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::getter_instructionDisplay (Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  GGS_string var_s_3586 ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_0 = this ;
  switch (temp_0.readProperty_mInstruction_5F_FDA_5F_base_5F_code ().enumValue ()) {
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::invalid:
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_ADDWF:
    {
      var_s_3586 = GGS_string ("ADDWF") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_ADDWFC:
    {
      var_s_3586 = GGS_string ("ADDWFC") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_ANDWF:
    {
      var_s_3586 = GGS_string ("ANDWF") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_COMF:
    {
      var_s_3586 = GGS_string ("COMF") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_DECF:
    {
      var_s_3586 = GGS_string ("DECF") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_INCF:
    {
      var_s_3586 = GGS_string ("INCF") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_IORWF:
    {
      var_s_3586 = GGS_string ("IORWF") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_MOVF:
    {
      var_s_3586 = GGS_string ("MOVF") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_RLCF:
    {
      var_s_3586 = GGS_string ("RLCF") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_RLNCF:
    {
      var_s_3586 = GGS_string ("RLNCF") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_RRCF:
    {
      var_s_3586 = GGS_string ("RRCF") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_RRNCF:
    {
      var_s_3586 = GGS_string ("RRNCF") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_SUBFWB:
    {
      var_s_3586 = GGS_string ("SUBFWB") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_SUBWF:
    {
      var_s_3586 = GGS_string ("SUBWF") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_SUBWFB:
    {
      var_s_3586 = GGS_string ("SUBWFB") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_SWAPF:
    {
      var_s_3586 = GGS_string ("SWAPF") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_XORWF:
    {
      var_s_3586 = GGS_string ("XORWF") ;
    }
    break ;
  }
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_1 = this ;
  var_s_3586.plusAssignOperation(GGS_string (" ").add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 141)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 141)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_3 = this ;
    const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_4 = this ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().operator_and (temp_4.readProperty_mRegisterDescription ().readProperty_mNeedsBSR () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 142)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      var_s_3586.plusAssignOperation(GGS_string (", W, BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 143)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_6 = this ;
      test_5 = temp_6.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        var_s_3586.plusAssignOperation(GGS_string (", F, BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 145)) ;
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_8 = this ;
        test_7 = temp_8.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          var_s_3586.plusAssignOperation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 147)) ;
        }
      }
      if (GalgasBool::boolFalse == test_7) {
        var_s_3586.plusAssignOperation(GGS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 149)) ;
      }
    }
  }
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_3586  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 151)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_FDA generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::method_generateCode (const GGS_uint /* constinArgument_inAddress */,
                                                                                   const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                   const GGS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                   GGS_codeList & outArgument_outCode,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_4808 ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_0 = this ;
  switch (temp_0.readProperty_mInstruction_5F_FDA_5F_base_5F_code ().enumValue ()) {
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::invalid:
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_ADDWF:
    {
      var_code_4808 = GGS_uint (uint32_t (9216U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_ADDWFC:
    {
      var_code_4808 = GGS_uint (uint32_t (8192U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_ANDWF:
    {
      var_code_4808 = GGS_uint (uint32_t (5120U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_COMF:
    {
      var_code_4808 = GGS_uint (uint32_t (7168U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_DECF:
    {
      var_code_4808 = GGS_uint (uint32_t (1024U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_INCF:
    {
      var_code_4808 = GGS_uint (uint32_t (10240U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_IORWF:
    {
      var_code_4808 = GGS_uint (uint32_t (4096U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_MOVF:
    {
      var_code_4808 = GGS_uint (uint32_t (20480U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_RLCF:
    {
      var_code_4808 = GGS_uint (uint32_t (13312U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_RLNCF:
    {
      var_code_4808 = GGS_uint (uint32_t (17408U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_RRCF:
    {
      var_code_4808 = GGS_uint (uint32_t (12288U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_RRNCF:
    {
      var_code_4808 = GGS_uint (uint32_t (16384U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_SUBFWB:
    {
      var_code_4808 = GGS_uint (uint32_t (21504U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_SUBWF:
    {
      var_code_4808 = GGS_uint (uint32_t (23552U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_SUBWFB:
    {
      var_code_4808 = GGS_uint (uint32_t (22528U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_SWAPF:
    {
      var_code_4808 = GGS_uint (uint32_t (14336U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_XORWF:
    {
      var_code_4808 = GGS_uint (uint32_t (6144U)) ;
    }
    break ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_2 = this ;
    test_1 = temp_2.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      var_code_4808 = var_code_4808.operator_or (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 183)) ;
    }
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_4 = this ;
    test_3 = temp_4.readProperty_m_5F_W_5F_isDestination ().operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 185)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      var_code_4808 = var_code_4808.operator_or (GGS_uint (uint32_t (512U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 186)) ;
    }
  }
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_5 = this ;
  var_code_4808 = var_code_4808.operator_or (temp_5.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 188)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 188)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_6 = this ;
  GGS_uintlist temp_7 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 191)) ;
  temp_7.plusPlusAssignOperation (GGS_uintlist_2E_element::init_21_ (var_code_4808, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 191)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) temp_6.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 190)).getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 190)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 190)), temp_7  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 189)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_FA instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::getter_instructionDisplay (Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  GGS_string var_s_6012 ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_0 = this ;
  switch (temp_0.readProperty_mFAinstruction ().enumValue ()) {
  case GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::Enumeration::enum_CLRF:
    {
      var_s_6012 = GGS_string ("CLRF") ;
    }
    break ;
  case GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::Enumeration::enum_MOVWF:
    {
      var_s_6012 = GGS_string ("MOVWF") ;
    }
    break ;
  case GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::Enumeration::enum_MULWF:
    {
      var_s_6012 = GGS_string ("MULWF") ;
    }
    break ;
  case GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::Enumeration::enum_NEGF:
    {
      var_s_6012 = GGS_string ("NEGF") ;
    }
    break ;
  case GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::Enumeration::enum_SETF:
    {
      var_s_6012 = GGS_string ("SETF") ;
    }
    break ;
  }
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_1 = this ;
  var_s_6012.plusAssignOperation(GGS_string (" ").add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 211)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 211)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_6012  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 212)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_FA generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::method_generateCode (const GGS_uint /* constinArgument_inAddress */,
                                                                                  const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                  const GGS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                  GGS_codeList & outArgument_outCode,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_6619 ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_0 = this ;
  switch (temp_0.readProperty_mFAinstruction ().enumValue ()) {
  case GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::Enumeration::enum_CLRF:
    {
      var_code_6619 = GGS_uint (uint32_t (27136U)) ;
    }
    break ;
  case GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::Enumeration::enum_MOVWF:
    {
      var_code_6619 = GGS_uint (uint32_t (28160U)) ;
    }
    break ;
  case GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::Enumeration::enum_MULWF:
    {
      var_code_6619 = GGS_uint (uint32_t (512U)) ;
    }
    break ;
  case GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::Enumeration::enum_NEGF:
    {
      var_code_6619 = GGS_uint (uint32_t (27648U)) ;
    }
    break ;
  case GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::Enumeration::enum_SETF:
    {
      var_code_6619 = GGS_uint (uint32_t (26624U)) ;
    }
    break ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_2 = this ;
    test_1 = temp_2.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      var_code_6619 = var_code_6619.operator_or (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 232)) ;
    }
  }
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_3 = this ;
  var_code_6619 = var_code_6619.operator_or (temp_3.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 234)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 234)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_4 = this ;
  GGS_uintlist temp_5 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 237)) ;
  temp_5.plusPlusAssignOperation (GGS_uintlist_2E_element::init_21_ (var_code_6619, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 237)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) temp_4.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 236)).getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 236)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 236)), temp_5  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 235)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_MOVFF instructionSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::getter_instructionSize (Compiler */* inCompiler */
                                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  result_outSize = GGS_uint (uint32_t (4U)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_MOVFF instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::getter_instructionDisplay (Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF temp_0 = this ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF temp_1 = this ;
  GGS_string var_s_7597 = GGS_string ("MOVFF ").add_operation (temp_0.readProperty_mSourceRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 255)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 255)).add_operation (temp_1.readProperty_mDestinationRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 256)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_7597  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 257)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_MOVFF generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::method_generateCode (const GGS_uint /* constinArgument_inAddress */,
                                                                                     const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                     const GGS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                     GGS_codeList & outArgument_outCode,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uintlist var_code_8098 = GGS_uintlist::init (inCompiler COMMA_HERE) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF temp_0 = this ;
  var_code_8098.addAssignOperation (GGS_uint (uint32_t (49152U)).operator_or (temp_0.readProperty_mSourceRegisterDescription ().readProperty_mRegisterAddress () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 268))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 268)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF temp_1 = this ;
  var_code_8098.addAssignOperation (GGS_uint (uint32_t (61440U)).operator_or (temp_1.readProperty_mDestinationRegisterDescription ().readProperty_mRegisterAddress () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 269))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 269)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF temp_2 = this ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) temp_2.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 271)).getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 271)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 271)), var_code_8098  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 270)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_literalOperation instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::getter_instructionDisplay (Compiler * inCompiler
                                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_0 = this ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_1 = this ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_2 = this ;
  GGS_string var_s_8726 = extensionGetter_mnemonic (temp_0.readProperty_mLiteralInstruction (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 282)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 282)).add_operation (temp_1.readProperty_mLiteralValue ().getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 282)).add_operation (GGS_string (" ; "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 282)).add_operation (temp_2.readProperty_mLiteralValue ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 282)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 282)) ;
  GGS_stringlist temp_3 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 283)) ;
  temp_3.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_s_8726, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 283)) ;
  result_outResult = temp_3 ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_literalOperation generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::method_generateCode (const GGS_uint /* constinArgument_inAddress */,
                                                                                                const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                                const GGS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                                GGS_codeList & outArgument_outCode,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_9200 ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_0 = this ;
  switch (temp_0.readProperty_mLiteralInstruction ().enumValue ()) {
  case GGS_literal_5F_instruction_5F_opcode::Enumeration::invalid:
    break ;
  case GGS_literal_5F_instruction_5F_opcode::Enumeration::enum_ADDLW:
    {
      var_code_9200 = GGS_uint (uint32_t (3840U)) ;
    }
    break ;
  case GGS_literal_5F_instruction_5F_opcode::Enumeration::enum_ANDLW:
    {
      var_code_9200 = GGS_uint (uint32_t (2816U)) ;
    }
    break ;
  case GGS_literal_5F_instruction_5F_opcode::Enumeration::enum_IORLW:
    {
      var_code_9200 = GGS_uint (uint32_t (2304U)) ;
    }
    break ;
  case GGS_literal_5F_instruction_5F_opcode::Enumeration::enum_MOVLW:
    {
      var_code_9200 = GGS_uint (uint32_t (3584U)) ;
    }
    break ;
  case GGS_literal_5F_instruction_5F_opcode::Enumeration::enum_MULLW:
    {
      var_code_9200 = GGS_uint (uint32_t (3328U)) ;
    }
    break ;
  case GGS_literal_5F_instruction_5F_opcode::Enumeration::enum_SUBLW:
    {
      var_code_9200 = GGS_uint (uint32_t (2048U)) ;
    }
    break ;
  case GGS_literal_5F_instruction_5F_opcode::Enumeration::enum_XORLW:
    {
      var_code_9200 = GGS_uint (uint32_t (2560U)) ;
    }
    break ;
  }
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_1 = this ;
  var_code_9200 = var_code_9200.operator_or (temp_1.readProperty_mLiteralValue () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 303)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_2 = this ;
  GGS_uintlist temp_3 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 306)) ;
  temp_3.plusPlusAssignOperation (GGS_uintlist_2E_element::init_21_ (var_code_9200, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 306)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) temp_2.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 305)).getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 305)), temp_3  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 304)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_LFSR instructionSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::getter_instructionSize (Compiler */* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  result_outSize = GGS_uint (uint32_t (4U)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_LFSR instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::getter_instructionDisplay (Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_0 = this ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_1 = this ;
  GGS_string var_s_10120 = GGS_string ("LFSR ").add_operation (temp_0.readProperty_mFSRindex ().readProperty_uint ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 323)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 323)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 323)).add_operation (temp_1.readProperty_mValue ().getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 323)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 323)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_10120  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 324)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_LFSR generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::method_generateCode (const GGS_uint /* constinArgument_inAddress */,
                                                                                    const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                    const GGS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                    GGS_codeList & outArgument_outCode,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uintlist var_code_10569 = GGS_uintlist::init (inCompiler COMMA_HERE) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_0 = this ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_1 = this ;
  var_code_10569.addAssignOperation (GGS_uint (uint32_t (60928U)).operator_or (temp_0.readProperty_mFSRindex ().readProperty_uint ().left_shift_operation (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 335)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 335)).operator_or (temp_1.readProperty_mValue ().right_shift_operation (GGS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 335)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 335)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 335))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 335)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_2 = this ;
  var_code_10569.addAssignOperation (GGS_uint (uint32_t (61440U)).operator_or (temp_2.readProperty_mValue ().operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 336)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 336))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 336)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_3 = this ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) temp_3.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 338)).getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 338)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 338)), var_code_10569  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 337)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_FBA instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::getter_instructionDisplay (Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_0 = this ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_1 = this ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_2 = this ;
  GGS_string var_s_11136 = extensionGetter_mnemonic (temp_0.readProperty_mBitOrientedOp (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 349)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 349)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 349)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 349)).add_operation (temp_2.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 349)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 349)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_11136  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 350)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_FBA generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::method_generateCode (const GGS_uint /* constinArgument_inAddress */,
                                                                                   const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                   const GGS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                   GGS_codeList & outArgument_outCode,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_11633 ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_0 = this ;
  switch (temp_0.readProperty_mBitOrientedOp ().enumValue ()) {
  case GGS_bit_5F_oriented_5F_op::Enumeration::invalid:
    break ;
  case GGS_bit_5F_oriented_5F_op::Enumeration::enum_BCF:
    {
      var_code_11633 = GGS_uint (uint32_t (36864U)) ;
    }
    break ;
  case GGS_bit_5F_oriented_5F_op::Enumeration::enum_BSF:
    {
      var_code_11633 = GGS_uint (uint32_t (32768U)) ;
    }
    break ;
  case GGS_bit_5F_oriented_5F_op::Enumeration::enum_BTG:
    {
      var_code_11633 = GGS_uint (uint32_t (28672U)) ;
    }
    break ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_2 = this ;
    test_1 = temp_2.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      var_code_11633 = var_code_11633.operator_or (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 367)) ;
    }
  }
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_3 = this ;
  var_code_11633 = var_code_11633.operator_or (temp_3.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 369)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 369)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_4 = this ;
  var_code_11633 = var_code_11633.operator_or (temp_4.readProperty_mBitNumber ().left_shift_operation (GGS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 370)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 370)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 370)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_5 = this ;
  GGS_uintlist temp_6 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 373)) ;
  temp_6.plusPlusAssignOperation (GGS_uintlist_2E_element::init_21_ (var_code_11633, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 373)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) temp_5.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 372)).getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 372)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 372)), temp_6  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 371)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_MOVLB instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::getter_instructionDisplay (Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB temp_0 = this ;
  GGS_string var_s_12390 = GGS_string ("MOVLB ").add_operation (temp_0.readProperty_mBankIndex ().readProperty_uint ().getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 384)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 384)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_12390  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 385)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_MOVLB generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::method_generateCode (const GGS_uint /* constinArgument_inAddress */,
                                                                                     const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                     const GGS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                     GGS_codeList & outArgument_outCode,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB temp_0 = this ;
  GGS_uint var_code_12818 = GGS_uint (uint32_t (256U)).operator_or (temp_0.readProperty_mBankIndex ().readProperty_uint () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 395)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB temp_1 = this ;
  GGS_uintlist temp_2 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 398)) ;
  temp_2.plusPlusAssignOperation (GGS_uintlist_2E_element::init_21_ (var_code_12818, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 398)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 397)).getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 397)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 397)), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 396)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_TBLRD instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::getter_instructionDisplay (Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD temp_0 = this ;
  GGS_string var_s_13308 = GGS_string ("TBLRD ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mOption (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 409)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 409)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_13308  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 410)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_TBLRD generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::method_generateCode (const GGS_uint /* constinArgument_inAddress */,
                                                                                     const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                     const GGS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                     GGS_codeList & outArgument_outCode,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_13727 ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD temp_0 = this ;
  switch (temp_0.readProperty_mOption ().enumValue ()) {
  case GGS_tableAccessOption::Enumeration::invalid:
    break ;
  case GGS_tableAccessOption::Enumeration::enum_simpleAccess:
    {
      var_code_13727 = GGS_uint (uint32_t (8U)) ;
    }
    break ;
  case GGS_tableAccessOption::Enumeration::enum_postIncrement:
    {
      var_code_13727 = GGS_uint (uint32_t (9U)) ;
    }
    break ;
  case GGS_tableAccessOption::Enumeration::enum_postDecrement:
    {
      var_code_13727 = GGS_uint (uint32_t (10U)) ;
    }
    break ;
  case GGS_tableAccessOption::Enumeration::enum_preIncrement:
    {
      var_code_13727 = GGS_uint (uint32_t (11U)) ;
    }
    break ;
  }
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD temp_1 = this ;
  GGS_uintlist temp_2 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 429)) ;
  temp_2.plusPlusAssignOperation (GGS_uintlist_2E_element::init_21_ (var_code_13727, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 429)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 428)).getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 428)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 428)), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 427)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_TBLWT instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::getter_instructionDisplay (Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT temp_0 = this ;
  GGS_string var_s_14361 = GGS_string ("TBLWT ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mOption (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 440)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 440)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_14361  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 441)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_TBLWT generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::method_generateCode (const GGS_uint /* constinArgument_inAddress */,
                                                                                     const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                     const GGS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                     GGS_codeList & outArgument_outCode,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_14780 ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT temp_0 = this ;
  switch (temp_0.readProperty_mOption ().enumValue ()) {
  case GGS_tableAccessOption::Enumeration::invalid:
    break ;
  case GGS_tableAccessOption::Enumeration::enum_simpleAccess:
    {
      var_code_14780 = GGS_uint (uint32_t (12U)) ;
    }
    break ;
  case GGS_tableAccessOption::Enumeration::enum_postIncrement:
    {
      var_code_14780 = GGS_uint (uint32_t (13U)) ;
    }
    break ;
  case GGS_tableAccessOption::Enumeration::enum_postDecrement:
    {
      var_code_14780 = GGS_uint (uint32_t (14U)) ;
    }
    break ;
  case GGS_tableAccessOption::Enumeration::enum_preIncrement:
    {
      var_code_14780 = GGS_uint (uint32_t (15U)) ;
    }
    break ;
  }
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT temp_1 = this ;
  GGS_uintlist temp_2 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 460)) ;
  temp_2.plusPlusAssignOperation (GGS_uintlist_2E_element::init_21_ (var_code_14780, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 460)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 459)).getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 459)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 459)), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 458)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_MNOP instructionSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::getter_instructionSize (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP temp_0 = this ;
  result_outSize = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 473)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_MNOP instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::getter_instructionDisplay (Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP temp_0 = this ;
  GGS_string var_s_15623 = GGS_string ("MNOP ").add_operation (temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 479)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 479)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_15623  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 480)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_MNOP generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::method_generateCode (const GGS_uint /* constinArgument_inAddress */,
                                                                                    const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                    const GGS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                    GGS_codeList & outArgument_outCode,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCode = GGS_codeList::init (inCompiler COMMA_HERE) ;
  GGS_uint var_idx_16069 = GGS_uint (uint32_t (0U)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP temp_0 = this ;
  if (temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().isValid ()) {
    uint32_t variant_16079 = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().uintValue () ;
    bool loop_16079 = true ;
    while (loop_16079) {
      const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP temp_1 = this ;
      loop_16079 = GGS_bool (ComparisonKind::lowerThan, var_idx_16069.objectCompare (temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ())).isValid () ;
      if (loop_16079) {
        loop_16079 = GGS_bool (ComparisonKind::lowerThan, var_idx_16069.objectCompare (temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ())).boolValue () ;
      }
      if (loop_16079 && (0 == variant_16079)) {
        loop_16079 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_regular_instructions.galgas", 493)) ;
      }
      if (loop_16079) {
        variant_16079 -= 1 ;
        GGS_uintlist temp_2 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 496)) ;
        temp_2.plusPlusAssignOperation (GGS_uintlist_2E_element::init_21_ (GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 496)) ;
        outArgument_outCode.addAssignOperation (GGS_string ("    NOP"), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 496)) ;
        var_idx_16069.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 497)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_NOPBRA instructionSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::getter_instructionSize (Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA temp_0 = this ;
  result_outSize = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 509)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_NOPBRA instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::getter_instructionDisplay (Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA temp_0 = this ;
  GGS_string var_s_16770 = GGS_string ("NOPBRA ").add_operation (temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 515)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 515)) ;
  GGS_stringlist temp_1 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 516)) ;
  temp_1.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_s_16770, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 516)) ;
  result_outResult = temp_1 ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_NOPBRA generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::method_generateCode (const GGS_uint /* constinArgument_inAddress */,
                                                                                      const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                      const GGS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                      GGS_codeList & outArgument_outCode,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCode = GGS_codeList::init (inCompiler COMMA_HERE) ;
  GGS_uint var_idx_17187 = GGS_uint (uint32_t (0U)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA temp_0 = this ;
  if (temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().isValid ()) {
    uint32_t variant_17197 = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().uintValue () ;
    bool loop_17197 = true ;
    while (loop_17197) {
      const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA temp_1 = this ;
      loop_17197 = GGS_bool (ComparisonKind::lowerThan, var_idx_17187.objectCompare (temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ())).isValid () ;
      if (loop_17197) {
        loop_17197 = GGS_bool (ComparisonKind::lowerThan, var_idx_17187.objectCompare (temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ())).boolValue () ;
      }
      if (loop_17197 && (0 == variant_17197)) {
        loop_17197 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_regular_instructions.galgas", 529)) ;
      }
      if (loop_17197) {
        variant_17197 -= 1 ;
        GGS_uintlist temp_2 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 532)) ;
        temp_2.plusPlusAssignOperation (GGS_uintlist_2E_element::init_21_ (GGS_uint (uint32_t (53248U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 532)) ;
        outArgument_outCode.addAssignOperation (GGS_string ("    BRA $+2"), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 532)) ;
        var_idx_17187.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 533)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_MOV_LABEL_W instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::getter_instructionDisplay (Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_0 = this ;
  const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_1 = this ;
  const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_2 = this ;
  GGS_string var_s_17665 = GGS_string ("MOVLW ((").add_operation (temp_0.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 544)).add_operation (GGS_string (" + "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 544)).add_operation (temp_1.readProperty_mOffset ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 544)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 544)).add_operation (GGS_string (") >> "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 544)).add_operation (temp_2.readProperty_mRightShift ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 544)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 544)).add_operation (GGS_string (") & 0xFF"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 544)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_17665  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 545)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_MOV_LABEL_W generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::method_generateCode (const GGS_uint /* constinArgument_inAddress */,
                                                                                  const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                  const GGS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                                  GGS_codeList & outArgument_outCode,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_address_18168 ;
  const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_0 = this ;
  constinArgument_inDataAddressMap.method_searchKey (temp_0.readProperty_mLabel (), var_address_18168, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 555)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_1 = this ;
  const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_2 = this ;
  GGS_uint var_code_18189 = var_address_18168.add_operation (temp_1.readProperty_mOffset (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 556)).right_shift_operation (temp_2.readProperty_mRightShift (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 556)).operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 556)) ;
  GGS_uint var_code_5F_MOVLW_18262 = GGS_uint (uint32_t (3584U)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_3 = this ;
  const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_4 = this ;
  const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_5 = this ;
  GGS_uintlist temp_6 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 560)) ;
  temp_6.plusPlusAssignOperation (GGS_uintlist_2E_element::init_21_ (var_code_18189.operator_or (var_code_5F_MOVLW_18262 COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 560)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 560)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    MOVLW ((_data_").add_operation (temp_3.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 559)).add_operation (GGS_string (" + "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 559)).add_operation (temp_4.readProperty_mOffset ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 559)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 559)).add_operation (GGS_string (") >> "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 559)).add_operation (temp_5.readProperty_mRightShift ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 559)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 559)).add_operation (GGS_string (") & 0xFF"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 559)), temp_6  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 558)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_BLANK instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::getter_instructionDisplay (Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK temp_0 = this ;
  GGS_string var_s_18782 = GGS_string ("BLANK ").add_operation (temp_0.readProperty_mBlankValue ().getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 571)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 571)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_18782  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 572)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_BLANK generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::method_generateCode (const GGS_uint /* constinArgument_inAddress */,
                                                                                     const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                     const GGS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                     GGS_codeList & outArgument_outCode,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK temp_0 = this ;
  GGS_uint var_code_19206 = GGS_uint (uint32_t (61440U)).operator_or (temp_0.readProperty_mBlankValue () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 582)) ;
  GGS_uintlist temp_1 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 585)) ;
  temp_1.plusPlusAssignOperation (GGS_uintlist_2E_element::init_21_ (var_code_19206, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 585)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    DW ").add_operation (var_code_19206.getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 584)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 584)), temp_1  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 583)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_FNOP instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::getter_instructionDisplay (Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP temp_0 = this ;
  GGS_string var_s_19665 = GGS_string ("FNOP ").add_operation (temp_0.readProperty_mBlankValue ().getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 596)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 596)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_19665  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 597)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_FNOP generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::method_generateCode (const GGS_uint /* constinArgument_inAddress */,
                                                                                    const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                    const GGS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                    GGS_codeList & outArgument_outCode,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP temp_0 = this ;
  GGS_uint var_code_20087 = GGS_uint (uint32_t (61440U)).operator_or (temp_0.readProperty_mBlankValue () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 607)) ;
  GGS_uintlist temp_1 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 610)) ;
  temp_1.plusPlusAssignOperation (GGS_uintlist_2E_element::init_21_ (var_code_20087, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 610)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    DW ").add_operation (var_code_20087.getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 609)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 609)), temp_1  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 608)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_skip_instruction_compare_register instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::getter_instructionDisplay (Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_0 = this ;
  GGS_string var_s_20554 = temp_0.readProperty_mRegisterDescription ().readProperty_mAssemblyString ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 621)) ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_1 = this ;
  switch (temp_1.readProperty_mCompareInstruction ().enumValue ()) {
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSEQ:
    {
      var_s_20554.plusAssignOperation(GGS_string ("!= W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 623)) ;
    }
    break ;
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSGT:
    {
      var_s_20554.plusAssignOperation(GGS_string ("<= W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 624)) ;
    }
    break ;
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSLT:
    {
      var_s_20554.plusAssignOperation(GGS_string (">= W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 625)) ;
    }
    break ;
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::enum_TSTFSZ:
    {
      var_s_20554.plusAssignOperation(GGS_string ("!= 0"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 626)) ;
    }
    break ;
  }
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_2 = this ;
  var_s_20554.plusAssignOperation(GGS_string (" \? ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) temp_2.readProperty_mEmbeddedInstruction ().ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 628)).getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 628)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 628)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 628)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_20554  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 629)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_skip_instruction_compare_register generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::method_generateCode (const GGS_uint constinArgument_inAddress,
                                                                                           const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                           const GGS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                                           GGS_codeList & outArgument_outCode,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_21201 ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_0 = this ;
  switch (temp_0.readProperty_mCompareInstruction ().enumValue ()) {
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSEQ:
    {
      var_code_21201 = GGS_uint (uint32_t (25088U)) ;
    }
    break ;
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSGT:
    {
      var_code_21201 = GGS_uint (uint32_t (25600U)) ;
    }
    break ;
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSLT:
    {
      var_code_21201 = GGS_uint (uint32_t (24576U)) ;
    }
    break ;
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::enum_TSTFSZ:
    {
      var_code_21201 = GGS_uint (uint32_t (26112U)) ;
    }
    break ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_2 = this ;
    test_1 = temp_2.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      var_code_21201 = var_code_21201.operator_or (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 648)) ;
    }
  }
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_3 = this ;
  var_code_21201 = var_code_21201.operator_or (temp_3.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 650)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 650)) ;
  GGS_string var_s_21547 = GGS_string ("    ") ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_4 = this ;
  switch (temp_4.readProperty_mCompareInstruction ().enumValue ()) {
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSEQ:
    {
      var_s_21547.plusAssignOperation(GGS_string ("CPFSEQ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 654)) ;
    }
    break ;
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSGT:
    {
      var_s_21547.plusAssignOperation(GGS_string ("CPFSGT"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 655)) ;
    }
    break ;
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSLT:
    {
      var_s_21547.plusAssignOperation(GGS_string ("CPFSLT"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 656)) ;
    }
    break ;
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::enum_TSTFSZ:
    {
      var_s_21547.plusAssignOperation(GGS_string ("TSTFSZ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 657)) ;
    }
    break ;
  }
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_5 = this ;
  var_s_21547.plusAssignOperation(GGS_string (" ").add_operation (temp_5.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 659)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 659)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_7 = this ;
    test_6 = temp_7.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      var_s_21547.plusAssignOperation(GGS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 661)) ;
    }
  }
  GGS_uintlist temp_8 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 666)) ;
  temp_8.plusPlusAssignOperation (GGS_uintlist_2E_element::init_21_ (var_code_21201, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 666)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (var_s_21547, temp_8  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 664)) ;
  GGS_codeList var_c_22042 ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_9 = this ;
  callExtensionMethod_generateCode ((cPtr_ipic_31__38_SequentialInstruction *) temp_9.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 669)), constinArgument_inSymbolTable, constinArgument_inDataAddressMap, var_c_22042, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 668)) ;
  outArgument_outCode.plusAssignOperation(var_c_22042, inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 674)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_skip_instruction_compare_register performInstructionRelativeBranchResolution'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::method_performInstructionRelativeBranchResolution (const GGS_uint constinArgument_inAddress,
                                                                                                                         const GGS_string constinArgument_inBlockLabel,
                                                                                                                         const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                                         GGS_uint & ioArgument_ioConversionCount,
                                                                                                                         GGS_string & ioArgument_ioListFileContents,
                                                                                                                         GGS_ipic_31__38_SequentialInstruction & outArgument_outModifiedInstruction,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_0 = this ;
  outArgument_outModifiedInstruction = temp_0 ;
  GGS_uint var_n_22515 = ioArgument_ioConversionCount ;
  GGS_ipic_31__38_SequentialInstruction var_outModifiedEmbeddedInstruction_22752 ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_1 = this ;
  callExtensionMethod_performInstructionRelativeBranchResolution ((cPtr_ipic_31__38_SequentialInstruction *) temp_1.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 689)), constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedEmbeddedInstruction_22752, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 688)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::notEqual, var_n_22515.objectCompare (ioArgument_ioConversionCount)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_3 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_4 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_5 = this ;
      outArgument_outModifiedInstruction = GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::init_21__21__21__21_ (temp_3.readProperty_mInstructionLocation (), var_outModifiedEmbeddedInstruction_22752, temp_4.readProperty_mCompareInstruction (), temp_5.readProperty_mRegisterDescription (), inCompiler COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_skip_instruction_BitTestSkip instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::getter_instructionDisplay (Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  GGS_string var_s_23370 = GGS_string::makeEmptyString () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_s_23370.plusAssignOperation(GGS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 714)) ;
    }
  }
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_2 = this ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_3 = this ;
  var_s_23370.plusAssignOperation(temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 716)).add_operation (temp_3.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 716)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 716)).add_operation (GGS_string (" \? "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 716)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 716)) ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_4 = this ;
  GGS_stringlist var_x_23532 = callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) temp_4.readProperty_mEmbeddedInstruction ().ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 718)) ;
  var_s_23370.plusAssignOperation(var_x_23532.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 719)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 719)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_23370  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 720)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_skip_instruction_BitTestSkip generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::method_generateCode (const GGS_uint constinArgument_inAddress,
                                                                                   const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                   const GGS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                                   GGS_codeList & outArgument_outCode,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_23968 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_code_23968 = GGS_uint (uint32_t (40960U)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    var_code_23968 = GGS_uint (uint32_t (45056U)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_3 = this ;
    test_2 = temp_3.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      var_code_23968 = var_code_23968.operator_or (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 737)) ;
    }
  }
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_4 = this ;
  var_code_23968 = var_code_23968.operator_or (temp_4.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 739)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 739)) ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_5 = this ;
  var_code_23968 = var_code_23968.operator_or (temp_5.readProperty_mBitNumber ().left_shift_operation (GGS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 740)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 740)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 740)) ;
  GGS_string var_s_24285 = GGS_string ("    ") ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_7 = this ;
    test_6 = temp_7.readProperty_mSkipIfSet ().boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      var_s_24285.plusAssignOperation(GGS_string ("BTFSS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 744)) ;
    }
  }
  if (GalgasBool::boolFalse == test_6) {
    var_s_24285.plusAssignOperation(GGS_string ("BTFSC"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 746)) ;
  }
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_8 = this ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_9 = this ;
  var_s_24285.plusAssignOperation(GGS_string (" ").add_operation (temp_8.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 748)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 748)).add_operation (temp_9.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 748)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 748)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 748)) ;
  GGS_uintlist temp_10 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 752)) ;
  temp_10.plusPlusAssignOperation (GGS_uintlist_2E_element::init_21_ (var_code_23968, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 752)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (var_s_24285, temp_10  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 750)) ;
  GGS_codeList var_c_24651 ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_11 = this ;
  callExtensionMethod_generateCode ((cPtr_ipic_31__38_SequentialInstruction *) temp_11.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 755)), constinArgument_inSymbolTable, constinArgument_inDataAddressMap, var_c_24651, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 754)) ;
  outArgument_outCode.plusAssignOperation(var_c_24651, inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 760)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_skip_instruction_BitTestSkip performInstructionRelativeBranchResolution'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::method_performInstructionRelativeBranchResolution (const GGS_uint constinArgument_inAddress,
                                                                                                                 const GGS_string constinArgument_inBlockLabel,
                                                                                                                 const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                                 GGS_uint & ioArgument_ioConversionCount,
                                                                                                                 GGS_string & ioArgument_ioListFileContents,
                                                                                                                 GGS_ipic_31__38_SequentialInstruction & outArgument_outModifiedInstruction,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_0 = this ;
  outArgument_outModifiedInstruction = temp_0 ;
  GGS_uint var_n_25119 = ioArgument_ioConversionCount ;
  GGS_ipic_31__38_SequentialInstruction var_outModifiedEmbeddedInstruction_25356 ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_1 = this ;
  callExtensionMethod_performInstructionRelativeBranchResolution ((cPtr_ipic_31__38_SequentialInstruction *) temp_1.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 775)), constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedEmbeddedInstruction_25356, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 774)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::notEqual, var_n_25119.objectCompare (ioArgument_ioConversionCount)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_3 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_4 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_5 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_6 = this ;
      outArgument_outModifiedInstruction = GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::init_21__21__21__21__21_ (temp_3.readProperty_mInstructionLocation (), var_outModifiedEmbeddedInstruction_25356, temp_4.readProperty_mSkipIfSet (), temp_5.readProperty_mRegisterDescription (), temp_6.readProperty_mBitNumber (), inCompiler COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_skip_instruction_FDA instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::getter_instructionDisplay (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  GGS_string var_s_25967 ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_0 = this ;
  switch (temp_0.readProperty_mInstruction_5F_FDA_5F_base_5F_code ().enumValue ()) {
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::enum_DECFSZ:
    {
      var_s_25967 = GGS_string ("DECFSZ") ;
    }
    break ;
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::enum_DCFSNZ:
    {
      var_s_25967 = GGS_string ("DCFSNZ") ;
    }
    break ;
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::enum_INCFSZ:
    {
      var_s_25967 = GGS_string ("INCFSZ") ;
    }
    break ;
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::enum_INFSNZ:
    {
      var_s_25967 = GGS_string ("INFSNZ") ;
    }
    break ;
  }
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_1 = this ;
  var_s_25967.plusAssignOperation(GGS_string (" ").add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 806)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 806)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_3 = this ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      var_s_25967.plusAssignOperation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 808)) ;
    }
  }
  var_s_25967.plusAssignOperation(GGS_string (" \? "), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 810)) ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_4 = this ;
  GGS_stringlist var_x_26272 = callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) temp_4.readProperty_mEmbeddedInstruction ().ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 811)) ;
  var_s_25967.plusAssignOperation(var_x_26272.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 812)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 812)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_25967  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 813)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_skip_instruction_FDA generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::method_generateCode (const GGS_uint constinArgument_inAddress,
                                                                           const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                           const GGS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                           GGS_codeList & outArgument_outCode,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_binCode_26700 ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_0 = this ;
  switch (temp_0.readProperty_mInstruction_5F_FDA_5F_base_5F_code ().enumValue ()) {
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::enum_DECFSZ:
    {
      var_binCode_26700 = GGS_uint (uint32_t (11264U)) ;
    }
    break ;
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::enum_DCFSNZ:
    {
      var_binCode_26700 = GGS_uint (uint32_t (19456U)) ;
    }
    break ;
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::enum_INCFSZ:
    {
      var_binCode_26700 = GGS_uint (uint32_t (15360U)) ;
    }
    break ;
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::enum_INFSNZ:
    {
      var_binCode_26700 = GGS_uint (uint32_t (18432U)) ;
    }
    break ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_2 = this ;
    test_1 = temp_2.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      var_binCode_26700 = var_binCode_26700.operator_or (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 831)) ;
    }
  }
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_3 = this ;
  var_binCode_26700 = var_binCode_26700.operator_or (temp_3.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 833)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 833)) ;
  GGS_string var_assemblyCode_27079 = GGS_string ("    ") ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_4 = this ;
  switch (temp_4.readProperty_mInstruction_5F_FDA_5F_base_5F_code ().enumValue ()) {
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::enum_DECFSZ:
    {
      var_assemblyCode_27079.plusAssignOperation(GGS_string ("DECFSZ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 837)) ;
    }
    break ;
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::enum_DCFSNZ:
    {
      var_assemblyCode_27079.plusAssignOperation(GGS_string ("DCFSNZ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 838)) ;
    }
    break ;
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::enum_INCFSZ:
    {
      var_assemblyCode_27079.plusAssignOperation(GGS_string ("INCFSZ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 839)) ;
    }
    break ;
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::enum_INFSNZ:
    {
      var_assemblyCode_27079.plusAssignOperation(GGS_string ("INFSNZ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 840)) ;
    }
    break ;
  }
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_5 = this ;
  var_assemblyCode_27079.plusAssignOperation(GGS_string (" ").add_operation (temp_5.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 842)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 842)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_7 = this ;
    test_6 = temp_7.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      var_assemblyCode_27079.plusAssignOperation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 844)) ;
    }
  }
  if (GalgasBool::boolFalse == test_6) {
    var_binCode_26700 = var_binCode_26700.operator_or (GGS_uint (uint32_t (512U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 846)) ;
    var_assemblyCode_27079.plusAssignOperation(GGS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 847)) ;
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_9 = this ;
    test_8 = temp_9.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      var_binCode_26700 = var_binCode_26700.operator_or (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 850)) ;
      var_assemblyCode_27079.plusAssignOperation(GGS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 851)) ;
    }
  }
  GGS_uintlist temp_10 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 856)) ;
  temp_10.plusPlusAssignOperation (GGS_uintlist_2E_element::init_21_ (var_binCode_26700, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 856)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (var_assemblyCode_27079, temp_10  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 854)) ;
  GGS_codeList var_c_27832 ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_11 = this ;
  callExtensionMethod_generateCode ((cPtr_ipic_31__38_SequentialInstruction *) temp_11.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 859)), constinArgument_inSymbolTable, constinArgument_inDataAddressMap, var_c_27832, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 858)) ;
  outArgument_outCode.plusAssignOperation(var_c_27832, inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 864)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_skip_instruction_FDA performInstructionRelativeBranchResolution'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::method_performInstructionRelativeBranchResolution (const GGS_uint constinArgument_inAddress,
                                                                                                         const GGS_string constinArgument_inBlockLabel,
                                                                                                         const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                         GGS_uint & ioArgument_ioConversionCount,
                                                                                                         GGS_string & ioArgument_ioListFileContents,
                                                                                                         GGS_ipic_31__38_SequentialInstruction & outArgument_outModifiedInstruction,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_0 = this ;
  outArgument_outModifiedInstruction = temp_0 ;
  GGS_uint var_n_28292 = ioArgument_ioConversionCount ;
  GGS_ipic_31__38_SequentialInstruction var_outModifiedEmbeddedInstruction_28529 ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_1 = this ;
  callExtensionMethod_performInstructionRelativeBranchResolution ((cPtr_ipic_31__38_SequentialInstruction *) temp_1.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 879)), constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedEmbeddedInstruction_28529, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 878)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::notEqual, var_n_28292.objectCompare (ioArgument_ioConversionCount)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_3 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_4 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_5 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_6 = this ;
      outArgument_outModifiedInstruction = GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::init_21__21__21__21__21_ (temp_3.readProperty_mInstructionLocation (), var_outModifiedEmbeddedInstruction_28529, temp_4.readProperty_mInstruction_5F_FDA_5F_base_5F_code (), temp_5.readProperty_mRegisterDescription (), temp_6.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_JSR instructionSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_ipic_31__38__5F_intermediate_5F_JSR::getter_instructionSize (Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = this ;
  switch (temp_0.readProperty_mKind ().enumValue ()) {
  case GGS_jumpInstructionKind::Enumeration::invalid:
    break ;
  case GGS_jumpInstructionKind::Enumeration::enum_ipicRelative:
  case GGS_jumpInstructionKind::Enumeration::enum_relative:
    {
      result_outSize = GGS_uint (uint32_t (2U)) ;
    }
    break ;
  case GGS_jumpInstructionKind::Enumeration::enum_absolute:
    {
      result_outSize = GGS_uint (uint32_t (4U)) ;
    }
    break ;
  }
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_JSR instructionRelativeBranchOverflow'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_JSR::method_instructionRelativeBranchOverflow (const GGS_uint constinArgument_inAddress,
                                                                                         const GGS_string constinArgument_inBlockLabel,
                                                                                         const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                         GGS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = this ;
  switch (temp_0.readProperty_mKind ().enumValue ()) {
  case GGS_jumpInstructionKind::Enumeration::invalid:
    break ;
  case GGS_jumpInstructionKind::Enumeration::enum_ipicRelative:
  case GGS_jumpInstructionKind::Enumeration::enum_relative:
    {
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_2 = this ;
        test_1 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_2.readProperty_mTargetLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 921)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 921)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          {
          const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_3 = this ;
          extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_3.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 923)) ;
          }
        }
      }
    }
    break ;
  case GGS_jumpInstructionKind::Enumeration::enum_absolute:
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_JSR performInstructionRelativeBranchResolution'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_JSR::method_performInstructionRelativeBranchResolution (const GGS_uint constinArgument_inAddress,
                                                                                                  const GGS_string constinArgument_inBlockLabel,
                                                                                                  const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                  GGS_uint & ioArgument_ioConversionCount,
                                                                                                  GGS_string & ioArgument_ioListFileContents,
                                                                                                  GGS_ipic_31__38_SequentialInstruction & outArgument_outModifiedInstruction,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = this ;
  outArgument_outModifiedInstruction = temp_0 ;
  const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_1 = this ;
  switch (temp_1.readProperty_mKind ().enumValue ()) {
  case GGS_jumpInstructionKind::Enumeration::invalid:
    break ;
  case GGS_jumpInstructionKind::Enumeration::enum_ipicRelative:
    {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_3 = this ;
        test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_3.readProperty_mTargetLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 941)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 941)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          ioArgument_ioConversionCount.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 942)) ;
          const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_4 = this ;
          const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_5 = this ;
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 943)).add_operation (GGS_string (": JSR "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 943)).add_operation (temp_4.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 943)).add_operation (GGS_string (" --> CALL "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 943)).add_operation (temp_5.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 943)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 943)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 943)) ;
          const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_6 = this ;
          const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_7 = this ;
          outArgument_outModifiedInstruction = GGS_ipic_31__38__5F_intermediate_5F_JSR::init_21__21__21_ (temp_6.readProperty_mInstructionLocation (), temp_7.readProperty_mTargetLabel (), GGS_jumpInstructionKind::class_func_absolute (SOURCE_FILE ("ipic18_regular_instructions.galgas", 944)), inCompiler COMMA_HERE) ;
        }
      }
    }
    break ;
  case GGS_jumpInstructionKind::Enumeration::enum_relative:
    {
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_9 = this ;
        test_8 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_9.readProperty_mTargetLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 947)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 947)).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_10 = this ;
          const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_11 = this ;
          const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_12 = this ;
          GenericArray <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GGS_string ("displacement (").add_operation (function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (constinArgument_inSymbolTable, temp_11.readProperty_mTargetLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 949)).getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 948)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 948)).add_operation (GGS_string (") too large for RCALL "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 949)).add_operation (temp_12.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 950)).add_operation (GGS_string (" instruction (limited to [-1024, 1023])"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 950)), fixItArray13  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 948)) ;
        }
      }
    }
    break ;
  case GGS_jumpInstructionKind::Enumeration::enum_absolute:
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_JSR instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_JSR::getter_instructionDisplay (Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  GGS_string var_s_31274 ;
  const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = this ;
  switch (temp_0.readProperty_mKind ().enumValue ()) {
  case GGS_jumpInstructionKind::Enumeration::invalid:
    break ;
  case GGS_jumpInstructionKind::Enumeration::enum_ipicRelative:
    {
      const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_1 = this ;
      var_s_31274 = GGS_string ("JSR ").add_operation (temp_1.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 961)) ;
    }
    break ;
  case GGS_jumpInstructionKind::Enumeration::enum_relative:
    {
      const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_2 = this ;
      var_s_31274 = GGS_string ("RCALL ").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 962)) ;
    }
    break ;
  case GGS_jumpInstructionKind::Enumeration::enum_absolute:
    {
      const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_3 = this ;
      var_s_31274 = GGS_string ("CALL ").add_operation (temp_3.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 963)) ;
    }
    break ;
  }
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_31274  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 965)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_JSR generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_JSR::method_generateCode (const GGS_uint constinArgument_inAddress,
                                                                    const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                    const GGS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                    GGS_codeList & outArgument_outCode,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_targetAddress_31869 ;
  const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = this ;
  constinArgument_inSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_31869, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 975)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_1 = this ;
  switch (temp_1.readProperty_mKind ().enumValue ()) {
  case GGS_jumpInstructionKind::Enumeration::invalid:
    break ;
  case GGS_jumpInstructionKind::Enumeration::enum_ipicRelative:
  case GGS_jumpInstructionKind::Enumeration::enum_relative:
    {
      const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_2 = this ;
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress_31869, temp_2.readProperty_mTargetLabel (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 978)) ;
    }
    break ;
  case GGS_jumpInstructionKind::Enumeration::enum_absolute:
    {
      const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_3 = this ;
      outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_targetAddress_31869, temp_3.readProperty_mTargetLabel (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 980)) ;
    }
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_computed_rcall instructionSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::getter_instructionSize (Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_outSize = GGS_uint (uint32_t (2U)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_outSize = GGS_uint (uint32_t (4U)) ;
  }
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_2 = this ;
  result_outSize = result_outSize.add_operation (GGS_uint (uint32_t (4U)).multiply_operation (temp_2.readProperty_mTargetInstructions ().getter_count (SOURCE_FILE ("ipic18_regular_instructions.galgas", 997)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 997)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 997)).substract_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 997)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_computed_rcall instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::getter_instructionDisplay (Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  GGS_string var_s_32800 = GGS_string ("COMPUTED ") ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1004)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_s_32800.plusAssignOperation(GGS_string ("(uses CALL)"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1005)) ;
    }
  }
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_32800  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1007)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_2 = this ;
  UpEnumerator_ipic_31__38_SequentialInstructionList enumerator_32944 (temp_2.readProperty_mTargetInstructions ()) ;
  while (enumerator_32944.hasCurrentObject ()) {
    UpEnumerator_stringlist enumerator_32988 (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_32944.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1009))) ;
    while (enumerator_32988.hasCurrentObject ()) {
      result_outResult.addAssignOperation (GGS_string ("   ").add_operation (enumerator_32988.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1010))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1010)) ;
      enumerator_32988.gotoNextObject () ;
    }
    enumerator_32944.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_computed_rcall instructionRelativeBranchOverflow'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::method_instructionRelativeBranchOverflow (const GGS_uint constinArgument_inAddress,
                                                                                                                      const GGS_string constinArgument_inBlockLabel,
                                                                                                                      const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                                      GGS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_0 = this ;
  GGS_bigint temp_1 ;
  const GalgasBool test_2 = temp_0.readProperty_mUsesRCALL ().boolEnum () ;
  if (GalgasBool::boolTrue == test_2) {
    temp_1 = GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1022)) ;
  }else if (GalgasBool::boolFalse == test_2) {
    temp_1 = GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1022)) ;
  }
  GGS_uint var_address_33426 = constinArgument_inAddress.add_operation (temp_1.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1022)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1022)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_3 = this ;
  UpEnumerator_ipic_31__38_SequentialInstructionList enumerator_33507 (temp_3.readProperty_mTargetInstructions ()) ;
  while (enumerator_33507.hasCurrentObject ()) {
    callExtensionMethod_instructionRelativeBranchOverflow ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_33507.current_mInstruction (HERE).ptr (), var_address_33426, constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1024)) ;
    var_address_33426 = var_address_33426.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1030)) ;
    enumerator_33507.gotoNextObject () ;
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_5 = this ;
    test_4 = temp_5.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GGS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1033)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1033)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1033)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          {
          extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, GGS_string ("_computed_goto_4"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1035)) ;
          }
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_computed_rcall performInstructionRelativeBranchResolution'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::method_performInstructionRelativeBranchResolution (const GGS_uint constinArgument_inAddress,
                                                                                                                               const GGS_string constinArgument_inBlockLabel,
                                                                                                                               const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                                               GGS_uint & ioArgument_ioConversionCount,
                                                                                                                               GGS_string & ioArgument_ioListFileContents,
                                                                                                                               GGS_ipic_31__38_SequentialInstruction & outArgument_outModifiedInstruction,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_0 = this ;
  outArgument_outModifiedInstruction = temp_0 ;
  GGS_uint var_unusedConversionCount_34430 = GGS_uint (uint32_t (0U)) ;
  GGS_string var_unusedListing_34470 = GGS_string::makeEmptyString () ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_1 = this ;
  GGS_bigint temp_2 ;
  const GalgasBool test_3 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
  if (GalgasBool::boolTrue == test_3) {
    temp_2 = GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1052)) ;
  }else if (GalgasBool::boolFalse == test_3) {
    temp_2 = GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1052)) ;
  }
  GGS_uint var_address_34501 = constinArgument_inAddress.add_operation (temp_2.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1052)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1052)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_4 = this ;
  UpEnumerator_ipic_31__38_SequentialInstructionList enumerator_34582 (temp_4.readProperty_mTargetInstructions ()) ;
  while (enumerator_34582.hasCurrentObject ()) {
    GGS_ipic_31__38_SequentialInstruction joker_34839 ; // Joker input parameter
    callExtensionMethod_performInstructionRelativeBranchResolution ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_34582.current_mInstruction (HERE).ptr (), var_address_34501, constinArgument_inBlockLabel, constinArgument_inSymbolTable, var_unusedConversionCount_34430, var_unusedListing_34470, joker_34839, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1055)) ;
    var_address_34501 = var_address_34501.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1063)) ;
    enumerator_34582.gotoNextObject () ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_6 = this ;
    test_5 = temp_6.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GGS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1066)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1066)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1066)).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          ioArgument_ioConversionCount.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1067)) ;
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1068)).add_operation (GGS_string (": computed rcall needs to use CALL _computed_goto_4\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1068)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1068)) ;
          const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_8 = this ;
          const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_9 = this ;
          outArgument_outModifiedInstruction = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::init_21__21__21_ (temp_8.readProperty_mInstructionLocation (), temp_9.readProperty_mTargetInstructions (), GGS_bool (false), inCompiler COMMA_HERE) ;
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18_intermediate_instruction_computed_rcall generateCode'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::method_generateCode (const GGS_uint constinArgument_inAddress,
                                                                                                 const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                 const GGS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                                                 GGS_codeList & outArgument_outCode,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_0 = this ;
  GGS_lstring var_target_35687 = GGS_lstring::init_21__21_ (GGS_string ("_computed_goto_4"), temp_0.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  GGS_uint var_computetedGoto_34_Address_35802 ;
  constinArgument_inSymbolTable.method_searchKey (var_target_35687, var_computetedGoto_34_Address_35802, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1086)) ;
  GGS_uint var_currentInstructionAddress_35839 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_2 = this ;
    test_1 = temp_2.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      var_currentInstructionAddress_35839 = constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1090)) ;
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_computetedGoto_34_Address_35802, var_target_35687, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1091)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    var_currentInstructionAddress_35839 = constinArgument_inAddress.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1093)) ;
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_computetedGoto_34_Address_35802, var_target_35687, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1094)) ;
  }
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_3 = this ;
  GGS_uint var_instructionFollowingComputedRcallAddress_36172 = var_currentInstructionAddress_35839.add_operation (temp_3.readProperty_mTargetInstructions ().getter_count (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1096)).multiply_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1096)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1096)).substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1096)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_4 = this ;
  GGS_lstring var_nextInstructionLabel_36290 = GGS_lstring::init_21__21_ (GGS_string ("_computed_").add_operation (constinArgument_inAddress.getter_xString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1097)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1097)), temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  GGS_uint var_idx_36400 = GGS_uint (uint32_t (0U)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_5 = this ;
  UpEnumerator_ipic_31__38_SequentialInstructionList enumerator_36430 (temp_5.readProperty_mTargetInstructions ()) ;
  while (enumerator_36430.hasCurrentObject ()) {
    var_idx_36400.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1100)) ;
    GGS_codeList var_instructionCode_36608 ;
    callExtensionMethod_generateCode ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_36430.current_mInstruction (HERE).ptr (), var_currentInstructionAddress_35839, constinArgument_inSymbolTable, constinArgument_inDataAddressMap, var_instructionCode_36608, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1101)) ;
    outArgument_outCode.plusAssignOperation(var_instructionCode_36608, inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1107)) ;
    var_currentInstructionAddress_35839 = var_currentInstructionAddress_35839.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1108)) ;
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_7 = this ;
      test_6 = GGS_bool (ComparisonKind::lowerThan, var_idx_36400.objectCompare (temp_7.readProperty_mTargetInstructions ().getter_count (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1109)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (var_currentInstructionAddress_35839, var_instructionFollowingComputedRcallAddress_36172, var_nextInstructionLabel_36290, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1110)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1110)) ;
        var_currentInstructionAddress_35839 = var_currentInstructionAddress_35839.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1111)) ;
      }
    }
    enumerator_36430.gotoNextObject () ;
  }
  outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_definition_5F_label (var_nextInstructionLabel_36290, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1115)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1115)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_NULL print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_NULL::method_print (GGS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("-"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 8)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_pseudo_PAGE print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("ORG ").add_operation (temp_0.readProperty_mPage ().multiply_operation (GGS_uint (uint32_t (512U)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 14)).getter_hexString (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 14)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 14)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 14)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_pseudo_BEGIN_ROUTINE print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("BEGIN OF ROUTINE ").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 20)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 20)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_pseudo_END_ROUTINE print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE temp_1 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("END OF ROUTINE ").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 26)).add_operation (GGS_string (" IN PAGE "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 26)).add_operation (temp_1.readProperty_mPage ().getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 26)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 26)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_pseudo_LABEL print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("LABEL ").add_operation (temp_0.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 32)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 32)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_instruction_FD print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FD temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FD temp_1 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 38)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 38)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 38)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 38)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_baseline_5F_intermediate_5F_instruction_5F_FD temp_3 = this ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 40)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_instruction_F print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_F::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instruction_5F_F temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_F temp_1 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 47)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 47)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 47)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 47)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_instruction_FB print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FB temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FB temp_1 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FB temp_2 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 53)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 53)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 53)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 53)).add_operation (temp_2.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 53)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 53)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_instruction_BitTestSkip print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("BTFSS"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 60)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("BTFSC"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 62)) ;
  }
  const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip temp_2 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip temp_3 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string (" ").add_operation (temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 64)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 64)).add_operation (temp_3.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 64)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 64)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 64)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_GOTO print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_GOTO::method_print (GGS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_GOTO temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("GOTO ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 70)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 70)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_JUMP print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_JUMP::method_print (GGS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_JUMP temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("JUMP ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 76)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 76)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_CALL print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_CALL::method_print (GGS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_CALL temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("CALL ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 83)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 83)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_JSR print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_JSR::method_print (GGS_string & ioArgument_ioListFileContents,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_JSR temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("JSR ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 90)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 90)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_instruction_literalOperation print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation temp_1 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 96)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 96)).add_operation (temp_1.readProperty_mLiteralValue ().getter_hexString (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 96)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 96)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 96)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_instruction_MNOP print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("MNOP ").add_operation (temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().getter_string (SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 102)), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 102)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 102)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_incDecRegisterInCondition print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("JUMP "), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 108)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_1 = this ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("INCF "), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 110)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("DECF "), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 112)) ;
  }
  const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_2 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 114)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_4 = this ;
    test_3 = temp_4.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 116)) ;
    }
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_6 = this ;
    test_5 = temp_6.readProperty_mBranchIfZero ().boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string (" Z"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 119)) ;
    }
  }
  if (GalgasBool::boolFalse == test_5) {
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string (" NZ"), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 121)) ;
  }
  const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_7 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string (" ").add_operation (temp_7.readProperty_mTargetLabel (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 123)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 123)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_WO_OPERAND print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 129)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 129)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_intermediate_TRIS print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_TRIS::method_print (GGS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_TRIS temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("TRIS ").add_operation (temp_0.readProperty_mOperand ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 135)), inCompiler  COMMA_SOURCE_FILE ("baseline_intermediate_instruction_print.galgas", 135)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_pseudo_ORG setCurrentAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::method_setCurrentAddress (GGS_uint & ioArgument_ioCurrentAddress,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_0 = this ;
  ioArgument_ioCurrentAddress = temp_0.readProperty_mOrigin () ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_NULL print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_NULL::method_print (GGS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("-"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 11)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_pseudo_ORG print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("ORG ").add_operation (temp_0.readProperty_mOrigin ().getter_hexString (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 18)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 18)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 18)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_pseudo_LABEL print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(temp_0.readProperty_mLabel ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 25)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 25)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_FD print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_FD::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FD temp_0 = this ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FD temp_1 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(extensionGetter_mnemonic (temp_0.readProperty_mInstruction_5F_FD_5F_base_5F_code (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 32)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 32)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 32)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 32)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_midrange_5F_intermediate_5F_instruction_5F_FD temp_3 = this ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 34)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_F print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_F::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_F temp_0 = this ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_F temp_1 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(extensionGetter_mnemonic (temp_0.readProperty_mFinstruction (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 42)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 42)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 42)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_FB print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_FB::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FB temp_0 = this ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FB temp_1 = this ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FB temp_2 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(extensionGetter_mnemonic (temp_0.readProperty_mBitOrientedOp (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)).add_operation (temp_2.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 49)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_BitTestSkip print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("BTFSS"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 57)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("BTFSC"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 59)) ;
  }
  const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_2 = this ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_3 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string (" ").add_operation (temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 61)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 61)).add_operation (temp_3.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 61)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 61)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_JUMP print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JUMP::method_print (GGS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_JUMP temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("JUMP ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 68)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 68)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_GOTO print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_GOTO::method_print (GGS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_GOTO temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("GOTO ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 75)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 75)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_CALL print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_CALL::method_print (GGS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_CALL temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("CALL ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 82)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 82)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_JSR print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JSR::method_print (GGS_string & ioArgument_ioListFileContents,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_JSR temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("JSR ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 89)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 89)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_CLRWDT print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("CLRWDT"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 96)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_CLRW print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("CLRW"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 103)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_NOP print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("NOP"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 111)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_RETURN print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("RETURN"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 118)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_RETFIE print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("RETFIE"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 125)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_SLEEP print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("SLEEP"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 132)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_literalOperation print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = this ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_1 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(extensionGetter_mnemonic (temp_0.readProperty_mLiteralInstruction (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 139)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 139)).add_operation (temp_1.readProperty_mLiteralValue ().getter_hexString (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 139)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 139)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 139)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_instruction_MNOP print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("MNOP ").add_operation (temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().getter_string (SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 146)), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 146)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 146)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_intermediate_incDecRegisterInCondition print'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("JUMP "), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 153)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_1 = this ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("INCF "), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 155)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("DECF "), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 157)) ;
  }
  const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_2 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 159)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_4 = this ;
    test_3 = temp_4.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 161)) ;
    }
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_6 = this ;
    test_5 = temp_6.readProperty_mBranchIfZero ().boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string (" Z"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 164)) ;
    }
  }
  if (GalgasBool::boolFalse == test_5) {
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string (" NZ"), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 166)) ;
  }
  const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_7 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string (" ").add_operation (temp_7.readProperty_mTargetLabel (), inCompiler COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 168)), inCompiler  COMMA_SOURCE_FILE ("midrange_display_intermediate_instruction.galgas", 168)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_assembly_pseudo_ORG length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::getter_length (Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outLength ; // Returned variable
  result_outLength = GGS_uint (uint32_t (0U)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_assembly_pseudo_BEGINOFROUTINE length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::getter_length (Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outLength ; // Returned variable
  result_outLength = GGS_uint (uint32_t (0U)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_assembly_pseudo_ENDOFROUTINE length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::getter_length (Compiler */* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outLength ; // Returned variable
  result_outLength = GGS_uint (uint32_t (0U)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_assembly_pseudo_LABEL length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::getter_length (Compiler */* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outLength ; // Returned variable
  result_outLength = GGS_uint (uint32_t (0U)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@baseline_assembly_actualInstruction length'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_baseline_5F_assembly_5F_actualInstruction::getter_length (Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outLength ; // Returned variable
  result_outLength = GGS_uint (uint32_t (1U)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'checkCurrentEmitAddress?'
//
//--------------------------------------------------------------------------------------------------

void routine_checkCurrentEmitAddress_3F_ (const GGS_uint constinArgument_inCurrentAddress,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_addr_1350 ;
  {
  routine_currentEmitAddress_21_ (var_addr_1350, inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 39)) ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("intermediate_generic.galgas", 40)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_addr_1350.objectCompare (constinArgument_inCurrentAddress)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 40)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 41)), GGS_string ("internal error: current emit address is ").add_operation (var_addr_1350.getter_hexString (SOURCE_FILE ("intermediate_generic.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 41)).add_operation (GGS_string ("; it should be "), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 41)).add_operation (constinArgument_inCurrentAddress.getter_hexString (SOURCE_FILE ("intermediate_generic.galgas", 42)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 42)), fixItArray1  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 41)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatInteger eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatInteger::method_eval (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                        const GGS_constantMap /* constinArgument_inConstantMap */,
                                        GGS_sint_36__34_ & outArgument_outResult,
                                        GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                        Compiler * /* inCompiler */
                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_immediatInteger temp_0 = this ;
  outArgument_outResult = temp_0.readProperty_mValue ().readProperty_uint ().getter_sint_36__34_ (SOURCE_FILE ("intermediate_generic.galgas", 95)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatRegister eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatRegister::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                         const GGS_constantMap constinArgument_inConstantMap,
                                         GGS_sint_36__34_ & outArgument_outResult,
                                         GGS_stringset & ioArgument_ioUsedRegisters,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_immediatRegister temp_1 = this ;
    test_0 = constinArgument_inRegisterTable.getter_hasKey (temp_1.readProperty_mRegister ().readProperty_mRegisterName ().readProperty_string () COMMA_SOURCE_FILE ("intermediate_generic.galgas", 106)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_immediatRegister temp_2 = this ;
      ioArgument_ioUsedRegisters.plusPlusAssignOperation (temp_2.readProperty_mRegister ().readProperty_mRegisterName ().readProperty_string ()  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 107)) ;
      GGS_uintlist var_registerAddressList_4051 ;
      GGS_uint var_size_4076 ;
      GGS_registerProtection var_protection_4090 ;
      const GGS_immediatRegister temp_3 = this ;
      GGS_bitSliceTable joker_4081_2 ; // Joker input parameter
      GGS_string joker_4081_1 ; // Joker input parameter
      constinArgument_inRegisterTable.method_searchKey (temp_3.readProperty_mRegister ().readProperty_mRegisterName (), var_registerAddressList_4051, var_size_4076, joker_4081_2, joker_4081_1, var_protection_4090, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 108)) ;
      const GGS_immediatRegister temp_4 = this ;
      extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_4.readProperty_mRegister ().readProperty_mRegisterName (), GGS_bool (false), var_protection_4090, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 109)) ;
      GGS_uint var_registerAddress_4240 ;
      var_registerAddressList_4051.method_first (var_registerAddress_4240, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 110)) ;
      GGS_sint_36__34_ var_offset_4335 ;
      const GGS_immediatRegister temp_5 = this ;
      callExtensionMethod_eval ((cPtr_immediatExpression *) temp_5.readProperty_mRegister ().readProperty_mOffset ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_4335, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 111)) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::lowerThan, var_offset_4335.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          const GGS_immediatRegister temp_7 = this ;
          GenericArray <FixItDescription> fixItArray8 ;
          inCompiler->emitSemanticError (temp_7.readProperty_mRegister ().readProperty_mEndOfOffsetExpression (), GGS_string ("index (").add_operation (var_offset_4335.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 114)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 114)).add_operation (GGS_string (") should be >= 0"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 114)), fixItArray8  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 113)) ;
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        GalgasBool test_9 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_9) {
          test_9 = GGS_bool (ComparisonKind::greaterOrEqual, var_offset_4335.getter_uint (inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 115)).objectCompare (var_size_4076)).boolEnum () ;
          if (GalgasBool::boolTrue == test_9) {
            const GGS_immediatRegister temp_10 = this ;
            GenericArray <FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (temp_10.readProperty_mRegister ().readProperty_mEndOfOffsetExpression (), GGS_string ("index (").add_operation (var_offset_4335.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 117)).add_operation (GGS_string (") should be lower than size ("), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 117)).add_operation (var_size_4076.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 117)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 117)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 117)), fixItArray11  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 116)) ;
          }
        }
      }
      outArgument_outResult = var_registerAddress_4240.getter_sint_36__34_ (SOURCE_FILE ("intermediate_generic.galgas", 119)).add_operation (var_offset_4335, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 119)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      const GGS_immediatRegister temp_13 = this ;
      test_12 = constinArgument_inConstantMap.getter_hasKey (temp_13.readProperty_mRegister ().readProperty_mRegisterName ().readProperty_string () COMMA_SOURCE_FILE ("intermediate_generic.galgas", 120)).boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        const GGS_immediatRegister temp_14 = this ;
        constinArgument_inConstantMap.method_searchKey (temp_14.readProperty_mRegister ().readProperty_mRegisterName (), outArgument_outResult, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 121)) ;
        GGS_sint_36__34_ var_offset_4930 ;
        const GGS_immediatRegister temp_15 = this ;
        callExtensionMethod_eval ((cPtr_immediatExpression *) temp_15.readProperty_mRegister ().readProperty_mOffset ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_4930, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 122)) ;
        GalgasBool test_16 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_16) {
          test_16 = GGS_bool (ComparisonKind::notEqual, GGS_sint_36__34_ (int64_t (0LL)).objectCompare (var_offset_4930)).boolEnum () ;
          if (GalgasBool::boolTrue == test_16) {
            const GGS_immediatRegister temp_17 = this ;
            GenericArray <FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (temp_17.readProperty_mRegister ().readProperty_mEndOfOffsetExpression (), GGS_string ("index notation (").add_operation (var_offset_4930.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 125)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 125)).add_operation (GGS_string (") cannot be used with a constant"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 125)), fixItArray18  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 124)) ;
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_12) {
      const GGS_immediatRegister temp_19 = this ;
      const GGS_immediatRegister temp_20 = this ;
      GenericArray <FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_19.readProperty_mRegister ().readProperty_mRegisterName ().readProperty_location (), GGS_string ("'").add_operation (temp_20.readProperty_mRegister ().readProperty_mRegisterName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 128)).add_operation (GGS_string ("' should be declared as ram register or as constant"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 128)), fixItArray21  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 128)) ;
      outArgument_outResult.drop () ; // Release error dropped variable
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatAdd eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatAdd::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                    const GGS_constantMap constinArgument_inConstantMap,
                                    GGS_sint_36__34_ & outArgument_outResult,
                                    GGS_stringset & ioArgument_ioUsedRegisters,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_leftResult_5584 ;
  const GGS_immediatAdd temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_5584, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 139)) ;
  GGS_sint_36__34_ var_rightResult_5689 ;
  const GGS_immediatAdd temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_5689, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 140)) ;
  outArgument_outResult = var_leftResult_5584.add_operation (var_rightResult_5689, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 141)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatSub eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatSub::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                    const GGS_constantMap constinArgument_inConstantMap,
                                    GGS_sint_36__34_ & outArgument_outResult,
                                    GGS_stringset & ioArgument_ioUsedRegisters,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_leftResult_6077 ;
  const GGS_immediatSub temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_6077, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 151)) ;
  GGS_sint_36__34_ var_rightResult_6182 ;
  const GGS_immediatSub temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_6182, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 152)) ;
  outArgument_outResult = var_leftResult_6077.substract_operation (var_rightResult_6182, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 153)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatMul eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatMul::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                    const GGS_constantMap constinArgument_inConstantMap,
                                    GGS_sint_36__34_ & outArgument_outResult,
                                    GGS_stringset & ioArgument_ioUsedRegisters,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_leftResult_6570 ;
  const GGS_immediatMul temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_6570, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 163)) ;
  GGS_sint_36__34_ var_rightResult_6675 ;
  const GGS_immediatMul temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_6675, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 164)) ;
  outArgument_outResult = var_leftResult_6570.multiply_operation (var_rightResult_6675, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 165)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatDiv eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatDiv::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                    const GGS_constantMap constinArgument_inConstantMap,
                                    GGS_sint_36__34_ & outArgument_outResult,
                                    GGS_stringset & ioArgument_ioUsedRegisters,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_leftResult_7063 ;
  const GGS_immediatDiv temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_7063, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 175)) ;
  GGS_sint_36__34_ var_rightResult_7168 ;
  const GGS_immediatDiv temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_7168, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 176)) ;
  outArgument_outResult = var_leftResult_7063.divide_operation (var_rightResult_7168, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 177)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatMod eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatMod::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                    const GGS_constantMap constinArgument_inConstantMap,
                                    GGS_sint_36__34_ & outArgument_outResult,
                                    GGS_stringset & ioArgument_ioUsedRegisters,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_leftResult_7556 ;
  const GGS_immediatMod temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_7556, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 187)) ;
  GGS_sint_36__34_ var_rightResult_7661 ;
  const GGS_immediatMod temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_7661, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 188)) ;
  outArgument_outResult = var_leftResult_7556.modulo_operation (var_rightResult_7661, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 189)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatAnd eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatAnd::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                    const GGS_constantMap constinArgument_inConstantMap,
                                    GGS_sint_36__34_ & outArgument_outResult,
                                    GGS_stringset & ioArgument_ioUsedRegisters,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_leftResult_8051 ;
  const GGS_immediatAnd temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_8051, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 199)) ;
  GGS_sint_36__34_ var_rightResult_8156 ;
  const GGS_immediatAnd temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_8156, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 200)) ;
  outArgument_outResult = var_leftResult_8051.operator_and (var_rightResult_8156 COMMA_SOURCE_FILE ("intermediate_generic.galgas", 201)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatOr eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatOr::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                   const GGS_constantMap constinArgument_inConstantMap,
                                   GGS_sint_36__34_ & outArgument_outResult,
                                   GGS_stringset & ioArgument_ioUsedRegisters,
                                   Compiler * inCompiler
                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_leftResult_8543 ;
  const GGS_immediatOr temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_8543, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 211)) ;
  GGS_sint_36__34_ var_rightResult_8648 ;
  const GGS_immediatOr temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_8648, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 212)) ;
  outArgument_outResult = var_leftResult_8543.operator_or (var_rightResult_8648 COMMA_SOURCE_FILE ("intermediate_generic.galgas", 213)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatXor eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatXor::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                    const GGS_constantMap constinArgument_inConstantMap,
                                    GGS_sint_36__34_ & outArgument_outResult,
                                    GGS_stringset & ioArgument_ioUsedRegisters,
                                    Compiler * inCompiler
                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_leftResult_9036 ;
  const GGS_immediatXor temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_9036, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 223)) ;
  GGS_sint_36__34_ var_rightResult_9141 ;
  const GGS_immediatXor temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_9141, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 224)) ;
  outArgument_outResult = var_leftResult_9036.operator_xor (var_rightResult_9141 COMMA_SOURCE_FILE ("intermediate_generic.galgas", 225)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatLeftShift eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatLeftShift::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                          const GGS_constantMap constinArgument_inConstantMap,
                                          GGS_sint_36__34_ & outArgument_outResult,
                                          GGS_stringset & ioArgument_ioUsedRegisters,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_leftResult_9535 ;
  const GGS_immediatLeftShift temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_9535, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 235)) ;
  GGS_sint_36__34_ var_rightResult_9640 ;
  const GGS_immediatLeftShift temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_9640, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 236)) ;
  outArgument_outResult = var_leftResult_9535.left_shift_operation (var_rightResult_9640.getter_uint (inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 237)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 237)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatRightShift eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatRightShift::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                           const GGS_constantMap constinArgument_inConstantMap,
                                           GGS_sint_36__34_ & outArgument_outResult,
                                           GGS_stringset & ioArgument_ioUsedRegisters,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_leftResult_10043 ;
  const GGS_immediatRightShift temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_10043, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 247)) ;
  GGS_sint_36__34_ var_rightResult_10148 ;
  const GGS_immediatRightShift temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_10148, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 248)) ;
  outArgument_outResult = var_leftResult_10043.right_shift_operation (var_rightResult_10148.getter_uint (inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 249)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatEqualTest eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatEqualTest::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                          const GGS_constantMap constinArgument_inConstantMap,
                                          GGS_sint_36__34_ & outArgument_outResult,
                                          GGS_stringset & ioArgument_ioUsedRegisters,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_leftResult_10550 ;
  const GGS_immediatEqualTest temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_10550, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 259)) ;
  GGS_sint_36__34_ var_rightResult_10655 ;
  const GGS_immediatEqualTest temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_10655, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 260)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, var_leftResult_10550.objectCompare (var_rightResult_10655)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      outArgument_outResult = GGS_sint_36__34_ (int64_t (1LL)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    outArgument_outResult = GGS_sint_36__34_ (int64_t (0LL)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatNotEqualTest eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatNotEqualTest::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                             const GGS_constantMap constinArgument_inConstantMap,
                                             GGS_sint_36__34_ & outArgument_outResult,
                                             GGS_stringset & ioArgument_ioUsedRegisters,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_leftResult_11098 ;
  const GGS_immediatNotEqualTest temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_11098, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 275)) ;
  GGS_sint_36__34_ var_rightResult_11203 ;
  const GGS_immediatNotEqualTest temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_11203, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 276)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::notEqual, var_leftResult_11098.objectCompare (var_rightResult_11203)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      outArgument_outResult = GGS_sint_36__34_ (int64_t (1LL)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    outArgument_outResult = GGS_sint_36__34_ (int64_t (0LL)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatGreaterOrEqualTest eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatGreaterOrEqualTest::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                                   const GGS_constantMap constinArgument_inConstantMap,
                                                   GGS_sint_36__34_ & outArgument_outResult,
                                                   GGS_stringset & ioArgument_ioUsedRegisters,
                                                   Compiler * inCompiler
                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_leftResult_11652 ;
  const GGS_immediatGreaterOrEqualTest temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_11652, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 291)) ;
  GGS_sint_36__34_ var_rightResult_11757 ;
  const GGS_immediatGreaterOrEqualTest temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_11757, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 292)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::greaterOrEqual, var_leftResult_11652.objectCompare (var_rightResult_11757)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      outArgument_outResult = GGS_sint_36__34_ (int64_t (1LL)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    outArgument_outResult = GGS_sint_36__34_ (int64_t (0LL)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatLowerOrEqualTest eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatLowerOrEqualTest::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                                 const GGS_constantMap constinArgument_inConstantMap,
                                                 GGS_sint_36__34_ & outArgument_outResult,
                                                 GGS_stringset & ioArgument_ioUsedRegisters,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_leftResult_12204 ;
  const GGS_immediatLowerOrEqualTest temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_12204, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 307)) ;
  GGS_sint_36__34_ var_rightResult_12309 ;
  const GGS_immediatLowerOrEqualTest temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_12309, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 308)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::lowerOrEqual, var_leftResult_12204.objectCompare (var_rightResult_12309)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      outArgument_outResult = GGS_sint_36__34_ (int64_t (1LL)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    outArgument_outResult = GGS_sint_36__34_ (int64_t (0LL)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatGreaterTest eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatGreaterTest::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                            const GGS_constantMap constinArgument_inConstantMap,
                                            GGS_sint_36__34_ & outArgument_outResult,
                                            GGS_stringset & ioArgument_ioUsedRegisters,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_leftResult_12751 ;
  const GGS_immediatGreaterTest temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_12751, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 323)) ;
  GGS_sint_36__34_ var_rightResult_12856 ;
  const GGS_immediatGreaterTest temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_12856, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 324)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::greaterThan, var_leftResult_12751.objectCompare (var_rightResult_12856)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      outArgument_outResult = GGS_sint_36__34_ (int64_t (1LL)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    outArgument_outResult = GGS_sint_36__34_ (int64_t (0LL)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatLowerTest eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatLowerTest::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                          const GGS_constantMap constinArgument_inConstantMap,
                                          GGS_sint_36__34_ & outArgument_outResult,
                                          GGS_stringset & ioArgument_ioUsedRegisters,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_leftResult_13295 ;
  const GGS_immediatLowerTest temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_leftResult_13295, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 339)) ;
  GGS_sint_36__34_ var_rightResult_13400 ;
  const GGS_immediatLowerTest temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_rightResult_13400, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 340)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::lowerThan, var_leftResult_13295.objectCompare (var_rightResult_13400)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      outArgument_outResult = GGS_sint_36__34_ (int64_t (1LL)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    outArgument_outResult = GGS_sint_36__34_ (int64_t (0LL)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatNegate eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatNegate::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                       const GGS_constantMap constinArgument_inConstantMap,
                                       GGS_sint_36__34_ & outArgument_outResult,
                                       GGS_stringset & ioArgument_ioUsedRegisters,
                                       Compiler * inCompiler
                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_result_13832 ;
  const GGS_immediatNegate temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_13832, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 355)) ;
  outArgument_outResult = var_result_13832.operator_unary_minus (inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 356)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatComplement eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatComplement::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                           const GGS_constantMap constinArgument_inConstantMap,
                                           GGS_sint_36__34_ & outArgument_outResult,
                                           GGS_stringset & ioArgument_ioUsedRegisters,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_result_14202 ;
  const GGS_immediatComplement temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_14202, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 366)) ;
  outArgument_outResult = var_result_14202.operator_tilde (SOURCE_FILE ("intermediate_generic.galgas", 367)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@immediatSlice eval'
//--------------------------------------------------------------------------------------------------

void cPtr_immediatSlice::method_eval (const GGS_registerTable constinArgument_inRegisterTable,
                                      const GGS_constantMap constinArgument_inConstantMap,
                                      GGS_sint_36__34_ & outArgument_outResult,
                                      GGS_stringset & ioArgument_ioUsedRegisters,
                                      Compiler * inCompiler
                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bitSliceTable var_bitSliceTable_14518 ;
  outArgument_outResult = GGS_sint_36__34_ (int64_t (0LL)) ;
  const GGS_immediatSlice temp_0 = this ;
  ioArgument_ioUsedRegisters.plusPlusAssignOperation (temp_0.readProperty_mRegisterName ().readProperty_string ()  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 380)) ;
  GGS_registerProtection var_protection_14675 ;
  const GGS_immediatSlice temp_1 = this ;
  GGS_uintlist joker_14645 ; // Joker input parameter
  GGS_uint joker_14648 ; // Joker input parameter
  GGS_string joker_14667 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (temp_1.readProperty_mRegisterName (), joker_14645, joker_14648, var_bitSliceTable_14518, joker_14667, var_protection_14675, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 381)) ;
  const GGS_immediatSlice temp_2 = this ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_2.readProperty_mRegisterName (), GGS_bool (false), var_protection_14675, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 382)) ;
  GGS_stringset var_sliceNameSet_14777 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  const GGS_immediatSlice temp_3 = this ;
  UpEnumerator_immediatSliceExpressionList enumerator_14824 (temp_3.readProperty_mSliceExpressionList ()) ;
  while (enumerator_14824.hasCurrentObject ()) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = var_sliceNameSet_14777.getter_hasKey (enumerator_14824.current_mSliceName (HERE).readProperty_string () COMMA_SOURCE_FILE ("intermediate_generic.galgas", 385)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_14824.current_mSliceName (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_14824.current_mSliceName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 386)).add_operation (GGS_string ("' bit field has been already defined"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 386)), fixItArray5  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 386)) ;
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      var_sliceNameSet_14777.plusPlusAssignOperation (enumerator_14824.current_mSliceName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 388)) ;
      GGS_uint var_sliceIndex_15106 ;
      GGS_uint var_sliceSize_15122 ;
      var_bitSliceTable_14518.method_searchKey (enumerator_14824.current_mSliceName (HERE), var_sliceIndex_15106, var_sliceSize_15122, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 389)) ;
      GGS_sint_36__34_ var_result_15202 ;
      callExtensionMethod_eval ((cPtr_immediatExpression *) enumerator_14824.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_15202, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 390)) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = GGS_bool (ComparisonKind::lowerThan, var_result_15202.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))).operator_or (GGS_bool (ComparisonKind::greaterThan, var_result_15202.objectCompare (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 391)).left_shift_operation (var_sliceSize_15122, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 391)).substract_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 391)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 391)).getter_sint_36__34_ (inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 391)))) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 391)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (enumerator_14824.current_mSliceName (HERE).readProperty_location (), GGS_string ("invalid immediat value associated to the '").add_operation (enumerator_14824.current_mSliceName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 392)).add_operation (GGS_string ("' bit field, evaluated as "), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 392)).add_operation (var_result_15202.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 392)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 392)).add_operation (GGS_string (" (should be between 0 and "), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 392)).add_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 393)).left_shift_operation (var_sliceSize_15122, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 393)).substract_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 393)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 393)).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 393)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 393)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 393)), fixItArray7  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 392)) ;
        }
      }
      outArgument_outResult = outArgument_outResult.operator_or (var_result_15202.left_shift_operation (var_sliceIndex_15106, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 395)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 395)) ;
    }
    enumerator_14824.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@bitNumberLiteralValue getBitNumber'
//--------------------------------------------------------------------------------------------------

void cPtr_bitNumberLiteralValue::method_getBitNumber (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                      const GGS_constantMap /* constinArgument_inConstantMap */,
                                                      GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                      const GGS_bitSliceTable /* constinArgument_inBitSliceTable */,
                                                      GGS_uint & outArgument_outBitNumber,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_bitNumberLiteralValue temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mBitNumberLiteralValue ().readProperty_uint ().objectCompare (GGS_uint (uint32_t (7U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_bitNumberLiteralValue temp_2 = this ;
      const GGS_bitNumberLiteralValue temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mBitNumberLiteralValue ().readProperty_location (), GGS_string ("The bit number is ").add_operation (temp_3.readProperty_mBitNumberLiteralValue ().readProperty_uint ().getter_string (SOURCE_FILE ("intermediate_generic.galgas", 423)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 423)).add_operation (GGS_string (" (should be <= 7)"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 423)), fixItArray4  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 423)) ;
    }
  }
  const GGS_bitNumberLiteralValue temp_5 = this ;
  outArgument_outBitNumber = temp_5.readProperty_mBitNumberLiteralValue ().readProperty_uint () ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@bitNumberLabelValue getBitNumber'
//--------------------------------------------------------------------------------------------------

void cPtr_bitNumberLabelValue::method_getBitNumber (const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                    const GGS_constantMap /* constinArgument_inConstantMap */,
                                                    GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                    const GGS_bitSliceTable constinArgument_inBitSliceTable,
                                                    GGS_uint & outArgument_outBitNumber,
                                                    Compiler * inCompiler
                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_sliceIndex_17132 ;
  GGS_uint var_sliceSize_17148 ;
  const GGS_bitNumberLabelValue temp_0 = this ;
  constinArgument_inBitSliceTable.method_searchKey (temp_0.readProperty_mBitNumberLabelValue (), var_sliceIndex_17132, var_sliceSize_17148, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 437)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_bitNumberLabelValue temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::greaterThan, temp_2.readProperty_mBitNumberIndexValue ().readProperty_uint ().objectCompare (var_sliceSize_17148)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_bitNumberLabelValue temp_3 = this ;
      const GGS_bitNumberLabelValue temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mBitNumberIndexValue ().readProperty_location (), GGS_string ("The ").add_operation (temp_4.readProperty_mBitNumberIndexValue ().readProperty_uint ().getter_string (SOURCE_FILE ("intermediate_generic.galgas", 439)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 439)).add_operation (GGS_string (" index is too large (should be < "), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 439)).add_operation (var_sliceSize_17148.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 440)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 440)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 440)), fixItArray5  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 439)) ;
    }
  }
  const GGS_bitNumberLabelValue temp_6 = this ;
  outArgument_outBitNumber = var_sliceIndex_17132.add_operation (temp_6.readProperty_mBitNumberIndexValue ().readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 442)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@bitNumberLiteralExpression getBitNumber'
//--------------------------------------------------------------------------------------------------

void cPtr_bitNumberLiteralExpression::method_getBitNumber (const GGS_registerTable constinArgument_inRegisterTable,
                                                           const GGS_constantMap constinArgument_inConstantMap,
                                                           GGS_stringset & ioArgument_ioUsedRegisters,
                                                           const GGS_bitSliceTable /* constinArgument_inBitSliceTable */,
                                                           GGS_uint & outArgument_outBitNumber,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_result_17833 ;
  const GGS_bitNumberLiteralExpression temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mBitNumberLiteralExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_17833, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 454)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::lowerThan, var_result_17833.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_bitNumberLiteralExpression temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mEndOfExpression (), GGS_string ("bit index is ").add_operation (var_result_17833.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 456)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 456)).add_operation (GGS_string (", but should be >= 0"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 456)), fixItArray3  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 456)) ;
      outArgument_outBitNumber.drop () ; // Release error dropped variable
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, var_result_17833.objectCompare (GGS_sint_36__34_ (int64_t (7LL)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_bitNumberLiteralExpression temp_5 = this ;
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mEndOfExpression (), GGS_string ("bit index is ").add_operation (var_result_17833.getter_string (SOURCE_FILE ("intermediate_generic.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 458)).add_operation (GGS_string (", but should be <= 7"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 458)), fixItArray6  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 458)) ;
        outArgument_outBitNumber.drop () ; // Release error dropped variable
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      outArgument_outBitNumber = var_result_17833.getter_uint (inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 460)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'print_constant_definition?&'
//
//--------------------------------------------------------------------------------------------------

void routine_print_5F_constant_5F_definition_3F__26_ (const GGS_constantMap constinArgument_inConstantMap,
                                                      GGS_string & ioArgument_ioListFileContents,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inConstantMap.getter_count (SOURCE_FILE ("intermediate_generic.galgas", 483)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 484)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 484)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 484)) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("CONSTANTS").getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 485)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 485)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 485)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 485)) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 486)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 486)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 486)) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Constant").getter_stringByLeftPadding (GGS_uint (uint32_t (40U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 487)).add_operation (GGS_string (" Value\n"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 487)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 487)) ;
      UpEnumerator_constantMap enumerator_19425 (constinArgument_inConstantMap) ;
      while (enumerator_19425.hasCurrentObject ()) {
        ioArgument_ioListFileContents.plusAssignOperation(enumerator_19425.current_lkey (HERE).readProperty_string ().getter_stringByLeftPadding (GGS_uint (uint32_t (40U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("intermediate_generic.galgas", 489)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 489)).add_operation (enumerator_19425.current_mValue (HERE).getter_string (SOURCE_FILE ("intermediate_generic.galgas", 489)), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 489)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("intermediate_generic.galgas", 489)), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 489)) ;
        enumerator_19425.gotoNextObject () ;
      }
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("intermediate_generic.galgas", 491)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_pseudo_ORG print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::method_print (GGS_string & ioArgument_ioListFileContents,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_pseudo_5F_ORG temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ORG ").add_operation (temp_0.readProperty_mOrigin ().getter_hexString (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 8)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 8)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 8)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_pseudo_BEGINOFROUTINE print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string (";  BEGIN OF ROUTINE ").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 14)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 14)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_pseudo_ENDOFROUTINE print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE temp_0 = this ;
  const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE temp_1 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string (";  END OF ROUTINE ").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 20)).add_operation (GGS_string (" IN PAGE "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 20)).add_operation (temp_1.readProperty_mPage ().getter_string (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 20)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 20)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 20)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_pseudo_LABEL print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(temp_0.readProperty_mLabel ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 26)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 26)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_instruction_FD print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_FD::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_instruction_5F_FD temp_0 = this ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_FD temp_1 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 32)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 32)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 32)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 32)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 32)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_baseline_5F_assembly_5F_instruction_5F_FD temp_3 = this ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 34)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string (", 1"), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 36)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_instruction_F print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_F::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_instruction_5F_F temp_0 = this ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_F temp_1 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 43)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 43)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 43)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 43)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 43)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_instruction_FB print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_FB::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_instruction_5F_FB temp_0 = this ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_FB temp_1 = this ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_FB temp_2 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 49)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 49)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 49)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 49)).add_operation (temp_2.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 49)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 49)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 49)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_instruction_BitTestSkip print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  BTFSS "), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 56)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  BTFSC "), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 58)) ;
  }
  const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip temp_2 = this ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip temp_3 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString ().add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 60)).add_operation (temp_3.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 60)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 60)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 60)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_GOTO print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_GOTO::method_print (GGS_string & ioArgument_ioListFileContents,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_GOTO temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  GOTO ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 66)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 66)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_SKIP print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_SKIP::method_print (GGS_string & ioArgument_ioListFileContents,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  GOTO * + 2"), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 72)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_CALL print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_CALL::method_print (GGS_string & ioArgument_ioListFileContents,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_CALL temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  CALL ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 79)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 79)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_instruction_literalOperation print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation temp_0 = this ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation temp_1 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 85)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 85)).add_operation (temp_1.readProperty_mLiteralValue ().getter_hexString (SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 85)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 85)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 85)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_incDecRegisterInCondition print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition temp_1 = this ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  INCFSZ "), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 92)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  DECFSZ "), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 94)) ;
  }
  const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition temp_2 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 96)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition temp_4 = this ;
    test_3 = temp_4.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 98)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string (", 1"), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 100)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_WO_OPERAND print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND::method_print (GGS_string & ioArgument_ioListFileContents,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_WO_5F_OPERAND temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 107)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 107)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_TRIS print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_TRIS::method_print (GGS_string & ioArgument_ioListFileContents,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_TRIS temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  TRIS ").add_operation (temp_0.readProperty_mOperand ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 113)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas", 113)) ;
}

#include "project_header.h"
#include "F_mainForLIBPM.h"
#include "analyzeCommandLineOptions.h"
#include "builtin-command-line-options.h"
#include "C_galgas_CLI_Options.h"
#include "F_verbose_output.h"
#include "LexiqueIntrospection.h"
#include "F_DisplayException.h"

//--------------------------------------------------------------------------------------------------
//                      print_tool_help_message                                                  
//--------------------------------------------------------------------------------------------------

static void print_tool_help_message (void) {
  gCout.appendCString ("Compiled with GALGAS revision NUMERO_REVISION_GALGAS\n") ;
}

//--------------------------------------------------------------------------------------------------

static const char * kSourceFileExtensions [] = {
  "piccolo",
  nullptr
} ;    

//--------------------------------------------------------------------------------------------------

static const char * kSourceFileHelpMessages [] = {
  "a source text file with the .piccolo extension",
  nullptr
} ;    

//--------------------------------------------------------------------------------------------------

const char * projectVersionString (void) {
  return "3.1.10" ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'before'
//
//--------------------------------------------------------------------------------------------------

static void routine_before (Compiler * inCompiler
                            COMMA_UNUSED_LOCATION_ARGS) {
  {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputDeviceList.readProperty_value ()).operator_or (GGS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputPic_31__38_DeviceList.readProperty_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas", 4)).operator_or (GGS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputBaselineDeviceList.readProperty_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas", 5)).operator_or (GGS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputMidrangeDeviceList.readProperty_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas", 6)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_stringlist var_allDevices_447 = GGS_filewrapper (gWrapperDirectory_0_embeddedDevices).getter_allTextFilePaths (SOURCE_FILE ("piccolo_program.galgas", 9)) ;
        GGS_stringlist var_pic_31__38__5F_devices_517 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
        GGS_stringlist var_midrange_5F_devices_555 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
        GGS_stringlist var_baseline_5F_devices_596 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
        UpEnumerator_stringlist enumerator_657 (var_allDevices_447) ;
        while (enumerator_657.hasCurrentObject ()) {
          GGS_string var_name_701 = enumerator_657.current_mValue (HERE).getter_lastPathComponent (SOURCE_FILE ("piccolo_program.galgas", 15)).getter_deletingPathExtension (SOURCE_FILE ("piccolo_program.galgas", 15)) ;
          GGS_piccoloDeviceModel var_piccoloDeviceModel_850 ;
          {
          routine_parseDeviceDefinition_3F__21_ (GGS_lstring::init_21__21_ (var_name_701, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 16)), inCompiler COMMA_HERE), var_piccoloDeviceModel_850, inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 16)) ;
          }
          switch (var_piccoloDeviceModel_850.readProperty_mProcessorType ().enumValue ()) {
          case GGS_processorType::Enumeration::invalid:
            break ;
          case GGS_processorType::Enumeration::enum_pic_31__38__5F__36__30_:
          case GGS_processorType::Enumeration::enum_pic_31__38__5F__38__30_:
            {
              var_pic_31__38__5F_devices_517.addAssignOperation (var_name_701  COMMA_SOURCE_FILE ("piccolo_program.galgas", 19)) ;
            }
            break ;
          case GGS_processorType::Enumeration::enum_midrange:
            {
              var_midrange_5F_devices_555.addAssignOperation (var_name_701  COMMA_SOURCE_FILE ("piccolo_program.galgas", 21)) ;
            }
            break ;
          case GGS_processorType::Enumeration::enum_baseline:
            {
              var_baseline_5F_devices_596.addAssignOperation (var_name_701  COMMA_SOURCE_FILE ("piccolo_program.galgas", 29)) ;
            }
            break ;
          }
          enumerator_657.gotoNextObject () ;
        }
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputDeviceList.readProperty_value ()).operator_or (GGS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputBaselineDeviceList.readProperty_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas", 33)).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            {
            routine_print_3F_ (var_baseline_5F_devices_596.getter_count (SOURCE_FILE ("piccolo_program.galgas", 34)).getter_string (SOURCE_FILE ("piccolo_program.galgas", 34)).add_operation (GGS_string (" baseline devices supported by Piccolo "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 34)).add_operation (GGS_application::class_func_projectVersionString (SOURCE_FILE ("piccolo_program.galgas", 34)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 34)).add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 34)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 34)) ;
            }
            GGS_uint var_idx_1766 = GGS_uint (uint32_t (0U)) ;
            UpEnumerator_stringlist enumerator_1785 (var_baseline_5F_devices_596) ;
            while (enumerator_1785.hasCurrentObject ()) {
              {
              routine_print_3F_ (enumerator_1785.current_mValue (HERE).getter_stringByRightPadding (GGS_uint (uint32_t (15U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("piccolo_program.galgas", 37)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 37)) ;
              }
              var_idx_1766.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 38)) ;
              GalgasBool test_2 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_2) {
                test_2 = GGS_bool (ComparisonKind::equal, var_idx_1766.objectCompare (GGS_uint (uint32_t (5U)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_2) {
                  var_idx_1766 = GGS_uint (uint32_t (0U)) ;
                  {
                  routine_print_3F_ (GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 41)) ;
                  }
                }
              }
              enumerator_1785.gotoNextObject () ;
            }
            GalgasBool test_3 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_3) {
              test_3 = GGS_bool (ComparisonKind::notEqual, var_idx_1766.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_3) {
                {
                routine_print_3F_ (GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 45)) ;
                }
              }
            }
          }
        }
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputDeviceList.readProperty_value ()).operator_or (GGS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputMidrangeDeviceList.readProperty_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas", 49)).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            {
            routine_print_3F_ (var_midrange_5F_devices_555.getter_count (SOURCE_FILE ("piccolo_program.galgas", 50)).getter_string (SOURCE_FILE ("piccolo_program.galgas", 50)).add_operation (GGS_string (" mid-range devices supported by Piccolo "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 50)).add_operation (GGS_application::class_func_projectVersionString (SOURCE_FILE ("piccolo_program.galgas", 50)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 50)).add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 50)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 50)) ;
            }
            GGS_uint var_idx_2376 = GGS_uint (uint32_t (0U)) ;
            UpEnumerator_stringlist enumerator_2395 (var_midrange_5F_devices_555) ;
            while (enumerator_2395.hasCurrentObject ()) {
              {
              routine_print_3F_ (enumerator_2395.current_mValue (HERE).getter_stringByRightPadding (GGS_uint (uint32_t (15U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("piccolo_program.galgas", 53)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 53)) ;
              }
              var_idx_2376.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 54)) ;
              GalgasBool test_5 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_5) {
                test_5 = GGS_bool (ComparisonKind::equal, var_idx_2376.objectCompare (GGS_uint (uint32_t (5U)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_5) {
                  var_idx_2376 = GGS_uint (uint32_t (0U)) ;
                  {
                  routine_print_3F_ (GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 57)) ;
                  }
                }
              }
              enumerator_2395.gotoNextObject () ;
            }
            GalgasBool test_6 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_6) {
              test_6 = GGS_bool (ComparisonKind::notEqual, var_idx_2376.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_6) {
                {
                routine_print_3F_ (GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 61)) ;
                }
              }
            }
          }
        }
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          test_7 = GGS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputDeviceList.readProperty_value ()).operator_or (GGS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputPic_31__38_DeviceList.readProperty_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas", 65)).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            {
            routine_print_3F_ (var_pic_31__38__5F_devices_517.getter_count (SOURCE_FILE ("piccolo_program.galgas", 66)).getter_string (SOURCE_FILE ("piccolo_program.galgas", 66)).add_operation (GGS_string (" pic18 devices supported by Piccolo "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 66)).add_operation (GGS_application::class_func_projectVersionString (SOURCE_FILE ("piccolo_program.galgas", 66)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 66)).add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 66)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 66)) ;
            }
            GGS_uint var_idx_2972 = GGS_uint (uint32_t (0U)) ;
            UpEnumerator_stringlist enumerator_2991 (var_pic_31__38__5F_devices_517) ;
            while (enumerator_2991.hasCurrentObject ()) {
              {
              routine_print_3F_ (enumerator_2991.current_mValue (HERE).getter_stringByRightPadding (GGS_uint (uint32_t (15U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("piccolo_program.galgas", 69)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 69)) ;
              }
              var_idx_2972.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 70)) ;
              GalgasBool test_8 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_8) {
                test_8 = GGS_bool (ComparisonKind::equal, var_idx_2972.objectCompare (GGS_uint (uint32_t (5U)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_8) {
                  var_idx_2972 = GGS_uint (uint32_t (0U)) ;
                  {
                  routine_print_3F_ (GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 73)) ;
                  }
                }
              }
              enumerator_2991.gotoNextObject () ;
            }
            GalgasBool test_9 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_9) {
              test_9 = GGS_bool (ComparisonKind::notEqual, var_idx_2972.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_9) {
                {
                routine_print_3F_ (GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 77)) ;
                }
              }
            }
          }
        }
      }
    }
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      test_10 = GGS_bool (ComparisonKind::greaterThan, GGS_string (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_exportDeviceFiles.readProperty_value ()).getter_count (SOURCE_FILE ("piccolo_program.galgas", 83)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        GGS_string var_dir_3441 = GGS_string (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_exportDeviceFiles.readProperty_value ()) ;
        GalgasBool test_11 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_11) {
          test_11 = var_dir_3441.getter_directoryExists (SOURCE_FILE ("piccolo_program.galgas", 85)).operator_not (SOURCE_FILE ("piccolo_program.galgas", 85)).boolEnum () ;
          if (GalgasBool::boolTrue == test_11) {
            var_dir_3441.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 86)) ;
          }
        }
        GGS_filewrapper var_fw_3602 = GGS_filewrapper (gWrapperDirectory_0_embeddedDevices) ;
        GGS_stringlist var_allDevices_3657 = GGS_filewrapper (gWrapperDirectory_0_embeddedDevices).getter_allTextFilePaths (SOURCE_FILE ("piccolo_program.galgas", 89)) ;
        UpEnumerator_stringlist enumerator_3728 (var_allDevices_3657) ;
        while (enumerator_3728.hasCurrentObject ()) {
          GGS_string var_definitionString_3772 = var_fw_3602.getter_textFileContentsAtPath (enumerator_3728.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 91)) ;
          var_definitionString_3772.method_writeToFile (var_dir_3441.add_operation (enumerator_3728.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 92)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 92)) ;
          enumerator_3728.gotoNextObject () ;
        }
        {
        routine_print_3F_ (var_allDevices_3657.getter_count (SOURCE_FILE ("piccolo_program.galgas", 94)).getter_string (SOURCE_FILE ("piccolo_program.galgas", 94)).add_operation (GGS_string (" devices copied in '"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 94)).add_operation (var_dir_3441, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 94)).add_operation (GGS_string ("' directory\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 94)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 94)) ;
        }
      }
    }
    GGS_string var_deviceForMemoryDescription_4069 = GGS_string (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_memoryDescription.readProperty_value ()) ;
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      test_12 = GGS_bool (ComparisonKind::greaterThan, var_deviceForMemoryDescription_4069.getter_count (SOURCE_FILE ("piccolo_program.galgas", 98)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        GGS_string var_devicePath_4225 = GGS_string ("/").add_operation (var_deviceForMemoryDescription_4069, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 99)).add_operation (GGS_string (".piccoloDevice"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 99)) ;
        GalgasBool test_13 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_13) {
          test_13 = GGS_filewrapper (gWrapperDirectory_0_embeddedDevices).getter_fileExistsAtPath (var_devicePath_4225, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 100)).boolEnum () ;
          if (GalgasBool::boolTrue == test_13) {
            GGS_piccoloDeviceModel var_piccoloDeviceModel_4454 ;
            {
            routine_parseDeviceDefinition_3F__21_ (GGS_lstring::init_21__21_ (var_deviceForMemoryDescription_4069, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 101)), inCompiler COMMA_HERE), var_piccoloDeviceModel_4454, inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 101)) ;
            }
            GGS_uint var_totalRam_4490 = GGS_uint (uint32_t (0U)) ;
            UpEnumerator_ramBankTable enumerator_4556 (var_piccoloDeviceModel_4454.readProperty_mRamBankTable ()) ;
            while (enumerator_4556.hasCurrentObject ()) {
              var_totalRam_4490 = var_totalRam_4490.add_operation (enumerator_4556.current_mLastAddressPlusOne (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 104)).substract_operation (enumerator_4556.current_mFirstFreeAddress (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 104)) ;
              enumerator_4556.gotoNextObject () ;
            }
            {
            routine_print_3F_ (var_deviceForMemoryDescription_4069.add_operation (GGS_string (" device:\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 106)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 106)) ;
            }
            {
            routine_print_3F_ (GGS_string ("  ").add_operation (var_piccoloDeviceModel_4454.readProperty_mRamBankTable ().getter_count (SOURCE_FILE ("piccolo_program.galgas", 107)).getter_string (SOURCE_FILE ("piccolo_program.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 107)).add_operation (GGS_string (" RAM banks (total "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 107)).add_operation (var_totalRam_4490.getter_string (SOURCE_FILE ("piccolo_program.galgas", 107)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 107)).add_operation (GGS_string (" bytes):\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 107)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 107)) ;
            }
            UpEnumerator_ramBankTable enumerator_4924 (var_piccoloDeviceModel_4454.readProperty_mRamBankTable ()) ;
            while (enumerator_4924.hasCurrentObject ()) {
              {
              routine_print_3F_ (GGS_string ("    bank \"").add_operation (enumerator_4924.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 109)).add_operation (GGS_string ("\" from "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 109)).add_operation (enumerator_4924.current_mFirstFreeAddress (HERE).getter_hexString (SOURCE_FILE ("piccolo_program.galgas", 109)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 109)).add_operation (GGS_string (" to "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 109)).add_operation (enumerator_4924.current_mLastAddressPlusOne (HERE).substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 110)).getter_hexString (SOURCE_FILE ("piccolo_program.galgas", 110)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 110)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 110)).add_operation (enumerator_4924.current_mLastAddressPlusOne (HERE).substract_operation (enumerator_4924.current_mFirstFreeAddress (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 111)).getter_string (SOURCE_FILE ("piccolo_program.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 111)).add_operation (GGS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 111)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 109)) ;
              }
              UpEnumerator_uintlist enumerator_5208 (enumerator_4924.current_mMirrorOffsetList (HERE)) ;
              const bool bool_14 = true ;
              if (enumerator_5208.hasCurrentObject () && bool_14) {
                {
                routine_print_3F_ (GGS_string (", mirror at "), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 113)) ;
                }
                while (enumerator_5208.hasCurrentObject () && bool_14) {
                  {
                  routine_print_3F_ (enumerator_4924.current_mFirstFreeAddress (HERE).add_operation (enumerator_5208.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 114)).getter_hexString (SOURCE_FILE ("piccolo_program.galgas", 114)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 114)) ;
                  }
                  enumerator_5208.gotoNextObject () ;
                  if (enumerator_5208.hasCurrentObject () && bool_14) {
                    {
                    routine_print_3F_ (GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 115)) ;
                    }
                  }
                }
              }
              {
              routine_print_3F_ (GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 117)) ;
              }
              enumerator_4924.gotoNextObject () ;
            }
            switch (var_piccoloDeviceModel_4454.readProperty_mProcessorType ().enumValue ()) {
            case GGS_processorType::Enumeration::invalid:
              break ;
            case GGS_processorType::Enumeration::enum_pic_31__38__5F__36__30_:
            case GGS_processorType::Enumeration::enum_pic_31__38__5F__38__30_:
              {
                {
                routine_print_3F_ (GGS_string ("  ROM size: ").add_operation (var_piccoloDeviceModel_4454.readProperty_mRomSize ().readProperty_uint ().getter_string (SOURCE_FILE ("piccolo_program.galgas", 121)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 121)).add_operation (GGS_string (" bytes\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 121)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 121)) ;
                }
              }
              break ;
            case GGS_processorType::Enumeration::enum_midrange:
              {
                GGS_uint var_pageCount_5620 = var_piccoloDeviceModel_4454.readProperty_mRomSize ().readProperty_uint ().add_operation (GGS_uint (uint32_t (2047U)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 123)).divide_operation (GGS_uint (uint32_t (2048U)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 123)) ;
                GGS_string var_s_5701 = GGS_string::makeEmptyString () ;
                GalgasBool test_15 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_15) {
                  test_15 = GGS_bool (ComparisonKind::greaterThan, var_pageCount_5620.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_15) {
                    var_s_5701 = GGS_string ("s") ;
                  }
                }
                {
                routine_print_3F_ (GGS_string ("  ROM size: ").add_operation (var_piccoloDeviceModel_4454.readProperty_mRomSize ().readProperty_uint ().getter_string (SOURCE_FILE ("piccolo_program.galgas", 128)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 128)).add_operation (GGS_string (" instructions ("), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 128)).add_operation (var_pageCount_5620.getter_string (SOURCE_FILE ("piccolo_program.galgas", 129)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 128)).add_operation (GGS_string (" page"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 129)).add_operation (var_s_5701, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 129)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 129)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 128)) ;
                }
              }
              break ;
            case GGS_processorType::Enumeration::enum_baseline:
              {
                {
                routine_print_3F_ (GGS_string ("  ROM size: ").add_operation (var_piccoloDeviceModel_4454.readProperty_mRomSize ().readProperty_uint ().getter_string (SOURCE_FILE ("piccolo_program.galgas", 131)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 131)).add_operation (GGS_string (" instructions\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 131)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 131)) ;
                }
              }
              break ;
            }
            GalgasBool test_16 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_16) {
              test_16 = GGS_bool (ComparisonKind::equal, var_piccoloDeviceModel_4454.readProperty_mEepromSize ().objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_16) {
                {
                routine_print_3F_ (GGS_string ("  No EEPROM\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 134)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_16) {
              {
              routine_print_3F_ (GGS_string ("  EEPROM size: ").add_operation (var_piccoloDeviceModel_4454.readProperty_mEepromSize ().getter_string (SOURCE_FILE ("piccolo_program.galgas", 136)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 136)).add_operation (GGS_string (" bytes (at "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 136)).add_operation (var_piccoloDeviceModel_4454.readProperty_mEepromAddress ().getter_hexString (SOURCE_FILE ("piccolo_program.galgas", 137)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 136)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 137)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 136)) ;
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_13) {
          GenericArray <FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 140)), GGS_string ("The ").add_operation (var_deviceForMemoryDescription_4069, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 140)).add_operation (GGS_string (" device is not supported or does not exist"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 140)), fixItArray17  COMMA_SOURCE_FILE ("piccolo_program.galgas", 140)) ;
        }
      }
    }
    GGS_string var_deviceForRegistersDescription_6523 = GGS_string (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_registerDescription.readProperty_value ()) ;
    GalgasBool test_18 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_18) {
      test_18 = GGS_bool (ComparisonKind::greaterThan, var_deviceForRegistersDescription_6523.getter_count (SOURCE_FILE ("piccolo_program.galgas", 145)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_18) {
        GGS_string var_devicePath_6687 = GGS_string ("/").add_operation (var_deviceForRegistersDescription_6523, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 146)).add_operation (GGS_string (".piccoloDevice"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 146)) ;
        GalgasBool test_19 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_19) {
          test_19 = GGS_filewrapper (gWrapperDirectory_0_embeddedDevices).getter_fileExistsAtPath (var_devicePath_6687, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 147)).boolEnum () ;
          if (GalgasBool::boolTrue == test_19) {
            GGS_piccoloDeviceModel var_piccoloDeviceModel_6923 ;
            {
            routine_parseDeviceDefinition_3F__21_ (GGS_lstring::init_21__21_ (var_deviceForRegistersDescription_6523, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 148)), inCompiler COMMA_HERE), var_piccoloDeviceModel_6923, inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 148)) ;
            }
            {
            routine_print_3F_ (var_deviceForRegistersDescription_6523.add_operation (GGS_string (" has "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 149)).add_operation (var_piccoloDeviceModel_6923.readProperty_mRegisterTable ().getter_count (SOURCE_FILE ("piccolo_program.galgas", 149)).getter_string (SOURCE_FILE ("piccolo_program.galgas", 149)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 149)).add_operation (GGS_string (" special registers:\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 149)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 149)) ;
            }
            UpEnumerator_registerTable enumerator_7119 (var_piccoloDeviceModel_6923.readProperty_mRegisterTable ()) ;
            while (enumerator_7119.hasCurrentObject ()) {
              GGS_string var_s_7157 = GGS_string ("  '").add_operation (enumerator_7119.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 151)).add_operation (GGS_string ("' at "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 151)) ;
              UpEnumerator_uintlist enumerator_7226 (enumerator_7119.current (HERE).readProperty_mRegisterAddressList ()) ;
              while (enumerator_7226.hasCurrentObject ()) {
                var_s_7157.plusAssignOperation(enumerator_7226.current (HERE).readProperty_mValue ().getter_hexString (SOURCE_FILE ("piccolo_program.galgas", 153)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 153)) ;
                enumerator_7226.gotoNextObject () ;
                if (enumerator_7226.hasCurrentObject ()) {
                  var_s_7157.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 154)) ;
                }
              }
              var_s_7157.plusAssignOperation(enumerator_7119.current (HERE).readProperty_mBitDefinitionString ().add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 156)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 156)) ;
              {
              routine_print_3F_ (var_s_7157, inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 157)) ;
              }
              enumerator_7119.gotoNextObject () ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_19) {
          GenericArray <FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 160)), GGS_string ("The ").add_operation (var_deviceForRegistersDescription_6523, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 160)).add_operation (GGS_string (" device is not supported or does not exist"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 160)), fixItArray20  COMMA_SOURCE_FILE ("piccolo_program.galgas", 160)) ;
        }
      }
    }
    GGS_string var_deviceForConfigDescription_7631 = GGS_string (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_configDescription.readProperty_value ()) ;
    GalgasBool test_21 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_21) {
      test_21 = GGS_bool (ComparisonKind::greaterThan, var_deviceForConfigDescription_7631.getter_count (SOURCE_FILE ("piccolo_program.galgas", 165)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_21) {
        GGS_string var_devicePath_7787 = GGS_string ("/").add_operation (var_deviceForConfigDescription_7631, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 166)).add_operation (GGS_string (".piccoloDevice"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 166)) ;
        GalgasBool test_22 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_22) {
          test_22 = GGS_filewrapper (gWrapperDirectory_0_embeddedDevices).getter_fileExistsAtPath (var_devicePath_7787, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 167)).boolEnum () ;
          if (GalgasBool::boolTrue == test_22) {
            GGS_piccoloDeviceModel var_piccoloDeviceModel_8017 ;
            {
            routine_parseDeviceDefinition_3F__21_ (GGS_lstring::init_21__21_ (var_deviceForConfigDescription_7631, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 168)), inCompiler COMMA_HERE), var_piccoloDeviceModel_8017, inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 168)) ;
            }
            {
            routine_print_3F_ (var_deviceForConfigDescription_7631.add_operation (GGS_string (" has "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 169)).add_operation (var_piccoloDeviceModel_8017.readProperty_mConfigRegisterMap ().getter_count (SOURCE_FILE ("piccolo_program.galgas", 169)).getter_string (SOURCE_FILE ("piccolo_program.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 169)).add_operation (GGS_string (" configuration registers:\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 169)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 169)) ;
            }
            UpEnumerator_configRegisterMap enumerator_8249 (var_piccoloDeviceModel_8017.readProperty_mConfigRegisterMap ()) ;
            while (enumerator_8249.hasCurrentObject ()) {
              GGS_string var_s_8332 = GGS_string ("REGISTER '").add_operation (enumerator_8249.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 171)).add_operation (GGS_string ("' at "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 171)).add_operation (enumerator_8249.current_mRegisterAddress (HERE).readProperty_uint ().getter_hexString (SOURCE_FILE ("piccolo_program.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 171)).add_operation (GGS_string (", width "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 171)).add_operation (enumerator_8249.current_mRegisterWidth (HERE).readProperty_uint ().getter_string (SOURCE_FILE ("piccolo_program.galgas", 171)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 171)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 171)) ;
              UpEnumerator_illegalMaskList enumerator_8493 (enumerator_8249.current_mIllegalMaskList (HERE)) ;
              while (enumerator_8493.hasCurrentObject ()) {
                var_s_8332.plusAssignOperation(GGS_string ("  illegal value ").add_operation (enumerator_8493.current_mIllegalValue (HERE).readProperty_uint ().getter_hexString (SOURCE_FILE ("piccolo_program.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 173)).add_operation (GGS_string (" mask "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 173)).add_operation (enumerator_8493.current_mIllegalMask (HERE).readProperty_uint ().getter_hexString (SOURCE_FILE ("piccolo_program.galgas", 173)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 173)).add_operation (GGS_string (" description \""), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 173)).add_operation (enumerator_8493.current_mDescription (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 173)).add_operation (GGS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 173)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 173)) ;
                enumerator_8493.gotoNextObject () ;
              }
              UpEnumerator_configRegisterMaskMap enumerator_8760 (enumerator_8249.current_mConfigRegisterMaskMap (HERE)) ;
              while (enumerator_8760.hasCurrentObject ()) {
                var_s_8332.plusAssignOperation(GGS_string ("  setting '").add_operation (enumerator_8760.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 176)).add_operation (GGS_string ("': mask "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 176)).add_operation (enumerator_8760.current_mMaskValue (HERE).readProperty_uint ().getter_hexString (SOURCE_FILE ("piccolo_program.galgas", 176)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 176)).add_operation (GGS_string (" description \""), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 176)).add_operation (enumerator_8760.current_mDescription (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 176)).add_operation (GGS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 176)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 176)) ;
                UpEnumerator_fieldSettingMap enumerator_9000 (enumerator_8760.current_mFieldSettingMap (HERE)) ;
                while (enumerator_9000.hasCurrentObject ()) {
                  var_s_8332.plusAssignOperation(GGS_string ("    value ").add_operation (enumerator_9000.current_mValue (HERE).getter_hexString (SOURCE_FILE ("piccolo_program.galgas", 178)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 178)).add_operation (GGS_string (" description \""), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 178)).add_operation (enumerator_9000.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 178)).add_operation (GGS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 178)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 178)) ;
                  enumerator_9000.gotoNextObject () ;
                }
                enumerator_8760.gotoNextObject () ;
              }
              {
              routine_print_3F_ (var_s_8332, inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 181)) ;
              }
              enumerator_8249.gotoNextObject () ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_22) {
          GenericArray <FixItDescription> fixItArray23 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas", 184)), GGS_string ("The ").add_operation (var_deviceForConfigDescription_7631, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 184)).add_operation (GGS_string (" device is not supported or does not exist"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas", 184)), fixItArray23  COMMA_SOURCE_FILE ("piccolo_program.galgas", 184)) ;
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'after'
//
//--------------------------------------------------------------------------------------------------

static void routine_after (Compiler * /* inCompiler */
                           COMMA_UNUSED_LOCATION_ARGS) {
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'programRule_0'
//
//--------------------------------------------------------------------------------------------------

static void routine_programRule_5F__30_ (const GGS_lstring constinArgument_inSourceFile,
                                         Compiler * inCompiler
                                         COMMA_UNUSED_LOCATION_ARGS) {
  cGrammar_pic_31__38__5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile  COMMA_SOURCE_FILE ("piccolo_program.galgas", 195)) ;
}


//--------------------------------------------------------------------------------------------------
//
//                      M A I N    F O R    L I B P M                                            
//
//--------------------------------------------------------------------------------------------------

int mainForLIBPM (int inArgc, const char * inArgv []) {
//--- Analyze Command Line Options
  GenericUniqueArray <String> sourceFilesArray ;
  analyzeCommandLineOptions (inArgc, inArgv,
                             sourceFilesArray,
                             kSourceFileExtensions,
                             kSourceFileHelpMessages,
                             print_tool_help_message) ;
//---
  int returnCode = 0 ; // No error
//--- Set Execution mode
  String executionModeOptionErrorMessage ;
  setExecutionMode (executionModeOptionErrorMessage) ;
  if (executionModeOptionErrorMessage.length () > 0) {
    gCout.appendString (executionModeOptionErrorMessage) ;
    returnCode = 1 ;
  }else{
  //--- Common lexique object
    Compiler * commonCompiler = nullptr ;
    macroMyNew (commonCompiler, Compiler (nullptr COMMA_HERE)) ;
    try{
      routine_before (commonCompiler COMMA_HERE) ;
      LexiqueIntrospection::handleGetKeywordListOption (commonCompiler) ;
      const bool verboseOptionOn = verboseOutput () ;
      for (int32_t i=0 ; i<sourceFilesArray.count () ; i++) {
        const String fileExtension = sourceFilesArray (i COMMA_HERE).pathExtension () ;
        const GGS_string sfp = GGS_string (sourceFilesArray (i COMMA_HERE)) ;
        const GGS_location location = commonCompiler->here () ;
        const GGS_lstring sourceFilePath (sfp, location) ;
        int r = 0 ;
        if (fileExtension == "piccolo") {
          switch (executionMode ()) {
          case kExecutionModeNormal :
            routine_programRule_5F__30_ (sourceFilePath, commonCompiler COMMA_HERE) ;
            break ;
          case kExecutionModeLexicalAnalysisOnly :
            cGrammar_pic_31__38__5F_grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeSyntaxAnalysisOnly :
            cGrammar_pic_31__38__5F_grammar::performOnlySyntaxAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeIndexing :
            cGrammar_pic_31__38__5F_grammar::performIndexing (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          case kExecutionModeLatex :
            cGrammar_pic_31__38__5F_grammar::performOnlyLexicalAnalysis (commonCompiler, sourceFilesArray (i COMMA_HERE)) ;
            break ;
          }
        }else{
          printf ("*** Error: unhandled extension for file '%s' ***\n", sourceFilesArray (i COMMA_HERE).cString ()) ;
          r = 1 ;
        }
        if (r != 0) {
          returnCode = r ;
        }
      }
    //--- Error or warnings ?
      if (totalErrorCount () > 0) {
        returnCode = 1 ; // Error code
      }else if (totalWarningCount () > 0) {
        if (gOption_galgas_5F_builtin_5F_options_treat_5F_warnings_5F_as_5F_error.mValue) {
          returnCode = 1 ; // Error code
          if (verboseOptionOn) {
            printf ("** Note: warnings are treated as errors. **\n") ;
          }
        }
      }
    //--- Epilogue
      routine_after (commonCompiler COMMA_HERE) ;
    //--- Emit JSON issue file ?
      if (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue != "") {
        commonCompiler->writeIssueJSONFile (gOption_generic_5F_cli_5F_options_emit_5F_issue_5F_json_5F_file.mValue) ;
      }
    //--- Display error and warnings count
      if (verboseOptionOn || (totalWarningCount () > 0) || (totalErrorCount () > 0)) {
        String message ;
        if (totalWarningCount () == 0) {
          message.appendCString ("No warning") ;
        }else if (totalWarningCount () == 1) {
          message.appendCString ("1 warning") ;
        }else{
          message.appendSigned (totalWarningCount ()) ;
          message.appendCString (" warnings") ;
        }
        message.appendCString (", ") ;
        if (totalErrorCount () == 0) {
          message.appendCString ("no error") ;
        }else if (totalErrorCount () == 1) {
          message.appendCString ("1 error") ;
        }else{
          message.appendSigned (totalErrorCount ()) ;
          message.appendCString (" errors") ;
        }
        message.appendCString (".\n") ;
        ggs_printMessage (message COMMA_HERE) ;
      }
    }catch (const ::std::exception & e) {
      F_default_display_exception (e) ;
      returnCode = 1 ; // Error code
    }catch (...) {
      printf ("**** Unknow exception ****\n") ;
      throw ;
    }
    macroDetachSharedObject (commonCompiler) ;
  }
  return returnCode ;
}

