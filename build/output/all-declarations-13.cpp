#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-13.h"

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_JSR analyzeSimpleInstruction'
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
  GGS_bool var_isNoReturn_14131 ;
  GGS_uint var_requiredBank_14154 ;
  GGS_uint var_returnedBank_14179 ;
  GGS_bool var_preservesBank_14204 ;
  const GGS_pic_31__38_Instruction_5F_JSR temp_0 = this ;
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_14131, var_requiredBank_14154, var_returnedBank_14179, var_preservesBank_14204, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 382)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_14154.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 383)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_requiredBank_14154.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 383)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_pic_31__38_Instruction_5F_JSR temp_2 = this ;
      GGS_string var_errorMessage_14307 = GGS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 384)).add_operation (GGS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 384)).add_operation (var_requiredBank_14154.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 384)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 384)) ;
      var_errorMessage_14307.plusAssignOperation(GGS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 385)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 386)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          var_errorMessage_14307.plusAssignOperation(GGS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 387)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        var_errorMessage_14307.plusAssignOperation(GGS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 389)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 389)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 389)) ;
      }
      const GGS_pic_31__38_Instruction_5F_JSR temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_14307, fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 391)) ;
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = var_isNoReturn_14131.boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_pic_31__38_Instruction_5F_JSR temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("a \"noreturn\" routine should be called with a BRA, GOTO, Bcc or JUMP instruction"), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 394)) ;
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = var_preservesBank_14204.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 396)).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      ioArgument_ioCurrentBank = var_returnedBank_14179 ;
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        test_10 = constinArgument_inShouldPreserveBSR.boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          const GGS_pic_31__38_Instruction_5F_JSR temp_11 = this ;
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("the routine call should preserve bank selection"), fixItArray12  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 399)) ;
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
//Overriding extension proc '@pic18Instruction_checkbank analyze'
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
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("Bank index should be <= 15"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 452)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 453)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_pic_31__38_Instruction_5F_checkbank temp_5 = this ;
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("checkbank fail: there is no selected bank"), fixItArray6  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 454)) ;
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
          inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GGS_string ("checkbank fail: the selected bank is ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 456)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 456)).add_operation (GGS_string (", required bank is "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 456)).add_operation (temp_10.readProperty_mBankIndex ().getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 456)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 456)), fixItArray11  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 456)) ;
        }
      }
    }
  }
  const GGS_pic_31__38_Instruction_5F_checkbank temp_12 = this ;
  ioArgument_ioCurrentBank = temp_12.readProperty_mBankIndex () ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_checknobank analyze'
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
    test_0 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 480)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_pic_31__38_Instruction_5F_checknobank temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("checknobank fail: the ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 481)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 481)).add_operation (GGS_string (" bank is selected"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 481)), fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 481)) ;
      ioArgument_ioCurrentBank = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 482)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18PiccoloSimpleInstruction analyze'
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
  GGS_ipic_31__38_SequentialInstruction var_instruction_19016 ;
  const GGS_pic_31__38_PiccoloSimpleInstruction temp_0 = this ;
  callExtensionMethod_analyzeSimpleInstruction ((cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_0.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_instruction_19016, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 504)) ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (var_instruction_19016, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 515)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 515)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_FOREVER analyze'
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
      inCompiler->emitSemanticError (temp_0.readProperty_mInstructionLocation (), GGS_string ("a regular routine does not accept the \"forever\" instruction"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 538)) ;
    }
    break ;
  case GGS_routineKind::Enumeration::enum_noReturnRoutine:
    break ;
  case GGS_routineKind::Enumeration::enum_interruptRoutine:
    {
      const GGS_pic_31__38_Instruction_5F_FOREVER temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("an interrupt routine does not accept the \"forever\" instruction"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 541)) ;
    }
    break ;
  }
  GGS_uint var_finalBank_20066 = ioArgument_ioCurrentBank ;
  const GGS_pic_31__38_Instruction_5F_FOREVER temp_4 = this ;
  GGS_lstring var_loopLabel_20119 = GGS_lstring::init_21__21_ (GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 545)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 545)), temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 546)) ;
  const GGS_pic_31__38_Instruction_5F_FOREVER temp_5 = this ;
  ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 549)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_5.readProperty_mInstructionLocation (), var_loopLabel_20119, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 552)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 553)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 548)) ;
  ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  ioArgument_ioBlockLabel = var_loopLabel_20119 ;
  {
  const GGS_pic_31__38_Instruction_5F_FOREVER temp_6 = this ;
  routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (temp_6.readProperty_mInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 559)) ;
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::equal, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      const GGS_pic_31__38_Instruction_5F_FOREVER temp_8 = this ;
      GenericArray <FixItDescription> fixItArray9 ;
      inCompiler->emitSemanticError (temp_8.readProperty_mEndOfInstructionList (), GGS_string ("\"forever\" instruction list execution is endless"), fixItArray9  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 579)) ;
    }
  }
  if (GalgasBool::boolFalse == test_7) {
    const GGS_pic_31__38_Instruction_5F_FOREVER temp_10 = this ;
    ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 582)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_10.readProperty_mInstructionLocation (), var_loopLabel_20119, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 585)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 586)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 581)) ;
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank_20066)).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_pic_31__38_Instruction_5F_FOREVER temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mEndOfInstructionList (), GGS_string ("\"forever\" instruction list does not leave bank selection unchanged"), fixItArray13  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 592)) ;
    }
  }
  ioArgument_ioBlockLabel = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 595)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_nobanksel analyze'
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
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("cannot use \"nobank\" here: bank selection should be preserved (use it in a \"banksave\" construct)"), fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 617)) ;
    }
  }
  ioArgument_ioCurrentBank = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 619)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_savebank analyze'
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
  GGS_registerExpression var_BSRregister_23423 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("BSR"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 644)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 645)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 646)), inCompiler COMMA_HERE) ;
  GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_BSR_5F_IPICregisterDescription_23731 ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((cPtr_registerExpression *) var_BSRregister_23423.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_BSR_5F_IPICregisterDescription_23731, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 648)) ;
  GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_save_5F_IPICregisterDescription_24029 ;
  const GGS_pic_31__38_Instruction_5F_savebank temp_0 = this ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((cPtr_registerExpression *) temp_0.readProperty_mRegister ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_save_5F_IPICregisterDescription_24029, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 656)) ;
  const GGS_pic_31__38_Instruction_5F_savebank temp_1 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::init_21__21__21_ (temp_1.readProperty_mInstructionLocation (), var_BSR_5F_IPICregisterDescription_23731, var_save_5F_IPICregisterDescription_24029, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 669)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 664)) ;
  GGS_uint var_finalBank_24377 = ioArgument_ioCurrentBank ;
  {
  const GGS_pic_31__38_Instruction_5F_savebank temp_2 = this ;
  routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (temp_2.readProperty_mInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_finalBank_24377, GGS_bool (false), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 673)) ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::equal, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_pic_31__38_Instruction_5F_savebank temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mEndOfSaveBankInstruction (), GGS_string ("useless saving: execution does not reach the end of \"savebank\" instruction list"), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 692)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_savebank temp_6 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::init_21__21__21_ (temp_6.readProperty_mInstructionLocation (), var_save_5F_IPICregisterDescription_24029, var_BSR_5F_IPICregisterDescription_23731, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 700)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 695)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_repetitionStatique analyze'
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
  GGS_sint_36__34_ var_lowerBound_26013 ;
  const GGS_pic_31__38_Instruction_5F_repetitionStatique temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLowerBoundExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_lowerBound_26013, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 723)) ;
  GGS_sint_36__34_ var_upperBound_26126 ;
  const GGS_pic_31__38_Instruction_5F_repetitionStatique temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mUpperBoundExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_upperBound_26126, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 724)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::greaterThan, var_lowerBound_26013.objectCompare (var_upperBound_26126)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_pic_31__38_Instruction_5F_repetitionStatique temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mInstructionLocation (), GGS_string ("lower bound (").add_operation (var_lowerBound_26013.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 727)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 727)).add_operation (GGS_string (") greater then upper bound ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 727)).add_operation (var_upperBound_26126.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 727)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 727)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 727)), fixItArray4  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 727)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::greaterThan, var_upperBound_26126.substract_operation (var_lowerBound_26013, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 728)).objectCompare (GGS_sint_36__34_ (int64_t (16777215LL)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_pic_31__38_Instruction_5F_repetitionStatique temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mInstructionLocation (), GGS_string ("repeat count (").add_operation (var_upperBound_26126.substract_operation (var_lowerBound_26013, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 729)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 729)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 729)).add_operation (GGS_string (") too large (should be <= 0xFF_FFFF)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 729)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 729)) ;
      }
    }
  }
  GGS_uint var_finalBank_26572 = ioArgument_ioCurrentBank ;
  GGS_constantMap var_tempConstantMap_26604 = constinArgument_inConstantMap ;
  {
  const GGS_pic_31__38_Instruction_5F_repetitionStatique temp_8 = this ;
  var_tempConstantMap_26604.setter_insertKey (temp_8.readProperty_mConstantName (), var_lowerBound_26013, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 734)) ;
  }
  {
  const GGS_pic_31__38_Instruction_5F_repetitionStatique temp_9 = this ;
  routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (temp_9.readProperty_mInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, var_tempConstantMap_26604, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_finalBank_26572, GGS_bool (true), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 735)) ;
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = GGS_bool (ComparisonKind::equal, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_pic_31__38_Instruction_5F_repetitionStatique temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mEndOfInstruction (), GGS_string ("useless do: execution does not reach the end of enclosed instruction list"), fixItArray12  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 754)) ;
    }
  }
  GalgasBool test_13 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_13) {
    test_13 = GGS_bool (ComparisonKind::notEqual, var_finalBank_26572.objectCompare (ioArgument_ioCurrentBank)).boolEnum () ;
    if (GalgasBool::boolTrue == test_13) {
      const GGS_pic_31__38_Instruction_5F_repetitionStatique temp_14 = this ;
      GenericArray <FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_14.readProperty_mEndOfInstruction (), GGS_string ("enclosed instruction list should not modify bank selection"), fixItArray15  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 757)) ;
    }
  }
  GGS_sint_36__34_ var_idx_27455 = var_lowerBound_26013.add_operation (GGS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 760)) ;
  if (var_upperBound_26126.substract_operation (var_lowerBound_26013, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 761)).add_operation (GGS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 761)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 761)).isValid ()) {
    uint32_t variant_27478 = var_upperBound_26126.substract_operation (var_lowerBound_26013, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 761)).add_operation (GGS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 761)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 761)).uintValue () ;
    bool loop_27478 = true ;
    while (loop_27478) {
      GGS_bool test_16 = GGS_bool (ComparisonKind::lowerOrEqual, var_idx_27455.objectCompare (var_upperBound_26126)) ;
      if (GalgasBool::boolTrue == test_16.boolEnum ()) {
        test_16 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 761)).objectCompare (GGS_uint (uint32_t (0U)))) ;
      }
      loop_27478 = test_16.isValid () ;
      if (loop_27478) {
        loop_27478 = test_16.boolValue () ;
      }
      if (loop_27478 && (0 == variant_27478)) {
        loop_27478 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 761)) ;
      }
      if (loop_27478) {
        variant_27478 -= 1 ;
        GGS_constantMap var_constantMap_27584 = constinArgument_inConstantMap ;
        {
        const GGS_pic_31__38_Instruction_5F_repetitionStatique temp_17 = this ;
        var_constantMap_27584.setter_insertKey (temp_17.readProperty_mConstantName (), var_idx_27455, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 763)) ;
        }
        {
        const GGS_pic_31__38_Instruction_5F_repetitionStatique temp_18 = this ;
        routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (temp_18.readProperty_mInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, var_constantMap_27584, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, GGS_bool (true), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 764)) ;
        }
        var_idx_27455.plusAssignOperation(GGS_sint_36__34_ (int64_t (1LL)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 782)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_banksel analyze'
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
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("cannot use \"banksel\" here: bank selection should be preserved (use \"banksave\" instruction)"), fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 805)) ;
    }
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_pic_31__38_Instruction_5F_banksel temp_4 = this ;
    test_3 = GGS_bool (ComparisonKind::greaterThan, temp_4.readProperty_mBankIndex ().readProperty_uint ().objectCompare (GGS_uint (uint32_t (15U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_pic_31__38_Instruction_5F_banksel temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mBankIndex ().readProperty_location (), GGS_string ("selected bank idx should be lower or equal to 15"), fixItArray6  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 808)) ;
      ioArgument_ioCurrentBank = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 809)) ;
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
        ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::init_21__21_ (temp_10.readProperty_mInstructionLocation (), temp_11.readProperty_mBankIndex (), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 812)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 812)) ;
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
          inCompiler->emitSemanticWarning (temp_14.readProperty_mBankIndex ().readProperty_location (), GGS_string ("useless instruction: the bank ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 814)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 814)).add_operation (GGS_string (" is already selected"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 814)), fixItArray15  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 814)) ;
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_banksel_register analyze'
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
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("cannot use \"banksel\" here: bank selection should be preserved (use \"banksave\" instruction)"), fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 838)) ;
    }
  }
  GGS_uint var_registerAddress_30619 ;
  const GGS_pic_31__38_Instruction_5F_banksel_5F_register temp_3 = this ;
  callExtensionMethod_getRegisterAddress ((cPtr_registerExpression *) temp_3.readProperty_mRegisterExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (false), ioArgument_ioUsedRegisters, var_registerAddress_30619, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 840)) ;
  GGS_uint var_newBank_30741 = var_registerAddress_30619.right_shift_operation (GGS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 848)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 848)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (var_newBank_30741)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      ioArgument_ioCurrentBank = var_newBank_30741 ;
      const GGS_pic_31__38_Instruction_5F_banksel_5F_register temp_5 = this ;
      const GGS_pic_31__38_Instruction_5F_banksel_5F_register temp_6 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::init_21__21_ (temp_5.readProperty_mInstructionLocation (), GGS_luint::init_21__21_ (var_newBank_30741, temp_6.readProperty_mRegisterExpression ().readProperty_mRegisterName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 855)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 851)) ;
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
        inCompiler->emitSemanticWarning (temp_9.readProperty_mRegisterExpression ().readProperty_mRegisterName ().readProperty_location (), GGS_string ("useless instruction: the bank ").add_operation (var_newBank_30741.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 858)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 858)).add_operation (GGS_string (" is already selected"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 858)), fixItArray10  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 858)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_TBLRD analyzeSimpleInstruction'
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
//Overriding extension proc '@pic18Instruction_TBLWT analyzeSimpleInstruction'
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
//Overriding extension proc '@pic18Instruction_MNOP analyze'
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
      inCompiler->emitSemanticWarning (temp_2.readProperty_mOccurrenceFactor ().readProperty_location (), GGS_string ("occurrence argument is zero: no generated code"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 918)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_MNOP temp_4 = this ;
  const GGS_pic_31__38_Instruction_5F_MNOP temp_5 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::init_21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mOccurrenceFactor (), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 925)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 921)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_NOPBRA analyze'
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
      inCompiler->emitSemanticWarning (temp_2.readProperty_mOccurrenceFactor ().readProperty_location (), GGS_string ("occurrence argument is zero: no generated code"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 949)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_NOPBRA temp_4 = this ;
  const GGS_pic_31__38_Instruction_5F_NOPBRA temp_5 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::init_21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mOccurrenceFactor (), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 956)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 952)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_LTBLPTR analyze'
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
  GGS_sint_36__34_ var_result_35308 ;
  const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mImmediatExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_35308, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 978)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::greaterThan, var_result_35308.objectCompare (GGS_sint_36__34_ (int64_t (16777215LL)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_result_35308.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 980)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("immediate value is evaluated as ").add_operation (var_result_35308.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 981)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 981)).add_operation (GGS_string (" (should be between 0 and 0xFF_FFFF)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 981)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 981)) ;
    }
  }
  GGS_uint var_address_35535 = var_result_35308.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 983)) ;
  const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_4 = this ;
  GGS_registerExpression var_TBLPTRU_35580 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("TBLPTRU"), temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 987)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 988)), inCompiler COMMA_HERE) ;
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_outIPICregisterDescription_35922 ;
  GGS_bitSliceTable joker_35954 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRU_35580.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_outIPICregisterDescription_35922, joker_35954, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 990)) ;
  GGS_uint var_upper_35996 = var_address_35535.right_shift_operation (GGS_bigint ("16", inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1000)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1000)) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::equal, var_upper_35996.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_6 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_6.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1004)), var_outIPICregisterDescription_35922, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1007)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1002)) ;
    }
  }
  if (GalgasBool::boolFalse == test_5) {
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      test_7 = GGS_bool (ComparisonKind::equal, var_upper_35996.objectCompare (GGS_uint (uint32_t (255U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_8 = this ;
        ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_8.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1012)), var_outIPICregisterDescription_35922, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1015)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1010)) ;
      }
    }
    if (GalgasBool::boolFalse == test_7) {
      const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_9 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_9.readProperty_mInstructionLocation (), GGS_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1020)), var_upper_35996, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1023)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1018)) ;
      const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_10 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_10.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1027)), var_outIPICregisterDescription_35922, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1030)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1025)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_11 = this ;
  GGS_registerExpression var_TBLPTRH_36959 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("TBLPTRH"), temp_11.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1036)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1037)), inCompiler COMMA_HERE) ;
  GGS_bitSliceTable joker_37289 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRH_36959.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_outIPICregisterDescription_35922, joker_37289, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1039)) ;
  GGS_uint var_high_37331 = var_address_35535.right_shift_operation (GGS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1049)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1049)).operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1049)) ;
  GalgasBool test_12 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_12) {
    test_12 = GGS_bool (ComparisonKind::equal, var_high_37331.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_12) {
      const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_13 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_13.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1053)), var_outIPICregisterDescription_35922, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1056)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1051)) ;
    }
  }
  if (GalgasBool::boolFalse == test_12) {
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      test_14 = GGS_bool (ComparisonKind::equal, var_high_37331.objectCompare (GGS_uint (uint32_t (255U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_15 = this ;
        ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_15.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1061)), var_outIPICregisterDescription_35922, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1064)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1059)) ;
      }
    }
    if (GalgasBool::boolFalse == test_14) {
      const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_16 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_16.readProperty_mInstructionLocation (), GGS_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1069)), var_high_37331, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1072)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1067)) ;
      const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_17 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_17.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1076)), var_outIPICregisterDescription_35922, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1079)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1074)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_18 = this ;
  GGS_registerExpression var_TBLPTRL_38297 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("TBLPTRL"), temp_18.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1085)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1086)), inCompiler COMMA_HERE) ;
  GGS_bitSliceTable joker_38626 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRL_38297.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_outIPICregisterDescription_35922, joker_38626, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1088)) ;
  GGS_uint var_low_38668 = var_address_35535.operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1098)) ;
  GalgasBool test_19 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_19) {
    test_19 = GGS_bool (ComparisonKind::equal, var_low_38668.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_19) {
      const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_20 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_20.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1102)), var_outIPICregisterDescription_35922, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1105)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1100)) ;
    }
  }
  if (GalgasBool::boolFalse == test_19) {
    GalgasBool test_21 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_21) {
      test_21 = GGS_bool (ComparisonKind::equal, var_low_38668.objectCompare (GGS_uint (uint32_t (255U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_21) {
        const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_22 = this ;
        ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_22.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1110)), var_outIPICregisterDescription_35922, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1113)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1108)) ;
      }
    }
    if (GalgasBool::boolFalse == test_21) {
      const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_23 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_23.readProperty_mInstructionLocation (), GGS_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1118)), var_low_38668, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1121)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1116)) ;
      const GGS_pic_31__38_Instruction_5F_LTBLPTR temp_24 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_24.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1125)), var_outIPICregisterDescription_35922, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1128)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1123)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_LDATA16PTR analyze'
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
  GGS_uintlist var_data_40362 ;
  GGS_bool var_isData_38__40373 ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_0 = this ;
  constinArgument_inDataMap.method_searchKey (temp_0.readProperty_mDataName (), var_data_40362, var_isData_38__40373, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1152)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_isData_38__40373.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mDataName ().readProperty_location (), GGS_string ("this data is a byte array; use ldata8ptr"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1154)) ;
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_5 = this ;
    test_4 = GGS_bool (ComparisonKind::greaterOrEqual, temp_5.readProperty_mDataIndex ().readProperty_uint ().objectCompare (var_data_40362.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1157)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mDataIndex ().readProperty_location (), GGS_string ("index should be < ").add_operation (var_data_40362.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1158)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1158)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1158)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1158)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_8 = this ;
  GGS_registerExpression var_TBLPTRU_40633 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("TBLPTRU"), temp_8.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1163)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1164)), inCompiler COMMA_HERE) ;
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_outIPICregisterDescription_40975 ;
  GGS_bitSliceTable joker_41007 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRU_40633.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_outIPICregisterDescription_40975, joker_41007, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1166)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_9 = this ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_10 = this ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_11 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::init_21__21__21__21_ (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mDataName (), temp_11.readProperty_mDataIndex ().readProperty_uint ().multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1179)), GGS_uint (uint32_t (16U)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1182)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1176)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_12 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_12.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1186)), var_outIPICregisterDescription_40975, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1189)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1184)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_13 = this ;
  GGS_registerExpression var_TBLPTRH_41443 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("TBLPTRH"), temp_13.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1194)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1195)), inCompiler COMMA_HERE) ;
  GGS_bitSliceTable joker_41772 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRH_41443.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_outIPICregisterDescription_40975, joker_41772, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1197)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_14 = this ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_15 = this ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_16 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::init_21__21__21__21_ (temp_14.readProperty_mInstructionLocation (), temp_15.readProperty_mDataName (), temp_16.readProperty_mDataIndex ().readProperty_uint ().multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1210)), GGS_uint (uint32_t (8U)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1213)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1207)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_17 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_17.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1217)), var_outIPICregisterDescription_40975, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1220)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1215)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_18 = this ;
  GGS_registerExpression var_TBLPTRL_42206 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("TBLPTRL"), temp_18.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1225)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1226)), inCompiler COMMA_HERE) ;
  GGS_bitSliceTable joker_42536 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRL_42206.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_outIPICregisterDescription_40975, joker_42536, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1228)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_19 = this ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_20 = this ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_21 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::init_21__21__21__21_ (temp_19.readProperty_mInstructionLocation (), temp_20.readProperty_mDataName (), temp_21.readProperty_mDataIndex ().readProperty_uint ().multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1241)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1244)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1238)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_31__36_PTR temp_22 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_22.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1248)), var_outIPICregisterDescription_40975, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1251)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1246)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_LDATA8PTR analyze'
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
  GGS_uintlist var_data_43708 ;
  GGS_bool var_isData_38__43719 ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_0 = this ;
  constinArgument_inDataMap.method_searchKey (temp_0.readProperty_mDataName (), var_data_43708, var_isData_38__43719, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1274)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_isData_38__43719.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1275)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mDataName ().readProperty_location (), GGS_string ("this data is a 16-bit word array; use ldata16ptr"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1276)) ;
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_5 = this ;
    test_4 = GGS_bool (ComparisonKind::greaterOrEqual, temp_5.readProperty_mDataIndex ().readProperty_uint ().objectCompare (var_data_43708.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1279)).multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1279)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mDataIndex ().readProperty_location (), GGS_string ("index should be < ").add_operation (var_data_43708.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1280)).multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1280)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1280)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1280)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1280)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_8 = this ;
  GGS_registerExpression var_TBLPTRU_44003 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("TBLPTRU"), temp_8.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1285)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1286)), inCompiler COMMA_HERE) ;
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_outIPICregisterDescription_44345 ;
  GGS_bitSliceTable joker_44377 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRU_44003.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_outIPICregisterDescription_44345, joker_44377, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1288)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_9 = this ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_10 = this ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_11 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::init_21__21__21__21_ (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mDataName (), temp_11.readProperty_mDataIndex ().readProperty_uint (), GGS_uint (uint32_t (16U)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1304)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1298)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_12 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_12.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1308)), var_outIPICregisterDescription_44345, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1311)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1306)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_13 = this ;
  GGS_registerExpression var_TBLPTRH_44809 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("TBLPTRH"), temp_13.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1316)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1317)), inCompiler COMMA_HERE) ;
  GGS_bitSliceTable joker_45138 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRH_44809.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_outIPICregisterDescription_44345, joker_45138, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1319)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_14 = this ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_15 = this ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_16 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::init_21__21__21__21_ (temp_14.readProperty_mInstructionLocation (), temp_15.readProperty_mDataName (), temp_16.readProperty_mDataIndex ().readProperty_uint (), GGS_uint (uint32_t (8U)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1335)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1329)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_17 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_17.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1339)), var_outIPICregisterDescription_44345, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1342)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1337)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_18 = this ;
  GGS_registerExpression var_TBLPTRL_45568 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("TBLPTRL"), temp_18.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1347)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1348)), inCompiler COMMA_HERE) ;
  GGS_bitSliceTable joker_45898 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRL_45568.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_outIPICregisterDescription_44345, joker_45898, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1350)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_19 = this ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_20 = this ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_21 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::init_21__21__21__21_ (temp_19.readProperty_mInstructionLocation (), temp_20.readProperty_mDataName (), temp_21.readProperty_mDataIndex ().readProperty_uint (), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1366)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1360)) ;
  const GGS_pic_31__38_Instruction_5F_LDATA_38_PTR temp_22 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_22.readProperty_mInstructionLocation (), GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1370)), var_outIPICregisterDescription_44345, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1373)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1368)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_JUMP analyze'
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
  GGS_bool var_isNoReturn_47101 ;
  GGS_uint var_requiredBank_47124 ;
  const GGS_pic_31__38_Instruction_5F_JUMP temp_0 = this ;
  GGS_uint joker_47138 ; // Joker input parameter
  GGS_bool joker_47142 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_47101, var_requiredBank_47124, joker_47138, joker_47142, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1396)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_47124.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1397)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_requiredBank_47124.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1397)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_pic_31__38_Instruction_5F_JUMP temp_2 = this ;
      GGS_string var_errorMessage_47234 = GGS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1398)).add_operation (GGS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1398)).add_operation (var_requiredBank_47124.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1398)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1398)) ;
      var_errorMessage_47234.plusAssignOperation(GGS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1399)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1400)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          var_errorMessage_47234.plusAssignOperation(GGS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1401)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        var_errorMessage_47234.plusAssignOperation(GGS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1403)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1403)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1403)) ;
      }
      const GGS_pic_31__38_Instruction_5F_JUMP temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_47234, fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1405)) ;
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = var_isNoReturn_47101.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1407)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_pic_31__38_Instruction_5F_JUMP temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("a regular routine should be called with a RCALL, CALL or JSR instruction"), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1408)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_JUMP temp_9 = this ;
  const GGS_pic_31__38_Instruction_5F_JUMP temp_10 = this ;
  ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1412)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mTargetLabel (), GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1415)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1416)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1411)) ;
  ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  ioArgument_ioBlockLabel = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1421)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_computed_rcall analyze'
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
  GGS_bool var_someReturnsBank_48858 = GGS_bool (false) ;
  GGS_uint var_returnedBankSelection_48894 = ioArgument_ioCurrentBank ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_rcall temp_0 = this ;
  UpEnumerator_lstringlist enumerator_48939 (temp_0.readProperty_mTargetLabels ()) ;
  while (enumerator_48939.hasCurrentObject ()) {
    GGS_bool var_isNoReturn_49021 ;
    GGS_uint var_requiredBank_49044 ;
    GGS_uint var_returnedBank_49069 ;
    GGS_bool var_preservesBank_49094 ;
    constinArgument_inRoutineMap.method_searchKey (enumerator_48939.current_mValue (HERE), var_isNoReturn_49021, var_requiredBank_49044, var_returnedBank_49069, var_preservesBank_49094, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1446)) ;
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_49044.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1447)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_requiredBank_49044.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1447)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GGS_string var_errorMessage_49201 = GGS_string ("the routine '").add_operation (enumerator_48939.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1448)).add_operation (GGS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1448)).add_operation (var_requiredBank_49044.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1448)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1448)) ;
        var_errorMessage_49201.plusAssignOperation(GGS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1449)) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1450)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            var_errorMessage_49201.plusAssignOperation(GGS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1451)) ;
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          var_errorMessage_49201.plusAssignOperation(GGS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1453)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1453)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1453)) ;
        }
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_48939.current_mValue (HERE).readProperty_location (), var_errorMessage_49201, fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1455)) ;
      }
    }
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = var_isNoReturn_49021.boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_48939.current_mValue (HERE).readProperty_location (), GGS_string ("for being named in a computed rcall, the '").add_operation (enumerator_48939.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1458)).add_operation (GGS_string ("' routine should be declared without the \"noreturn\" qualifier"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1458)), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1458)) ;
      }
    }
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = constinArgument_inShouldPreserveBSR.operator_and (var_preservesBank_49094.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1460)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1460)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_48939.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_48939.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1461)).add_operation (GGS_string ("' routine should preserved bank selection"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1461)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1461)) ;
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        test_8 = constinArgument_inShouldPreserveBSR.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1462)).operator_and (var_preservesBank_49094.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1462)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1462)).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = var_someReturnsBank_48858.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1463)).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              var_returnedBankSelection_48894 = var_returnedBank_49069 ;
              var_someReturnsBank_48858 = GGS_bool (true) ;
            }
          }
          if (GalgasBool::boolFalse == test_9) {
            GalgasBool test_10 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_10) {
              test_10 = GGS_bool (ComparisonKind::notEqual, var_returnedBankSelection_48894.objectCompare (var_returnedBank_49069)).boolEnum () ;
              if (GalgasBool::boolTrue == test_10) {
                GGS_string var_errorMessage_50115 = GGS_string ("the '").add_operation (enumerator_48939.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1467)).add_operation (GGS_string ("' routine returns "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1467)) ;
                GalgasBool test_11 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_11) {
                  test_11 = GGS_bool (ComparisonKind::equal, var_returnedBank_49069.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1468)))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_11) {
                    var_errorMessage_50115.plusAssignOperation(GGS_string ("no bank selection"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1469)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_11) {
                  var_errorMessage_50115.plusAssignOperation(GGS_string ("bank selection set to  ").add_operation (var_returnedBank_49069.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1471)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1471)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1471)) ;
                }
                var_errorMessage_50115.plusAssignOperation(GGS_string (", but previous routine(s) return(s) "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1473)) ;
                GalgasBool test_12 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_12) {
                  test_12 = GGS_bool (ComparisonKind::equal, var_returnedBankSelection_48894.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1474)))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_12) {
                    var_errorMessage_50115.plusAssignOperation(GGS_string ("no bank selection"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1475)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_12) {
                  var_errorMessage_50115.plusAssignOperation(GGS_string ("bank selection set to  ").add_operation (var_returnedBankSelection_48894.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1477)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1477)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1477)) ;
                }
                GenericArray <FixItDescription> fixItArray13 ;
                inCompiler->emitSemanticError (enumerator_48939.current_mValue (HERE).readProperty_location (), var_errorMessage_50115, fixItArray13  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1479)) ;
              }
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_8) {
        GalgasBool test_14 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_14) {
          test_14 = constinArgument_inShouldPreserveBSR.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1481)).operator_and (var_preservesBank_49094 COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1481)).boolEnum () ;
          if (GalgasBool::boolTrue == test_14) {
          }
        }
      }
    }
    enumerator_48939.gotoNextObject () ;
  }
  ioArgument_ioCurrentBank = var_returnedBankSelection_48894 ;
  GGS_sint_36__34_ var_size_50869 ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_rcall temp_15 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_15.readProperty_mSizeExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size_50869, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1487)) ;
  GalgasBool test_16 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_16) {
    test_16 = GGS_bool (ComparisonKind::lowerThan, var_size_50869.objectCompare (GGS_sint_36__34_ (int64_t (2LL)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_16) {
      const GGS_pic_31__38_Instruction_5F_computed_5F_rcall temp_17 = this ;
      GenericArray <FixItDescription> fixItArray18 ;
      inCompiler->emitSemanticError (temp_17.readProperty_mInstructionLocation (), GGS_string ("the computed range (").add_operation (var_size_50869.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1489)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1489)).add_operation (GGS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1489)), fixItArray18  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1489)) ;
    }
  }
  if (GalgasBool::boolFalse == test_16) {
    GalgasBool test_19 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_19) {
      test_19 = GGS_bool (ComparisonKind::greaterThan, var_size_50869.objectCompare (GGS_sint_36__34_ (int64_t (64LL)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_19) {
        const GGS_pic_31__38_Instruction_5F_computed_5F_rcall temp_20 = this ;
        GenericArray <FixItDescription> fixItArray21 ;
        inCompiler->emitSemanticError (temp_20.readProperty_mInstructionLocation (), GGS_string ("the computed range (").add_operation (var_size_50869.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1491)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1491)).add_operation (GGS_string (") should be lower or equal to 64"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1491)), fixItArray21  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1491)) ;
      }
    }
    if (GalgasBool::boolFalse == test_19) {
      GalgasBool test_22 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_22) {
        const GGS_pic_31__38_Instruction_5F_computed_5F_rcall temp_23 = this ;
        test_22 = GGS_bool (ComparisonKind::notEqual, var_size_50869.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1492)).objectCompare (temp_23.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1492)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_22) {
          const GGS_pic_31__38_Instruction_5F_computed_5F_rcall temp_24 = this ;
          const GGS_pic_31__38_Instruction_5F_computed_5F_rcall temp_25 = this ;
          GenericArray <FixItDescription> fixItArray26 ;
          inCompiler->emitSemanticError (temp_24.readProperty_mInstructionLocation (), GGS_string ("the routine name list length (").add_operation (temp_25.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1493)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1493)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1493)).add_operation (GGS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1493)).add_operation (var_size_50869.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1493)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1493)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1493)), fixItArray26  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1493)) ;
        }
      }
    }
  }
  GGS_ipic_31__38_SequentialInstructionList var_targetInstructionList_51401 = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_rcall temp_27 = this ;
  UpEnumerator_lstringlist enumerator_51467 (temp_27.readProperty_mTargetLabels ()) ;
  while (enumerator_51467.hasCurrentObject ()) {
    var_targetInstructionList_51401.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_JSR::init_21__21__21_ (enumerator_51467.current_mValue (HERE).readProperty_location (), enumerator_51467.current_mValue (HERE), GGS_jumpInstructionKind::class_func_relative (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1498)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1498)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1498)) ;
    enumerator_51467.gotoNextObject () ;
  }
  const GGS_pic_31__38_Instruction_5F_computed_5F_rcall temp_28 = this ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_rcall temp_29 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::init_21__21__21_ (temp_28.readProperty_mInstructionLocation (), var_targetInstructionList_51401, temp_29.readProperty_mUsesRelativeCall (), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1507)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1501)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_computed_goto analyze'
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
  UpEnumerator_lstringlist enumerator_52540 (temp_0.readProperty_mTargetLabels ()) ;
  while (enumerator_52540.hasCurrentObject ()) {
    GGS_bool var_isNoReturn_52622 ;
    GGS_uint var_requiredBank_52645 ;
    GGS_uint joker_52659 ; // Joker input parameter
    GGS_bool joker_52663 ; // Joker input parameter
    constinArgument_inRoutineMap.method_searchKey (enumerator_52540.current_mValue (HERE), var_isNoReturn_52622, var_requiredBank_52645, joker_52659, joker_52663, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1531)) ;
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_52645.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1532)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_requiredBank_52645.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1532)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GGS_string var_errorMessage_52759 = GGS_string ("the routine '").add_operation (enumerator_52540.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1533)).add_operation (GGS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1533)).add_operation (var_requiredBank_52645.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1533)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1533)) ;
        var_errorMessage_52759.plusAssignOperation(GGS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1534)) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1535)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            var_errorMessage_52759.plusAssignOperation(GGS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1536)) ;
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          var_errorMessage_52759.plusAssignOperation(GGS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1538)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1538)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1538)) ;
        }
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_52540.current_mValue (HERE).readProperty_location (), var_errorMessage_52759, fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1540)) ;
      }
    }
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::notEqual, GGS_routineKind::class_func_regularRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1542)).objectCompare (constinArgument_inRoutineKind)).operator_and (var_isNoReturn_52622.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1542)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1542)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_52540.current_mValue (HERE).readProperty_location (), GGS_string ("for being named in a computed goto, the '").add_operation (enumerator_52540.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1543)).add_operation (GGS_string ("' routine should be declared with the \"noreturn\" qualifier"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1543)), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1543)) ;
      }
    }
    enumerator_52540.gotoNextObject () ;
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
      inCompiler->emitSemanticError (temp_6.readProperty_mInstructionLocation (), GGS_string ("an interrupt routine does not accept computed goto instruction"), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1550)) ;
    }
    break ;
  }
  GGS_sint_36__34_ var_size_53645 ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_goto temp_8 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_8.readProperty_mSizeExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size_53645, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1553)) ;
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = GGS_bool (ComparisonKind::lowerThan, var_size_53645.objectCompare (GGS_sint_36__34_ (int64_t (2LL)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_pic_31__38_Instruction_5F_computed_5F_goto temp_10 = this ;
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GGS_string ("the computed range (").add_operation (var_size_53645.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1555)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1555)).add_operation (GGS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1555)), fixItArray11  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1555)) ;
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      test_12 = GGS_bool (ComparisonKind::greaterThan, var_size_53645.objectCompare (GGS_sint_36__34_ (int64_t (64LL)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        const GGS_pic_31__38_Instruction_5F_computed_5F_goto temp_13 = this ;
        GenericArray <FixItDescription> fixItArray14 ;
        inCompiler->emitSemanticError (temp_13.readProperty_mInstructionLocation (), GGS_string ("the computed range (").add_operation (var_size_53645.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1557)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1557)).add_operation (GGS_string (") should be lower or equal to 64"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1557)), fixItArray14  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1557)) ;
      }
    }
    if (GalgasBool::boolFalse == test_12) {
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        const GGS_pic_31__38_Instruction_5F_computed_5F_goto temp_16 = this ;
        test_15 = GGS_bool (ComparisonKind::notEqual, var_size_53645.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1558)).objectCompare (temp_16.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1558)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          const GGS_pic_31__38_Instruction_5F_computed_5F_goto temp_17 = this ;
          const GGS_pic_31__38_Instruction_5F_computed_5F_goto temp_18 = this ;
          GenericArray <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticError (temp_17.readProperty_mInstructionLocation (), GGS_string ("the routine name list length (").add_operation (temp_18.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1559)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1559)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1559)).add_operation (GGS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1559)).add_operation (var_size_53645.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1559)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1559)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1559)), fixItArray19  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1559)) ;
        }
      }
    }
  }
  const GGS_pic_31__38_Instruction_5F_computed_5F_goto temp_20 = this ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_goto temp_21 = this ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_goto temp_22 = this ;
  ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1563)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_ComputedGotoTerminator::init_21__21__21_ (temp_20.readProperty_mInstructionLocation (), temp_21.readProperty_mTargetLabels (), temp_22.readProperty_mUsesRelativeCall (), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1570)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1562)) ;
  ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  ioArgument_ioBlockLabel = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1575)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_computed_bra analyze'
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
  GGS_bool var_allPreserveBankSetting_55284 = GGS_bool (true) ;
  GGS_bool var_allReturnBank_55326 = GGS_bool (true) ;
  GGS_uint var_returnedBankValue_55353 = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1599)) ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_0 = this ;
  UpEnumerator_lstringlist enumerator_55389 (temp_0.readProperty_mTargetLabels ()) ;
  while (enumerator_55389.hasCurrentObject ()) {
    GGS_bool var_isNoReturn_55471 ;
    GGS_uint var_requiredBank_55494 ;
    GGS_uint var_returnedBank_55519 ;
    GGS_bool var_preservesBank_55544 ;
    constinArgument_inRoutineMap.method_searchKey (enumerator_55389.current_mValue (HERE), var_isNoReturn_55471, var_requiredBank_55494, var_returnedBank_55519, var_preservesBank_55544, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1601)) ;
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_55494.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1603)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_requiredBank_55494.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1603)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GGS_string var_errorMessage_55681 = GGS_string ("the routine '").add_operation (enumerator_55389.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1604)).add_operation (GGS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1604)).add_operation (var_requiredBank_55494.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1604)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1604)) ;
        var_errorMessage_55681.plusAssignOperation(GGS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1605)) ;
        GalgasBool test_2 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_2) {
          test_2 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1606)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_2) {
            var_errorMessage_55681.plusAssignOperation(GGS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1607)) ;
          }
        }
        if (GalgasBool::boolFalse == test_2) {
          var_errorMessage_55681.plusAssignOperation(GGS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1609)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1609)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1609)) ;
        }
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_55389.current_mValue (HERE).readProperty_location (), var_errorMessage_55681, fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1611)) ;
      }
    }
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = var_preservesBank_55544.boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        var_allReturnBank_55326 = GGS_bool (false) ;
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = GGS_bool (ComparisonKind::notEqual, var_returnedBankValue_55353.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1616)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_returnedBankValue_55353.objectCompare (var_returnedBank_55519)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1616)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          GenericArray <FixItDescription> fixItArray6 ;
          inCompiler->emitSemanticError (enumerator_55389.current_mValue (HERE).readProperty_location (), GGS_string ("this routine ensures setting of bank '").add_operation (var_returnedBank_55519.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1617)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1617)).add_operation (GGS_string ("', but "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1617)).add_operation (GGS_string ("previous routine(s) ensure setting of bank '"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1617)).add_operation (var_returnedBankValue_55353.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1618)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1618)).add_operation (GGS_string ("'."), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1618)), fixItArray6  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1617)) ;
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        var_allPreserveBankSetting_55284 = GGS_bool (false) ;
        var_returnedBankValue_55353 = var_returnedBank_55519 ;
      }
    }
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      test_7 = GGS_bool (ComparisonKind::notEqual, GGS_routineKind::class_func_regularRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1623)).objectCompare (constinArgument_inRoutineKind)).operator_and (var_isNoReturn_55471.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1623)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1623)).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        GenericArray <FixItDescription> fixItArray8 ;
        inCompiler->emitSemanticError (enumerator_55389.current_mValue (HERE).readProperty_location (), GGS_string ("for being named in a computed bra from a regular routine, the '").add_operation (enumerator_55389.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1624)).add_operation (GGS_string ("' routine should be declared without any \"noreturn\" qualifier"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1624)), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1624)) ;
      }
    }
    enumerator_55389.gotoNextObject () ;
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = var_allReturnBank_55326.operator_and (var_allPreserveBankSetting_55284.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1628)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1628)).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      ioArgument_ioCurrentBank = var_returnedBankValue_55353 ;
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      test_10 = var_allReturnBank_55326.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1630)).operator_and (var_allPreserveBankSetting_55284.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1630)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1630)).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_11 = this ;
        GenericArray <FixItDescription> fixItArray12 ;
        inCompiler->emitSemanticError (temp_11.readProperty_mInstructionLocation (), GGS_string ("invoked routine should either all preserve bank, eihter return the same selected bank"), fixItArray12  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1631)) ;
      }
    }
  }
  GalgasBool test_13 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_13) {
    test_13 = constinArgument_inShouldPreserveBSR.operator_and (var_allPreserveBankSetting_55284.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1633)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1633)).boolEnum () ;
    if (GalgasBool::boolTrue == test_13) {
      const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_14 = this ;
      GenericArray <FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GGS_string ("invoked routine(s) do(es) not preserve bank selection"), fixItArray15  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1634)) ;
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
      inCompiler->emitSemanticError (temp_16.readProperty_mInstructionLocation (), GGS_string ("an interrupt routine does not accept computed bra instruction"), fixItArray17  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1641)) ;
    }
    break ;
  }
  GGS_sint_36__34_ var_size_57502 ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_18 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_18.readProperty_mSizeExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size_57502, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1644)) ;
  GalgasBool test_19 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_19) {
    test_19 = GGS_bool (ComparisonKind::lowerThan, var_size_57502.objectCompare (GGS_sint_36__34_ (int64_t (2LL)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_19) {
      const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_20 = this ;
      GenericArray <FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_20.readProperty_mInstructionLocation (), GGS_string ("the computed range (").add_operation (var_size_57502.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1646)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1646)).add_operation (GGS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1646)), fixItArray21  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1646)) ;
    }
  }
  if (GalgasBool::boolFalse == test_19) {
    GalgasBool test_22 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_22) {
      test_22 = GGS_bool (ComparisonKind::greaterThan, var_size_57502.objectCompare (GGS_sint_36__34_ (int64_t (128LL)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_22) {
        const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_23 = this ;
        GenericArray <FixItDescription> fixItArray24 ;
        inCompiler->emitSemanticError (temp_23.readProperty_mInstructionLocation (), GGS_string ("the computed range (").add_operation (var_size_57502.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1648)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1648)).add_operation (GGS_string (") should be lower or equal to 128"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1648)), fixItArray24  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1648)) ;
      }
    }
    if (GalgasBool::boolFalse == test_22) {
      GalgasBool test_25 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_25) {
        const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_26 = this ;
        test_25 = GGS_bool (ComparisonKind::notEqual, var_size_57502.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1649)).objectCompare (temp_26.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1649)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_25) {
          const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_27 = this ;
          const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_28 = this ;
          GenericArray <FixItDescription> fixItArray29 ;
          inCompiler->emitSemanticError (temp_27.readProperty_mInstructionLocation (), GGS_string ("the routine name list length (").add_operation (temp_28.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1650)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1650)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1650)).add_operation (GGS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1650)).add_operation (var_size_57502.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1650)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1650)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1650)), fixItArray29  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1650)) ;
        }
      }
    }
  }
  const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_30 = this ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_31 = this ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_32 = this ;
  ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1654)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_ComputedBraTerminator::init_21__21__21_ (temp_30.readProperty_mInstructionLocation (), temp_31.readProperty_mTargetLabels (), temp_32.readProperty_mUsesRelativeCall (), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1661)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1653)) ;
  ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  ioArgument_ioBlockLabel = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1666)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_computed_retlw analyze'
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
      inCompiler->emitSemanticError (temp_0.readProperty_mInstructionLocation (), GGS_string ("a \"noreturn\" routine does not accept computed retlw instruction"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1690)) ;
    }
    break ;
  case GGS_routineKind::Enumeration::enum_interruptRoutine:
    {
      const GGS_pic_31__38_Instruction_5F_computed_5F_retlw temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("an interrupt routine does not accept computed retlw instruction"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1692)) ;
    }
    break ;
  }
  GGS_sint_36__34_ var_size_59549 ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_retlw temp_4 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_4.readProperty_mSizeExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_size_59549, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1695)) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::lowerThan, var_size_59549.objectCompare (GGS_sint_36__34_ (int64_t (2LL)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_pic_31__38_Instruction_5F_computed_5F_retlw temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mInstructionLocation (), GGS_string ("the computed range (").add_operation (var_size_59549.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1697)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1697)).add_operation (GGS_string (") should be greater or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1697)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1697)) ;
    }
  }
  if (GalgasBool::boolFalse == test_5) {
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      test_8 = GGS_bool (ComparisonKind::greaterThan, var_size_59549.objectCompare (GGS_sint_36__34_ (int64_t (128LL)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        const GGS_pic_31__38_Instruction_5F_computed_5F_retlw temp_9 = this ;
        GenericArray <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GGS_string ("the computed range (").add_operation (var_size_59549.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1699)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1699)).add_operation (GGS_string (") should be lower or equal to 128"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1699)), fixItArray10  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1699)) ;
      }
    }
    if (GalgasBool::boolFalse == test_8) {
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        const GGS_pic_31__38_Instruction_5F_computed_5F_retlw temp_12 = this ;
        test_11 = GGS_bool (ComparisonKind::notEqual, var_size_59549.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1700)).objectCompare (temp_12.readProperty_mImmediateExpressionList ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1700)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          const GGS_pic_31__38_Instruction_5F_computed_5F_retlw temp_13 = this ;
          const GGS_pic_31__38_Instruction_5F_computed_5F_retlw temp_14 = this ;
          GenericArray <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticError (temp_13.readProperty_mInstructionLocation (), GGS_string ("the constant list length (").add_operation (temp_14.readProperty_mImmediateExpressionList ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1701)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1701)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1701)).add_operation (GGS_string (") should be equal to the computed range ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1701)).add_operation (var_size_59549.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1701)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1701)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1701)), fixItArray15  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1701)) ;
        }
      }
    }
  }
  GGS_uintlist var_literalValues_60101 = GGS_uintlist::init (inCompiler COMMA_HERE) ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_retlw temp_16 = this ;
  UpEnumerator_immediatExpressionList enumerator_60148 (temp_16.readProperty_mImmediateExpressionList ()) ;
  GGS_uint index_60131 (uint32_t (0)) ;
  while (enumerator_60148.hasCurrentObject ()) {
    GGS_sint_36__34_ var_v_60262 ;
    callExtensionMethod_eval ((cPtr_immediatExpression *) enumerator_60148.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_v_60262, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1706)) ;
    GalgasBool test_17 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_17) {
      test_17 = GGS_bool (ComparisonKind::greaterThan, var_v_60262.objectCompare (GGS_sint_36__34_ (int64_t (255LL)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_v_60262.objectCompare (GGS_sint_36__34_ (int64_t (-128LL)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1707)).boolEnum () ;
      if (GalgasBool::boolTrue == test_17) {
        const GGS_pic_31__38_Instruction_5F_computed_5F_retlw temp_18 = this ;
        GenericArray <FixItDescription> fixItArray19 ;
        inCompiler->emitSemanticError (temp_18.readProperty_mInstructionLocation (), GGS_string ("immediate value with idx ").add_operation (index_60131.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1708)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1708)).add_operation (GGS_string (" is evaluated as "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1708)).add_operation (var_v_60262.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1708)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1708)).add_operation (GGS_string (" (should be <= 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1708)), fixItArray19  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1708)) ;
      }
    }
    var_literalValues_60101.addAssignOperation (var_v_60262.operator_and (GGS_sint_36__34_ (int64_t (255LL)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1710)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1710))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1710)) ;
    enumerator_60148.gotoNextObject () ;
    index_60131.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1705)) ;
  }
  const GGS_pic_31__38_Instruction_5F_computed_5F_retlw temp_20 = this ;
  const GGS_pic_31__38_Instruction_5F_computed_5F_retlw temp_21 = this ;
  ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1714)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_ComputedRETLWTerminator::init_21__21__21_ (temp_20.readProperty_mInstructionLocation (), var_literalValues_60101, temp_21.readProperty_mUsesRelativeCall (), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1721)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1713)) ;
  ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  ioArgument_ioBlockLabel = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1726)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_JUMPCC analyze'
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
  GGS_bool var_isNoReturn_61692 ;
  GGS_uint var_requiredBank_61715 ;
  const GGS_pic_31__38_Instruction_5F_JUMPCC temp_0 = this ;
  GGS_uint joker_61729 ; // Joker input parameter
  GGS_bool joker_61733 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_61692, var_requiredBank_61715, joker_61729, joker_61733, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1747)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_61715.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1748)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_requiredBank_61715.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1748)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_pic_31__38_Instruction_5F_JUMPCC temp_2 = this ;
      GGS_string var_errorMessage_61825 = GGS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1749)).add_operation (GGS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1749)).add_operation (var_requiredBank_61715.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1749)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1749)) ;
      var_errorMessage_61825.plusAssignOperation(GGS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1750)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1751)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          var_errorMessage_61825.plusAssignOperation(GGS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1752)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        var_errorMessage_61825.plusAssignOperation(GGS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1754)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1754)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1754)) ;
      }
      const GGS_pic_31__38_Instruction_5F_JUMPCC temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_61825, fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1756)) ;
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = var_isNoReturn_61692.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1758)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_pic_31__38_Instruction_5F_JUMPCC temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("a regular routine should be called with a RCALL, CALL or JSR instruction"), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1759)) ;
    }
  }
  GGS_conditionalBranchMode var_mode_62359 ;
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    const GGS_pic_31__38_Instruction_5F_JUMPCC temp_10 = this ;
    test_9 = temp_10.readProperty_mIsBcc ().boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      var_mode_62359 = GGS_conditionalBranchMode::class_func_native (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1764)) ;
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    var_mode_62359 = GGS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1766)) ;
  }
  const GGS_pic_31__38_Instruction_5F_JUMPCC temp_11 = this ;
  GGS_lstring var_label_30__62526 = GGS_lstring::init_21__21_ (GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1769)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1769)), temp_11.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1770)) ;
  const GGS_pic_31__38_Instruction_5F_JUMPCC temp_12 = this ;
  const GGS_pic_31__38_Instruction_5F_JUMPCC temp_13 = this ;
  const GGS_pic_31__38_Instruction_5F_JUMPCC temp_14 = this ;
  ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1773)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_ConditionalJumpTerminator::init_21__21__21__21__21__21_ (temp_12.readProperty_mInstructionLocation (), temp_13.readProperty_mConditionalBranch (), temp_14.readProperty_mTargetLabel (), var_mode_62359, var_label_30__62526, var_mode_62359, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1783)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1772)) ;
  ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  ioArgument_ioBlockLabel = var_label_30__62526 ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_IF_BitTest analyze'
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
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_64030 ;
  GGS_bitSliceTable var_bitSliceTable_64079 ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_0 = this ;
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (false), var_IPICregisterDescription_64030, var_bitSliceTable_64079, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1810)) ;
  GGS_uint var_bitNumber_64252 ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_1 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_64079, var_bitNumber_64252, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1820)) ;
  GGS_uint var_currentBank_64313 = ioArgument_ioCurrentBank ;
  GGS_ipic_31__38_SequentialInstruction var_embeddedInstruction_64608 ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_2 = this ;
  callExtensionMethod_analyzeSimpleInstruction ((cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_2.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, var_currentBank_64313, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_embeddedInstruction_64608, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1829)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::notEqual, var_currentBank_64313.objectCompare (var_currentBank_64313)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mEmbeddedInstruction ().readProperty_mInstructionLocation (), GGS_string ("this instruction does not preserve bank setting"), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1842)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_6 = this ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_7 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::init_21__21__21__21__21_ (temp_6.readProperty_mInstructionLocation (), var_embeddedInstruction_64608, temp_7.readProperty_mSkipIfSet (), var_IPICregisterDescription_64030, var_bitNumber_64252, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1852)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1845)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_IF_FA_SEMI_COLON analyze'
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
  GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code var_baseCode_65820 ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON temp_0 = this ;
  switch (temp_0.readProperty_mOpCode ().enumValue ()) {
  case GGS_if_5F_semi_5F_colon_5F_op::Enumeration::invalid:
    break ;
  case GGS_if_5F_semi_5F_colon_5F_op::Enumeration::enum_CPFSEQ:
    {
      var_baseCode_65820 = GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::class_func_CPFSEQ (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1876)) ;
    }
    break ;
  case GGS_if_5F_semi_5F_colon_5F_op::Enumeration::enum_CPFSGT:
    {
      var_baseCode_65820 = GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::class_func_CPFSGT (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1877)) ;
    }
    break ;
  case GGS_if_5F_semi_5F_colon_5F_op::Enumeration::enum_CPFSLT:
    {
      var_baseCode_65820 = GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::class_func_CPFSLT (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1878)) ;
    }
    break ;
  case GGS_if_5F_semi_5F_colon_5F_op::Enumeration::enum_TSTFSZ:
    {
      var_baseCode_65820 = GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::class_func_TSTFSZ (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1879)) ;
    }
    break ;
  }
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_66412 ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON temp_1 = this ;
  GGS_bitSliceTable joker_66441 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_1.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (false), var_IPICregisterDescription_66412, joker_66441, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1881)) ;
  GGS_uint var_currentBank_66518 = ioArgument_ioCurrentBank ;
  GGS_ipic_31__38_SequentialInstruction var_embeddedInstruction_66813 ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON temp_2 = this ;
  callExtensionMethod_analyzeSimpleInstruction ((cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_2.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, var_currentBank_66518, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_embeddedInstruction_66813, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1893)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::notEqual, var_currentBank_66518.objectCompare (var_currentBank_66518)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mEmbeddedInstruction ().readProperty_mInstructionLocation (), GGS_string ("this instruction does not preserve bank setting"), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1906)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON temp_6 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::init_21__21__21__21_ (temp_6.readProperty_mInstructionLocation (), var_embeddedInstruction_66813, var_baseCode_65820, var_IPICregisterDescription_66412, inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1915)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1909)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_IF_IncDec analyze'
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
  GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code var_baseCode_67992 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_1 = this ;
    const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_2 = this ;
    test_0 = temp_1.readProperty_mIncrement ().operator_and (temp_2.readProperty_mSkipIfZero () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1939)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_baseCode_67992 = GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::class_func_INCFSZ (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1940)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_4 = this ;
      const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_5 = this ;
      test_3 = temp_4.readProperty_mIncrement ().operator_and (temp_5.readProperty_mSkipIfZero ().operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1941)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1941)).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        var_baseCode_67992 = GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::class_func_INFSNZ (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1942)) ;
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_7 = this ;
        const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_8 = this ;
        test_6 = temp_7.readProperty_mIncrement ().operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1943)).operator_and (temp_8.readProperty_mSkipIfZero () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1943)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          var_baseCode_67992 = GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::class_func_DECFSZ (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1944)) ;
        }
      }
      if (GalgasBool::boolFalse == test_6) {
        var_baseCode_67992 = GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::class_func_DCFSNZ (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1946)) ;
      }
    }
  }
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_68609 ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_9 = this ;
  GGS_bitSliceTable joker_68638 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_9.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_IPICregisterDescription_68609, joker_68638, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1949)) ;
  GGS_uint var_currentBank_68715 = ioArgument_ioCurrentBank ;
  GGS_ipic_31__38_SequentialInstruction var_embeddedInstruction_69010 ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_10 = this ;
  callExtensionMethod_analyzeSimpleInstruction ((cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_10.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, var_currentBank_68715, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_embeddedInstruction_69010, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1961)) ;
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = GGS_bool (ComparisonKind::notEqual, var_currentBank_68715.objectCompare (var_currentBank_68715)).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_12 = this ;
      GenericArray <FixItDescription> fixItArray13 ;
      inCompiler->emitSemanticError (temp_12.readProperty_mEmbeddedInstruction ().readProperty_mInstructionLocation (), GGS_string ("this instruction does not preserve bank setting"), fixItArray13  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1974)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_14 = this ;
  const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_15 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::init_21__21__21__21__21_ (temp_14.readProperty_mInstructionLocation (), var_embeddedInstruction_69010, var_baseCode_67992, var_IPICregisterDescription_68609, temp_15.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1984)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 1977)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_structured_if analyze'
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
  GGS_uint var_elseBranchFinalBank_70159 = ioArgument_ioCurrentBank ;
  GGS_uint var_thenBranchFinalBank_70207 = ioArgument_ioCurrentBank ;
  const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_0 = this ;
  GGS_lstring var_conditionTrueLabel_70262 = GGS_lstring::init_21__21_ (GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2010)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2010)), temp_0.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2011)) ;
  const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_1 = this ;
  GGS_lstring var_conditionFalseLabel_70386 = GGS_lstring::init_21__21_ (GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2012)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2012)), temp_1.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2013)) ;
  const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_2 = this ;
  GGS_lstring var_exitLabel_70511 = GGS_lstring::init_21__21_ (GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2014)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2014)), temp_2.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2015)) ;
  GGS_ipic_31__38_AbstractBlockTerminator var_testTerminator_70942 ;
  const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_3 = this ;
  callExtensionMethod_analyzeCondition ((cPtr_pic_31__38_ConditionExpression *) temp_3.readProperty_mIfCondition ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel_70262, var_conditionFalseLabel_70386, ioArgument_ioUsedRegisters, var_testTerminator_70942, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2017)) ;
  ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2031)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_testTerminator_70942, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2035)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2030)) ;
  ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  ioArgument_ioBlockLabel = var_conditionTrueLabel_70262 ;
  {
  const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_4 = this ;
  routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (temp_4.readProperty_mThenInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_thenBranchFinalBank_70207, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2041)) ;
  }
  GGS_bool var_thenContinuesInSequence_71729 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = var_thenContinuesInSequence_71729.boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_6 = this ;
      ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2062)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_6.readProperty_mInstructionLocation (), var_exitLabel_70511, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2065)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2066)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2061)) ;
    }
  }
  ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  ioArgument_ioBlockLabel = var_conditionFalseLabel_70386 ;
  {
  const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_7 = this ;
  routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (temp_7.readProperty_mElseInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_elseBranchFinalBank_70159, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2073)) ;
  }
  GGS_bool var_elseContinuesInSequence_72639 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())) ;
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = var_elseContinuesInSequence_72639.boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_9 = this ;
      ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2094)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_9.readProperty_mInstructionLocation (), var_exitLabel_70511, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2097)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2098)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2093)) ;
    }
  }
  ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = GGS_bool (ComparisonKind::equal, var_elseBranchFinalBank_70159.objectCompare (var_thenBranchFinalBank_70207)).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      ioArgument_ioCurrentBank = var_elseBranchFinalBank_70159 ;
    }
  }
  if (GalgasBool::boolFalse == test_10) {
    const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_11 = this ;
    GenericArray <FixItDescription> fixItArray12 ;
    inCompiler->emitSemanticError (temp_11.readProperty_mEndOfElsePartLocation (), GGS_string ("This branch does not leave bank selection value as the first one does"), fixItArray12  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2107)) ;
    var_elseBranchFinalBank_70159 = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2108)) ;
  }
  GalgasBool test_13 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_13) {
    test_13 = var_thenContinuesInSequence_71729.operator_or (var_elseContinuesInSequence_72639 COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2111)).boolEnum () ;
    if (GalgasBool::boolTrue == test_13) {
      ioArgument_ioBlockLabel = var_exitLabel_70511 ;
    }
  }
  if (GalgasBool::boolFalse == test_13) {
    ioArgument_ioBlockLabel = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2114)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_macro analyze'
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
  GGS_lstringlist var_constantNameList_74186 ;
  GGS_pic_31__38_InstructionList var_instructionList_74209 ;
  const GGS_pic_31__38_Instruction_5F_macro temp_0 = this ;
  constinArgument_inMacroMap.method_searchKey (temp_0.readProperty_mMacroName (), var_constantNameList_74186, var_instructionList_74209, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2137)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_pic_31__38_Instruction_5F_macro temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, temp_2.readProperty_mExpressionList ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2138)).objectCompare (var_constantNameList_74186.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2138)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_pic_31__38_Instruction_5F_macro temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mInstructionLocation (), var_constantNameList_74186.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2140)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2140)).add_operation (GGS_string (" argument(s) required"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2140)), fixItArray4  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2139)) ;
    }
  }
  GGS_constantMap var_constantMap_74414 = constinArgument_inConstantMap ;
  const GGS_pic_31__38_Instruction_5F_macro temp_5 = this ;
  UpEnumerator_immediatExpressionList enumerator_74461 (temp_5.readProperty_mExpressionList ()) ;
  UpEnumerator_lstringlist enumerator_74490 (var_constantNameList_74186) ;
  while (enumerator_74461.hasCurrentObject () && enumerator_74490.hasCurrentObject ()) {
    GGS_sint_36__34_ var_expressionValue_74594 ;
    callExtensionMethod_eval ((cPtr_immediatExpression *) enumerator_74461.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, var_constantMap_74414, var_expressionValue_74594, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2144)) ;
    {
    var_constantMap_74414.setter_insertKey (enumerator_74490.current_mValue (HERE), var_expressionValue_74594, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2145)) ;
    }
    enumerator_74461.gotoNextObject () ;
    enumerator_74490.gotoNextObject () ;
  }
  {
  routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (var_instructionList_74209, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, var_constantMap_74414, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2148)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_do_while analyze'
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
  GGS_lstring var_startLabel_75818 = GGS_lstring::init_21__21_ (GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2187)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2187)), temp_0.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2188)) ;
  const GGS_pic_31__38_Instruction_5F_do_5F_while temp_1 = this ;
  ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2191)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_1.readProperty_mInstructionLocation (), var_startLabel_75818, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2194)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2195)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2190)) ;
  ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  ioArgument_ioBlockLabel = var_startLabel_75818 ;
  GGS_uint var_repeatedBranchFinalBank_76346 = ioArgument_ioCurrentBank ;
  {
  const GGS_pic_31__38_Instruction_5F_do_5F_while temp_2 = this ;
  routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (temp_2.readProperty_mRepeatedInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_repeatedBranchFinalBank_76346, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2202)) ;
  }
  GGS_bool var_repeatedInstructionsContinuesInSequence_76821 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (var_repeatedBranchFinalBank_76346)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_pic_31__38_Instruction_5F_do_5F_while temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mEndOfRepeatedInstructionList (), GGS_string ("This branch does not leave bank selection value unchanged"), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2222)) ;
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = var_repeatedInstructionsContinuesInSequence_76821.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2224)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_pic_31__38_Instruction_5F_do_5F_while temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mEndOfRepeatedInstructionList (), GGS_string ("This branch makes the next code unreachable"), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2225)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_do_5F_while temp_9 = this ;
  UpEnumerator_pic_31__38_DoWhilePartList enumerator_77262 (temp_9.readProperty_mWhilePartList ()) ;
  while (enumerator_77262.hasCurrentObject ()) {
    const GGS_pic_31__38_Instruction_5F_do_5F_while temp_10 = this ;
    GGS_lstring var_conditionTrueLabel_77332 = GGS_lstring::init_21__21_ (GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2230)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2230)), temp_10.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
    ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2231)) ;
    const GGS_pic_31__38_Instruction_5F_do_5F_while temp_11 = this ;
    GGS_lstring var_conditionFalseLabel_77459 = GGS_lstring::init_21__21_ (GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2232)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2232)), temp_11.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
    ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2233)) ;
    GGS_ipic_31__38_AbstractBlockTerminator var_testTerminator_77918 ;
    callExtensionMethod_analyzeCondition ((cPtr_pic_31__38_ConditionExpression *) enumerator_77262.current_mCondition (HERE).ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel_77332, var_conditionFalseLabel_77459, ioArgument_ioUsedRegisters, var_testTerminator_77918, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2235)) ;
    ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2248)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_testTerminator_77918, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2252)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2247)) ;
    ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
    ioArgument_ioBlockLabel = var_conditionTrueLabel_77332 ;
    GGS_uint var_branchFinalBank_78245 = ioArgument_ioCurrentBank ;
    {
    routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (enumerator_77262.current_mInstructionList (HERE), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_branchFinalBank_78245, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2258)) ;
    }
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      test_12 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (var_branchFinalBank_78245)).boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_77262.current_mEndOfPartLocation (HERE), GGS_string ("This branch does not leave bank selection value unchanged"), fixItArray13  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2277)) ;
      }
    }
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      test_14 = GGS_bool (ComparisonKind::equal, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        GenericArray <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (enumerator_77262.current_mEndOfPartLocation (HERE), GGS_string ("This branch makes the next code unreachable"), fixItArray15  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2280)) ;
      }
    }
    const GGS_pic_31__38_Instruction_5F_do_5F_while temp_16 = this ;
    ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2283)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_16.readProperty_mInstructionLocation (), var_startLabel_75818, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2286)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2287)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2282)) ;
    ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
    ioArgument_ioBlockLabel = var_conditionFalseLabel_77459 ;
    enumerator_77262.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@exitBlockTerminationForBlockInstruction addVisitedBlocks'
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
    test_0 = ioArgument_ioBlockInitialBankSelectionMap.getter_hasKey (GGS_string ("-") COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2340)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_uint var_otherInitialBlockSetting_81239 ;
      GGS_string var_otherBlockName_81278 ;
      ioArgument_ioBlockInitialBankSelectionMap.method_searchKey (GGS_string ("-").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2341)), var_otherInitialBlockSetting_81239, var_otherBlockName_81278, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2341)) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = GGS_bool (ComparisonKind::notEqual, var_otherInitialBlockSetting_81239.objectCompare (constinArgument_inInitialBlockSetting)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          const GGS_exitBlockTerminationForBlockInstruction temp_2 = this ;
          GGS_string temp_3 ;
          const GalgasBool test_4 = GGS_bool (ComparisonKind::equal, constinArgument_inInitialBlockSetting.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2344)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            temp_3 = GGS_string ("no bank") ;
          }else if (GalgasBool::boolFalse == test_4) {
            temp_3 = constinArgument_inInitialBlockSetting.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2344)) ;
          }
          GGS_string temp_5 ;
          const GalgasBool test_6 = GGS_bool (ComparisonKind::equal, var_otherInitialBlockSetting_81239.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2346)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_6) {
            temp_5 = GGS_string ("no bank") ;
          }else if (GalgasBool::boolFalse == test_6) {
            temp_5 = var_otherInitialBlockSetting_81239.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2346)) ;
          }
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_2.readProperty_mLocation (), GGS_string ("this block exits from block instruction and sets bank selection to ").add_operation (temp_3, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2343)).add_operation (GGS_string (", '"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2344)).add_operation (var_otherBlockName_81278, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2345)).add_operation (GGS_string ("' block also exits, but sets bank selection to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2345)).add_operation (temp_5, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2345)).add_operation (GGS_string ("; theses two settings should be the same"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2346)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2343)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    {
    ioArgument_ioBlockInitialBankSelectionMap.setter_insertKey (GGS_string ("-").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2350)), constinArgument_inInitialBlockSetting, constinArgument_inCurrentBlockName, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2350)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@gotoTerminationForBlockInstruction addVisitedBlocks'
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
    test_0 = ioArgument_ioVisitedBlockSet.getter_hasKey (temp_1.readProperty_mNextBlock ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2364)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2364)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_gotoTerminationForBlockInstruction temp_2 = this ;
      ioArgument_ioVisitedBlockSet.plusPlusAssignOperation (temp_2.readProperty_mNextBlock ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2365)) ;
      ioArgument_ioContinueAccessibilityExploration = GGS_bool (true) ;
      const GGS_gotoTerminationForBlockInstruction temp_3 = this ;
      GGS_pic_31__38_InstructionList joker_82559 ; // Joker input parameter
      GGS_abstractBlockTerminationForBlockInstruction joker_82563 ; // Joker input parameter
      GGS_location joker_82567 ; // Joker input parameter
      constinArgument_inBlockMap.method_searchKey (temp_3.readProperty_mNextBlock (), joker_82559, joker_82563, joker_82567, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2367)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_gotoTerminationForBlockInstruction temp_5 = this ;
        test_4 = ioArgument_ioBlockInitialBankSelectionMap.getter_hasKey (temp_5.readProperty_mNextBlock ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2368)).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GGS_uint var_otherInitialBlockSetting_82724 ;
          GGS_string var_otherBlockName_82763 ;
          const GGS_gotoTerminationForBlockInstruction temp_6 = this ;
          ioArgument_ioBlockInitialBankSelectionMap.method_searchKey (temp_6.readProperty_mNextBlock (), var_otherInitialBlockSetting_82724, var_otherBlockName_82763, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2369)) ;
          GalgasBool test_7 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_7) {
            test_7 = GGS_bool (ComparisonKind::notEqual, var_otherInitialBlockSetting_82724.objectCompare (constinArgument_inInitialBlockSetting)).boolEnum () ;
            if (GalgasBool::boolTrue == test_7) {
              const GGS_gotoTerminationForBlockInstruction temp_8 = this ;
              const GGS_gotoTerminationForBlockInstruction temp_9 = this ;
              GGS_string temp_10 ;
              const GalgasBool test_11 = GGS_bool (ComparisonKind::equal, constinArgument_inInitialBlockSetting.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2372)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_11) {
                temp_10 = GGS_string ("no bank") ;
              }else if (GalgasBool::boolFalse == test_11) {
                temp_10 = constinArgument_inInitialBlockSetting.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2372)) ;
              }
              GGS_string temp_12 ;
              const GalgasBool test_13 = GGS_bool (ComparisonKind::equal, var_otherInitialBlockSetting_82724.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2374)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_13) {
                temp_12 = GGS_string ("no bank") ;
              }else if (GalgasBool::boolFalse == test_13) {
                temp_12 = var_otherInitialBlockSetting_82724.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2374)) ;
              }
              GenericArray <FixItDescription> fixItArray14 ;
              inCompiler->emitSemanticError (temp_8.readProperty_mNextBlock ().readProperty_location (), GGS_string ("this block goes to '").add_operation (temp_9.readProperty_mNextBlock ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2371)).add_operation (GGS_string ("' block and sets bank selection to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2371)).add_operation (temp_10, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2371)).add_operation (GGS_string (", '"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2372)).add_operation (var_otherBlockName_82763, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2373)).add_operation (GGS_string ("' block goes to the same block, but sets bank selection to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2373)).add_operation (temp_12, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2373)).add_operation (GGS_string ("; theses two settings should be the same"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2374)), fixItArray14  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2371)) ;
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_4) {
        {
        const GGS_gotoTerminationForBlockInstruction temp_15 = this ;
        ioArgument_ioBlockInitialBankSelectionMap.setter_insertKey (temp_15.readProperty_mNextBlock (), constinArgument_inInitialBlockSetting, constinArgument_inCurrentBlockName, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2378)) ;
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@testTerminationForBlockInstruction addVisitedBlocks'
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
  callExtensionMethod_addVisitedBlocks ((cPtr_abstractBlockTerminationForBlockInstruction *) temp_0.readProperty_mTrueTermination ().ptr (), ioArgument_ioVisitedBlockSet, constinArgument_inBlockMap, constinArgument_inCurrentBlockName, constinArgument_inInitialBlockSetting, ioArgument_ioBlockInitialBankSelectionMap, ioArgument_ioContinuesInSequence, ioArgument_ioContinueAccessibilityExploration, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2393)) ;
  const GGS_testTerminationForBlockInstruction temp_1 = this ;
  callExtensionMethod_addVisitedBlocks ((cPtr_abstractBlockTerminationForBlockInstruction *) temp_1.readProperty_mFalseTermination ().ptr (), ioArgument_ioVisitedBlockSet, constinArgument_inBlockMap, constinArgument_inCurrentBlockName, constinArgument_inInitialBlockSetting, ioArgument_ioBlockInitialBankSelectionMap, ioArgument_ioContinuesInSequence, ioArgument_ioContinueAccessibilityExploration, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2402)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@gotoTerminationForBlockInstruction generateBlock'
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
  outArgument_outTerminator = GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_0.readProperty_mNextBlock ().readProperty_location (), GGS_lstring::init_21__21_ (constinArgument_inLabelForBlock.add_operation (temp_1.readProperty_mNextBlock ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2440)), temp_2.readProperty_mNextBlock ().readProperty_location (), inCompiler COMMA_HERE), GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2441)), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@exitBlockTerminationForBlockInstruction generateBlock'
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
  outArgument_outTerminator = GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_0.readProperty_mLocation (), GGS_lstring::init_21__21_ (constinArgument_inLabelForBlock.add_operation (GGS_string ("_exit"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2459)), temp_1.readProperty_mLocation (), inCompiler COMMA_HERE), GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2460)), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@testTerminationForBlockInstruction generateBlock'
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
  GGS_lstring var_conditionTrueLabel_86668 = GGS_lstring::init_21__21_ (GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2476)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2476)), temp_0.readProperty_mLocation (), inCompiler COMMA_HERE) ;
  ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2477)) ;
  const GGS_testTerminationForBlockInstruction temp_1 = this ;
  GGS_lstring var_conditionFalseLabel_86781 = GGS_lstring::init_21__21_ (GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2478)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2478)), temp_1.readProperty_mLocation (), inCompiler COMMA_HERE) ;
  ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2479)) ;
  const GGS_testTerminationForBlockInstruction temp_2 = this ;
  callExtensionMethod_analyzeCondition ((cPtr_pic_31__38_ConditionExpression *) temp_2.readProperty_mCondition ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel_86668, var_conditionFalseLabel_86781, ioArgument_ioUsedRegisters, outArgument_outTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2481)) ;
  GGS_ipic_31__38_AbstractBlockTerminator var_trueTerminator_87499 ;
  const GGS_testTerminationForBlockInstruction temp_3 = this ;
  callExtensionMethod_generateBlock ((cPtr_abstractBlockTerminationForBlockInstruction *) temp_3.readProperty_mTrueTermination ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, ioArgument_ioUsedRegisters, constinArgument_inLabelForBlock, var_trueTerminator_87499, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2494)) ;
  ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2506)), var_conditionTrueLabel_86668, GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE), var_trueTerminator_87499, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2510)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2505)) ;
  GGS_ipic_31__38_AbstractBlockTerminator var_falseTerminator_88011 ;
  const GGS_testTerminationForBlockInstruction temp_4 = this ;
  callExtensionMethod_generateBlock ((cPtr_abstractBlockTerminationForBlockInstruction *) temp_4.readProperty_mFalseTermination ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, ioArgument_ioUsedRegisters, constinArgument_inLabelForBlock, var_falseTerminator_88011, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2514)) ;
  ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2526)), var_conditionFalseLabel_86781, GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE), var_falseTerminator_88011, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2530)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2525)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18Instruction_block analyze'
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
  GGS_string var_labelForBlock_88915 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2555)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2555)).add_operation (GGS_string ("_"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2555)) ;
  ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2556)) ;
  const GGS_pic_31__38_Instruction_5F_block temp_0 = this ;
  const GGS_pic_31__38_Instruction_5F_block temp_1 = this ;
  const GGS_pic_31__38_Instruction_5F_block temp_2 = this ;
  ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2559)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_0.readProperty_mStartBlockName ().readProperty_location (), GGS_lstring::init_21__21_ (var_labelForBlock_88915.add_operation (temp_1.readProperty_mStartBlockName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2564)), temp_2.readProperty_mStartBlockName ().readProperty_location (), inCompiler COMMA_HERE), GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2565)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2566)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2558)) ;
  ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  GGS_blockInstructionBlockMap var_blockMap_89477 = GGS_blockInstructionBlockMap::init (inCompiler COMMA_HERE) ;
  const GGS_pic_31__38_Instruction_5F_block temp_3 = this ;
  UpEnumerator_pic_31__38_BlockInstructionBlockList enumerator_89588 (temp_3.readProperty_mBlockList ()) ;
  while (enumerator_89588.hasCurrentObject ()) {
    {
    var_blockMap_89477.setter_insertKey (enumerator_89588.current_mBlockName (HERE), enumerator_89588.current_mInstructionList (HERE), enumerator_89588.current_mBlockTerminaisonForBlockInstruction (HERE), enumerator_89588.current_mEndOfBlock (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2573)) ;
    }
    enumerator_89588.gotoNextObject () ;
  }
  const GGS_pic_31__38_Instruction_5F_block temp_4 = this ;
  GGS_pic_31__38_InstructionList joker_89822 ; // Joker input parameter
  GGS_abstractBlockTerminationForBlockInstruction joker_89826 ; // Joker input parameter
  GGS_location joker_89830 ; // Joker input parameter
  var_blockMap_89477.method_searchKey (temp_4.readProperty_mStartBlockName (), joker_89822, joker_89826, joker_89830, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2576)) ;
  GGS_blockInitialBankSelectionMap var_blockInitialBankSelectionMap_89840 = GGS_blockInitialBankSelectionMap::init (inCompiler COMMA_HERE) ;
  {
  const GGS_pic_31__38_Instruction_5F_block temp_5 = this ;
  var_blockInitialBankSelectionMap_89840.setter_insertKey (temp_5.readProperty_mStartBlockName (), ioArgument_ioCurrentBank, GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2578)) ;
  }
  const GGS_pic_31__38_Instruction_5F_block temp_6 = this ;
  GGS_stringset var_accessibleBlockSet_90030 = GGS_stringset::class_func_setWithString (temp_6.readProperty_mStartBlockName ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2580)) ;
  GGS_stringset var_handledBlockSet_90112 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_bool var_continueAccessibilityExploration_90155 = GGS_bool (true) ;
  GGS_bool var_continuesInSequence_90207 = GGS_bool (false) ;
  const GGS_pic_31__38_Instruction_5F_block temp_7 = this ;
  if (temp_7.readProperty_mBlockList ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2584)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2584)).isValid ()) {
    uint32_t variant_90237 = temp_7.readProperty_mBlockList ().getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2584)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2584)).uintValue () ;
    bool loop_90237 = true ;
    while (loop_90237) {
      loop_90237 = var_continueAccessibilityExploration_90155.isValid () ;
      if (loop_90237) {
        loop_90237 = var_continueAccessibilityExploration_90155.boolValue () ;
      }
      if (loop_90237 && (0 == variant_90237)) {
        loop_90237 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2584)) ;
      }
      if (loop_90237) {
        variant_90237 -= 1 ;
        var_continueAccessibilityExploration_90155 = GGS_bool (false) ;
        UpEnumerator_stringset enumerator_90406 (var_accessibleBlockSet_90030.substract_operation (var_handledBlockSet_90112, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2586))) ;
        while (enumerator_90406.hasCurrentObject ()) {
          var_handledBlockSet_90112.plusPlusAssignOperation (enumerator_90406.current (HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2587)) ;
          GGS_pic_31__38_InstructionList var_instructionList_90564 ;
          GGS_abstractBlockTerminationForBlockInstruction var_blockTermination_90639 ;
          GGS_location var_endOfBlock_90680 ;
          var_blockMap_89477.method_searchKey (enumerator_90406.current (HERE).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2589)), var_instructionList_90564, var_blockTermination_90639, var_endOfBlock_90680, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2588)) ;
          GGS_uint var_currentBank_90807 ;
          GGS_string joker_90820 ; // Joker input parameter
          var_blockInitialBankSelectionMap_89840.method_searchKey (enumerator_90406.current (HERE).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2595)), var_currentBank_90807, joker_90820, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2595)) ;
          ioArgument_ioBlockLabel = GGS_lstring::init_21__21_ (var_labelForBlock_88915.add_operation (enumerator_90406.current (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2596)), var_blockMap_89477.getter_locationForKey (enumerator_90406.current (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2596)), inCompiler COMMA_HERE) ;
          {
          routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (var_instructionList_90564, ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_currentBank_90807, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2597)) ;
          }
          GGS_ipic_31__38_AbstractBlockTerminator var_terminator_91705 ;
          callExtensionMethod_generateBlock ((cPtr_abstractBlockTerminationForBlockInstruction *) var_blockTermination_90639.ptr (), constinArgument_inAccessBankSplitOffset, var_currentBank_90807, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, ioArgument_ioUsedRegisters, var_labelForBlock_88915, var_terminator_91705, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2615)) ;
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = GGS_bool (ComparisonKind::equal, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              GenericArray <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (var_endOfBlock_90680, GGS_string ("execution will not reach the end of the block, but endless block is not allowed"), fixItArray9  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2627)) ;
            }
          }
          ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2630)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_terminator_91705, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2634)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2629)) ;
          ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
          callExtensionMethod_addVisitedBlocks ((cPtr_abstractBlockTerminationForBlockInstruction *) var_blockTermination_90639.ptr (), var_accessibleBlockSet_90030, var_blockMap_89477, enumerator_90406.current (HERE), var_currentBank_90807, var_blockInitialBankSelectionMap_89840, var_continuesInSequence_90207, var_continueAccessibilityExploration_90155, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2639)) ;
          enumerator_90406.gotoNextObject () ;
        }
      }
    }
  }
  const GGS_pic_31__38_Instruction_5F_block temp_10 = this ;
  UpEnumerator_pic_31__38_BlockInstructionBlockList enumerator_92420 (temp_10.readProperty_mBlockList ()) ;
  while (enumerator_92420.hasCurrentObject ()) {
    GalgasBool test_11 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_11) {
      test_11 = var_accessibleBlockSet_90030.getter_hasKey (enumerator_92420.current_mBlockName (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2644)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2644)).boolEnum () ;
      if (GalgasBool::boolTrue == test_11) {
        const GGS_pic_31__38_Instruction_5F_block temp_12 = this ;
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticWarning (enumerator_92420.current_mBlockName (HERE).readProperty_location (), GGS_string ("this block is not accessible from '").add_operation (temp_12.readProperty_mStartBlockName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2645)).add_operation (GGS_string ("' block"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2645)), fixItArray13  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2645)) ;
      }
    }
    enumerator_92420.gotoNextObject () ;
  }
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    test_14 = var_continuesInSequence_90207.boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      const GGS_pic_31__38_Instruction_5F_block temp_15 = this ;
      ioArgument_ioBlockLabel = GGS_lstring::init_21__21_ (var_labelForBlock_88915.add_operation (GGS_string ("_exit"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2650)), temp_15.readProperty_mStartBlockName ().readProperty_location (), inCompiler COMMA_HERE) ;
      GGS_string joker_92818 ; // Joker input parameter
      var_blockInitialBankSelectionMap_89840.method_searchKey (GGS_string ("-").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2651)), ioArgument_ioCurrentBank, joker_92818, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2651)) ;
    }
  }
  if (GalgasBool::boolFalse == test_14) {
    ioArgument_ioBlockLabel = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2653)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18BccInStructuredCondition analyzeCondition'
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
  outArgument_outCurrentBlockTerminator = GGS_ipic_31__38_ConditionalJumpTerminator::init_21__21__21__21__21__21_ (temp_0.readProperty_mConditionLocation (), temp_1.readProperty_mCondition (), constinArgument_inConditionTrueLabel, GGS_conditionalBranchMode::class_func_native (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2693)), constinArgument_inConditionFalseLabel, GGS_conditionalBranchMode::class_func_native (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2695)), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18RegisterComparisonCondition analyzeCondition'
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
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_95048 ;
  const GGS_pic_31__38_RegisterComparisonCondition temp_0 = this ;
  GGS_bitSliceTable joker_95077 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (false), var_IPICregisterDescription_95048, joker_95077, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2711)) ;
  GGS_ipic_31__38_RegisterComparison var_ipicComparison_95163 ;
  GGS_bool var_complementaryBranch_95190 ;
  const GGS_pic_31__38_RegisterComparisonCondition temp_1 = this ;
  switch (temp_1.readProperty_mComparison ().enumValue ()) {
  case GGS_pic_31__38_RegisterComparison::Enumeration::invalid:
    break ;
  case GGS_pic_31__38_RegisterComparison::Enumeration::enum_equal:
    {
      var_ipicComparison_95163 = GGS_ipic_31__38_RegisterComparison::class_func_registerEqualsToW (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2726)) ;
      var_complementaryBranch_95190 = GGS_bool (false) ;
    }
    break ;
  case GGS_pic_31__38_RegisterComparison::Enumeration::enum_greater:
    {
      var_ipicComparison_95163 = GGS_ipic_31__38_RegisterComparison::class_func_registerGreaterThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2729)) ;
      var_complementaryBranch_95190 = GGS_bool (false) ;
    }
    break ;
  case GGS_pic_31__38_RegisterComparison::Enumeration::enum_lower:
    {
      var_ipicComparison_95163 = GGS_ipic_31__38_RegisterComparison::class_func_registerLowerThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2732)) ;
      var_complementaryBranch_95190 = GGS_bool (false) ;
    }
    break ;
  case GGS_pic_31__38_RegisterComparison::Enumeration::enum_greaterOrEqual:
    {
      var_ipicComparison_95163 = GGS_ipic_31__38_RegisterComparison::class_func_registerLowerThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2735)) ;
      var_complementaryBranch_95190 = GGS_bool (true) ;
    }
    break ;
  case GGS_pic_31__38_RegisterComparison::Enumeration::enum_lowerOrEqual:
    {
      var_ipicComparison_95163 = GGS_ipic_31__38_RegisterComparison::class_func_registerGreaterThanW (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2738)) ;
      var_complementaryBranch_95190 = GGS_bool (true) ;
    }
    break ;
  case GGS_pic_31__38_RegisterComparison::Enumeration::enum_notEqual:
    {
      var_ipicComparison_95163 = GGS_ipic_31__38_RegisterComparison::class_func_registerEqualsToW (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2741)) ;
      var_complementaryBranch_95190 = GGS_bool (true) ;
    }
    break ;
  }
  const GGS_pic_31__38_RegisterComparisonCondition temp_2 = this ;
  GGS_location var_location_96001 = temp_2.readProperty_mRegisterExpression ().readProperty_mRegisterName ().readProperty_location () ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = var_complementaryBranch_95190.boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      outArgument_outCurrentBlockTerminator = GGS_pic_31__38_RegisterComparisonTerminator::init_21__21__21__21__21_ (var_location_96001, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_96001, constinArgument_inConditionFalseLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2749)), inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_96001, constinArgument_inConditionTrueLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2750)), inCompiler COMMA_HERE), var_IPICregisterDescription_95048, var_ipicComparison_95163, inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    outArgument_outCurrentBlockTerminator = GGS_pic_31__38_RegisterComparisonTerminator::init_21__21__21__21__21_ (var_location_96001, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_96001, constinArgument_inConditionTrueLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2756)), inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_96001, constinArgument_inConditionFalseLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2757)), inCompiler COMMA_HERE), var_IPICregisterDescription_95048, var_ipicComparison_95163, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18IncDecRegisterInCondition analyzeCondition'
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
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_97524 ;
  const GGS_pic_31__38_IncDecRegisterInCondition temp_0 = this ;
  GGS_bitSliceTable joker_97553 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_IPICregisterDescription_97524, joker_97553, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2776)) ;
  const GGS_pic_31__38_IncDecRegisterInCondition temp_1 = this ;
  GGS_location var_location_97638 = temp_1.readProperty_mRegisterExpression ().readProperty_mRegisterName ().readProperty_location () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_pic_31__38_IncDecRegisterInCondition temp_3 = this ;
    test_2 = temp_3.readProperty_mBranchIfZero ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_pic_31__38_IncDecRegisterInCondition temp_4 = this ;
      const GGS_pic_31__38_IncDecRegisterInCondition temp_5 = this ;
      outArgument_outCurrentBlockTerminator = GGS_ipic_31__38_IncDecRegisterTerminator::init_21__21__21__21__21__21_ (var_location_97638, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_97638, constinArgument_inConditionTrueLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2791)), inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_97638, constinArgument_inConditionFalseLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2792)), inCompiler COMMA_HERE), var_IPICregisterDescription_97524, temp_4.readProperty_mIncrement (), temp_5.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_pic_31__38_IncDecRegisterInCondition temp_6 = this ;
    const GGS_pic_31__38_IncDecRegisterInCondition temp_7 = this ;
    outArgument_outCurrentBlockTerminator = GGS_ipic_31__38_IncDecRegisterTerminator::init_21__21__21__21__21__21_ (var_location_97638, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_97638, constinArgument_inConditionFalseLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2799)), inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_97638, constinArgument_inConditionTrueLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2800)), inCompiler COMMA_HERE), var_IPICregisterDescription_97524, temp_6.readProperty_mIncrement (), temp_7.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18RegisterTestCondition analyzeCondition'
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
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_99213 ;
  const GGS_pic_31__38_RegisterTestCondition temp_0 = this ;
  GGS_bitSliceTable joker_99242 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (false), var_IPICregisterDescription_99213, joker_99242, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2820)) ;
  const GGS_pic_31__38_RegisterTestCondition temp_1 = this ;
  GGS_location var_location_99327 = temp_1.readProperty_mRegisterExpression ().readProperty_mRegisterName ().readProperty_location () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_pic_31__38_RegisterTestCondition temp_3 = this ;
    test_2 = temp_3.readProperty_mBranchIfZero ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      outArgument_outCurrentBlockTerminator = GGS_pic_31__38_TestRegisterTerminator::init_21__21__21__21_ (var_location_99327, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_99327, constinArgument_inConditionTrueLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2835)), inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_99327, constinArgument_inConditionFalseLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2836)), inCompiler COMMA_HERE), var_IPICregisterDescription_99213, inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    outArgument_outCurrentBlockTerminator = GGS_pic_31__38_TestRegisterTerminator::init_21__21__21__21_ (var_location_99327, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_99327, constinArgument_inConditionFalseLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2841)), inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_99327, constinArgument_inConditionTrueLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2842)), inCompiler COMMA_HERE), var_IPICregisterDescription_99213, inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18BitTestInStructuredCondition analyzeCondition'
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
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_100797 ;
  GGS_bitSliceTable var_bitSliceTable_100846 ;
  const GGS_pic_31__38_BitTestInStructuredCondition temp_0 = this ;
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (false), var_IPICregisterDescription_100797, var_bitSliceTable_100846, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2860)) ;
  GGS_uint var_bitNumber_101019 ;
  const GGS_pic_31__38_BitTestInStructuredCondition temp_1 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_100846, var_bitNumber_101019, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2870)) ;
  const GGS_pic_31__38_BitTestInStructuredCondition temp_2 = this ;
  GGS_location var_location_101088 = temp_2.readProperty_mRegisterExpression ().readProperty_mRegisterName ().readProperty_location () ;
  outArgument_outCurrentBlockTerminator = GGS_pic_31__38_BitTestTerminator::init_21__21__21__21__21_ (var_location_101088, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_101088, constinArgument_inConditionFalseLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2881)), inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_location_101088, constinArgument_inConditionTrueLabel, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2882)), inCompiler COMMA_HERE), var_IPICregisterDescription_100797, var_bitNumber_101019, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18NegateCondition analyzeCondition'
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
  callExtensionMethod_analyzeCondition ((cPtr_pic_31__38_ConditionExpression *) temp_0.readProperty_mCondition ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, constinArgument_inConditionFalseLabel, constinArgument_inConditionTrueLabel, ioArgument_ioUsedRegisters, outArgument_outCurrentBlockTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2901)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18AndCondition analyzeCondition'
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
  GGS_lstring var_conditionTrueLabel_102835 = GGS_lstring::init_21__21_ (GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2929)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2929)), constinArgument_inConditionTrueLabel.readProperty_location (), inCompiler COMMA_HERE) ;
  ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2930)) ;
  const GGS_pic_31__38_AndCondition temp_0 = this ;
  callExtensionMethod_analyzeCondition ((cPtr_pic_31__38_ConditionExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, var_conditionTrueLabel_102835, constinArgument_inConditionFalseLabel, ioArgument_ioUsedRegisters, outArgument_outCurrentBlockTerminator, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2932)) ;
  GGS_ipic_31__38_AbstractBlockTerminator var_secondTestBlockTerminator_103604 ;
  const GGS_pic_31__38_AndCondition temp_1 = this ;
  callExtensionMethod_analyzeCondition ((cPtr_pic_31__38_ConditionExpression *) temp_1.readProperty_mRightExpression ().ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedBlockList, constinArgument_inConditionTrueLabel, constinArgument_inConditionFalseLabel, ioArgument_ioUsedRegisters, var_secondTestBlockTerminator_103604, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2945)) ;
  ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2959)), var_conditionTrueLabel_102835, GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE), var_secondTestBlockTerminator_103604, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2963)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2958)) ;
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
  UpEnumerator_pic_31__38_InstructionList enumerator_104654 (constinArgument_inInstructionList) ;
  while (enumerator_104654.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::equal, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GenericArray <FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_104654.current_mInstruction (HERE).readProperty_mInstructionLocation (), GGS_string ("Unreachable code"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2993)) ;
        ioArgument_ioBlockLabel = GGS_string ("\?").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2994)) ;
      }
    }
    callExtensionMethod_analyze ((cPtr_pic_31__38_PiccoloInstruction *) enumerator_104654.current_mInstruction (HERE).ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioGeneratedBlockList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 2996)) ;
    enumerator_104654.gotoNextObject () ;
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
  UpEnumerator_dataList enumerator_105976 (constinArgument_inDataDefinitionList) ;
  const bool bool_0 = true ;
  if (enumerator_105976.hasCurrentObject () && bool_0) {
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3034)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3034)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3034)) ;
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("DATA DECLARATION").getter_leftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3035)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3035)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3035)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3035)) ;
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3036)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3036)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3036)) ;
    while (enumerator_105976.hasCurrentObject () && bool_0) {
      GGS_uintlist var_data_106271 = GGS_uintlist::init (inCompiler COMMA_HERE) ;
      GalgasBool test_1 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_1) {
        test_1 = enumerator_105976.current_mIsByteList (HERE).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          GalgasBool test_2 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_2) {
            test_2 = GGS_bool (ComparisonKind::notEqual, enumerator_105976.current_mValueList (HERE).getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3040)).operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3040)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_2) {
              GenericArray <FixItDescription> fixItArray3 ;
              inCompiler->emitSemanticError (enumerator_105976.current_mDataName (HERE).readProperty_location (), GGS_string ("the data8 byte count should be even"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3041)) ;
            }
          }
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Data8 '").add_operation (enumerator_105976.current_mDataName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3043)).add_operation (GGS_string ("', "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3043)).add_operation (enumerator_105976.current_mValueList (HERE).getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3043)).divide_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3043)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3043)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3043)).add_operation (GGS_string (" words ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3043)).add_operation (enumerator_105976.current_mValueList (HERE).getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3044)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3044)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3044)).add_operation (GGS_string (" bytes).\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3044)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3043)) ;
          {
          ioArgument_ioConstantMap.setter_insertKey (GGS_lstring::init_21__21_ (enumerator_105976.current_mDataName (HERE).readProperty_string ().add_operation (GGS_string ("_BYTE_COUNT"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3045)), enumerator_105976.current_mDataName (HERE).readProperty_location (), inCompiler COMMA_HERE), enumerator_105976.current_mValueList (HERE).getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3045)).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3045)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3045)) ;
          }
          GGS_sint var_byte_106661 = GGS_sint (int32_t (0L)) ;
          UpEnumerator_immediatExpressionList enumerator_106692 (enumerator_105976.current_mValueList (HERE)) ;
          GGS_uint index_106676 (uint32_t (0)) ;
          while (enumerator_106692.hasCurrentObject ()) {
            GGS_sint_36__34_ var_value_106802 ;
            callExtensionMethod_eval ((cPtr_immediatExpression *) enumerator_106692.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_value_106802, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3048)) ;
            GalgasBool test_4 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_4) {
              test_4 = GGS_bool (ComparisonKind::lowerThan, var_value_106802.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_4) {
                GenericArray <FixItDescription> fixItArray5 ;
                inCompiler->emitSemanticError (enumerator_106692.current_mErrorLocation (HERE), GGS_string ("data8 value is ").add_operation (var_value_106802.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3050)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3050)).add_operation (GGS_string (" (negative)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3050)), fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3050)) ;
              }
            }
            if (GalgasBool::boolFalse == test_4) {
              GalgasBool test_6 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_6) {
                test_6 = GGS_bool (ComparisonKind::greaterThan, var_value_106802.objectCompare (GGS_sint_36__34_ (int64_t (255LL)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_6) {
                  GenericArray <FixItDescription> fixItArray7 ;
                  inCompiler->emitSemanticError (enumerator_106692.current_mErrorLocation (HERE), GGS_string ("data8 value is ").add_operation (var_value_106802.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3052)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3052)).add_operation (GGS_string (" (greater than 255"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3052)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3052)) ;
                }
              }
              if (GalgasBool::boolFalse == test_6) {
                GalgasBool test_8 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_8) {
                  test_8 = GGS_bool (ComparisonKind::equal, index_106676.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3053)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_8) {
                    var_byte_106661 = var_value_106802.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3054)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_8) {
                  var_data_106271.addAssignOperation (var_value_106802.left_shift_operation (GGS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3056)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3056)).operator_or (var_byte_106661.getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3056)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3056)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3056))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3056)) ;
                }
              }
            }
            enumerator_106692.gotoNextObject () ;
            index_106676.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3047)) ;
          }
        }
      }
      if (GalgasBool::boolFalse == test_1) {
        ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Data16 '").add_operation (enumerator_105976.current_mDataName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3060)).add_operation (GGS_string ("', "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3060)).add_operation (enumerator_105976.current_mValueList (HERE).getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3060)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3060)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3060)).add_operation (GGS_string (" words ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3060)).add_operation (enumerator_105976.current_mValueList (HERE).getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3061)).multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3061)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3061)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3061)).add_operation (GGS_string (" bytes).\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3061)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3060)) ;
        {
        ioArgument_ioConstantMap.setter_insertKey (GGS_lstring::init_21__21_ (enumerator_105976.current_mDataName (HERE).readProperty_string ().add_operation (GGS_string ("_BYTE_COUNT"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3062)), enumerator_105976.current_mDataName (HERE).readProperty_location (), inCompiler COMMA_HERE), enumerator_105976.current_mValueList (HERE).getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3062)).multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3062)).getter_sint_36__34_ (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3062)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3062)) ;
        }
        UpEnumerator_immediatExpressionList enumerator_107448 (enumerator_105976.current_mValueList (HERE)) ;
        while (enumerator_107448.hasCurrentObject ()) {
          GGS_sint_36__34_ var_value_107554 ;
          callExtensionMethod_eval ((cPtr_immediatExpression *) enumerator_107448.current_mExpression (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_value_107554, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3064)) ;
          GalgasBool test_9 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_9) {
            test_9 = GGS_bool (ComparisonKind::lowerThan, var_value_107554.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_9) {
              GenericArray <FixItDescription> fixItArray10 ;
              inCompiler->emitSemanticError (enumerator_107448.current_mErrorLocation (HERE), GGS_string ("data16 value is ").add_operation (var_value_107554.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3066)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3066)).add_operation (GGS_string (" (negative)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3066)), fixItArray10  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3066)) ;
            }
          }
          if (GalgasBool::boolFalse == test_9) {
            GalgasBool test_11 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_11) {
              test_11 = GGS_bool (ComparisonKind::greaterThan, var_value_107554.objectCompare (GGS_sint_36__34_ (int64_t (65535LL)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_11) {
                GenericArray <FixItDescription> fixItArray12 ;
                inCompiler->emitSemanticError (enumerator_107448.current_mErrorLocation (HERE), GGS_string ("data16 value is ").add_operation (var_value_107554.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3068)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3068)).add_operation (GGS_string (" (greater than 2**16-1)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3068)), fixItArray12  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3068)) ;
              }
            }
            if (GalgasBool::boolFalse == test_11) {
              var_data_106271.addAssignOperation (var_value_107554.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3070))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3070)) ;
            }
          }
          enumerator_107448.gotoNextObject () ;
        }
      }
      {
      outArgument_outDataMap.setter_insertKey (enumerator_105976.current_mDataName (HERE), var_data_106271, enumerator_105976.current_mIsByteList (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3074)) ;
      }
      enumerator_105976.gotoNextObject () ;
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
  GGS_constantMap var_constantMap_109292 = constinArgument_inConstantMap ;
  GGS_stringset var_usedRegisters_109326 = constinArgument_inUsedRegisters ;
  GGS_routineMap var_routineMap_109417 = GGS_routineMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_routineDeclarationList enumerator_109507 (constinArgument_inUserRoutineDeclarationListForBootloaderImplementation) ;
  while (enumerator_109507.hasCurrentObject ()) {
    {
    var_routineMap_109417.setter_insertKey (enumerator_109507.current_mRoutineName (HERE), enumerator_109507.current_mIsNoReturn (HERE), enumerator_109507.current_mRequiredBank (HERE).readProperty_uint (), enumerator_109507.current_mReturnedBank (HERE).readProperty_uint (), enumerator_109507.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3113)) ;
    }
    enumerator_109507.gotoNextObject () ;
  }
  UpEnumerator_routineDeclarationList enumerator_109768 (constinArgument_inBootloaderRoutineDeclarationListForUserProgramImplementation) ;
  while (enumerator_109768.hasCurrentObject ()) {
    {
    var_routineMap_109417.setter_insertKey (enumerator_109768.current_mRoutineName (HERE), enumerator_109768.current_mIsNoReturn (HERE), enumerator_109768.current_mRequiredBank (HERE).readProperty_uint (), enumerator_109768.current_mReturnedBank (HERE).readProperty_uint (), enumerator_109768.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3116)) ;
    }
    enumerator_109768.gotoNextObject () ;
  }
  UpEnumerator_pic_31__38_RoutineDefinitionList enumerator_110050 (constinArgument_inRoutineDefinitionList) ;
  while (enumerator_110050.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, enumerator_110050.current_mRequiredBank (HERE).readProperty_uint ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3119)))).operator_and (GGS_bool (ComparisonKind::greaterThan, enumerator_110050.current_mRequiredBank (HERE).readProperty_uint ().objectCompare (GGS_uint (uint32_t (15U)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3119)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GenericArray <FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_110050.current_mRequiredBank (HERE).readProperty_location (), GGS_string ("the required bank value should be lower or equal to 15"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3120)) ;
      }
    }
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::notEqual, enumerator_110050.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3122)))).operator_and (GGS_bool (ComparisonKind::greaterThan, enumerator_110050.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GGS_uint (uint32_t (15U)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3122)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_110050.current_mReturnedBank (HERE).readProperty_location (), GGS_string ("the returned bank value should be lower or equal to 15"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3123)) ;
      }
    }
    {
    var_routineMap_109417.setter_insertKey (enumerator_110050.current_mRoutineName (HERE), enumerator_110050.current_mIsNoReturn (HERE), enumerator_110050.current_mRequiredBank (HERE).readProperty_uint (), enumerator_110050.current_mReturnedBank (HERE).readProperty_uint (), enumerator_110050.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3125)) ;
    }
    enumerator_110050.gotoNextObject () ;
  }
  GGS_pic_31__38__5F_dataMap var_dataMap_110727 ;
  {
  routine_pic_31__38__5F_analyze_5F_data_5F_sections_3F__3F__3F__26__21__26__26_ (constinArgument_inDataList, constinArgument_inRegisterTable, var_constantMap_109292, ioArgument_ioListFileContents, var_dataMap_110727, var_constantMap_109292, var_usedRegisters_109326, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3128)) ;
  }
  {
  routine_print_5F_constant_5F_definition_3F__26_ (var_constantMap_109292, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3138)) ;
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::notEqual, constinArgument_inProgramKind.objectCompare (GGS_programKind::class_func_userProgram (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3143)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = var_routineMap_109417.getter_hasKey (GGS_string ("main") COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3144)).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          GGS_bool var_isNoReturn_111146 ;
          GGS_uint var_requiredBank_111163 ;
          GGS_uint joker_111177 ; // Joker input parameter
          GGS_bool joker_111181 ; // Joker input parameter
          var_routineMap_109417.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("main"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3145)), inCompiler COMMA_HERE), var_isNoReturn_111146, var_requiredBank_111163, joker_111177, joker_111181, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3145)) ;
          GalgasBool test_6 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_6) {
            test_6 = var_isNoReturn_111146.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3146)).boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              GenericArray <FixItDescription> fixItArray7 ;
              inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3147)), GGS_string ("the \"main\" should be declared with \"noreturn\" qualifier: \"noreturn main requiresbank 0\""), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3147)) ;
            }
          }
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_111163.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              GenericArray <FixItDescription> fixItArray9 ;
              inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3150)), GGS_string ("the \"main\" should be declared with \"requiresbank 0\" qualifier: \"noreturn main requiresbank 0\""), fixItArray9  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3150)) ;
            }
          }
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        GenericArray <FixItDescription> fixItArray10 ;
        inCompiler->emitSemanticError (constinArgument_inEndOfProgram, GGS_string ("the program should declare the \"main\" routine"), fixItArray10  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3153)) ;
      }
    }
  }
  GGS_ipic_31__38_BlockList var_generatedBlockList_111723 = GGS_ipic_31__38_BlockList::init (inCompiler COMMA_HERE) ;
  GGS_uint var_entryPoint_111775 = GGS_uint (uint32_t (4U)) ;
  UpEnumerator_routineDeclarationList enumerator_111819 (constinArgument_inBootloaderRoutineDeclarationListForUserProgramImplementation) ;
  while (enumerator_111819.hasCurrentObject ()) {
    var_generatedBlockList_111723.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (var_entryPoint_111775, enumerator_111819.current_mRoutineName (HERE), GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE), GGS_ipic_31__38_ReturnTerminator::init_21_ (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3164)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3165)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3160)) ;
    var_entryPoint_111775 = var_entryPoint_111775.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3168)) ;
    GalgasBool test_11 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_11) {
      test_11 = GGS_bool (ComparisonKind::equal, var_entryPoint_111775.objectCompare (GGS_uint (uint32_t (8U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_11) {
        var_entryPoint_111775 = GGS_uint (uint32_t (12U)) ;
      }
    }
    if (GalgasBool::boolFalse == test_11) {
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        test_12 = GGS_bool (ComparisonKind::equal, var_entryPoint_111775.objectCompare (GGS_uint (uint32_t (24U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          var_entryPoint_111775 = GGS_uint (uint32_t (28U)) ;
        }
      }
    }
    enumerator_111819.gotoNextObject () ;
  }
  var_entryPoint_111775 = constinArgument_inBootloaderReservedROMsize.readProperty_uint () ;
  UpEnumerator_routineDeclarationList enumerator_112421 (constinArgument_inUserRoutineDeclarationListForUserProgramImplementation) ;
  while (enumerator_112421.hasCurrentObject ()) {
    var_generatedBlockList_111723.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (var_entryPoint_111775, GGS_string ("_entry_user_").add_operation (var_entryPoint_111775.getter_xString (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3180)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3180)).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3180)), GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (enumerator_112421.current_mRoutineName (HERE).readProperty_location (), enumerator_112421.current_mRoutineName (HERE), GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3182)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3183)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3178)) ;
    var_entryPoint_111775 = var_entryPoint_111775.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3186)) ;
    enumerator_112421.gotoNextObject () ;
  }
  GalgasBool test_13 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_13) {
    test_13 = GGS_bool (ComparisonKind::notEqual, constinArgument_inProgramKind.objectCompare (GGS_programKind::class_func_userProgram (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3189)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_13) {
      var_generatedBlockList_111723.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint (uint32_t (0U)), GGS_string (".START").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3192)), GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3194)), GGS_string ("main").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3194)), GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3194)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3195)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3190)) ;
    }
  }
  GGS_routineDeclarationList var_tempBootloaderRoutineDeclarationList_113328 = constinArgument_inBootloaderRoutineDeclarationListForBootloaderImplementation ;
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    test_14 = GGS_bool (ComparisonKind::greaterThan, var_tempBootloaderRoutineDeclarationList_113328.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3201)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      GGS_lstring var_routineName_113553 ;
      {
      GGS_luint joker_113566 ; // Joker input parameter
      GGS_luint joker_113570 ; // Joker input parameter
      GGS_bool joker_113574 ; // Joker input parameter
      GGS_bool joker_113578 ; // Joker input parameter
      var_tempBootloaderRoutineDeclarationList_113328.setter_popFirst (var_routineName_113553, joker_113566, joker_113570, joker_113574, joker_113578, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3202)) ;
      }
      var_generatedBlockList_111723.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint (uint32_t (4U)), GGS_string ("_entry_bootloader_04").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3205)), GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_routineName_113553.readProperty_location (), var_routineName_113553, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3207)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3208)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3203)) ;
    }
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    test_15 = constinArgument_inHasHighInterrupt.boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      var_generatedBlockList_111723.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint (uint32_t (8U)), GGS_string (".HIGH_INTERRUPT").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3216)), GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3218)), GGS_string ("_high_interrupt").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3218)), GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3218)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3219)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3214)) ;
    }
  }
  var_entryPoint_111775 = GGS_uint (uint32_t (12U)) ;
  if (var_tempBootloaderRoutineDeclarationList_113328.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3225)).isValid ()) {
    uint32_t variant_114419 = var_tempBootloaderRoutineDeclarationList_113328.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3225)).uintValue () ;
    bool loop_114419 = true ;
    while (loop_114419) {
      loop_114419 = GGS_bool (ComparisonKind::greaterThan, var_tempBootloaderRoutineDeclarationList_113328.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3226)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::lowerThan, var_entryPoint_111775.objectCompare (GGS_uint (uint32_t (24U)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3226)).isValid () ;
      if (loop_114419) {
        loop_114419 = GGS_bool (ComparisonKind::greaterThan, var_tempBootloaderRoutineDeclarationList_113328.getter_count (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3226)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::lowerThan, var_entryPoint_111775.objectCompare (GGS_uint (uint32_t (24U)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3226)).boolValue () ;
      }
      if (loop_114419 && (0 == variant_114419)) {
        loop_114419 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3225)) ;
      }
      if (loop_114419) {
        variant_114419 -= 1 ;
        GGS_lstring var_routineName_114620 ;
        {
        GGS_luint joker_114633 ; // Joker input parameter
        GGS_luint joker_114637 ; // Joker input parameter
        GGS_bool joker_114641 ; // Joker input parameter
        GGS_bool joker_114645 ; // Joker input parameter
        var_tempBootloaderRoutineDeclarationList_113328.setter_popFirst (var_routineName_114620, joker_114633, joker_114637, joker_114641, joker_114645, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3228)) ;
        }
        var_generatedBlockList_111723.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (var_entryPoint_111775, GGS_string ("_entry_bootloader_").add_operation (var_entryPoint_111775.getter_xString (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3231)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3231)).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3231)), GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (var_routineName_114620.readProperty_location (), var_routineName_114620, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3233)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3234)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3229)) ;
        var_entryPoint_111775 = var_entryPoint_111775.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3237)) ;
      }
    }
  }
  GalgasBool test_16 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_16) {
    test_16 = constinArgument_inHasLowInterrupt.boolEnum () ;
    if (GalgasBool::boolTrue == test_16) {
      var_generatedBlockList_111723.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint (uint32_t (24U)), GGS_string (".LOW_INTERRUPT").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3243)), GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3245)), GGS_string ("_low_interrupt").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3245)), GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3245)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3246)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3241)) ;
    }
  }
  var_entryPoint_111775 = GGS_uint (uint32_t (28U)) ;
  UpEnumerator_routineDeclarationList enumerator_115507 (var_tempBootloaderRoutineDeclarationList_113328) ;
  while (enumerator_115507.hasCurrentObject ()) {
    var_generatedBlockList_111723.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (var_entryPoint_111775, GGS_string ("_entry_bootloader_").add_operation (var_entryPoint_111775.getter_xString (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3255)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3255)).getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3255)), GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (enumerator_115507.current_mRoutineName (HERE).readProperty_location (), enumerator_115507.current_mRoutineName (HERE), GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3257)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3258)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3253)) ;
    var_entryPoint_111775 = var_entryPoint_111775.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3261)) ;
    enumerator_115507.gotoNextObject () ;
  }
  GGS_uint var_localLabelIndex_116026 = GGS_uint (uint32_t (0U)) ;
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    test_17 = constinArgument_inHasLowInterrupt.boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      UpEnumerator_pic_31__38_InterruptDefinitionList enumerator_116127 (constinArgument_inInterruptDefinitionList) ;
      while (enumerator_116127.hasCurrentObject ()) {
        GalgasBool test_18 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_18) {
          test_18 = GGS_bool (ComparisonKind::equal, enumerator_116127.current_mInterruptName (HERE).readProperty_string ().objectCompare (GGS_string ("low"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_18) {
            GGS_uint var_currentBank_116242 = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3269)) ;
            GGS_ipic_31__38_SequentialInstructionList var_generatedInstructionList_116288 = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
            GGS_lstring var_currentBlockLabel_116362 = GGS_lstring::init_21__21_ (GGS_string ("_low_interrupt"), enumerator_116127.current_mInterruptName (HERE).readProperty_location (), inCompiler COMMA_HERE) ;
            {
            routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (enumerator_116127.current_mInstructionList (HERE), var_generatedBlockList_111723, constinArgument_inAccessBankSplitOffset, var_routineMap_109417, constinArgument_inRegisterTable, var_dataMap_110727, var_constantMap_109292, constinArgument_inMacroMap, var_localLabelIndex_116026, var_generatedInstructionList_116288, var_currentBlockLabel_116362, ioArgument_ioListFileContents, var_currentBank_116242, enumerator_116127.current_mFastReturn (HERE).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3286)), GGS_routineKind::class_func_interruptRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3287)), var_usedRegisters_109326, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3272)) ;
            }
            GalgasBool test_19 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_19) {
              test_19 = GGS_bool (ComparisonKind::equal, var_currentBlockLabel_116362.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_19) {
                GenericArray <FixItDescription> fixItArray20 ;
                inCompiler->emitSemanticError (enumerator_116127.current_mEndOfInterruptLocation (HERE), GGS_string ("execution cannot reach the end of the interrupt routine"), fixItArray20  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3291)) ;
              }
            }
            var_generatedBlockList_111723.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3295)), var_currentBlockLabel_116362, var_generatedInstructionList_116288, GGS_ipic_31__38_RetfieTerminator::init_21__21_ (enumerator_116127.current_mInterruptName (HERE).readProperty_location (), enumerator_116127.current_mFastReturn (HERE), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3299)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3294)) ;
          }
        }
        enumerator_116127.gotoNextObject () ;
      }
    }
  }
  GalgasBool test_21 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_21) {
    test_21 = constinArgument_inHasHighInterrupt.boolEnum () ;
    if (GalgasBool::boolTrue == test_21) {
      UpEnumerator_pic_31__38_InterruptDefinitionList enumerator_117615 (constinArgument_inInterruptDefinitionList) ;
      while (enumerator_117615.hasCurrentObject ()) {
        GalgasBool test_22 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_22) {
          test_22 = GGS_bool (ComparisonKind::equal, enumerator_117615.current_mInterruptName (HERE).readProperty_string ().objectCompare (GGS_string ("high"))).boolEnum () ;
          if (GalgasBool::boolTrue == test_22) {
            GGS_uint var_currentBank_117731 = GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3309)) ;
            GGS_ipic_31__38_SequentialInstructionList var_generatedInstructionList_117778 = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
            GGS_lstring var_currentBlockLabel_117852 = GGS_lstring::init_21__21_ (GGS_string ("_high_interrupt"), enumerator_117615.current_mInterruptName (HERE).readProperty_location (), inCompiler COMMA_HERE) ;
            {
            routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (enumerator_117615.current_mInstructionList (HERE), var_generatedBlockList_111723, constinArgument_inAccessBankSplitOffset, var_routineMap_109417, constinArgument_inRegisterTable, var_dataMap_110727, var_constantMap_109292, constinArgument_inMacroMap, var_localLabelIndex_116026, var_generatedInstructionList_117778, var_currentBlockLabel_117852, ioArgument_ioListFileContents, var_currentBank_117731, enumerator_117615.current_mFastReturn (HERE).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3326)), GGS_routineKind::class_func_interruptRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3327)), var_usedRegisters_109326, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3312)) ;
            }
            GalgasBool test_23 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_23) {
              test_23 = GGS_bool (ComparisonKind::equal, var_currentBlockLabel_117852.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
              if (GalgasBool::boolTrue == test_23) {
                GenericArray <FixItDescription> fixItArray24 ;
                inCompiler->emitSemanticError (enumerator_117615.current_mEndOfInterruptLocation (HERE), GGS_string ("execution cannot reach the end of the interrupt routine"), fixItArray24  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3331)) ;
              }
            }
            var_generatedBlockList_111723.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3335)), var_currentBlockLabel_117852, var_generatedInstructionList_117778, GGS_ipic_31__38_RetfieTerminator::init_21__21_ (enumerator_117615.current_mInterruptName (HERE).readProperty_location (), GGS_bool (true), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3339)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3334)) ;
          }
        }
        enumerator_117615.gotoNextObject () ;
      }
    }
  }
  UpEnumerator_pic_31__38_RoutineDefinitionList enumerator_119085 (constinArgument_inRoutineDefinitionList) ;
  while (enumerator_119085.hasCurrentObject ()) {
    GGS_uint var_currentBank_119133 = enumerator_119085.current_mRequiredBank (HERE).readProperty_uint () ;
    GGS_routineKind var_routineKind_119187 ;
    GalgasBool test_25 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_25) {
      test_25 = enumerator_119085.current_mIsNoReturn (HERE).boolEnum () ;
      if (GalgasBool::boolTrue == test_25) {
        var_routineKind_119187 = GGS_routineKind::class_func_noReturnRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3350)) ;
      }
    }
    if (GalgasBool::boolFalse == test_25) {
      var_routineKind_119187 = GGS_routineKind::class_func_regularRoutine (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3352)) ;
    }
    GGS_ipic_31__38_SequentialInstructionList var_generatedInstructionList_119347 = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
    GGS_lstring var_currentBlockLabel_119426 = enumerator_119085.current_mRoutineName (HERE) ;
    {
    routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (enumerator_119085.current_mInstructionList (HERE), var_generatedBlockList_111723, constinArgument_inAccessBankSplitOffset, var_routineMap_109417, constinArgument_inRegisterTable, var_dataMap_110727, var_constantMap_109292, constinArgument_inMacroMap, var_localLabelIndex_116026, var_generatedInstructionList_119347, var_currentBlockLabel_119426, ioArgument_ioListFileContents, var_currentBank_119133, enumerator_119085.current_mPreservesBank (HERE), var_routineKind_119187, var_usedRegisters_109326, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3356)) ;
    }
    GGS_bool var_continuesInSequence_119891 = GGS_bool (ComparisonKind::notEqual, var_currentBlockLabel_119426.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())) ;
    GalgasBool test_26 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_26) {
      test_26 = var_continuesInSequence_119891.boolEnum () ;
      if (GalgasBool::boolTrue == test_26) {
        var_generatedBlockList_111723.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3378)), var_currentBlockLabel_119426, var_generatedInstructionList_119347, GGS_ipic_31__38_ReturnTerminator::init_21_ (enumerator_119085.current_mRoutineName (HERE).readProperty_location (), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3382)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3377)) ;
      }
    }
    GalgasBool test_27 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_27) {
      test_27 = enumerator_119085.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3387)).operator_and (GGS_bool (ComparisonKind::notEqual, enumerator_119085.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3387)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3387)).operator_and (GGS_bool (ComparisonKind::notEqual, var_currentBank_119133.objectCompare (enumerator_119085.current_mReturnedBank (HERE).readProperty_uint ())) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3387)).boolEnum () ;
      if (GalgasBool::boolTrue == test_27) {
        GenericArray <FixItDescription> fixItArray28 ;
        inCompiler->emitSemanticError (enumerator_119085.current_mRoutineName (HERE).readProperty_location (), GGS_string ("execution will not set bank selection to ").add_operation (enumerator_119085.current_mReturnedBank (HERE).readProperty_uint ().getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3388)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3388)), fixItArray28  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3388)) ;
      }
    }
    GalgasBool test_29 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_29) {
      test_29 = enumerator_119085.current_mIsNoReturn (HERE).operator_and (var_continuesInSequence_119891 COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3390)).boolEnum () ;
      if (GalgasBool::boolTrue == test_29) {
        GenericArray <FixItDescription> fixItArray30 ;
        inCompiler->emitSemanticError (enumerator_119085.current_mRoutineName (HERE).readProperty_location (), GGS_string ("execution should not reach the end of a \"noreturn\" routine"), fixItArray30  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3391)) ;
      }
    }
    enumerator_119085.gotoNextObject () ;
  }
  GGS_registerExpression var_WREGregister_120791 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("WREG"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3398)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3399)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3400)), inCompiler COMMA_HERE) ;
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_WREG_5F_IPICregisterDescription_121123 ;
  GGS_bitSliceTable joker_121157 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_WREGregister_120791.ptr (), constinArgument_inAccessBankSplitOffset, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, var_constantMap_109292, GGS_bool (false), var_WREG_5F_IPICregisterDescription_121123, joker_121157, var_usedRegisters_109326, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3402)) ;
  GGS_registerExpression var_TOSLregister_121226 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("TOSL"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3414)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3415)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3416)), inCompiler COMMA_HERE) ;
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_TOSL_5F_IPICregisterDescription_121557 ;
  GGS_bitSliceTable joker_121591 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TOSLregister_121226.ptr (), constinArgument_inAccessBankSplitOffset, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, var_constantMap_109292, GGS_bool (true), var_TOSL_5F_IPICregisterDescription_121557, joker_121591, var_usedRegisters_109326, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3418)) ;
  GGS_registerExpression var_TOSHregister_121660 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("TOSH"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3430)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3431)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3432)), inCompiler COMMA_HERE) ;
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_TOSH_5F_IPICregisterDescription_121990 ;
  GGS_bitSliceTable joker_122024 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TOSHregister_121660.ptr (), constinArgument_inAccessBankSplitOffset, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, var_constantMap_109292, GGS_bool (true), var_TOSH_5F_IPICregisterDescription_121990, joker_122024, var_usedRegisters_109326, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3434)) ;
  GGS_registerExpression var_TOSUregister_122093 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("TOSU"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3446)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3447)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3448)), inCompiler COMMA_HERE) ;
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_TOSU_5F_IPICregisterDescription_122423 ;
  GGS_bitSliceTable joker_122457 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TOSUregister_122093.ptr (), constinArgument_inAccessBankSplitOffset, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, var_constantMap_109292, GGS_bool (true), var_TOSU_5F_IPICregisterDescription_122423, joker_122457, var_usedRegisters_109326, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3450)) ;
  GGS_ipic_31__38_SequentialInstruction var_ADDWF_5F_WREG_122526 = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3462)), GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_ADDWF (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3463)), var_WREG_5F_IPICregisterDescription_121123, GGS_bool (true), inCompiler COMMA_HERE) ;
  GGS_ipic_31__38_Block var_goto_34_Block_122739 = GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3470)), GGS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3471)), GGS_ipic_31__38_SequentialInstructionList::class_func_listWithValue (var_ADDWF_5F_WREG_122526, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3472)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3472)), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3473)), GGS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3473)), GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3473)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3474)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE) ;
  var_generatedBlockList_111723.addAssignOperation (var_goto_34_Block_122739  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3477)) ;
  GGS_ipic_31__38_SequentialInstructionList var_goto_32_InstructionList_123115 = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  var_goto_32_InstructionList_123115.addAssignOperation (var_ADDWF_5F_WREG_122526, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3480)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3480)) ;
  var_goto_32_InstructionList_123115.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3482)), GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_ADDWF (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3483)), var_TOSL_5F_IPICregisterDescription_121557, GGS_bool (false), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3485)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3481)) ;
  var_goto_32_InstructionList_123115.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3487)), GGS_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3488)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3489)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3486)) ;
  var_goto_32_InstructionList_123115.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3491)), GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_ADDWFC (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3492)), var_TOSH_5F_IPICregisterDescription_121990, GGS_bool (false), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3494)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3490)) ;
  var_goto_32_InstructionList_123115.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3496)), GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::class_func_ADDWFC (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3497)), var_TOSU_5F_IPICregisterDescription_122423, GGS_bool (false), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3501)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3495)) ;
  GGS_ipic_31__38_Block var_goto_32_Block_124071 = GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3505)), GGS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3506)), var_goto_32_InstructionList_123115, GGS_ipic_31__38_ReturnTerminator::init_21_ (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3508)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3509)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE) ;
  var_generatedBlockList_111723.addAssignOperation (var_goto_32_Block_124071  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3512)) ;
  var_entryPoint_111775 = constinArgument_inBootloaderReservedROMsize.readProperty_uint () ;
  UpEnumerator_routineDeclarationList enumerator_124454 (constinArgument_inUserRoutineDeclarationListForBootloaderImplementation) ;
  while (enumerator_124454.hasCurrentObject ()) {
    GalgasBool test_31 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_31) {
      test_31 = enumerator_124454.current_mIsNoReturn (HERE).boolEnum () ;
      if (GalgasBool::boolTrue == test_31) {
        var_generatedBlockList_111723.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (var_entryPoint_111775, enumerator_124454.current_mRoutineName (HERE), GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE), GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (enumerator_124454.current_mRoutineName (HERE).readProperty_location (), enumerator_124454.current_mRoutineName (HERE), GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3521)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3522)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3517)) ;
      }
    }
    if (GalgasBool::boolFalse == test_31) {
      GGS_ipic_31__38_SequentialInstructionList var_instructionList_124849 = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
      GalgasBool test_32 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_32) {
        test_32 = GGS_bool (ComparisonKind::notEqual, enumerator_124454.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3527)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_32) {
          var_instructionList_124849.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::init_21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3528)), enumerator_124454.current_mReturnedBank (HERE), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3528)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3528)) ;
        }
      }
      var_generatedBlockList_111723.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (var_entryPoint_111775, enumerator_124454.current_mRoutineName (HERE), var_instructionList_124849, GGS_ipic_31__38_ReturnTerminator::init_21_ (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3534)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3535)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3530)) ;
    }
    var_entryPoint_111775 = var_entryPoint_111775.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3539)) ;
    enumerator_124454.gotoNextObject () ;
  }
  GGS_stringset var_unusedDeclarationUnicity_125424 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_lstringlist enumerator_125471 (constinArgument_inUnusedRegisterList) ;
  while (enumerator_125471.hasCurrentObject ()) {
    GalgasBool test_33 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_33) {
      test_33 = constinArgument_inRegisterTable.getter_hasKey (enumerator_125471.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3544)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3544)).boolEnum () ;
      if (GalgasBool::boolTrue == test_33) {
        GenericArray <FixItDescription> fixItArray34 ;
        inCompiler->emitSemanticError (enumerator_125471.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_125471.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3545)).add_operation (GGS_string ("' byte is not declared"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3545)), fixItArray34  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3545)) ;
      }
    }
    if (GalgasBool::boolFalse == test_33) {
      GalgasBool test_35 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_35) {
        test_35 = var_unusedDeclarationUnicity_125424.getter_hasKey (enumerator_125471.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3546)).boolEnum () ;
        if (GalgasBool::boolTrue == test_35) {
          GenericArray <FixItDescription> fixItArray36 ;
          inCompiler->emitSemanticWarning (enumerator_125471.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_125471.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3547)).add_operation (GGS_string ("' byte is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3547)), fixItArray36  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3547)) ;
        }
      }
      if (GalgasBool::boolFalse == test_35) {
        GalgasBool test_37 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_37) {
          test_37 = var_usedRegisters_109326.getter_hasKey (enumerator_125471.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3548)).boolEnum () ;
          if (GalgasBool::boolTrue == test_37) {
            GenericArray <FixItDescription> fixItArray38 ;
            inCompiler->emitSemanticWarning (enumerator_125471.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_125471.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3549)).add_operation (GGS_string ("' byte is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3549)), fixItArray38  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3549)) ;
          }
        }
      }
    }
    var_unusedDeclarationUnicity_125424.plusPlusAssignOperation (enumerator_125471.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3551)) ;
    enumerator_125471.gotoNextObject () ;
  }
  UpEnumerator_declaredByteMap enumerator_125982 (constinArgument_inDeclaredByteMap) ;
  while (enumerator_125982.hasCurrentObject ()) {
    GalgasBool test_39 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_39) {
      test_39 = var_usedRegisters_109326.getter_hasKey (enumerator_125982.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3554)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3554)).operator_and (var_unusedDeclarationUnicity_125424.getter_hasKey (enumerator_125982.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3554)).operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3554)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3554)).boolEnum () ;
      if (GalgasBool::boolTrue == test_39) {
        GenericArray <FixItDescription> fixItArray40 ;
        inCompiler->emitSemanticWarning (enumerator_125982.current_lkey (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_125982.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3555)).add_operation (GGS_string ("' byte is unused"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3555)), fixItArray40  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3555)) ;
      }
    }
    enumerator_125982.gotoNextObject () ;
  }
  {
  routine_displayBlockList_3F__26__3F_ (GGS_string ("INTERMEDIATE BLOCK REPRESENTATION"), ioArgument_ioListFileContents, var_generatedBlockList_111723, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3559)) ;
  }
  GalgasBool test_41 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_41) {
    test_41 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3561)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_41) {
      {
      routine_ipic_31__38_OptimizeBlocks_26__26_ (ioArgument_ioListFileContents, var_generatedBlockList_111723, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3562)) ;
      }
      {
      routine_displayBlockList_3F__26__3F_ (GGS_string ("OPTIMIZED INTERMEDIATE BLOCK REPRESENTATION"), ioArgument_ioListFileContents, var_generatedBlockList_111723, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3563)) ;
      }
    }
  }
  GalgasBool test_42 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_42) {
    test_42 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3566)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_42) {
      {
      routine_ipic_31__38_OptimizeBlockOrdering_3F__26__26_ (constinArgument_inSourceFileName, ioArgument_ioListFileContents, var_generatedBlockList_111723, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3567)) ;
      }
    }
  }
  GalgasBool test_43 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_43) {
    test_43 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3574)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_43) {
      {
      routine_ipic_31__38_RelativesResolution_26__26_ (ioArgument_ioListFileContents, var_generatedBlockList_111723, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3575)) ;
      }
    }
  }
  GalgasBool test_44 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_44) {
    test_44 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3581)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (ComparisonKind::notEqual, constinArgument_inProgramKind.objectCompare (GGS_programKind::class_func_userProgram (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3581)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3581)).boolEnum () ;
    if (GalgasBool::boolTrue == test_44) {
      {
      routine_ipic_31__38_StackComputations_26__3F_ (ioArgument_ioListFileContents, var_generatedBlockList_111723, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3582)) ;
      }
    }
  }
  GGS_blockDurationMap var_blockDurationMap_127513 = GGS_blockDurationMap::init (inCompiler COMMA_HERE) ;
  GalgasBool test_45 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_45) {
    test_45 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3589)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_45) {
      {
      routine_ipic_31__38_DurationComputations_26__21_ (var_generatedBlockList_111723, var_blockDurationMap_127513, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3590)) ;
      }
    }
  }
  GalgasBool test_46 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_46) {
    test_46 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3593)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_46) {
      GGS_uint var_usedROMsize_128090 ;
      GGS_generatedCodeMap var_generatedCodeMap_128139 ;
      {
      routine_ipic_31__38_GenerateCode_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__3F__21__21_ (constinArgument_inSourceFileName, constinArgument_inProgramKind, constinArgument_inBootloaderReservedROMsize.readProperty_uint (), constinArgument_inROMSize.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3598)), constinArgument_inProcessorName, constinArgument_inPredefinedRegisters, constinArgument_inRegisterTable, var_dataMap_110727, constinArgument_inActualConfigurationMap, ioArgument_ioListFileContents, var_generatedBlockList_111723, var_usedROMsize_128090, var_generatedCodeMap_128139, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3594)) ;
      }
      GalgasBool test_47 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_47) {
        test_47 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3610)).boolEnum () ;
        if (GalgasBool::boolTrue == test_47) {
          GGS_string var_verboseMessage_128295 = GGS_string ("Resource usage:\n") ;
          var_verboseMessage_128295.plusAssignOperation(GGS_string ("  ROM, used ").add_operation (var_usedROMsize_128090.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3612)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3612)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3612)) ;
          var_verboseMessage_128295.plusAssignOperation(GGS_string (" / ").add_operation (constinArgument_inROMSize.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3613)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3613)).add_operation (GGS_string (" bytes ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3613)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3613)) ;
          var_verboseMessage_128295.plusAssignOperation(var_usedROMsize_128090.multiply_operation (GGS_uint (uint32_t (100U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3614)).divide_operation (constinArgument_inROMSize.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3614)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3614)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3614)).add_operation (GGS_string ("%)\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3614)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3614)) ;
          UpEnumerator_ramBankTable enumerator_128589 (constinArgument_inRamBank) ;
          while (enumerator_128589.hasCurrentObject ()) {
            GGS_uint var_bankSize_128626 = enumerator_128589.current_mLastAddressPlusOne (HERE).substract_operation (enumerator_128589.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3616)) ;
            GGS_uint var_usedSize_128691 = enumerator_128589.current_mFirstFreeAddress (HERE).substract_operation (enumerator_128589.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3617)) ;
            var_verboseMessage_128295.plusAssignOperation(GGS_string ("  Bank '").add_operation (enumerator_128589.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3618)).add_operation (GGS_string ("': "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3618)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3618)) ;
            var_verboseMessage_128295.plusAssignOperation(var_usedSize_128691.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3619)).add_operation (GGS_string (" / "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3619)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3619)) ;
            var_verboseMessage_128295.plusAssignOperation(var_bankSize_128626.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3620)).add_operation (GGS_string (" bytes ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3620)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3620)) ;
            var_verboseMessage_128295.plusAssignOperation(var_usedSize_128691.multiply_operation (GGS_uint (uint32_t (100U)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3621)).divide_operation (var_bankSize_128626, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3621)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3621)).add_operation (GGS_string ("%)\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3621)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3621)) ;
            enumerator_128589.gotoNextObject () ;
          }
          {
          routine_print_3F_ (var_verboseMessage_128295, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3623)) ;
          }
        }
      }
    }
  }
  GalgasBool test_48 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_48) {
    test_48 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3627)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_48) {
      {
      routine_ipic_31__38_PrintDurations_26__3F_ (ioArgument_ioListFileContents, var_blockDurationMap_127513, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas3", 3628)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_NULL buildAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_NULL::method_buildAssemblyCode (GGS_string & /* ioArgument_ioString */,
                                                                      GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                      Compiler * /* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_pseudo_ORG buildAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                               GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG temp_0 = this ;
  ioArgument_ioString.plusAssignOperation(GGS_string ("  ORG ").add_operation (temp_0.readProperty_mOrigin ().getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 23)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 23)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 23)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 23)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_pseudo_LABEL buildAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                                 GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  ioArgument_ioString.plusAssignOperation(temp_0.readProperty_mLabel ().readProperty_string ().add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 31)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 31)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_instruction_FD buildAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_FD::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                                   GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FD temp_0 = this ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FD temp_1 = this ;
  ioArgument_ioString.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mInstruction_5F_FD_5F_base_5F_code (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 39)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 39)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 39)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 39)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 39)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_midrange_5F_intermediate_5F_instruction_5F_FD temp_3 = this ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioString.plusAssignOperation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 41)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    ioArgument_ioString.plusAssignOperation(GGS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 43)) ;
  }
  ioArgument_ioString.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 45)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_instruction_FB buildAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_FB::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                                   GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FB temp_0 = this ;
  ioArgument_ioString.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mBitOrientedOp (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 53)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 53)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 53)) ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FB temp_1 = this ;
  ioArgument_ioString.plusAssignOperation(GGS_string ("  ").add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 54)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 54)) ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_FB temp_2 = this ;
  ioArgument_ioString.plusAssignOperation(GGS_string (", ").add_operation (temp_2.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 55)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 55)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 55)) ;
  ioArgument_ioString.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 56)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_instruction_BitTestSkip buildAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                                            GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssignOperation(GGS_string ("  "), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 64)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioString.plusAssignOperation(GGS_string ("BTFSS"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 66)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    ioArgument_ioString.plusAssignOperation(GGS_string ("BTFSC"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 68)) ;
  }
  const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_2 = this ;
  ioArgument_ioString.plusAssignOperation(GGS_string ("  ").add_operation (temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 70)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 70)) ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip temp_3 = this ;
  ioArgument_ioString.plusAssignOperation(GGS_string (", ").add_operation (temp_3.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 71)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 71)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 71)) ;
  ioArgument_ioString.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 72)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_instruction_F buildAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_F::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                                  GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_F temp_0 = this ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_F temp_1 = this ;
  ioArgument_ioString.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mFinstruction (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 80)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 80)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 80)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 80)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 80)) ;
  ioArgument_ioString.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 81)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_incDecRegisterInCondition buildAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                                           GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_1 = this ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioString.plusAssignOperation(GGS_string ("  ").add_operation (GGS_string ("INCFSZ "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 90)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 90)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    ioArgument_ioString.plusAssignOperation(GGS_string ("  ").add_operation (GGS_string ("DECFSZ "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 92)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 92)) ;
  }
  const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_2 = this ;
  ioArgument_ioString.plusAssignOperation(temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 94)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_4 = this ;
    test_3 = temp_4.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      ioArgument_ioString.plusAssignOperation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 96)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    ioArgument_ioString.plusAssignOperation(GGS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 98)) ;
  }
  ioArgument_ioString.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 100)) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_6 = this ;
    test_5 = temp_6.readProperty_mBranchIfZero ().boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      GGS_string var_localLabel_2998 = GGS_string (".LL").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 102)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 102)) ;
      ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 102)) ;
      ioArgument_ioString.plusAssignOperation(GGS_string ("  GOTO ").add_operation (var_localLabel_2998, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 103)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 103)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 103)) ;
      const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_7 = this ;
      ioArgument_ioString.plusAssignOperation(GGS_string ("  GOTO ").add_operation (temp_7.readProperty_mTargetLabel (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 104)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 104)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 104)) ;
      ioArgument_ioString.plusAssignOperation(var_localLabel_2998.add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 105)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 105)) ;
    }
  }
  if (GalgasBool::boolFalse == test_5) {
    const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_8 = this ;
    ioArgument_ioString.plusAssignOperation(GGS_string ("  GOTO ").add_operation (temp_8.readProperty_mTargetLabel (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 107)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 107)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 107)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_JUMP buildAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JUMP::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                      GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_JUMP temp_0 = this ;
  switch (temp_0.readProperty_mBit_31__31_ ().enumValue ()) {
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::invalid:
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_set:
    {
      ioArgument_ioString.plusAssignOperation(GGS_string ("  BSF PCLATH, 3\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 117)) ;
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_clear:
    {
      ioArgument_ioString.plusAssignOperation(GGS_string ("  BCF PCLATH, 3\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 118)) ;
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_noChange:
    break ;
  }
  const GGS_midrange_5F_intermediate_5F_JUMP temp_1 = this ;
  switch (temp_1.readProperty_mBit_31__32_ ().enumValue ()) {
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::invalid:
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_set:
    {
      ioArgument_ioString.plusAssignOperation(GGS_string ("  BSF PCLATH, 4\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 122)) ;
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_clear:
    {
      ioArgument_ioString.plusAssignOperation(GGS_string ("  BCF PCLATH, 4\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 123)) ;
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_noChange:
    break ;
  }
  const GGS_midrange_5F_intermediate_5F_JUMP temp_2 = this ;
  ioArgument_ioString.plusAssignOperation(GGS_string ("  GOTO   ").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 126)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 126)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 126)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_GOTO buildAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_GOTO::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                      GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_GOTO temp_0 = this ;
  ioArgument_ioString.plusAssignOperation(GGS_string ("  GOTO   ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 134)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 134)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 134)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_JSR buildAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JSR::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                     GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_JSR temp_0 = this ;
  switch (temp_0.readProperty_mBit_31__31_ ().enumValue ()) {
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::invalid:
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_set:
    {
      ioArgument_ioString.plusAssignOperation(GGS_string ("  BSF PCLATH, 3\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 143)) ;
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_clear:
    {
      ioArgument_ioString.plusAssignOperation(GGS_string ("  BCF PCLATH, 3\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 144)) ;
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_noChange:
    break ;
  }
  const GGS_midrange_5F_intermediate_5F_JSR temp_1 = this ;
  switch (temp_1.readProperty_mBit_31__32_ ().enumValue ()) {
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::invalid:
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_set:
    {
      ioArgument_ioString.plusAssignOperation(GGS_string ("  BSF PCLATH, 4\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 148)) ;
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_clear:
    {
      ioArgument_ioString.plusAssignOperation(GGS_string ("  BCF PCLATH, 4\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 149)) ;
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_noChange:
    break ;
  }
  const GGS_midrange_5F_intermediate_5F_JSR temp_2 = this ;
  ioArgument_ioString.plusAssignOperation(GGS_string ("  CALL  ").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 152)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 152)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 152)) ;
  const GGS_midrange_5F_intermediate_5F_JSR temp_3 = this ;
  switch (temp_3.readProperty_mBit_31__31_ ().enumValue ()) {
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::invalid:
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_set:
    {
      ioArgument_ioString.plusAssignOperation(GGS_string ("  BCF PCLATH, 3\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 154)) ;
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_clear:
    {
      ioArgument_ioString.plusAssignOperation(GGS_string ("  BSF PCLATH, 3\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 155)) ;
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_noChange:
    break ;
  }
  const GGS_midrange_5F_intermediate_5F_JSR temp_4 = this ;
  switch (temp_4.readProperty_mBit_31__32_ ().enumValue ()) {
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::invalid:
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_set:
    {
      ioArgument_ioString.plusAssignOperation(GGS_string ("  BCF PCLATH, 4\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 159)) ;
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_clear:
    {
      ioArgument_ioString.plusAssignOperation(GGS_string ("  BSF PCLATH, 4\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 160)) ;
    }
    break ;
  case GGS_midrange_5F_call_5F_goto_5F_bit::Enumeration::enum_noChange:
    break ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_CALL buildAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_CALL::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                      GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_CALL temp_0 = this ;
  ioArgument_ioString.plusAssignOperation(GGS_string ("  CALL  ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 170)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 170)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 170)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_instruction_CLRWDT buildAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                                       GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssignOperation(GGS_string ("  CLRWDT\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 178)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_instruction_CLRW buildAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_CLRW::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                                     GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssignOperation(GGS_string ("  CLRW\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 186)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_instruction_NOP buildAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_NOP::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                                    GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssignOperation(GGS_string ("  NOP\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 194)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_instruction_RETURN buildAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                                       GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssignOperation(GGS_string ("  RETURN\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 202)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_instruction_RETFIE buildAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                                       GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssignOperation(GGS_string ("  RETFIE\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 210)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_instruction_SLEEP buildAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                                      GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioString.plusAssignOperation(GGS_string ("  SLEEP\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 218)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_instruction_literalOperation buildAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                                                 GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = this ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_1 = this ;
  ioArgument_ioString.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mLiteralInstruction (), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 226)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 226)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 226)).add_operation (temp_1.readProperty_mLiteralValue ().getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 226)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 226)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 226)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 226)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_instruction_MNOP buildAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP::method_buildAssemblyCode (GGS_string & ioArgument_ioString,
                                                                                     GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ().objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mOccurrenceFactor ().readProperty_location (), GGS_string ("No generated code"), fixItArray3  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 235)) ;
    }
  }
  GGS_uint var_idx_7012 = GGS_uint (uint32_t (0U)) ;
  const GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_4 = this ;
  if (temp_4.readProperty_mOccurrenceFactor ().readProperty_uint ().isValid ()) {
    uint32_t variant_7022 = temp_4.readProperty_mOccurrenceFactor ().readProperty_uint ().uintValue () ;
    bool loop_7022 = true ;
    while (loop_7022) {
      const GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_5 = this ;
      loop_7022 = GGS_bool (ComparisonKind::lowerThan, var_idx_7012.objectCompare (temp_5.readProperty_mOccurrenceFactor ().readProperty_uint ())).isValid () ;
      if (loop_7022) {
        loop_7022 = GGS_bool (ComparisonKind::lowerThan, var_idx_7012.objectCompare (temp_5.readProperty_mOccurrenceFactor ().readProperty_uint ())).boolValue () ;
      }
      if (loop_7022 && (0 == variant_7022)) {
        loop_7022 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 238)) ;
      }
      if (loop_7022) {
        variant_7022 -= 1 ;
        ioArgument_ioString.plusAssignOperation(GGS_string ("  NOP\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 241)) ;
        var_idx_7012.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 242)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'midrange_build_assembly_code?????!'
//
//--------------------------------------------------------------------------------------------------

void routine_midrange_5F_build_5F_assembly_5F_code_3F__3F__3F__3F__3F__21_ (const GGS_string constinArgument_inProcessorName,
                                                                            const GGS_registerTable constinArgument_inPredefinedRegisters,
                                                                            const GGS_registerTable constinArgument_inAllRegisters,
                                                                            const GGS_midrange_5F_intermediate_5F_instructionList constinArgument_inInstructionList,
                                                                            const GGS_actualConfigurationMap constinArgument_inActualConfigurationMap,
                                                                            GGS_string & outArgument_outAssemblyCode,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outAssemblyCode.drop () ; // Release 'out' argument
  outArgument_outAssemblyCode = GGS_string ("  errorlevel -302 ; No Warning on registers not in bank 0\n") ;
  outArgument_outAssemblyCode.plusAssignOperation(GGS_string ("  errorlevel -306 ; No Warning on crossing page boundary\n\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 256)) ;
  outArgument_outAssemblyCode.plusAssignOperation(GGS_string ("  PROCESSOR ").add_operation (constinArgument_inProcessorName, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 257)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 257)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 257)) ;
  outArgument_outAssemblyCode.plusAssignOperation(GGS_string (";--- Code\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 259)) ;
  outArgument_outAssemblyCode.plusAssignOperation(GGS_string ("  ORG 0\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 260)) ;
  GGS_uint var_bccLabelIndex_7832 = GGS_uint (uint32_t (0U)) ;
  UpEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_7857 (constinArgument_inInstructionList) ;
  while (enumerator_7857.hasCurrentObject ()) {
    callExtensionMethod_buildAssemblyCode ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_7857.current_mInstruction (HERE).ptr (), outArgument_outAssemblyCode, var_bccLabelIndex_7832, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 263)) ;
    enumerator_7857.gotoNextObject () ;
  }
  outArgument_outAssemblyCode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 265)) ;
  outArgument_outAssemblyCode.plusAssignOperation(GGS_string (";--- Prefefined registers\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 267)) ;
  UpEnumerator_registerTable enumerator_8115 (constinArgument_inPredefinedRegisters) ;
  while (enumerator_8115.hasCurrentObject ()) {
    GGS_uint var_firstRegister_8161 ;
    enumerator_8115.current_mRegisterAddressList (HERE).method_first (var_firstRegister_8161, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 269)) ;
    outArgument_outAssemblyCode.plusAssignOperation(enumerator_8115.current_lkey (HERE).readProperty_string ().add_operation (GGS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 270)).add_operation (var_firstRegister_8161.getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 270)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 270)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 270)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 270)) ;
    enumerator_8115.gotoNextObject () ;
  }
  outArgument_outAssemblyCode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 272)) ;
  outArgument_outAssemblyCode.plusAssignOperation(GGS_string (";--- User defined registers (in RAM)\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 274)) ;
  UpEnumerator_registerTable enumerator_8468 (constinArgument_inAllRegisters) ;
  while (enumerator_8468.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = constinArgument_inPredefinedRegisters.getter_hasKey (enumerator_8468.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 276)).operator_not (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 276)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_uint var_firstRegister_8569 ;
        enumerator_8468.current_mRegisterAddressList (HERE).method_first (var_firstRegister_8569, inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 277)) ;
        outArgument_outAssemblyCode.plusAssignOperation(enumerator_8468.current_lkey (HERE).readProperty_string ().add_operation (GGS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 278)).add_operation (var_firstRegister_8569.getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 278)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 278)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 278)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 278)) ;
      }
    }
    enumerator_8468.gotoNextObject () ;
  }
  outArgument_outAssemblyCode.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 281)) ;
  outArgument_outAssemblyCode.plusAssignOperation(GGS_string (";--- Piccolo defined symbol\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 283)) ;
  outArgument_outAssemblyCode.plusAssignOperation(GGS_string ("W EQU 1\n\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 284)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::greaterThan, constinArgument_inActualConfigurationMap.getter_count (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 286)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      outArgument_outAssemblyCode.plusAssignOperation(GGS_string (";--- Configuration\n\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 287)) ;
      UpEnumerator_actualConfigurationMap enumerator_9041 (constinArgument_inActualConfigurationMap) ;
      while (enumerator_9041.hasCurrentObject ()) {
        outArgument_outAssemblyCode.plusAssignOperation(GGS_string ("  __config ").add_operation (enumerator_9041.current_mRegisterAddress (HERE).getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 289)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 289)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 289)).add_operation (enumerator_9041.current_mRegisterValue (HERE).operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 289)).getter_hexString (SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 289)), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 289)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 289)), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 289)) ;
        enumerator_9041.gotoNextObject () ;
      }
    }
  }
  outArgument_outAssemblyCode.plusAssignOperation(GGS_string (";---\n\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 293)) ;
  outArgument_outAssemblyCode.plusAssignOperation(GGS_string ("  END\n\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_ipic_build_assembly_code.galgas3", 294)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ipic18ComputedBraTerminator optimizeTerminator'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::method_optimizeTerminator (const GGS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                        const GGS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                        const GGS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                        const GGS_string /* constinArgument_inBlockLabel */,
                                                                        GGS_bool & /* ioArgument_ioOptimizationDone */,
                                                                        GGS_string & /* ioArgument_ioListFileContents */,
                                                                        GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_ComputedBraTerminator temp_0 = this ;
  outArgument_outOptimizedTerminator = temp_0 ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ipic18ComputedGotoTerminator optimizeTerminator'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::method_optimizeTerminator (const GGS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                         const GGS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                         const GGS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                         const GGS_string /* constinArgument_inBlockLabel */,
                                                                         GGS_bool & /* ioArgument_ioOptimizationDone */,
                                                                         GGS_string & /* ioArgument_ioListFileContents */,
                                                                         GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_ComputedGotoTerminator temp_0 = this ;
  outArgument_outOptimizedTerminator = temp_0 ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ipic18JumpTerminator optimizeTerminator'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_optimizeTerminator (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                 const GGS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                 const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                 const GGS_string constinArgument_inBlockLabel,
                                                                 GGS_bool & ioArgument_ioOptimizationDone,
                                                                 GGS_string & ioArgument_ioListFileContents,
                                                                 GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_JumpTerminator temp_0 = this ;
  outArgument_outOptimizedTerminator = temp_0 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_ipic_31__38_JumpTerminator temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, constinArgument_inBlockLabel.objectCompare (temp_2.readProperty_mLabel ().readProperty_string ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GGS_uint var_targetBlockIndex_2074 ;
      const GGS_ipic_31__38_JumpTerminator temp_3 = this ;
      constinArgument_inSymbolTable.method_searchKey (temp_3.readProperty_mLabel (), var_targetBlockIndex_2074, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 51)) ;
      GGS_ipic_31__38_Block var_targetBlock_2113 = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex_2074, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 52)) ;
      GalgasBool test_4 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_4) {
        test_4 = GGS_bool (ComparisonKind::equal, var_targetBlock_2113.readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas3", 53)))).operator_and (GGS_bool (ComparisonKind::equal, var_targetBlock_2113.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas3", 54)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 53)).operator_and (GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_targetBlock_2113.readProperty_mTerminator ().ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 54)).boolEnum () ;
        if (GalgasBool::boolTrue == test_4) {
          GGS_bool var_optimize_2391 ;
          GalgasBool test_5 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_5) {
            test_5 = GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock_2113.readProperty_mTerminator ().ptr ())).boolEnum () ;
            if (GalgasBool::boolTrue == test_5) {
              GGS_ipic_31__38_JumpTerminator temp_6 ;
              if (var_targetBlock_2113.readProperty_mTerminator ().isValid ()) {
                if (nullptr != dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock_2113.readProperty_mTerminator ().ptr ())) {
                  temp_6 = (cPtr_ipic_31__38_JumpTerminator *) var_targetBlock_2113.readProperty_mTerminator ().ptr () ;
                }else{
                  inCompiler->castError ("ipic_31__38_JumpTerminator", var_targetBlock_2113.readProperty_mTerminator ().ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 58)) ;
                }
              }
              GGS_ipic_31__38_JumpTerminator var_candidate_2502 = temp_6 ;
              const GGS_ipic_31__38_JumpTerminator temp_7 = this ;
              var_optimize_2391 = GGS_bool (ComparisonKind::notEqual, temp_7.readProperty_mLabel ().readProperty_string ().objectCompare (var_candidate_2502.readProperty_mLabel ().readProperty_string ())) ;
            }
          }
          if (GalgasBool::boolFalse == test_5) {
            var_optimize_2391 = GGS_bool (true) ;
          }
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = var_optimize_2391.boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              outArgument_outOptimizedTerminator = var_targetBlock_2113.readProperty_mTerminator () ;
              ioArgument_ioOptimizationDone = GGS_bool (true) ;
              ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [P] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 66)).add_operation (GGS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 66)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 66)) ;
              const GGS_ipic_31__38_JumpTerminator temp_9 = this ;
              ioArgument_ioListFileContents.plusAssignOperation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_JumpTerminator *) temp_9.ptr (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 67)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 67)) ;
              ioArgument_ioListFileContents.plusAssignOperation(GGS_string (" -> "), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 68)) ;
              ioArgument_ioListFileContents.plusAssignOperation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_AbstractBlockTerminator *) outArgument_outOptimizedTerminator.ptr (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 69)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 69)) ;
              ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 70)) ;
            }
          }
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ipic18ConditionalJumpTerminator optimizeTerminator'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ConditionalJumpTerminator::method_optimizeTerminator (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                            const GGS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                            const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                            const GGS_string constinArgument_inBlockLabel,
                                                                            GGS_bool & ioArgument_ioOptimizationDone,
                                                                            GGS_string & ioArgument_ioListFileContents,
                                                                            GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_1 = this ;
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (temp_2.readProperty_mTargetLabelWhenFalse ().readProperty_string ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_3 = this ;
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
      outArgument_outOptimizedTerminator = GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_3.readProperty_mInstructionLocation (), temp_4.readProperty_mTargetLabelWhenFalse (), GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18_optimize_block.galgas3", 92)), inCompiler COMMA_HERE) ;
      ioArgument_ioOptimizationDone = GGS_bool (true) ;
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_5 = this ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [U] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 95)).add_operation (GGS_string (", useless terminator condition: replaced by JUMP "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 95)).add_operation (temp_5.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 95)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 95)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 95)) ;
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticWarning (temp_6.readProperty_mInstructionLocation (), GGS_string ("useless condition deleted"), fixItArray7  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 96)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_bool var_optimized_4067 = GGS_bool (false) ;
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_8 = this ;
    GGS_lstring var_targetLabelWhenTrue_4130 = temp_8.readProperty_mTargetLabelWhenTrue () ;
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_10 = this ;
      test_9 = GGS_bool (ComparisonKind::notEqual, constinArgument_inBlockLabel.objectCompare (temp_10.readProperty_mTargetLabelWhenTrue ().readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        GGS_uint var_targetBlockIndex_4309 ;
        const GGS_ipic_31__38_ConditionalJumpTerminator temp_11 = this ;
        constinArgument_inSymbolTable.method_searchKey (temp_11.readProperty_mTargetLabelWhenTrue (), var_targetBlockIndex_4309, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 102)) ;
        GGS_ipic_31__38_Block var_targetBlock_4350 = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex_4309, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 103)) ;
        GalgasBool test_12 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_12) {
          test_12 = GGS_bool (ComparisonKind::equal, var_targetBlock_4350.readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas3", 104)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_12) {
            test_12 = GGS_bool (ComparisonKind::equal, var_targetBlock_4350.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas3", 105)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_12) {
              GGS_ipic_31__38_JumpTerminator var_targetBlockJumpTerminator_4555 (dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock_4350.readProperty_mTerminator ().ptr ())) ;
              if (nullptr == var_targetBlockJumpTerminator_4555.ptr ()) {
                test_12 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_12) {
                var_targetLabelWhenTrue_4130 = var_targetBlockJumpTerminator_4555.readProperty_mLabel () ;
                GalgasBool test_13 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_13) {
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_14 = this ;
                  test_13 = GGS_bool (ComparisonKind::notEqual, temp_14.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (var_targetLabelWhenTrue_4130.readProperty_string ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_13) {
                    var_optimized_4067 = GGS_bool (true) ;
                    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [P] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 110)).add_operation (GGS_string (", jump optimization: "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 110)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 110)) ;
                    const GGS_ipic_31__38_ConditionalJumpTerminator temp_15 = this ;
                    ioArgument_ioListFileContents.plusAssignOperation(temp_15.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 111)) ;
                    ioArgument_ioListFileContents.plusAssignOperation(GGS_string (" -> "), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 112)) ;
                    ioArgument_ioListFileContents.plusAssignOperation(var_targetLabelWhenTrue_4130.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 113)) ;
                    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 114)) ;
                  }
                }
              }
            }
          }
        }
      }
    }
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_16 = this ;
    GGS_lstring var_targetLabelWhenFalse_5164 = temp_16.readProperty_mTargetLabelWhenFalse () ;
    GalgasBool test_17 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_17) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_18 = this ;
      test_17 = GGS_bool (ComparisonKind::notEqual, constinArgument_inBlockLabel.objectCompare (temp_18.readProperty_mTargetLabelWhenFalse ().readProperty_string ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_17) {
        GGS_uint var_targetBlockIndex_5347 ;
        const GGS_ipic_31__38_ConditionalJumpTerminator temp_19 = this ;
        constinArgument_inSymbolTable.method_searchKey (temp_19.readProperty_mTargetLabelWhenFalse (), var_targetBlockIndex_5347, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 121)) ;
        GGS_ipic_31__38_Block var_targetBlock_5388 = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex_5347, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 122)) ;
        GalgasBool test_20 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_20) {
          test_20 = GGS_bool (ComparisonKind::equal, var_targetBlock_5388.readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas3", 123)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_20) {
            test_20 = GGS_bool (ComparisonKind::equal, var_targetBlock_5388.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas3", 124)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_20) {
              GGS_ipic_31__38_JumpTerminator var_targetBlockJumpTerminator_5591 (dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (var_targetBlock_5388.readProperty_mTerminator ().ptr ())) ;
              if (nullptr == var_targetBlockJumpTerminator_5591.ptr ()) {
                test_20 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_20) {
                var_targetLabelWhenFalse_5164 = var_targetBlockJumpTerminator_5591.readProperty_mLabel () ;
                GalgasBool test_21 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_21) {
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_22 = this ;
                  test_21 = GGS_bool (ComparisonKind::notEqual, temp_22.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (var_targetLabelWhenFalse_5164.readProperty_string ())).boolEnum () ;
                  if (GalgasBool::boolTrue == test_21) {
                    var_optimized_4067 = GGS_bool (true) ;
                    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [P] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 129)).add_operation (GGS_string (", jump optimization: "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 129)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 129)) ;
                    const GGS_ipic_31__38_ConditionalJumpTerminator temp_23 = this ;
                    ioArgument_ioListFileContents.plusAssignOperation(temp_23.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 130)) ;
                    ioArgument_ioListFileContents.plusAssignOperation(GGS_string (" -> "), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 131)) ;
                    ioArgument_ioListFileContents.plusAssignOperation(var_targetLabelWhenFalse_5164.readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 132)) ;
                    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 133)) ;
                  }
                }
              }
            }
          }
        }
      }
    }
    GalgasBool test_24 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_24) {
      test_24 = var_optimized_4067.boolEnum () ;
      if (GalgasBool::boolTrue == test_24) {
        ioArgument_ioOptimizationDone = GGS_bool (true) ;
        const GGS_ipic_31__38_ConditionalJumpTerminator temp_25 = this ;
        const GGS_ipic_31__38_ConditionalJumpTerminator temp_26 = this ;
        const GGS_ipic_31__38_ConditionalJumpTerminator temp_27 = this ;
        const GGS_ipic_31__38_ConditionalJumpTerminator temp_28 = this ;
        outArgument_outOptimizedTerminator = GGS_ipic_31__38_ConditionalJumpTerminator::init_21__21__21__21__21__21_ (temp_25.readProperty_mInstructionLocation (), temp_26.readProperty_mConditionalBranch (), var_targetLabelWhenTrue_4130, temp_27.readProperty_mBranchModeOnTrueLabel (), var_targetLabelWhenFalse_5164, temp_28.readProperty_mBranchModeOnFalseLabel (), inCompiler COMMA_HERE) ;
      }
    }
    if (GalgasBool::boolFalse == test_24) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_29 = this ;
      outArgument_outOptimizedTerminator = temp_29 ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ipic18IncDecRegisterTerminator optimizeTerminator'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_IncDecRegisterTerminator::method_optimizeTerminator (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                           const GGS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                           const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                           const GGS_string constinArgument_inBlockLabel,
                                                                           GGS_bool & ioArgument_ioOptimizationDone,
                                                                           GGS_string & ioArgument_ioListFileContents,
                                                                           GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_optimization_9309 = GGS_bool (false) ;
  GGS_ipic_31__38_SingleInstructionTerminator var_optimizedTrueTerminator_9542 ;
  GGS_ipic_31__38_SingleInstructionTerminator var_optimizedFalseTerminator_9611 ;
  GGS_bool var_identicalTerminators_9652 ;
  const GGS_ipic_31__38_IncDecRegisterTerminator temp_0 = this ;
  callExtensionMethod_getOptimizedTerminators ((cPtr_ipic_31__38_IncDecRegisterTerminator *) temp_0.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimization_9309, ioArgument_ioListFileContents, var_optimizedTrueTerminator_9542, var_optimizedFalseTerminator_9611, var_identicalTerminators_9652, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 216)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_identicalTerminators_9652.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_ipic_31__38_IncDecRegisterTerminator temp_2 = this ;
      outArgument_outOptimizedTerminator = temp_2 ;
      const GGS_ipic_31__38_IncDecRegisterTerminator temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mInstructionLocation (), GGS_string ("useless decf/incf condition should be replaced by decf/incf instruction"), fixItArray4  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 229)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = var_optimization_9309.boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_ipic_31__38_IncDecRegisterTerminator temp_6 = this ;
        const GGS_ipic_31__38_IncDecRegisterTerminator temp_7 = this ;
        const GGS_ipic_31__38_IncDecRegisterTerminator temp_8 = this ;
        const GGS_ipic_31__38_IncDecRegisterTerminator temp_9 = this ;
        outArgument_outOptimizedTerminator = GGS_ipic_31__38_IncDecRegisterTerminator::init_21__21__21__21__21__21_ (temp_6.readProperty_mInstructionLocation (), var_optimizedTrueTerminator_9542, var_optimizedFalseTerminator_9611, temp_7.readProperty_mRegisterDescription (), temp_8.readProperty_mIncrement (), temp_9.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE) ;
        ioArgument_ioOptimizationDone = GGS_bool (true) ;
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      const GGS_ipic_31__38_IncDecRegisterTerminator temp_10 = this ;
      outArgument_outOptimizedTerminator = temp_10 ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18BitTestTerminator optimizeTerminator'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_BitTestTerminator::method_optimizeTerminator (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                   const GGS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                   const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                   const GGS_string constinArgument_inBlockLabel,
                                                                   GGS_bool & ioArgument_ioOptimizationDone,
                                                                   GGS_string & ioArgument_ioListFileContents,
                                                                   GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_optimization_10652 = GGS_bool (false) ;
  GGS_ipic_31__38_SingleInstructionTerminator var_optimizedTrueTerminator_10885 ;
  GGS_ipic_31__38_SingleInstructionTerminator var_optimizedFalseTerminator_10954 ;
  GGS_bool var_identicalTerminators_10995 ;
  const GGS_pic_31__38_BitTestTerminator temp_0 = this ;
  callExtensionMethod_getOptimizedTerminators ((cPtr_pic_31__38_BitTestTerminator *) temp_0.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimization_10652, ioArgument_ioListFileContents, var_optimizedTrueTerminator_10885, var_optimizedFalseTerminator_10954, var_identicalTerminators_10995, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 256)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_identicalTerminators_10995.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      outArgument_outOptimizedTerminator = var_optimizedTrueTerminator_10885 ;
      ioArgument_ioOptimizationDone = GGS_bool (true) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [U] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 270)).add_operation (GGS_string (", useless terminator condition: replaced by "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 270)).add_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) var_optimizedTrueTerminator_10885.ptr (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 270)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 270)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 270)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 270)) ;
      const GGS_pic_31__38_BitTestTerminator temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mInstructionLocation (), GGS_string ("useless condition deleted"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 271)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = var_optimization_10652.boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_pic_31__38_BitTestTerminator temp_5 = this ;
        const GGS_pic_31__38_BitTestTerminator temp_6 = this ;
        const GGS_pic_31__38_BitTestTerminator temp_7 = this ;
        outArgument_outOptimizedTerminator = GGS_pic_31__38_BitTestTerminator::init_21__21__21__21__21_ (temp_5.readProperty_mInstructionLocation (), var_optimizedTrueTerminator_10885, var_optimizedFalseTerminator_10954, temp_6.readProperty_mRegisterDescription (), temp_7.readProperty_mBitNumber (), inCompiler COMMA_HERE) ;
        ioArgument_ioOptimizationDone = GGS_bool (true) ;
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      const GGS_pic_31__38_BitTestTerminator temp_8 = this ;
      outArgument_outOptimizedTerminator = temp_8 ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18RegisterComparisonTerminator optimizeTerminator'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_RegisterComparisonTerminator::method_optimizeTerminator (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                              const GGS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                              const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                              const GGS_string constinArgument_inBlockLabel,
                                                                              GGS_bool & ioArgument_ioOptimizationDone,
                                                                              GGS_string & ioArgument_ioListFileContents,
                                                                              GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_optimization_12127 = GGS_bool (false) ;
  GGS_ipic_31__38_SingleInstructionTerminator var_optimizedTrueTerminator_12354 ;
  GGS_ipic_31__38_SingleInstructionTerminator var_optimizedFalseTerminator_12423 ;
  GGS_bool var_identicalTerminators_12464 ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  callExtensionMethod_getOptimizedTerminators ((cPtr_pic_31__38_RegisterComparisonTerminator *) temp_0.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimization_12127, ioArgument_ioListFileContents, var_optimizedTrueTerminator_12354, var_optimizedFalseTerminator_12423, var_identicalTerminators_12464, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 296)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_identicalTerminators_12464.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      outArgument_outOptimizedTerminator = var_optimizedTrueTerminator_12354 ;
      ioArgument_ioOptimizationDone = GGS_bool (true) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [U] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 310)).add_operation (GGS_string (", useless terminator condition: replaced by "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 310)).add_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) var_optimizedTrueTerminator_12354.ptr (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 310)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 310)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 310)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 310)) ;
      const GGS_pic_31__38_RegisterComparisonTerminator temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mInstructionLocation (), GGS_string ("useless condition deleted"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 311)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = var_optimization_12127.boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_pic_31__38_RegisterComparisonTerminator temp_5 = this ;
        const GGS_pic_31__38_RegisterComparisonTerminator temp_6 = this ;
        const GGS_pic_31__38_RegisterComparisonTerminator temp_7 = this ;
        outArgument_outOptimizedTerminator = GGS_pic_31__38_RegisterComparisonTerminator::init_21__21__21__21__21_ (temp_5.readProperty_mInstructionLocation (), var_optimizedTrueTerminator_12354, var_optimizedFalseTerminator_12423, temp_6.readProperty_mRegisterDescription (), temp_7.readProperty_mComparison (), inCompiler COMMA_HERE) ;
        ioArgument_ioOptimizationDone = GGS_bool (true) ;
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      const GGS_pic_31__38_RegisterComparisonTerminator temp_8 = this ;
      outArgument_outOptimizedTerminator = temp_8 ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@pic18TestRegisterTerminator optimizeTerminator'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_TestRegisterTerminator::method_optimizeTerminator (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                        const GGS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                        const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                        const GGS_string constinArgument_inBlockLabel,
                                                                        GGS_bool & ioArgument_ioOptimizationDone,
                                                                        GGS_string & ioArgument_ioListFileContents,
                                                                        GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_optimization_13602 = GGS_bool (false) ;
  GGS_ipic_31__38_SingleInstructionTerminator var_optimizedTrueTerminator_13829 ;
  GGS_ipic_31__38_SingleInstructionTerminator var_optimizedFalseTerminator_13898 ;
  GGS_bool var_identicalTerminators_13939 ;
  const GGS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  callExtensionMethod_getOptimizedTerminators ((cPtr_pic_31__38_TestRegisterTerminator *) temp_0.ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimization_13602, ioArgument_ioListFileContents, var_optimizedTrueTerminator_13829, var_optimizedFalseTerminator_13898, var_identicalTerminators_13939, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 336)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_identicalTerminators_13939.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      outArgument_outOptimizedTerminator = var_optimizedTrueTerminator_13829 ;
      ioArgument_ioOptimizationDone = GGS_bool (true) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [U] ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 350)).add_operation (GGS_string (", useless terminator condition: replaced by "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 350)).add_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) var_optimizedTrueTerminator_13829.ptr (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 350)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 350)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 350)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 350)) ;
      const GGS_pic_31__38_TestRegisterTerminator temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mInstructionLocation (), GGS_string ("useless condition deleted"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 351)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = var_optimization_13602.boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_pic_31__38_TestRegisterTerminator temp_5 = this ;
        const GGS_pic_31__38_TestRegisterTerminator temp_6 = this ;
        outArgument_outOptimizedTerminator = GGS_pic_31__38_TestRegisterTerminator::init_21__21__21__21_ (temp_5.readProperty_mInstructionLocation (), var_optimizedTrueTerminator_13829, var_optimizedFalseTerminator_13898, temp_6.readProperty_mRegisterDescription (), inCompiler COMMA_HERE) ;
        ioArgument_ioOptimizationDone = GGS_bool (true) ;
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      const GGS_pic_31__38_TestRegisterTerminator temp_7 = this ;
      outArgument_outOptimizedTerminator = temp_7 ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ipic18RetfieTerminator optimizeTerminator'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetfieTerminator::method_optimizeTerminator (const GGS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                   const GGS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                   const GGS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                   const GGS_string /* constinArgument_inBlockLabel */,
                                                                   GGS_bool & /* ioArgument_ioOptimizationDone */,
                                                                   GGS_string & /* ioArgument_ioListFileContents */,
                                                                   GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_RetfieTerminator temp_0 = this ;
  outArgument_outOptimizedTerminator = temp_0 ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ipic18RetlwTerminator optimizeTerminator'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetlwTerminator::method_optimizeTerminator (const GGS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                  const GGS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                  const GGS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                  const GGS_string /* constinArgument_inBlockLabel */,
                                                                  GGS_bool & /* ioArgument_ioOptimizationDone */,
                                                                  GGS_string & /* ioArgument_ioListFileContents */,
                                                                  GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_RetlwTerminator temp_0 = this ;
  outArgument_outOptimizedTerminator = temp_0 ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ipic18ReturnTerminator optimizeTerminator'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ReturnTerminator::method_optimizeTerminator (const GGS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                   const GGS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                   const GGS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                   const GGS_string /* constinArgument_inBlockLabel */,
                                                                   GGS_bool & /* ioArgument_ioOptimizationDone */,
                                                                   GGS_string & /* ioArgument_ioListFileContents */,
                                                                   GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_ReturnTerminator temp_0 = this ;
  outArgument_outOptimizedTerminator = temp_0 ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ipic18ComputedRETLWTerminator optimizeTerminator'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::method_optimizeTerminator (const GGS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                          const GGS_optimizeFlagStruct /* constinArgument_inOptimizeFlagStruct */,
                                                                          const GGS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                          const GGS_string /* constinArgument_inBlockLabel */,
                                                                          GGS_bool & /* ioArgument_ioOptimizationDone */,
                                                                          GGS_string & /* ioArgument_ioListFileContents */,
                                                                          GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outOptimizedTerminator,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_ComputedRETLWTerminator temp_0 = this ;
  outArgument_outOptimizedTerminator = temp_0 ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'enterGoto2block??&'
//
//--------------------------------------------------------------------------------------------------

void routine_enterGoto_32_block_3F__3F__26_ (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                             const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                             GGS_stringset & ioArgument_ioReferencedBlockSet,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (GGS_string ("_computed_goto_2") COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 426)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas3", 426)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioReferencedBlockSet.plusPlusAssignOperation (GGS_string ("_computed_goto_2")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 427)) ;
      GGS_uint var_blockIndex_17184 ;
      constinArgument_inSymbolTable.method_searchKey (GGS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_optimize_block.galgas3", 428)), var_blockIndex_17184, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 428)) ;
      GGS_ipic_31__38_Block var_b_17217 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_17184, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 429)) ;
      extensionMethod_enterReferencedLabels (var_b_17217, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 430)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'enterGoto4block??&'
//
//--------------------------------------------------------------------------------------------------

void routine_enterGoto_34_block_3F__3F__26_ (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                             const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                             GGS_stringset & ioArgument_ioReferencedBlockSet,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (GGS_string ("_computed_goto_4") COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 444)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas3", 444)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioReferencedBlockSet.plusPlusAssignOperation (GGS_string ("_computed_goto_4")  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 445)) ;
      GGS_uint var_blockIndex_17792 ;
      constinArgument_inSymbolTable.method_searchKey (GGS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_optimize_block.galgas3", 446)), var_blockIndex_17792, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 446)) ;
      GGS_ipic_31__38_Block var_b_17825 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_17792, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 447)) ;
      extensionMethod_enterReferencedLabels (var_b_17825, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 448)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ipic18ComputedRETLWTerminator enterTerminatorReferencedLabels'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::method_enterTerminatorReferencedLabels (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                       const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                       GGS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_enterGoto_32_block_3F__3F__26_ (constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 469)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ipic18ComputedBraTerminator enterTerminatorReferencedLabels'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::method_enterTerminatorReferencedLabels (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                     const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                     GGS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_enterGoto_32_block_3F__3F__26_ (constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 482)) ;
  }
  const GGS_ipic_31__38_ComputedBraTerminator temp_0 = this ;
  UpEnumerator_lstringlist enumerator_19041 (temp_0.readProperty_mTargetLabels ()) ;
  while (enumerator_19041.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = ioArgument_ioReferencedBlockSet.getter_hasKey (enumerator_19041.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 488)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas3", 488)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        ioArgument_ioReferencedBlockSet.plusPlusAssignOperation (enumerator_19041.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 489)) ;
        GGS_uint var_blockIndex_19232 ;
        constinArgument_inSymbolTable.method_searchKey (enumerator_19041.current_mValue (HERE), var_blockIndex_19232, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 490)) ;
        GGS_ipic_31__38_Block var_b_19267 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_19232, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 491)) ;
        extensionMethod_enterReferencedLabels (var_b_19267, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 492)) ;
      }
    }
    enumerator_19041.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ipic18ComputedGotoTerminator enterTerminatorReferencedLabels'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::method_enterTerminatorReferencedLabels (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                      const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                      GGS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_enterGoto_34_block_3F__3F__26_ (constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 507)) ;
  }
  const GGS_ipic_31__38_ComputedGotoTerminator temp_0 = this ;
  UpEnumerator_lstringlist enumerator_19830 (temp_0.readProperty_mTargetLabels ()) ;
  while (enumerator_19830.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = ioArgument_ioReferencedBlockSet.getter_hasKey (enumerator_19830.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 513)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas3", 513)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        ioArgument_ioReferencedBlockSet.plusPlusAssignOperation (enumerator_19830.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 514)) ;
        GGS_uint var_blockIndex_20021 ;
        constinArgument_inSymbolTable.method_searchKey (enumerator_19830.current_mValue (HERE), var_blockIndex_20021, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 515)) ;
        GGS_ipic_31__38_Block var_b_20056 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_20021, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 516)) ;
        extensionMethod_enterReferencedLabels (var_b_20056, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 517)) ;
      }
    }
    enumerator_19830.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ipic18JumpTerminator enterTerminatorReferencedLabels'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_enterTerminatorReferencedLabels (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                              const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                              GGS_stringset & ioArgument_ioReferencedBlockSet,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_JumpTerminator temp_1 = this ;
    test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (temp_1.readProperty_mLabel ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 532)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas3", 532)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_ipic_31__38_JumpTerminator temp_2 = this ;
      ioArgument_ioReferencedBlockSet.plusPlusAssignOperation (temp_2.readProperty_mLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 533)) ;
      GGS_uint var_blockIndex_20681 ;
      const GGS_ipic_31__38_JumpTerminator temp_3 = this ;
      constinArgument_inSymbolTable.method_searchKey (temp_3.readProperty_mLabel (), var_blockIndex_20681, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 534)) ;
      GGS_ipic_31__38_Block var_b_20714 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_20681, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 535)) ;
      extensionMethod_enterReferencedLabels (var_b_20714, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 536)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ipic18ConditionalJumpTerminator enterTerminatorReferencedLabels'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ConditionalJumpTerminator::method_enterTerminatorReferencedLabels (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                         const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                         GGS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_1 = this ;
    test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (temp_1.readProperty_mTargetLabelWhenTrue ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 550)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas3", 550)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
      ioArgument_ioReferencedBlockSet.plusPlusAssignOperation (temp_2.readProperty_mTargetLabelWhenTrue ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 551)) ;
      GGS_uint var_blockIndex_21374 ;
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_3 = this ;
      constinArgument_inSymbolTable.method_searchKey (temp_3.readProperty_mTargetLabelWhenTrue (), var_blockIndex_21374, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 552)) ;
      GGS_ipic_31__38_Block var_b_21407 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_21374, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 553)) ;
      extensionMethod_enterReferencedLabels (var_b_21407, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 554)) ;
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_5 = this ;
    test_4 = ioArgument_ioReferencedBlockSet.getter_hasKey (temp_5.readProperty_mTargetLabelWhenFalse ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 560)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas3", 560)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_6 = this ;
      ioArgument_ioReferencedBlockSet.plusPlusAssignOperation (temp_6.readProperty_mTargetLabelWhenFalse ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 561)) ;
      GGS_uint var_blockIndex_21774 ;
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_7 = this ;
      constinArgument_inSymbolTable.method_searchKey (temp_7.readProperty_mTargetLabelWhenFalse (), var_blockIndex_21774, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 562)) ;
      GGS_ipic_31__38_Block var_b_21807 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_21774, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 563)) ;
      extensionMethod_enterReferencedLabels (var_b_21807, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 564)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ipic18SingleInstructionTerminator enterTerminatorReferencedLabels'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_SingleInstructionTerminator::method_enterTerminatorReferencedLabels (const GGS_symbolTableForBlockOptimization /* constinArgument_inSymbolTable */,
                                                                                           const GGS_ipic_31__38_BlockList /* constinArgument_inBlockList */,
                                                                                           GGS_stringset & /* ioArgument_ioReferencedBlockSet */,
                                                                                           Compiler * /* inCompiler */
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ipic18AbstractConditionTerminator enterTerminatorReferencedLabels'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_AbstractConditionTerminator::method_enterTerminatorReferencedLabels (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                           const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                           GGS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_AbstractConditionTerminator temp_0 = this ;
  callExtensionMethod_enterTerminatorReferencedLabels ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 586)) ;
  const GGS_ipic_31__38_AbstractConditionTerminator temp_1 = this ;
  callExtensionMethod_enterTerminatorReferencedLabels ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 587)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ipic18_intermediate_JSR enterInstructionReferencedLabels'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_JSR::method_enterInstructionReferencedLabels (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                        const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                        GGS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_1 = this ;
    test_0 = ioArgument_ioReferencedBlockSet.getter_hasKey (temp_1.readProperty_mTargetLabel ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 608)).operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas3", 608)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_2 = this ;
      ioArgument_ioReferencedBlockSet.plusPlusAssignOperation (temp_2.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 609)) ;
      GGS_uint var_blockIndex_23765 ;
      const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_3 = this ;
      constinArgument_inSymbolTable.method_searchKey (temp_3.readProperty_mTargetLabel (), var_blockIndex_23765, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 610)) ;
      GGS_ipic_31__38_Block var_b_23798 = constinArgument_inBlockList.getter_mBlockAtIndex (var_blockIndex_23765, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 611)) ;
      extensionMethod_enterReferencedLabels (var_b_23798, constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 612)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ipic18_intermediate_instruction_computed_rcall enterInstructionReferencedLabels'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::method_enterInstructionReferencedLabels (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                                     const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                                     GGS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  routine_enterGoto_34_block_3F__3F__26_ (constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 626)) ;
  }
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_0 = this ;
  UpEnumerator_ipic_31__38_SequentialInstructionList enumerator_24377 (temp_0.readProperty_mTargetInstructions ()) ;
  while (enumerator_24377.hasCurrentObject ()) {
    callExtensionMethod_enterInstructionReferencedLabels ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_24377.current_mInstruction (HERE).ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 632)) ;
    enumerator_24377.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ipic18_condition_skip_instruction enterInstructionReferencedLabels'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::method_enterInstructionReferencedLabels (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                     const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                     GGS_stringset & ioArgument_ioReferencedBlockSet,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_condition_5F_skip_5F_instruction temp_0 = this ;
  callExtensionMethod_enterInstructionReferencedLabels ((cPtr_ipic_31__38_SequentialInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inSymbolTable, constinArgument_inBlockList, ioArgument_ioReferencedBlockSet, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 646)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ipic18_intermediate_JSR optimizeInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_JSR::method_optimizeInstruction (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                           const GGS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                           const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                           const GGS_lstring constinArgument_inBlockLabel,
                                                                           GGS_bool & outArgument_outOptimizationDone,
                                                                           GGS_string & ioArgument_ioListFileContents,
                                                                           GGS_ipic_31__38_SequentialInstruction & outArgument_outOptimizedInstruction,
                                                                           GGS_bool & outArgument_outNOPsubstitution,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = this ;
  outArgument_outOptimizedInstruction = temp_0 ;
  outArgument_outOptimizationDone = GGS_bool (false) ;
  outArgument_outNOPsubstitution = GGS_bool (false) ;
  GGS_uint var_targetBlockIndex_26296 ;
  const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_1 = this ;
  constinArgument_inSymbolTable.method_searchKey (temp_1.readProperty_mTargetLabel (), var_targetBlockIndex_26296, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 689)) ;
  GGS_ipic_31__38_Block var_targetBloc_26333 = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex_26296, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 690)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = constinArgument_inOptimizeFlagStruct.readProperty_mRemoveEmptyRoutine ().operator_and (GGS_bool (ComparisonKind::equal, var_targetBloc_26333.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas3", 693)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 692)).operator_and (GGS_bool (ComparisonKind::equal, var_targetBloc_26333.readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas3", 694)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 693)).operator_and (GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (var_targetBloc_26333.readProperty_mTerminator ().ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 694)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      outArgument_outOptimizationDone = GGS_bool (true) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [E] ").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 697)).add_operation (GGS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 697)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 697)) ;
      const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_3 = this ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("call to empty ").add_operation (temp_3.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 698)).add_operation (GGS_string (" routine deleted"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 698)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 698)) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 699)) ;
      const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_4 = this ;
      outArgument_outOptimizedInstruction = GGS_ipic_31__38_InstructionWithNoOperand::init_21__21_ (temp_4.readProperty_mInstructionLocation (), GGS_pic_31__38_InstructionWithNoOperandKind::class_func_NOP (SOURCE_FILE ("ipic18_optimize_block.galgas3", 700)), inCompiler COMMA_HERE) ;
      outArgument_outNOPsubstitution = GGS_bool (true) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = constinArgument_inOptimizeFlagStruct.readProperty_mJSRtoRETLWreplacedByMOVLW ().operator_and (GGS_bool (ComparisonKind::equal, var_targetBloc_26333.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas3", 704)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 703)).operator_and (GGS_bool (ComparisonKind::equal, var_targetBloc_26333.readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas3", 705)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 704)).operator_and (GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (var_targetBloc_26333.readProperty_mTerminator ().ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 705)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GGS_ipic_31__38_RetlwTerminator temp_6 ;
        if (var_targetBloc_26333.readProperty_mTerminator ().isValid ()) {
          if (nullptr != dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (var_targetBloc_26333.readProperty_mTerminator ().ptr ())) {
            temp_6 = (cPtr_ipic_31__38_RetlwTerminator *) var_targetBloc_26333.readProperty_mTerminator ().ptr () ;
          }else{
            inCompiler->castError ("ipic_31__38_RetlwTerminator", var_targetBloc_26333.readProperty_mTerminator ().ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 707)) ;
          }
        }
        GGS_ipic_31__38_RetlwTerminator var_t_27401 = temp_6 ;
        outArgument_outOptimizationDone = GGS_bool (true) ;
        ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [R] ").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 709)).add_operation (GGS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 709)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 709)) ;
        const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_7 = this ;
        ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("call to RETLW ").add_operation (temp_7.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 710)).add_operation (GGS_string (" routine transformed to MOVLW"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 710)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 710)) ;
        ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 711)) ;
        const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_8 = this ;
        outArgument_outOptimizedInstruction = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_8.readProperty_mInstructionLocation (), GGS_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("ipic18_optimize_block.galgas3", 714)), var_t_27401.readProperty_mLiteralValue (), inCompiler COMMA_HERE) ;
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        test_9 = constinArgument_inOptimizeFlagStruct.readProperty_mJSRtoOneInstructionRoutineReplacedByInstruction ().operator_and (GGS_bool (ComparisonKind::equal, var_targetBloc_26333.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas3", 718)).objectCompare (GGS_uint (uint32_t (1U)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 717)).operator_and (GGS_bool (ComparisonKind::equal, var_targetBloc_26333.readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas3", 719)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 718)).operator_and (GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (var_targetBloc_26333.readProperty_mTerminator ().ptr ())) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 719)).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          outArgument_outOptimizedInstruction = var_targetBloc_26333.readProperty_mInstructionList ().getter_mInstructionAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 721)) ;
          outArgument_outOptimizationDone = GGS_bool (true) ;
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [I] ").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 723)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 723)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 723)) ;
          const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_10 = this ;
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("call to single instruction routine ").add_operation (temp_10.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 724)).add_operation (GGS_string (" replaced by this single instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 724)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 724)) ;
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 725)) ;
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ipic18_intermediate_instruction_computed_rcall optimizeInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::method_optimizeInstruction (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                        const GGS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                                                        const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                        const GGS_lstring constinArgument_inBlockLabel,
                                                                                                        GGS_bool & outArgument_outOptimizationDone,
                                                                                                        GGS_string & ioArgument_ioListFileContents,
                                                                                                        GGS_ipic_31__38_SequentialInstruction & outArgument_outOptimizedInstruction,
                                                                                                        GGS_bool & outArgument_outNOPsubstitution,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOptimizationDone = GGS_bool (false) ;
  outArgument_outNOPsubstitution = GGS_bool (false) ;
  GGS_ipic_31__38_SequentialInstructionList var_optimizedInstructionList_29158 = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_0 = this ;
  UpEnumerator_ipic_31__38_SequentialInstructionList enumerator_29211 (temp_0.readProperty_mTargetInstructions ()) ;
  while (enumerator_29211.hasCurrentObject ()) {
    GGS_bool var_opt_29260 = GGS_bool (false) ;
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38__5F_intermediate_5F_JSR *> (enumerator_29211.current_mInstruction (HERE).ptr ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GGS_ipic_31__38__5F_intermediate_5F_JSR temp_2 ;
        if (enumerator_29211.current_mInstruction (HERE).isValid ()) {
          if (nullptr != dynamic_cast <const cPtr_ipic_31__38__5F_intermediate_5F_JSR *> (enumerator_29211.current_mInstruction (HERE).ptr ())) {
            temp_2 = (cPtr_ipic_31__38__5F_intermediate_5F_JSR *) enumerator_29211.current_mInstruction (HERE).ptr () ;
          }else{
            inCompiler->castError ("ipic_31__38__5F_intermediate_5F_JSR", enumerator_29211.current_mInstruction (HERE).ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 748)) ;
          }
        }
        GGS_ipic_31__38__5F_intermediate_5F_JSR var_jsr_29365 = temp_2 ;
        GGS_uint var_targetBlockIndex_29476 ;
        constinArgument_inSymbolTable.method_searchKey (var_jsr_29365.readProperty_mTargetLabel (), var_targetBlockIndex_29476, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 749)) ;
        GGS_ipic_31__38_Block var_targetBloc_29517 = constinArgument_inBlockList.getter_mBlockAtIndex (var_targetBlockIndex_29476, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 750)) ;
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = GGS_bool (nullptr != dynamic_cast <const cPtr_ipic_31__38_ReturnTerminator *> (var_targetBloc_29517.readProperty_mTerminator ().ptr ())).operator_and (GGS_bool (ComparisonKind::equal, var_targetBloc_29517.readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas3", 752)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 751)).boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            GalgasBool test_4 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_4) {
              test_4 = constinArgument_inOptimizeFlagStruct.readProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank ().operator_and (GGS_bool (ComparisonKind::equal, var_targetBloc_29517.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas3", 754)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 753)).boolEnum () ;
              if (GalgasBool::boolTrue == test_4) {
                var_opt_29260 = GGS_bool (true) ;
                outArgument_outOptimizationDone = GGS_bool (true) ;
                var_optimizedInstructionList_29158.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::init_21__21_ (var_jsr_29365.readProperty_mInstructionLocation (), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas3", 757)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 757)) ;
                ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [e] ").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 758)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 758)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 758)) ;
                ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("JSR ").add_operation (var_jsr_29365.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 759)).add_operation (GGS_string (" to empty routine replaced by BLANK 0"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 759)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 759)) ;
                ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 760)) ;
              }
            }
            if (GalgasBool::boolFalse == test_4) {
              GalgasBool test_5 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_5) {
                test_5 = constinArgument_inOptimizeFlagStruct.readProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction ().operator_and (GGS_bool (ComparisonKind::equal, var_targetBloc_29517.readProperty_mInstructionList ().getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas3", 762)).objectCompare (GGS_uint (uint32_t (1U)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 761)).boolEnum () ;
                if (GalgasBool::boolTrue == test_5) {
                  GGS_ipic_31__38_SequentialInstruction var_inst_30507 = var_targetBloc_29517.readProperty_mInstructionList ().getter_mInstructionAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 763)) ;
                  GalgasBool test_6 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_6) {
                    test_6 = GGS_bool (ComparisonKind::equal, callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) var_inst_30507.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 764)).objectCompare (GGS_uint (uint32_t (2U)))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_6) {
                      var_opt_29260 = GGS_bool (true) ;
                      outArgument_outOptimizationDone = GGS_bool (true) ;
                      var_optimizedInstructionList_29158.addAssignOperation (var_inst_30507, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas3", 767)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 767)) ;
                      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [i] ").add_operation (constinArgument_inBlockLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 768)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 768)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 768)) ;
                      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("JSR ").add_operation (var_jsr_29365.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 769)).add_operation (GGS_string (" to one instruction routine replaced by routine instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 769)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 769)) ;
                      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 770)) ;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    GalgasBool test_7 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_7) {
      test_7 = var_opt_29260.operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas3", 775)).boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        var_optimizedInstructionList_29158.addAssignOperation (enumerator_29211.current_mInstruction (HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas3", 776)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 776)) ;
      }
    }
    enumerator_29211.gotoNextObject () ;
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = outArgument_outOptimizationDone.boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_9 = this ;
      const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_10 = this ;
      outArgument_outOptimizedInstruction = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::init_21__21__21_ (temp_9.readProperty_mInstructionLocation (), var_optimizedInstructionList_29158, temp_10.readProperty_mUsesRCALL (), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_8) {
    const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_11 = this ;
    outArgument_outOptimizedInstruction = temp_11 ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ipic18_skip_instruction_BitTestSkip optimizeInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::method_optimizeInstruction (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                          const GGS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                                          const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                          const GGS_lstring constinArgument_inBlockLabel,
                                                                                          GGS_bool & outArgument_outOptimizationDone,
                                                                                          GGS_string & ioArgument_ioListFileContents,
                                                                                          GGS_ipic_31__38_SequentialInstruction & outArgument_outOptimizedInstruction,
                                                                                          GGS_bool & outArgument_outNOPsubstitution,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outNOPsubstitution = GGS_bool (false) ;
  GGS_ipic_31__38_SequentialInstruction var_optimizedEmbeddedInstruction_32130 ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_0 = this ;
  GGS_bool joker_32164 ; // Joker input parameter
  callExtensionMethod_optimizeInstruction ((cPtr_ipic_31__38_SequentialInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, outArgument_outOptimizationDone, ioArgument_ioListFileContents, var_optimizedEmbeddedInstruction_32130, joker_32164, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 802)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = outArgument_outOptimizationDone.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_2 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_3 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_4 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_5 = this ;
      outArgument_outOptimizedInstruction = GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::init_21__21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), var_optimizedEmbeddedInstruction_32130, temp_3.readProperty_mSkipIfSet (), temp_4.readProperty_mRegisterDescription (), temp_5.readProperty_mBitNumber (), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_6 = this ;
    outArgument_outOptimizedInstruction = temp_6 ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ipic18_skip_instruction_compare_register optimizeInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::method_optimizeInstruction (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                                  const GGS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                                                  const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                                  const GGS_lstring constinArgument_inBlockLabel,
                                                                                                  GGS_bool & outArgument_outOptimizationDone,
                                                                                                  GGS_string & ioArgument_ioListFileContents,
                                                                                                  GGS_ipic_31__38_SequentialInstruction & outArgument_outOptimizedInstruction,
                                                                                                  GGS_bool & outArgument_outNOPsubstitution,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outNOPsubstitution = GGS_bool (false) ;
  GGS_ipic_31__38_SequentialInstruction var_optimizedEmbeddedInstruction_33208 ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_0 = this ;
  GGS_bool joker_33242 ; // Joker input parameter
  callExtensionMethod_optimizeInstruction ((cPtr_ipic_31__38_SequentialInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, outArgument_outOptimizationDone, ioArgument_ioListFileContents, var_optimizedEmbeddedInstruction_33208, joker_33242, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 837)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = outArgument_outOptimizationDone.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_2 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_3 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_4 = this ;
      outArgument_outOptimizedInstruction = GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::init_21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), var_optimizedEmbeddedInstruction_33208, temp_3.readProperty_mCompareInstruction (), temp_4.readProperty_mRegisterDescription (), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_5 = this ;
    outArgument_outOptimizedInstruction = temp_5 ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@ipic18_skip_instruction_FDA optimizeInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::method_optimizeInstruction (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                                  const GGS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                                  const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                                  const GGS_lstring constinArgument_inBlockLabel,
                                                                                  GGS_bool & outArgument_outOptimizationDone,
                                                                                  GGS_string & ioArgument_ioListFileContents,
                                                                                  GGS_ipic_31__38_SequentialInstruction & outArgument_outOptimizedInstruction,
                                                                                  GGS_bool & outArgument_outNOPsubstitution,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outNOPsubstitution = GGS_bool (false) ;
  GGS_ipic_31__38_SequentialInstruction var_optimizedEmbeddedInstruction_34264 ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_0 = this ;
  GGS_bool joker_34298 ; // Joker input parameter
  callExtensionMethod_optimizeInstruction ((cPtr_ipic_31__38_SequentialInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, outArgument_outOptimizationDone, ioArgument_ioListFileContents, var_optimizedEmbeddedInstruction_34264, joker_34298, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 871)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = outArgument_outOptimizationDone.boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_2 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_3 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_4 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_5 = this ;
      outArgument_outOptimizedInstruction = GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::init_21__21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), var_optimizedEmbeddedInstruction_34264, temp_3.readProperty_mInstruction_5F_FDA_5F_base_5F_code (), temp_4.readProperty_mRegisterDescription (), temp_5.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_6 = this ;
    outArgument_outOptimizedInstruction = temp_6 ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'instructionListOptimization?????!&!'
//
//--------------------------------------------------------------------------------------------------

void routine_instructionListOptimization_3F__3F__3F__3F__3F__21__26__21_ (const GGS_symbolTableForBlockOptimization constinArgument_inSymbolTable,
                                                                          const GGS_optimizeFlagStruct constinArgument_inOptimizeFlagStruct,
                                                                          const GGS_ipic_31__38_BlockList constinArgument_inBlockList,
                                                                          const GGS_ipic_31__38_SequentialInstructionList constinArgument_inInstructionList,
                                                                          const GGS_lstring constinArgument_inBlockLabel,
                                                                          GGS_bool & outArgument_outOptimizationDone,
                                                                          GGS_string & ioArgument_ioListFileContents,
                                                                          GGS_ipic_31__38_SequentialInstructionList & outArgument_outOptimizedInstructionList,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outOptimizationDone.drop () ; // Release 'out' argument
  outArgument_outOptimizedInstructionList.drop () ; // Release 'out' argument
  outArgument_outOptimizationDone = GGS_bool (false) ;
  outArgument_outOptimizedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  UpEnumerator_ipic_31__38_SequentialInstructionList enumerator_35329 (constinArgument_inInstructionList) ;
  while (enumerator_35329.hasCurrentObject ()) {
    GGS_bool var_optimizationDone_35504 ;
    GGS_ipic_31__38_SequentialInstruction var_optimizedInstruction_35590 ;
    GGS_bool var_NOPsubstitution_35629 ;
    callExtensionMethod_optimizeInstruction ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_35329.current_mInstruction (HERE).ptr (), constinArgument_inSymbolTable, constinArgument_inOptimizeFlagStruct, constinArgument_inBlockList, constinArgument_inBlockLabel, var_optimizationDone_35504, ioArgument_ioListFileContents, var_optimizedInstruction_35590, var_NOPsubstitution_35629, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 911)) ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = var_optimizationDone_35504.boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        outArgument_outOptimizationDone = GGS_bool (true) ;
      }
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = var_NOPsubstitution_35629.operator_not (SOURCE_FILE ("ipic18_optimize_block.galgas3", 924)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        outArgument_outOptimizedInstructionList.addAssignOperation (var_optimizedInstruction_35590, GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas3", 925)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 925)) ;
      }
    }
    enumerator_35329.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'ipic18OptimizeBlocks&&'
//
//--------------------------------------------------------------------------------------------------

void routine_ipic_31__38_OptimizeBlocks_26__26_ (GGS_string & ioArgument_ioListFileContents,
                                                 GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                 Compiler * inCompiler
                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_optimizeFlagStruct var_optimizeFlagStruct_41389 = GGS_optimizeFlagStruct::init_21__21__21__21__21__21__21_ (GGS_bool (gOption_piccoloOptions_performOptimizations.readProperty_value ()).operator_or (GGS_string (gOption_piccoloOptions_optimizationFlags.readProperty_value ()).getter_containsCharacter (GGS_char (utf32 (69)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1081)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1081)), GGS_bool (gOption_piccoloOptions_performOptimizations.readProperty_value ()).operator_or (GGS_string (gOption_piccoloOptions_optimizationFlags.readProperty_value ()).getter_containsCharacter (GGS_char (utf32 (82)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1082)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1082)), GGS_bool (gOption_piccoloOptions_performOptimizations.readProperty_value ()).operator_or (GGS_string (gOption_piccoloOptions_optimizationFlags.readProperty_value ()).getter_containsCharacter (GGS_char (utf32 (74)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1083)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1083)), GGS_bool (gOption_piccoloOptions_performOptimizations.readProperty_value ()).operator_or (GGS_string (gOption_piccoloOptions_optimizationFlags.readProperty_value ()).getter_containsCharacter (GGS_char (utf32 (77)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1084)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1084)), GGS_bool (gOption_piccoloOptions_performOptimizations.readProperty_value ()).operator_or (GGS_string (gOption_piccoloOptions_optimizationFlags.readProperty_value ()).getter_containsCharacter (GGS_char (utf32 (73)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1085)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1085)), GGS_bool (gOption_piccoloOptions_performOptimizations.readProperty_value ()).operator_or (GGS_string (gOption_piccoloOptions_optimizationFlags.readProperty_value ()).getter_containsCharacter (GGS_char (utf32 (105)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1086)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1086)), GGS_bool (gOption_piccoloOptions_performOptimizations.readProperty_value ()).operator_or (GGS_string (gOption_piccoloOptions_optimizationFlags.readProperty_value ()).getter_containsCharacter (GGS_char (utf32 (101)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1087)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1087)), inCompiler COMMA_HERE) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1090)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1090)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1090)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("BLOCK REPRESENTATION OPTIMIZATION").getter_leftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1091)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1091)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1091)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1091)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1092)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1092)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1092)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Optimization flags:\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1093)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [D] Dead code elimination: always enabled\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1095)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [E] Empty routine elimination: ").add_operation (extensionGetter_flagValue (var_optimizeFlagStruct_41389.readProperty_mRemoveEmptyRoutine (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1096)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1096)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1096)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1096)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [e] In Computed RCALL, empty routine call replaced by BLANK: ").add_operation (extensionGetter_flagValue (var_optimizeFlagStruct_41389.readProperty_mJSRtoEmptyRoutineInComputedRCALLreplacedByBlank (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1097)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1097)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1097)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1097)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [I] Call to one instruction routine replaced by instruction: ").add_operation (extensionGetter_flagValue (var_optimizeFlagStruct_41389.readProperty_mJSRtoOneInstructionRoutineReplacedByInstruction (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1098)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1098)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1098)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1098)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [i] In Computed RCALL, rcall to one instruction routine replaced by instruction: ").add_operation (extensionGetter_flagValue (var_optimizeFlagStruct_41389.readProperty_mJSRtoOneInstructionRoutineInComputedRCALLreplacedByInstruction (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1099)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1099)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1099)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1099)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [J] JSR followed by RETURN replaced by JUMP: ").add_operation (extensionGetter_flagValue (var_optimizeFlagStruct_41389.readProperty_mJSRfollowedByRETreplacedByJUMP (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1100)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1100)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1100)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1100)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [M] MOVLW followed by RETURN replaced by RETLW: ").add_operation (extensionGetter_flagValue (var_optimizeFlagStruct_41389.readProperty_mMOVLWfollowedByRETreplacedByRETLW (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1101)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1101)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1101)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1101)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [P] JUMP propagation: always enabled\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1102)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [R] Call to RETLW replaced by MOVLW: ").add_operation (extensionGetter_flagValue (var_optimizeFlagStruct_41389.readProperty_mJSRtoRETLWreplacedByMOVLW (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1103)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1103)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1103)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1103)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [U] Useless test elimination: always enabled\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1104)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_optimize_block.galgas3", 1105)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      {
      routine_print_3F_ (GGS_string ("Optimizations:\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1106)) ;
      }
    }
  }
  GGS_bool var_optimizationDone_44317 = GGS_bool (true) ;
  GGS_uint var_optimizationPass_44353 = GGS_uint (uint32_t (0U)) ;
  if (ioArgument_ioGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas3", 1111)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1111)).isValid ()) {
    uint32_t variant_44376 = ioArgument_ioGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas3", 1111)).add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1111)).uintValue () ;
    bool loop_44376 = true ;
    while (loop_44376) {
      loop_44376 = var_optimizationDone_44317.operator_and (GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_optimize_block.galgas3", 1112)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1112)).isValid () ;
      if (loop_44376) {
        loop_44376 = var_optimizationDone_44317.operator_and (GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_optimize_block.galgas3", 1112)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1112)).boolValue () ;
      }
      if (loop_44376 && (0 == variant_44376)) {
        loop_44376 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_optimize_block.galgas3", 1111)) ;
      }
      if (loop_44376) {
        variant_44376 -= 1 ;
        var_optimizationDone_44317 = GGS_bool (false) ;
        var_optimizationPass_44353 = var_optimizationPass_44353.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1114)) ;
        ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n--- Pass ").add_operation (var_optimizationPass_44353.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas3", 1115)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1115)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1115)).add_operation (ioArgument_ioGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas3", 1115)).getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas3", 1115)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1115)).add_operation (GGS_string (" blocks)\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1115)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1115)) ;
        GGS_uint var_blockCountBeforeOptimization_44666 = ioArgument_ioGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_optimize_block.galgas3", 1116)) ;
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_optimize_block.galgas3", 1117)).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            {
            routine_print_3F_ (GGS_string ("  Pass ").add_operation (var_optimizationPass_44353.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas3", 1118)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1118)).add_operation (GGS_string (" : "), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1118)).add_operation (var_blockCountBeforeOptimization_44666.getter_string (SOURCE_FILE ("ipic18_optimize_block.galgas3", 1118)), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1118)).add_operation (GGS_string (" blocks.\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1118)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1118)) ;
            }
          }
        }
        GGS_symbolTableForBlockOptimization var_symbolTable_44930 = GGS_symbolTableForBlockOptimization::init (inCompiler COMMA_HERE) ;
        UpEnumerator_ipic_31__38_BlockList enumerator_44988 (ioArgument_ioGeneratedBlockList) ;
        GGS_uint index_44983 (uint32_t (0)) ;
        while (enumerator_44988.hasCurrentObject ()) {
          {
          var_symbolTable_44930.setter_insertKey (enumerator_44988.current_mBlock (HERE).readProperty_mLabel (), index_44983, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1123)) ;
          }
          enumerator_44988.gotoNextObject () ;
          index_44983.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1122)) ;
        }
        GGS_stringset var_referencedBlockSet_45176 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        UpEnumerator_ipic_31__38_BlockList enumerator_45219 (ioArgument_ioGeneratedBlockList) ;
        while (enumerator_45219.hasCurrentObject ()) {
          GalgasBool test_2 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_2) {
            test_2 = GGS_bool (ComparisonKind::notEqual, enumerator_45219.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas3", 1128)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_2) {
              extensionMethod_enterReferencedLabels (enumerator_45219.current_mBlock (HERE), var_symbolTable_44930, ioArgument_ioGeneratedBlockList, var_referencedBlockSet_45176, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1129)) ;
            }
          }
          enumerator_45219.gotoNextObject () ;
        }
        GGS_ipic_31__38_BlockList var_optimizedBlockList_45538 = GGS_ipic_31__38_BlockList::init (inCompiler COMMA_HERE) ;
        UpEnumerator_ipic_31__38_BlockList enumerator_45587 (ioArgument_ioGeneratedBlockList) ;
        while (enumerator_45587.hasCurrentObject ()) {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            test_3 = var_referencedBlockSet_45176.getter_hasKey (enumerator_45587.current_mBlock (HERE).readProperty_mLabel ().readProperty_string () COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1139)).operator_or (GGS_bool (ComparisonKind::notEqual, enumerator_45587.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_optimize_block.galgas3", 1139)))) COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1139)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              GGS_ipic_31__38_Block var_optimizedBlock_45924 ;
              extensionMethod_optimize (enumerator_45587.current_mBlock (HERE), var_symbolTable_44930, var_optimizeFlagStruct_41389, ioArgument_ioGeneratedBlockList, var_optimizationDone_44317, ioArgument_ioListFileContents, var_optimizedBlock_45924, inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1140)) ;
              var_optimizedBlockList_45538.addAssignOperation (var_optimizedBlock_45924  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1148)) ;
            }
          }
          if (GalgasBool::boolFalse == test_3) {
            ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  [D] ").add_operation (enumerator_45587.current_mBlock (HERE).readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1150)).add_operation (GGS_string (": not referenced, deleted\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1150)), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1150)) ;
            var_optimizationDone_44317 = GGS_bool (true) ;
          }
          enumerator_45587.gotoNextObject () ;
        }
        ioArgument_ioGeneratedBlockList = var_optimizedBlockList_45538 ;
      }
    }
  }
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  No optimization.\n\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1156)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_optimize_block.galgas3", 1157)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      {
      routine_print_3F_ (GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_optimize_block.galgas3", 1158)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'emitBaselineCodeAtWordAddress?&?&'
//
//--------------------------------------------------------------------------------------------------

void routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (const GGS_uint constinArgument_inCode,
                                                            GGS_uint & ioArgument_ioWordAddress,
                                                            const GGS_baseline_5F_assembly_5F_instruction constinArgument_inInstruction,
                                                            GGS_string & ioArgument_ioListFileContents,
                                                            Compiler * inCompiler
                                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("   ").add_operation (extensionGetter_x_34_String (ioArgument_ioWordAddress.multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 8)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 8)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 8)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 8)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_x_34_String (constinArgument_inCode, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 9)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 9)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 9)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 9)) ;
  callExtensionMethod_print ((cPtr_baseline_5F_assembly_5F_instruction *) constinArgument_inInstruction.ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 10)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 11)) ;
  {
  routine_emitCode_3F_ (constinArgument_inCode, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 12)) ;
  }
  ioArgument_ioWordAddress = ioArgument_ioWordAddress.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 13)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'emitNoBaselineCodeAtWordAddress??&'
//
//--------------------------------------------------------------------------------------------------

void routine_emitNoBaselineCodeAtWordAddress_3F__3F__26_ (const GGS_uint constinArgument_inWordAddress,
                                                          const GGS_baseline_5F_assembly_5F_instruction constinArgument_inInstruction,
                                                          GGS_string & ioArgument_ioListFileContents,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("   ").add_operation (extensionGetter_x_34_String (constinArgument_inWordAddress.multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 22)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 22)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 22)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 22)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("      "), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 23)) ;
  callExtensionMethod_print ((cPtr_baseline_5F_assembly_5F_instruction *) constinArgument_inInstruction.ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 24)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 25)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_assembly_pseudo_LABEL enterLabelAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::method_enterLabelAtAddress (GGS_baseline_5F_symbolTable & ioArgument_ioRoutineSymbolTable,
                                                                               GGS_uint & ioArgument_ioWordAddress,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL temp_0 = this ;
  ioArgument_ioRoutineSymbolTable.setter_insertKey (temp_0.readProperty_mLabel (), ioArgument_ioWordAddress, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 52)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_assembly_pseudo_ORG enterLabelAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::method_enterLabelAtAddress (GGS_baseline_5F_symbolTable & /* ioArgument_ioRoutineSymbolTable */,
                                                                             GGS_uint & ioArgument_ioWordAddress,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_pseudo_5F_ORG temp_0 = this ;
  ioArgument_ioWordAddress = temp_0.readProperty_mOrigin () ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_assembly_actualInstruction enterLabelAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_actualInstruction::method_enterLabelAtAddress (GGS_baseline_5F_symbolTable & /* ioArgument_ioRoutineSymbolTable */,
                                                                                 GGS_uint & ioArgument_ioWordAddress,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_actualInstruction temp_0 = this ;
  ioArgument_ioWordAddress = ioArgument_ioWordAddress.add_operation (callExtensionGetter_length ((const cPtr_baseline_5F_assembly_5F_actualInstruction *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 68)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 68)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_assembly_pseudo_BEGINOFROUTINE generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                GGS_string & ioArgument_ioListFileContents,
                                                                                                GGS_uint & ioArgument_ioWordAddress,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE temp_1 = this ;
    test_0 = temp_1.readProperty_mIsRegular ().operator_and (GGS_bool (ComparisonKind::notEqual, ioArgument_ioWordAddress.operator_and (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 88)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 88)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mRoutineName ().readProperty_location (), GGS_string ("the 8th bit of the routine address is not 0; a regular routine should be begin in the first half of a page"), fixItArray3  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 89)) ;
    }
  }
  {
  const GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE temp_4 = this ;
  routine_emitNoBaselineCodeAtWordAddress_3F__3F__26_ (ioArgument_ioWordAddress, temp_4, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 91)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_assembly_pseudo_ENDOFROUTINE generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                              GGS_string & ioArgument_ioListFileContents,
                                                                                              GGS_uint & ioArgument_ioWordAddress,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, ioArgument_ioWordAddress.objectCompare (temp_1.readProperty_mPage ().multiply_operation (GGS_uint (uint32_t (512U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 100)).add_operation (GGS_uint (uint32_t (512U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 100)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE temp_2 = this ;
      const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE temp_3 = this ;
      const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mRoutineName ().readProperty_location (), GGS_string ("the routine is too large, it does not lie in page ").add_operation (temp_3.readProperty_mPage ().getter_string (SOURCE_FILE ("baseline_build_binary_code.galgas3", 101)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 101)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 101)).add_operation (ioArgument_ioWordAddress.substract_operation (temp_4.readProperty_mPage ().multiply_operation (GGS_uint (uint32_t (512U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 101)).add_operation (GGS_uint (uint32_t (512U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 101)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 101)).getter_string (SOURCE_FILE ("baseline_build_binary_code.galgas3", 101)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 101)).add_operation (GGS_string (" word(s) in excess)"), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 101)), fixItArray5  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 101)) ;
    }
  }
  {
  const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE temp_6 = this ;
  routine_emitNoBaselineCodeAtWordAddress_3F__3F__26_ (ioArgument_ioWordAddress, temp_6, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 103)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_assembly_pseudo_ORG generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                     GGS_string & ioArgument_ioListFileContents,
                                                                                     GGS_uint & ioArgument_ioWordAddress,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_pseudo_5F_ORG temp_0 = this ;
  ioArgument_ioWordAddress = temp_0.readProperty_mOrigin () ;
  {
  const GGS_baseline_5F_assembly_5F_pseudo_5F_ORG temp_1 = this ;
  routine_setEmitAddress_3F_ (temp_1.readProperty_mOrigin ().multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 113)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 113)) ;
  }
  {
  const GGS_baseline_5F_assembly_5F_pseudo_5F_ORG temp_2 = this ;
  routine_emitNoBaselineCodeAtWordAddress_3F__3F__26_ (ioArgument_ioWordAddress, temp_2, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 114)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_assembly_instruction_FD generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_FD::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                         GGS_string & ioArgument_ioListFileContents,
                                                                                         GGS_uint & ioArgument_ioWordAddress,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_5082 ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_FD temp_0 = this ;
  switch (temp_0.readProperty_mInstruction ().enumValue ()) {
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_ADDWF:
    {
      var_code_5082 = GGS_uint (uint32_t (448U)) ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_ANDWF:
    {
      var_code_5082 = GGS_uint (uint32_t (320U)) ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_COMF:
    {
      var_code_5082 = GGS_uint (uint32_t (576U)) ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_DECF:
    {
      var_code_5082 = GGS_uint (uint32_t (192U)) ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_DECFSZ:
    {
      var_code_5082 = GGS_uint (uint32_t (704U)) ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_INCF:
    {
      var_code_5082 = GGS_uint (uint32_t (640U)) ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_INCFSZ:
    {
      var_code_5082 = GGS_uint (uint32_t (15360U)) ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_IORWF:
    {
      var_code_5082 = GGS_uint (uint32_t (256U)) ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_MOVF:
    {
      var_code_5082 = GGS_uint (uint32_t (512U)) ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_RLF:
    {
      var_code_5082 = GGS_uint (uint32_t (832U)) ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_RRF:
    {
      var_code_5082 = GGS_uint (uint32_t (768U)) ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_SUBWF:
    {
      var_code_5082 = GGS_uint (uint32_t (128U)) ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_SWAPF:
    {
      var_code_5082 = GGS_uint (uint32_t (896U)) ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_XORWF:
    {
      var_code_5082 = GGS_uint (uint32_t (384U)) ;
    }
    break ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_baseline_5F_assembly_5F_instruction_5F_FD temp_2 = this ;
    test_1 = temp_2.readProperty_m_5F_W_5F_isDestination ().operator_not (SOURCE_FILE ("baseline_build_binary_code.galgas3", 141)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      var_code_5082 = var_code_5082.operator_or (GGS_uint (uint32_t (32U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 142)) ;
    }
  }
  const GGS_baseline_5F_assembly_5F_instruction_5F_FD temp_3 = this ;
  var_code_5082 = var_code_5082.operator_or (temp_3.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (31U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 144)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 144)) ;
  {
  const GGS_baseline_5F_assembly_5F_instruction_5F_FD temp_4 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (var_code_5082, ioArgument_ioWordAddress, temp_4, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 145)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_assembly_instruction_F generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_F::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                        GGS_string & ioArgument_ioListFileContents,
                                                                                        GGS_uint & ioArgument_ioWordAddress,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_6052 ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_F temp_0 = this ;
  switch (temp_0.readProperty_mInstruction ().enumValue ()) {
  case GGS_baseline_5F_F_5F_instruction_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_baseline_5F_F_5F_instruction_5F_base_5F_code::Enumeration::enum_CLRF:
    {
      var_code_6052 = GGS_uint (uint32_t (96U)) ;
    }
    break ;
  case GGS_baseline_5F_F_5F_instruction_5F_base_5F_code::Enumeration::enum_MOVWF:
    {
      var_code_6052 = GGS_uint (uint32_t (32U)) ;
    }
    break ;
  }
  const GGS_baseline_5F_assembly_5F_instruction_5F_F temp_1 = this ;
  var_code_6052 = var_code_6052.operator_or (temp_1.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (31U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 159)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 159)) ;
  {
  const GGS_baseline_5F_assembly_5F_instruction_5F_F temp_2 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (var_code_6052, ioArgument_ioWordAddress, temp_2, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 160)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_assembly_instruction_FB generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_FB::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                         GGS_string & ioArgument_ioListFileContents,
                                                                                         GGS_uint & ioArgument_ioWordAddress,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_6601 ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_FB temp_0 = this ;
  switch (temp_0.readProperty_mInstruction ().enumValue ()) {
  case GGS_baseline_5F_bit_5F_oriented_5F_op::Enumeration::invalid:
    break ;
  case GGS_baseline_5F_bit_5F_oriented_5F_op::Enumeration::enum_BCF:
    {
      var_code_6601 = GGS_uint (uint32_t (1024U)) ;
    }
    break ;
  case GGS_baseline_5F_bit_5F_oriented_5F_op::Enumeration::enum_BSF:
    {
      var_code_6601 = GGS_uint (uint32_t (1280U)) ;
    }
    break ;
  }
  const GGS_baseline_5F_assembly_5F_instruction_5F_FB temp_1 = this ;
  var_code_6601 = var_code_6601.operator_or (temp_1.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (31U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 174)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 174)) ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_FB temp_2 = this ;
  var_code_6601 = var_code_6601.operator_or (temp_2.readProperty_mBitNumber ().left_shift_operation (GGS_bigint ("5", inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 175)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 175)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 175)) ;
  {
  const GGS_baseline_5F_assembly_5F_instruction_5F_FB temp_3 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (var_code_6601, ioArgument_ioWordAddress, temp_3, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 176)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_assembly_instruction_BitTestSkip generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                  GGS_string & ioArgument_ioListFileContents,
                                                                                                  GGS_uint & ioArgument_ioWordAddress,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_7208 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_code_7208 = GGS_uint (uint32_t (1792U)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    var_code_7208 = GGS_uint (uint32_t (1536U)) ;
  }
  const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip temp_2 = this ;
  var_code_7208 = var_code_7208.operator_or (temp_2.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (31U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 192)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 192)) ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip temp_3 = this ;
  var_code_7208 = var_code_7208.operator_or (temp_3.readProperty_mBitNumber ().left_shift_operation (GGS_bigint ("5", inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 193)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 193)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 193)) ;
  {
  const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip temp_4 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (var_code_7208, ioArgument_ioWordAddress, temp_4, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 194)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_assembly_GOTO generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_GOTO::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                            GGS_string & ioArgument_ioListFileContents,
                                                                            GGS_uint & ioArgument_ioWordAddress,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_targetAddress_7836 ;
  const GGS_baseline_5F_assembly_5F_GOTO temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_7836, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 204)) ;
  {
  const GGS_baseline_5F_assembly_5F_GOTO temp_1 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (GGS_uint (uint32_t (2560U)).operator_or (var_targetAddress_7836.operator_and (GGS_uint (uint32_t (511U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 206)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 206)), ioArgument_ioWordAddress, temp_1, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 206)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_assembly_SKIP generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_SKIP::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                            GGS_string & ioArgument_ioListFileContents,
                                                                            GGS_uint & ioArgument_ioWordAddress,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_baseline_5F_assembly_5F_SKIP temp_0 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (GGS_uint (uint32_t (2560U)).operator_or (ioArgument_ioWordAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 215)).operator_and (GGS_uint (uint32_t (511U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 215)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 215)), ioArgument_ioWordAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 215)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_assembly_CALL generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_CALL::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                            GGS_string & ioArgument_ioListFileContents,
                                                                            GGS_uint & ioArgument_ioWordAddress,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_targetAddress_8691 ;
  const GGS_baseline_5F_assembly_5F_CALL temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_8691, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 225)) ;
  {
  const GGS_baseline_5F_assembly_5F_CALL temp_1 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (GGS_uint (uint32_t (2304U)).operator_or (var_targetAddress_8691.operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 227)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 227)), ioArgument_ioWordAddress, temp_1, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 227)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_assembly_incDecRegisterInCondition generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                 GGS_string & ioArgument_ioListFileContents,
                                                                                                 GGS_uint & ioArgument_ioWordAddress,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_9105 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition temp_1 = this ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_code_9105 = GGS_uint (uint32_t (960U)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    var_code_9105 = GGS_uint (uint32_t (704U)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition temp_3 = this ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().operator_not (SOURCE_FILE ("baseline_build_binary_code.galgas3", 242)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      var_code_9105 = var_code_9105.operator_or (GGS_uint (uint32_t (32U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 243)) ;
    }
  }
  const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition temp_4 = this ;
  var_code_9105 = var_code_9105.operator_or (temp_4.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (31U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 245)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 245)) ;
  {
  const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition temp_5 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (var_code_9105, ioArgument_ioWordAddress, temp_5, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 246)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_assembly_WO_OPERAND generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                     GGS_string & ioArgument_ioListFileContents,
                                                                                     GGS_uint & ioArgument_ioWordAddress,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_9716 ;
  const GGS_baseline_5F_assembly_5F_WO_5F_OPERAND temp_0 = this ;
  switch (temp_0.readProperty_mInstruction ().enumValue ()) {
  case GGS_baseline_5F_WO_5F_OPERAND_5F_group::Enumeration::invalid:
    break ;
  case GGS_baseline_5F_WO_5F_OPERAND_5F_group::Enumeration::enum_CLRW:
    {
      var_code_9716 = GGS_uint (uint32_t (64U)) ;
    }
    break ;
  case GGS_baseline_5F_WO_5F_OPERAND_5F_group::Enumeration::enum_NOP:
    {
      var_code_9716 = GGS_uint (uint32_t (0U)) ;
    }
    break ;
  case GGS_baseline_5F_WO_5F_OPERAND_5F_group::Enumeration::enum_CLRWDT:
    {
      var_code_9716 = GGS_uint (uint32_t (4U)) ;
    }
    break ;
  case GGS_baseline_5F_WO_5F_OPERAND_5F_group::Enumeration::enum_OPTION_5F_:
    {
      var_code_9716 = GGS_uint (uint32_t (2U)) ;
    }
    break ;
  case GGS_baseline_5F_WO_5F_OPERAND_5F_group::Enumeration::enum_SLEEP:
    {
      var_code_9716 = GGS_uint (uint32_t (3U)) ;
    }
    break ;
  }
  {
  const GGS_baseline_5F_assembly_5F_WO_5F_OPERAND temp_1 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (var_code_9716, ioArgument_ioWordAddress, temp_1, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 263)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_assembly_TRIS generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_TRIS::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                            GGS_string & ioArgument_ioListFileContents,
                                                                            GGS_uint & ioArgument_ioWordAddress,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_baseline_5F_assembly_5F_TRIS temp_0 = this ;
  const GGS_baseline_5F_assembly_5F_TRIS temp_1 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (temp_0.readProperty_mOpcode (), ioArgument_ioWordAddress, temp_1, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 272)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_assembly_instruction_literalOperation generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                       GGS_string & ioArgument_ioListFileContents,
                                                                                                       GGS_uint & ioArgument_ioWordAddress,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_10667 ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation temp_0 = this ;
  switch (temp_0.readProperty_mInstruction ().enumValue ()) {
  case GGS_baseline_5F_literal_5F_instruction_5F_opcode::Enumeration::invalid:
    break ;
  case GGS_baseline_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_ANDLW:
    {
      var_code_10667 = GGS_uint (uint32_t (3584U)) ;
    }
    break ;
  case GGS_baseline_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_IORLW:
    {
      var_code_10667 = GGS_uint (uint32_t (3328U)) ;
    }
    break ;
  case GGS_baseline_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_MOVLW:
    {
      var_code_10667 = GGS_uint (uint32_t (3072U)) ;
    }
    break ;
  case GGS_baseline_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_RETLW:
    {
      var_code_10667 = GGS_uint (uint32_t (2048U)) ;
    }
    break ;
  case GGS_baseline_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_XORLW:
    {
      var_code_10667 = GGS_uint (uint32_t (3840U)) ;
    }
    break ;
  }
  const GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation temp_1 = this ;
  var_code_10667 = var_code_10667.operator_or (temp_1.readProperty_mLiteralValue () COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 289)) ;
  {
  const GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation temp_2 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (var_code_10667, ioArgument_ioWordAddress, temp_2, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 290)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_assembly_pseudo_LABEL generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                       GGS_string & ioArgument_ioListFileContents,
                                                                                       GGS_uint & ioArgument_ioWordAddress,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_targetAddress_11296 ;
  const GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mLabel (), var_targetAddress_11296, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 299)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_targetAddress_11296.objectCompare (ioArgument_ioWordAddress)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL temp_2 = this ;
      const GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLabel ().readProperty_location (), GGS_string ("Internal second pass error: the '").add_operation (temp_3.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 301)).add_operation (GGS_string ("' label gets "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 301)).add_operation (ioArgument_ioWordAddress.getter_hexString (SOURCE_FILE ("baseline_build_binary_code.galgas3", 302)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 302)).add_operation (GGS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 302)).add_operation (var_targetAddress_11296.getter_hexString (SOURCE_FILE ("baseline_build_binary_code.galgas3", 303)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 302)).add_operation (GGS_string (" in first pass"), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 303)), fixItArray4  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 301)) ;
    }
  }
  {
  const GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL temp_5 = this ;
  routine_emitNoBaselineCodeAtWordAddress_3F__3F__26_ (ioArgument_ioWordAddress, temp_5, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 305)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'build_baseline_binary_code??&!'
//
//--------------------------------------------------------------------------------------------------

void routine_build_5F_baseline_5F_binary_5F_code_3F__3F__26__21_ (const GGS_baseline_5F_assembly_5F_instructionList constinArgument_inAssemblyInstructionList,
                                                                  const GGS_uint constinArgument_inROMsize,
                                                                  GGS_string & ioArgument_ioListFileContents,
                                                                  GGS_uint & outArgument_outUsedROMsize,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUsedROMsize.drop () ; // Release 'out' argument
  GGS_baseline_5F_symbolTable var_symbolTable_12315 = GGS_baseline_5F_symbolTable::init (inCompiler COMMA_HERE) ;
  GGS_uint var_currentWordAddress_12365 = GGS_uint (uint32_t (0U)) ;
  UpEnumerator_baseline_5F_assembly_5F_instructionList enumerator_12395 (constinArgument_inAssemblyInstructionList) ;
  while (enumerator_12395.hasCurrentObject ()) {
    callExtensionMethod_enterLabelAtAddress ((cPtr_baseline_5F_assembly_5F_instruction *) enumerator_12395.current_mInstruction (HERE).ptr (), var_symbolTable_12315, var_currentWordAddress_12365, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 323)) ;
    enumerator_12395.gotoNextObject () ;
  }
  GGS_uint var_lastAddressForFirstPass_12535 = var_currentWordAddress_12365 ;
  outArgument_outUsedROMsize = var_currentWordAddress_12365 ;
  var_currentWordAddress_12365 = GGS_uint (uint32_t (0U)) ;
  {
  routine_setEmitAddress_3F_ (GGS_uint (uint32_t (0U)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 329)) ;
  }
  UpEnumerator_baseline_5F_assembly_5F_instructionList enumerator_12736 (constinArgument_inAssemblyInstructionList) ;
  while (enumerator_12736.hasCurrentObject ()) {
    callExtensionMethod_generateBinaryCodeAtAddress ((cPtr_baseline_5F_assembly_5F_instruction *) enumerator_12736.current_mInstruction (HERE).ptr (), var_symbolTable_12315, ioArgument_ioListFileContents, var_currentWordAddress_12365, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 331)) ;
    {
    routine_checkCurrentEmitAddress_3F_ (var_currentWordAddress_12365.multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 336)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 336)) ;
    }
    enumerator_12736.gotoNextObject () ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_lastAddressForFirstPass_12535.objectCompare (var_currentWordAddress_12365)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 339)), GGS_string ("Internal second pass error: the last address gets ").add_operation (var_currentWordAddress_12365.getter_hexString (SOURCE_FILE ("baseline_build_binary_code.galgas3", 339)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 339)).add_operation (GGS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 339)).add_operation (var_lastAddressForFirstPass_12535.getter_hexString (SOURCE_FILE ("baseline_build_binary_code.galgas3", 341)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 340)).add_operation (GGS_string (" value in first pass"), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 341)), fixItArray1  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 339)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::greaterThan, var_lastAddressForFirstPass_12535.objectCompare (constinArgument_inROMsize)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 343)), GGS_string ("Program too large: ").add_operation (var_lastAddressForFirstPass_12535.getter_string (SOURCE_FILE ("baseline_build_binary_code.galgas3", 343)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 343)).add_operation (GGS_string (" bytes (rom size is "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 343)).add_operation (constinArgument_inROMsize.getter_string (SOURCE_FILE ("baseline_build_binary_code.galgas3", 345)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 344)).add_operation (GGS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 345)), fixItArray3  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas3", 343)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@midrange_intermediate_pseudo_ORG isLABELorORG'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::getter_isLABELorORG (Compiler */* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsLABELorORG ; // Returned variable
  result_outIsLABELorORG = GGS_bool (true) ;
//---
  return result_outIsLABELorORG ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@midrange_intermediate_pseudo_LABEL isLABELorORG'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::getter_isLABELorORG (Compiler */* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsLABELorORG ; // Returned variable
  result_outIsLABELorORG = GGS_bool (true) ;
//---
  return result_outIsLABELorORG ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@midrange_intermediate_NULL isNULL'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_midrange_5F_intermediate_5F_NULL::getter_isNULL (Compiler */* inCompiler */
                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsNULL ; // Returned variable
  result_outIsNULL = GGS_bool (true) ;
//---
  return result_outIsNULL ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_JUMP enterReferencedLabel'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JUMP::method_enterReferencedLabel (GGS_stringset & ioArgument_ioReferencedLabelSet,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_JUMP temp_0 = this ;
  ioArgument_ioReferencedLabelSet.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 51)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_GOTO enterReferencedLabel'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_GOTO::method_enterReferencedLabel (GGS_stringset & ioArgument_ioReferencedLabelSet,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_GOTO temp_0 = this ;
  ioArgument_ioReferencedLabelSet.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 57)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_CALL enterReferencedLabel'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_CALL::method_enterReferencedLabel (GGS_stringset & ioArgument_ioReferencedLabelSet,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_CALL temp_0 = this ;
  ioArgument_ioReferencedLabelSet.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 63)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_JSR enterReferencedLabel'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_JSR::method_enterReferencedLabel (GGS_stringset & ioArgument_ioReferencedLabelSet,
                                                                        Compiler * /* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_JSR temp_0 = this ;
  ioArgument_ioReferencedLabelSet.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 69)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_incDecRegisterInCondition enterReferencedLabel'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::method_enterReferencedLabel (GGS_stringset & ioArgument_ioReferencedLabelSet,
                                                                                              Compiler * /* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_0 = this ;
  ioArgument_ioReferencedLabelSet.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 75)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@midrange_intermediate_instruction_BitTestSkip isSkippingInstruction'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::getter_isSkippingInstruction (Compiler */* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsSkipping ; // Returned variable
  result_outIsSkipping = GGS_bool (true) ;
//---
  return result_outIsSkipping ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@midrange_intermediate_JUMP nextInstructionIsReachable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_midrange_5F_intermediate_5F_JUMP::getter_nextInstructionIsReachable (Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GGS_bool (false) ;
//---
  return result_outIsReachable ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@midrange_intermediate_GOTO nextInstructionIsReachable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_midrange_5F_intermediate_5F_GOTO::getter_nextInstructionIsReachable (Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GGS_bool (false) ;
//---
  return result_outIsReachable ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@midrange_intermediate_instruction_RETURN nextInstructionIsReachable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_midrange_5F_intermediate_5F_instruction_5F_RETURN::getter_nextInstructionIsReachable (Compiler */* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GGS_bool (false) ;
//---
  return result_outIsReachable ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@midrange_intermediate_instruction_RETFIE nextInstructionIsReachable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_midrange_5F_intermediate_5F_instruction_5F_RETFIE::getter_nextInstructionIsReachable (Compiler */* inCompiler */
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsReachable ; // Returned variable
  result_outIsReachable = GGS_bool (false) ;
//---
  return result_outIsReachable ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension func '@midrange_intermediate_instruction_literalOperation nextInstructionIsReachable'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::getter_nextInstructionIsReachable (Compiler */* inCompiler */
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outIsReachable ; // Returned variable
  const GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = this ;
  result_outIsReachable = GGS_bool (ComparisonKind::notEqual, temp_0.readProperty_mLiteralInstruction ().objectCompare (GGS_midrange_5F_literal_5F_instruction_5F_opcode::class_func_RETLW (SOURCE_FILE ("midrange_optimizations.galgas3", 133)))) ;
//---
  return result_outIsReachable ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@midrange_intermediate_pseudo_LABEL defineLabel'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::method_defineLabel (GGS_symbolTableForOptimizations & ioArgument_ioRoutineSymbolTable,
                                                                           const GGS_uint constinArgument_inLineIndex,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  const GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_1 = this ;
  ioArgument_ioRoutineSymbolTable.setter_insertKey (temp_0.readProperty_mLabel (), constinArgument_inLineIndex, temp_1.readProperty_mIsDeletable (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 153)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'findMidRangeFirstInstructionFromAddress??!'
//
//--------------------------------------------------------------------------------------------------

void routine_findMidRangeFirstInstructionFromAddress_3F__3F__21_ (const GGS_uint constinArgument_inLineIndex,
                                                                  const GGS_midrange_5F_intermediate_5F_instructionList constinArgument_inGeneratedInstructionList,
                                                                  GGS_midrange_5F_intermediate_5F_instruction & outArgument_outFirstInstruction,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFirstInstruction.drop () ; // Release 'out' argument
  GGS_uint var_currentAddress_6902 = constinArgument_inLineIndex ;
  outArgument_outFirstInstruction = GGS_midrange_5F_intermediate_5F_NULL::init (inCompiler COMMA_HERE) ;
  GGS_bool var_found_7068 = GGS_bool (false) ;
  if (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas3", 167)).isValid ()) {
    uint32_t variant_7084 = constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas3", 167)).uintValue () ;
    bool loop_7084 = true ;
    while (loop_7084) {
      loop_7084 = GGS_bool (ComparisonKind::lowerThan, var_currentAddress_6902.objectCompare (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas3", 168)))).operator_and (var_found_7068.operator_not (SOURCE_FILE ("midrange_optimizations.galgas3", 168)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 168)).isValid () ;
      if (loop_7084) {
        loop_7084 = GGS_bool (ComparisonKind::lowerThan, var_currentAddress_6902.objectCompare (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas3", 168)))).operator_and (var_found_7068.operator_not (SOURCE_FILE ("midrange_optimizations.galgas3", 168)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 168)).boolValue () ;
      }
      if (loop_7084 && (0 == variant_7084)) {
        loop_7084 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_optimizations.galgas3", 167)) ;
      }
      if (loop_7084) {
        variant_7084 -= 1 ;
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          GGS_midrange_5F_intermediate_5F_actualInstruction var_instr_7212 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_actualInstruction *> (constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_6902, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 170)).ptr ())) ;
          if (nullptr == var_instr_7212.ptr ()) {
            test_0 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_0) {
            outArgument_outFirstInstruction = var_instr_7212 ;
            var_found_7068 = GGS_bool (true) ;
          }
        }
        if (GalgasBool::boolFalse == test_0) {
          var_currentAddress_6902.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 176)) ;
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

void routine_findMidRangeFirstInstructionOrLabelFromAddress_3F__3F__21__21_ (const GGS_uint constinArgument_inLineIndex,
                                                                             const GGS_midrange_5F_intermediate_5F_instructionList constinArgument_inGeneratedInstructionList,
                                                                             GGS_midrange_5F_intermediate_5F_instruction & outArgument_outFirstInstruction,
                                                                             GGS_stringset & outArgument_outReachedLabelSet,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outFirstInstruction.drop () ; // Release 'out' argument
  outArgument_outReachedLabelSet.drop () ; // Release 'out' argument
  outArgument_outReachedLabelSet = GGS_stringset::class_func_emptySet (SOURCE_FILE ("midrange_optimizations.galgas3", 188)) ;
  GGS_uint var_currentAddress_7981 = constinArgument_inLineIndex ;
  outArgument_outFirstInstruction = GGS_midrange_5F_intermediate_5F_NULL::init (inCompiler COMMA_HERE) ;
  GGS_bool var_found_8147 = GGS_bool (false) ;
  if (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas3", 194)).isValid ()) {
    uint32_t variant_8163 = constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas3", 194)).uintValue () ;
    bool loop_8163 = true ;
    while (loop_8163) {
      loop_8163 = GGS_bool (ComparisonKind::lowerThan, var_currentAddress_7981.objectCompare (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas3", 195)))).operator_and (var_found_8147.operator_not (SOURCE_FILE ("midrange_optimizations.galgas3", 195)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 195)).isValid () ;
      if (loop_8163) {
        loop_8163 = GGS_bool (ComparisonKind::lowerThan, var_currentAddress_7981.objectCompare (constinArgument_inGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas3", 195)))).operator_and (var_found_8147.operator_not (SOURCE_FILE ("midrange_optimizations.galgas3", 195)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 195)).boolValue () ;
      }
      if (loop_8163 && (0 == variant_8163)) {
        loop_8163 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_optimizations.galgas3", 194)) ;
      }
      if (loop_8163) {
        variant_8163 -= 1 ;
        GGS_midrange_5F_intermediate_5F_instruction var_instruction_8288 = constinArgument_inGeneratedInstructionList.getter_mInstructionAtIndex (var_currentAddress_7981, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 197)) ;
        GalgasBool test_0 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_0) {
          GGS_midrange_5F_intermediate_5F_actualInstruction var_instr_8378 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_actualInstruction *> (var_instruction_8288.ptr ())) ;
          if (nullptr == var_instr_8378.ptr ()) {
            test_0 = GalgasBool::boolFalse ;
          }
          if (GalgasBool::boolTrue == test_0) {
            outArgument_outFirstInstruction = var_instr_8378 ;
            var_found_8147 = GGS_bool (true) ;
          }
        }
        if (GalgasBool::boolFalse == test_0) {
          GalgasBool test_1 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_1) {
            GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG var_instr_8653 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG *> (var_instruction_8288.ptr ())) ;
            if (nullptr == var_instr_8653.ptr ()) {
              test_1 = GalgasBool::boolFalse ;
            }
            if (GalgasBool::boolTrue == test_1) {
              outArgument_outFirstInstruction = var_instr_8653 ;
              var_found_8147 = GGS_bool (true) ;
            }
          }
          if (GalgasBool::boolFalse == test_1) {
            GalgasBool test_2 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_2) {
              GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL var_instr_8838 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL *> (var_instruction_8288.ptr ())) ;
              if (nullptr == var_instr_8838.ptr ()) {
                test_2 = GalgasBool::boolFalse ;
              }
              if (GalgasBool::boolTrue == test_2) {
                outArgument_outFirstInstruction = var_instr_8838 ;
                outArgument_outReachedLabelSet.plusPlusAssignOperation (var_instr_8838.readProperty_mLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 210)) ;
                var_currentAddress_7981.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 211)) ;
              }
            }
            if (GalgasBool::boolFalse == test_2) {
              var_currentAddress_7981.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 213)) ;
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

void routine_perform_5F_midrange_5F_optimizations_26__26_ (GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                           GGS_string & ioArgument_ioListFileContents,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 515)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 515)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 515)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("CODE OPTIMIZATION").getter_leftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 516)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 516)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 516)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 516)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 517)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 517)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 517)) ;
  GGS_symbolTableForOptimizations var_symbolTable_22929 = GGS_symbolTableForOptimizations::init (inCompiler COMMA_HERE) ;
  UpEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_22981 (ioArgument_ioGeneratedInstructionList) ;
  GGS_uint index_22976 (uint32_t (0)) ;
  while (enumerator_22981.hasCurrentObject ()) {
    callExtensionMethod_defineLabel ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_22981.current_mInstruction (HERE).ptr (), var_symbolTable_22929, index_22976, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 521)) ;
    enumerator_22981.gotoNextObject () ;
    index_22976.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 520)) ;
  }
  GGS_bool var_optimizationsDone_23174 = GGS_bool (true) ;
  GGS_uint var_iteration_23211 = GGS_uint (uint32_t (0U)) ;
  if (ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas3", 526)).isValid ()) {
    uint32_t variant_23227 = ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas3", 526)).uintValue () ;
    bool loop_23227 = true ;
    while (loop_23227) {
      loop_23227 = var_optimizationsDone_23174.isValid () ;
      if (loop_23227) {
        loop_23227 = var_optimizationsDone_23174.boolValue () ;
      }
      if (loop_23227 && (0 == variant_23227)) {
        loop_23227 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_optimizations.galgas3", 526)) ;
      }
      if (loop_23227) {
        variant_23227 -= 1 ;
        var_optimizationsDone_23174 = GGS_bool (false) ;
        var_iteration_23211.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 530)) ;
        ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Pass ").add_operation (var_iteration_23211.getter_string (SOURCE_FILE ("midrange_optimizations.galgas3", 531)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 531)).add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 531)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 531)) ;
        GGS_bigint var_idx_23442 = GGS_bigint ("0", inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 533)) ;
        if (ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas3", 534)).isValid ()) {
          uint32_t variant_23454 = ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas3", 534)).uintValue () ;
          bool loop_23454 = true ;
          while (loop_23454) {
            loop_23454 = GGS_bool (ComparisonKind::lowerThan, var_idx_23442.objectCompare (ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas3", 534)).getter_bigint (SOURCE_FILE ("midrange_optimizations.galgas3", 534)))).isValid () ;
            if (loop_23454) {
              loop_23454 = GGS_bool (ComparisonKind::lowerThan, var_idx_23442.objectCompare (ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_optimizations.galgas3", 534)).getter_bigint (SOURCE_FILE ("midrange_optimizations.galgas3", 534)))).boolValue () ;
            }
            if (loop_23454 && (0 == variant_23454)) {
              loop_23454 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_optimizations.galgas3", 534)) ;
            }
            if (loop_23454) {
              variant_23454 -= 1 ;
              GGS_midrange_5F_intermediate_5F_instruction var_instruction_23604 = ioArgument_ioGeneratedInstructionList.getter_mInstructionAtIndex (var_idx_23442.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 536)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 536)) ;
              GalgasBool test_0 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_0) {
                GGS_midrange_5F_intermediate_5F_GOTO var_ipic_5F_GOTO_23685 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_GOTO *> (var_instruction_23604.ptr ())) ;
                if (nullptr == var_ipic_5F_GOTO_23685.ptr ()) {
                  test_0 = GalgasBool::boolFalse ;
                }
                if (GalgasBool::boolTrue == test_0) {
                  callExtensionMethod_optimizeGOTO ((cPtr_midrange_5F_intermediate_5F_GOTO *) var_ipic_5F_GOTO_23685.ptr (), var_symbolTable_22929, var_idx_23442.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 539)), ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_23174, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 539)) ;
                }
              }
              if (GalgasBool::boolFalse == test_0) {
                GalgasBool test_1 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_1) {
                  GGS_midrange_5F_intermediate_5F_JUMP var_ipic_5F_JUMP_23942 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_JUMP *> (var_instruction_23604.ptr ())) ;
                  if (nullptr == var_ipic_5F_JUMP_23942.ptr ()) {
                    test_1 = GalgasBool::boolFalse ;
                  }
                  if (GalgasBool::boolTrue == test_1) {
                    callExtensionMethod_optimizeJUMP ((cPtr_midrange_5F_intermediate_5F_JUMP *) var_ipic_5F_JUMP_23942.ptr (), var_symbolTable_22929, var_idx_23442.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 542)), ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_23174, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 542)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_1) {
                  GalgasBool test_2 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_2) {
                    GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation var_ipic_5F_literal_24367 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *> (var_instruction_23604.ptr ())) ;
                    if (nullptr == var_ipic_5F_literal_24367.ptr ()) {
                      test_2 = GalgasBool::boolFalse ;
                    }
                    if (GalgasBool::boolTrue == test_2) {
                      callExtensionMethod_optimizeMOVLW ((cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation *) var_ipic_5F_literal_24367.ptr (), var_idx_23442.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 547)), ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_23174, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 547)) ;
                    }
                  }
                  if (GalgasBool::boolFalse == test_2) {
                    GalgasBool test_3 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_3) {
                      GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition var_ipic_5F_decInc_24668 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *> (var_instruction_23604.ptr ())) ;
                      if (nullptr == var_ipic_5F_decInc_24668.ptr ()) {
                        test_3 = GalgasBool::boolFalse ;
                      }
                      if (GalgasBool::boolTrue == test_3) {
                        callExtensionMethod_optimizeTestDecInc ((cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition *) var_ipic_5F_decInc_24668.ptr (), var_symbolTable_22929, var_idx_23442.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 550)), ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_23174, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 550)) ;
                      }
                    }
                    if (GalgasBool::boolFalse == test_3) {
                      GalgasBool test_4 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_4) {
                        GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip var_ipic_5F_bitTestSkip_24979 (dynamic_cast <const cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *> (var_instruction_23604.ptr ())) ;
                        if (nullptr == var_ipic_5F_bitTestSkip_24979.ptr ()) {
                          test_4 = GalgasBool::boolFalse ;
                        }
                        if (GalgasBool::boolTrue == test_4) {
                          callExtensionMethod_optimizeBitTestSkip ((cPtr_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip *) var_ipic_5F_bitTestSkip_24979.ptr (), var_idx_23442.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 553)), ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, var_optimizationsDone_23174, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 553)) ;
                        }
                      }
                    }
                  }
                }
              }
              var_idx_23442 = var_idx_23442.add_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 556)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 556)) ;
            }
          }
        }
        GGS_stringset var_referencedLabels_25368 = GGS_stringset::init (inCompiler COMMA_HERE) ;
        UpEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_25409 (ioArgument_ioGeneratedInstructionList) ;
        while (enumerator_25409.hasCurrentObject ()) {
          callExtensionMethod_enterReferencedLabel ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_25409.current_mInstruction (HERE).ptr (), var_referencedLabels_25368, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 561)) ;
          enumerator_25409.gotoNextObject () ;
        }
        UpEnumerator_symbolTableForOptimizations enumerator_25542 (var_symbolTable_22929) ;
        while (enumerator_25542.hasCurrentObject ()) {
          GalgasBool test_5 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_5) {
            test_5 = var_referencedLabels_25368.getter_hasKey (enumerator_25542.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 564)).operator_not (SOURCE_FILE ("midrange_optimizations.galgas3", 564)).boolEnum () ;
            if (GalgasBool::boolTrue == test_5) {
              GGS_uint var_definitionLine_25670 ;
              GGS_bool joker_25686 ; // Joker input parameter
              var_symbolTable_22929.method_searchKey (enumerator_25542.current_lkey (HERE), var_definitionLine_25670, joker_25686, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 565)) ;
              ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (var_definitionLine_25670.getter_string (SOURCE_FILE ("midrange_optimizations.galgas3", 566)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 566)).add_operation (GGS_string (": unreferenced label '"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 566)).add_operation (enumerator_25542.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 566)).add_operation (GGS_string ("' is deleted\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 566)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 566)) ;
              {
              ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GGS_midrange_5F_intermediate_5F_NULL::init (inCompiler COMMA_HERE), var_definitionLine_25670, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 567)) ;
              }
              {
              GGS_uint joker_25958 ; // Joker input parameter
              GGS_bool joker_25962 ; // Joker input parameter
              var_symbolTable_22929.setter_removeKey (enumerator_25542.current_lkey (HERE), joker_25958, joker_25962, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 568)) ;
              }
            }
          }
          enumerator_25542.gotoNextObject () ;
        }
        GGS_bool var_reachable_26028 = GGS_bool (true) ;
        GGS_bool var_skippingInstruction_26059 = GGS_bool (false) ;
        GGS_bool var_previousWasSkippingInstruction_26101 = GGS_bool (false) ;
        UpEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_26149 (ioArgument_ioGeneratedInstructionList) ;
        GGS_uint index_26144 (uint32_t (0)) ;
        while (enumerator_26149.hasCurrentObject ()) {
          GalgasBool test_6 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_6) {
            test_6 = var_reachable_26028.operator_or (var_previousWasSkippingInstruction_26101 COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 576)).boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              var_reachable_26028 = callExtensionGetter_nextInstructionIsReachable ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_26149.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 577)) ;
              var_previousWasSkippingInstruction_26101 = var_skippingInstruction_26059 ;
              var_skippingInstruction_26059 = callExtensionGetter_isSkippingInstruction ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_26149.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 579)) ;
            }
          }
          if (GalgasBool::boolFalse == test_6) {
            GGS_bool var_isLABELorORG_26480 = callExtensionGetter_isLABELorORG ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_26149.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 581)) ;
            GalgasBool test_7 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_7) {
              test_7 = var_isLABELorORG_26480.operator_not (SOURCE_FILE ("midrange_optimizations.galgas3", 582)).operator_and (callExtensionGetter_isNULL ((const cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_26149.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 582)).operator_not (SOURCE_FILE ("midrange_optimizations.galgas3", 582)) COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 582)).boolEnum () ;
              if (GalgasBool::boolTrue == test_7) {
                ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (index_26144.getter_string (SOURCE_FILE ("midrange_optimizations.galgas3", 583)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 583)).add_operation (GGS_string (": unreachable instruction is deleted\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 583)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 583)) ;
                {
                ioArgument_ioGeneratedInstructionList.setter_setMInstructionAtIndex (GGS_midrange_5F_intermediate_5F_NULL::init (inCompiler COMMA_HERE), index_26144, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 584)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_7) {
              GalgasBool test_8 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_8) {
                test_8 = var_isLABELorORG_26480.boolEnum () ;
                if (GalgasBool::boolTrue == test_8) {
                  var_reachable_26028 = GGS_bool (true) ;
                  var_previousWasSkippingInstruction_26101 = GGS_bool (false) ;
                  var_skippingInstruction_26059 = GGS_bool (false) ;
                }
              }
            }
          }
          enumerator_26149.gotoNextObject () ;
          index_26144.increment_operation (inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 575)) ;
        }
        GalgasBool test_9 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_9) {
          test_9 = var_optimizationsDone_23174.operator_not (SOURCE_FILE ("midrange_optimizations.galgas3", 592)).boolEnum () ;
          if (GalgasBool::boolTrue == test_9) {
            ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  No optimization\n\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 593)) ;
            GGS_uint var_currentAddress_27099 = GGS_uint (uint32_t (0U)) ;
            UpEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_27129 (ioArgument_ioGeneratedInstructionList) ;
            while (enumerator_27129.hasCurrentObject ()) {
              callExtensionMethod_setCurrentAddress ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_27129.current_mInstruction (HERE).ptr (), var_currentAddress_27099, inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 597)) ;
              enumerator_27129.gotoNextObject () ;
            }
            ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Minimum code size: ").add_operation (var_currentAddress_27099.getter_string (SOURCE_FILE ("midrange_optimizations.galgas3", 599)), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 599)).add_operation (GGS_string (" instructions\n\n"), inCompiler COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 599)), inCompiler  COMMA_SOURCE_FILE ("midrange_optimizations.galgas3", 599)) ;
          }
        }
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Function 'sortKey'
//
//--------------------------------------------------------------------------------------------------

GGS_string function_sortKey (const GGS_clusterList & constinArgument_inClusterList,
                             Compiler * inCompiler
                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string result_result ; // Returned variable
  result_result = GGS_string::makeEmptyString () ;
  UpEnumerator_clusterList enumerator_601 (constinArgument_inClusterList) ;
  while (enumerator_601.hasCurrentObject ()) {
    result_result.plusAssignOperation(enumerator_601.current_mBlockList (HERE).getter_mBlockAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 21)).readProperty_mLabel ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 21)) ;
    enumerator_601.gotoNextObject () ;
    if (enumerator_601.hasCurrentObject ()) {
      result_result.plusAssignOperation(GGS_string ("."), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 23)) ;
    }
  }
//---
  return result_result ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const GALGAS_TypeDescriptor * functionArgs_sortKey [2] = {
  & kTypeDescriptor_GALGAS_clusterList,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_sortKey (Compiler * inCompiler,
                                                     const GALGAS_ObjectArray & inEffectiveParameterArray,
                                                     const GGS_location & /* inErrorLocation */
                                                     COMMA_LOCATION_ARGS) {
  const GGS_clusterList operand0 = GGS_clusterList::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
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

void routine_perform_5F_cluster_5F_ordering_3F__26__26_ (const GGS_clusterList constinArgument_inInitialClusterList,
                                                         GGS_ipic_31__38_BlockList & ioArgument_ioBlockList,
                                                         GGS_string & ioArgument_ioListFileContents,
                                                         Compiler * inCompiler
                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_optimize_966 = GGS_bool (gOption_piccoloOptions_performOptimizations.readProperty_value ()).operator_and (GGS_bool (gOption_piccoloOptions_performOptimizations.readProperty_value ()).operator_or (GGS_string (gOption_piccoloOptions_optimizationFlags.readProperty_value ()).getter_containsCharacter (GGS_char (utf32 (66)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 34)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 34)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 33)).operator_and (GGS_bool (gOption_piccoloOptions_doNotReorderCluster.readProperty_value ()).operator_not (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 35)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 34)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = var_optimize_966.operator_not (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 36)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Option '--").add_operation (GGS_string (gOption_piccoloOptions_doNotReorderCluster.readProperty_string ()), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 37)).add_operation (GGS_string ("': this optimization is not performed.n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 37)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 37)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_uint var_clusterCount_1404 = constinArgument_inInitialClusterList.getter_count (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 39)) ;
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 40)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 40)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 40)) ;
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("CLUSTER ORDERING OPTIMIZATION").getter_leftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 41)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 41)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 41)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 41)) ;
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 42)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 42)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 42)) ;
    GGS_string temp_1 ;
    const GalgasBool test_2 = GGS_bool (ComparisonKind::greaterThan, var_clusterCount_1404.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      temp_1 = GGS_string ("s") ;
    }else if (GalgasBool::boolFalse == test_2) {
      temp_1 = GGS_string::makeEmptyString () ;
    }
    GGS_string var_s_1704 = GGS_string ("Cluster ordering optimization (").add_operation (var_clusterCount_1404.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 43)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 43)).add_operation (GGS_string (" cluster"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 43)).add_operation (temp_1, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 43)).add_operation (GGS_string ("):\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 43)) ;
    ioArgument_ioListFileContents.plusAssignOperation(var_s_1704.add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 44)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 44)) ;
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 46)).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        {
        routine_print_3F_ (var_s_1704, inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 47)) ;
        }
      }
    }
    GGS_clusterList var_clusterList_1992 = constinArgument_inInitialClusterList ;
    GGS_neededConversionForClusterOrder var_neededConversionForClusterOrder_2035 = GGS_neededConversionForClusterOrder::init (inCompiler COMMA_HERE) ;
    GGS_bool var_continue_2118 = GGS_bool (true) ;
    GGS_uint var_pass_2148 = GGS_uint (uint32_t (0U)) ;
    if (var_clusterList_1992.getter_count (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 54)).multiply_operation (var_clusterList_1992.getter_count (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 54)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 54)).isValid ()) {
      uint32_t variant_2161 = var_clusterList_1992.getter_count (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 54)).multiply_operation (var_clusterList_1992.getter_count (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 54)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 54)).uintValue () ;
      bool loop_2161 = true ;
      while (loop_2161) {
        loop_2161 = var_continue_2118.isValid () ;
        if (loop_2161) {
          loop_2161 = var_continue_2118.boolValue () ;
        }
        if (loop_2161 && (0 == variant_2161)) {
          loop_2161 = false ;
          inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 54)) ;
        }
        if (loop_2161) {
          variant_2161 -= 1 ;
          var_pass_2148.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 56)) ;
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Pass ").add_operation (var_pass_2148.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 57)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 57)).add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 57)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 57)) ;
          GGS_ipic_31__38_BlockList var_workingBlockList_2357 = GGS_ipic_31__38_BlockList::init (inCompiler COMMA_HERE) ;
          GGS_symbolTableForClusterOrdering var_symbolTable_2405 = GGS_symbolTableForClusterOrdering::init (inCompiler COMMA_HERE) ;
          UpEnumerator_clusterList enumerator_2463 (var_clusterList_1992) ;
          GGS_uint index_2458 (uint32_t (0)) ;
          while (enumerator_2463.hasCurrentObject ()) {
            var_workingBlockList_2357.plusAssignOperation(enumerator_2463.current_mBlockList (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 62)) ;
            UpEnumerator_ipic_31__38_BlockList enumerator_2560 (enumerator_2463.current_mBlockList (HERE)) ;
            while (enumerator_2560.hasCurrentObject ()) {
              {
              var_symbolTable_2405.setter_insertKey (enumerator_2560.current_mBlock (HERE).readProperty_mLabel (), index_2458, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 64)) ;
              }
              enumerator_2560.gotoNextObject () ;
            }
            enumerator_2463.gotoNextObject () ;
            index_2458.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 61)) ;
          }
          GGS_uint var_insertionIdx_2741 = var_workingBlockList_2357.getter_count (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 68)) ;
          DownEnumerator_ipic_31__38_BlockList enumerator_2792 (ioArgument_ioBlockList) ;
          bool bool_4 = var_continue_2118.isValidAndTrue () ;
          if (enumerator_2792.hasCurrentObject () && bool_4) {
            while (enumerator_2792.hasCurrentObject () && bool_4) {
              var_continue_2118 = GGS_bool (ComparisonKind::notEqual, enumerator_2792.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 70)))) ;
              GalgasBool test_5 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_5) {
                test_5 = var_continue_2118.boolEnum () ;
                if (GalgasBool::boolTrue == test_5) {
                  {
                  var_symbolTable_2405.setter_insertKey (enumerator_2792.current_mBlock (HERE).readProperty_mLabel (), GGS_uint::class_func_max (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 72)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 72)) ;
                  }
                  {
                  var_workingBlockList_2357.setter_insertAtIndex (enumerator_2792.current_mBlock (HERE), var_insertionIdx_2741, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 73)) ;
                  }
                }
              }
              enumerator_2792.gotoNextObject () ;
              if (enumerator_2792.hasCurrentObject ()) {
                bool_4 = var_continue_2118.isValidAndTrue () ;
              }
            }
          }
          GGS_branchOverflowMap var_overflowMap_3242 ;
          {
          routine_ipic_31__38_RelativeBranchOverflow_3F__3F__21_ (var_workingBlockList_2357, ioArgument_ioBlockList, var_overflowMap_3242, inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 77)) ;
          }
          GGS_uint var_overflowCount_3278 = GGS_uint (uint32_t (0U)) ;
          UpEnumerator_branchOverflowMapDictionary enumerator_3311 (var_overflowMap_3242.readProperty_dictionary ()) ;
          while (enumerator_3311.hasCurrentObject ()) {
            UpEnumerator_stringlist enumerator_3360 (enumerator_3311.current_mList (HERE)) ;
            while (enumerator_3360.hasCurrentObject ()) {
              var_overflowCount_3278.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 85)) ;
              GGS_uint var_sourceCluster_3468 ;
              var_symbolTable_2405.method_searchKey (enumerator_3311.current_key (HERE).getter_nowhere (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 86)), var_sourceCluster_3468, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 86)) ;
              GGS_uint var_targetCluster_3544 ;
              var_symbolTable_2405.method_searchKey (enumerator_3360.current_mValue (HERE).getter_nowhere (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 87)), var_targetCluster_3544, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 87)) ;
              ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (enumerator_3311.current_key (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 88)).add_operation (GGS_string (" (cluster #"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 88)).add_operation (var_sourceCluster_3468.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 88)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 88)).add_operation (GGS_string (") --> "), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 88)).add_operation (enumerator_3360.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 88)).add_operation (GGS_string (" (cluster #"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 88)).add_operation (var_targetCluster_3544.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 88)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 88)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 88)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 88)) ;
              enumerator_3360.gotoNextObject () ;
            }
            enumerator_3311.gotoNextObject () ;
          }
          {
          var_neededConversionForClusterOrder_2035.setter_insertKey (function_sortKey (var_clusterList_1992, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 92)).getter_nowhere (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 92)), var_overflowCount_3278, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 91)) ;
          }
          GalgasBool test_6 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_6) {
            test_6 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 95)).boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              GGS_string var_s_3900 = GGS_string ("  Pass ").add_operation (var_pass_2148.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 96)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 96)).add_operation (GGS_string (": "), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 96)) ;
              GalgasBool test_7 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_7) {
                test_7 = GGS_bool (ComparisonKind::equal, var_overflowCount_3278.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_7) {
                  var_s_3900.plusAssignOperation(GGS_string ("no branch overflow"), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 98)) ;
                }
              }
              if (GalgasBool::boolFalse == test_7) {
                GalgasBool test_8 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_8) {
                  test_8 = GGS_bool (ComparisonKind::equal, var_overflowCount_3278.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_8) {
                    var_s_3900.plusAssignOperation(GGS_string ("1 branch overflow"), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 100)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_8) {
                  var_s_3900.plusAssignOperation(var_overflowCount_3278.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 102)).add_operation (GGS_string (" branch overflows"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 102)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 102)) ;
                }
              }
              {
              routine_print_3F_ (var_s_3900, inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 104)) ;
              }
            }
          }
          GGS_bool var_correctionLoop_4221 = GGS_bool (true) ;
          UpEnumerator_branchOverflowMapDictionary enumerator_4258 (var_overflowMap_3242.readProperty_dictionary ()) ;
          bool bool_9 = var_correctionLoop_4221.isValidAndTrue () ;
          if (enumerator_4258.hasCurrentObject () && bool_9) {
            while (enumerator_4258.hasCurrentObject () && bool_9) {
              UpEnumerator_stringlist enumerator_4328 (enumerator_4258.current_mList (HERE)) ;
              bool bool_10 = var_correctionLoop_4221.isValidAndTrue () ;
              if (enumerator_4328.hasCurrentObject () && bool_10) {
                while (enumerator_4328.hasCurrentObject () && bool_10) {
                  GGS_uint var_targetCluster_4431 ;
                  var_symbolTable_2405.method_searchKey (enumerator_4328.current_mValue (HERE).getter_nowhere (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 110)), var_targetCluster_4431, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 110)) ;
                  GalgasBool test_11 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_11) {
                    test_11 = GGS_bool (ComparisonKind::notEqual, var_targetCluster_4431.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 111)))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_11) {
                      GGS_uint var_sourceCluster_4552 ;
                      var_symbolTable_2405.method_searchKey (enumerator_4258.current_key (HERE).getter_nowhere (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 112)), var_sourceCluster_4552, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 112)) ;
                      GalgasBool test_12 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_12) {
                        test_12 = GGS_bool (ComparisonKind::equal, var_sourceCluster_4552.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 113)).objectCompare (var_targetCluster_4431)).boolEnum () ;
                        if (GalgasBool::boolTrue == test_12) {
                          var_correctionLoop_4221 = GGS_bool (false) ;
                          var_continue_2118 = GGS_bool (true) ;
                          GGS_ipic_31__38_BlockList var_last_4756 ;
                          {
                          var_clusterList_1992.setter_removeAtIndex (var_last_4756, var_targetCluster_4431, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 116)) ;
                          }
                          GGS_ipic_31__38_BlockList var_first_4844 ;
                          {
                          var_clusterList_1992.setter_removeAtIndex (var_first_4844, var_sourceCluster_4552, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 117)) ;
                          }
                          {
                          var_clusterList_1992.setter_insertAtIndex (var_first_4844.add_operation (var_last_4756, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 118)), var_sourceCluster_4552, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 118)) ;
                          }
                          GGS_string var_m_4968 = GGS_string ("merge #").add_operation (var_targetCluster_4431.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 119)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 119)).add_operation (GGS_string (" into #"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 119)).add_operation (var_sourceCluster_4552.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 119)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 119)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 119)) ;
                          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  --> ").add_operation (var_m_4968, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 120)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 120)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 120)) ;
                          GalgasBool test_13 = GalgasBool::boolTrue ;
                          if (GalgasBool::boolTrue == test_13) {
                            test_13 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 121)).boolEnum () ;
                            if (GalgasBool::boolTrue == test_13) {
                              {
                              routine_print_3F_ (GGS_string (" -> ").add_operation (var_m_4968, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 122)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 122)) ;
                              }
                            }
                          }
                        }
                      }
                      if (GalgasBool::boolFalse == test_12) {
                        GalgasBool test_14 = GalgasBool::boolTrue ;
                        if (GalgasBool::boolTrue == test_14) {
                          test_14 = GGS_bool (ComparisonKind::equal, var_sourceCluster_4552.objectCompare (var_targetCluster_4431.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 124)))).boolEnum () ;
                          if (GalgasBool::boolTrue == test_14) {
                            var_correctionLoop_4221 = GGS_bool (false) ;
                            var_continue_2118 = GGS_bool (true) ;
                            GGS_ipic_31__38_BlockList var_last_5383 ;
                            {
                            var_clusterList_1992.setter_removeAtIndex (var_last_5383, var_sourceCluster_4552, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 127)) ;
                            }
                            GGS_ipic_31__38_BlockList var_first_5471 ;
                            {
                            var_clusterList_1992.setter_removeAtIndex (var_first_5471, var_targetCluster_4431, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 128)) ;
                            }
                            {
                            var_clusterList_1992.setter_insertAtIndex (var_first_5471.add_operation (var_last_5383, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 129)), var_targetCluster_4431, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 129)) ;
                            }
                            GGS_string var_m_5595 = GGS_string ("merge #").add_operation (var_sourceCluster_4552.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 130)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 130)).add_operation (GGS_string (" into #"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 130)).add_operation (var_targetCluster_4431.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 130)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 130)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 130)) ;
                            ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  --> ").add_operation (var_m_5595, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 131)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 131)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 131)) ;
                            GalgasBool test_15 = GalgasBool::boolTrue ;
                            if (GalgasBool::boolTrue == test_15) {
                              test_15 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 132)).boolEnum () ;
                              if (GalgasBool::boolTrue == test_15) {
                                {
                                routine_print_3F_ (GGS_string (" -> ").add_operation (var_m_5595, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 133)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 133)) ;
                                }
                              }
                            }
                          }
                        }
                        if (GalgasBool::boolFalse == test_14) {
                          GalgasBool test_16 = GalgasBool::boolTrue ;
                          if (GalgasBool::boolTrue == test_16) {
                            test_16 = GGS_bool (ComparisonKind::lowerThan, var_sourceCluster_4552.objectCompare (var_targetCluster_4431)).boolEnum () ;
                            if (GalgasBool::boolTrue == test_16) {
                              GGS_clusterList var_candidate_5902 = var_clusterList_1992 ;
                              GGS_ipic_31__38_BlockList var_b_5989 ;
                              {
                              var_candidate_5902.setter_removeAtIndex (var_b_5989, var_targetCluster_4431, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 137)) ;
                              }
                              {
                              var_candidate_5902.setter_insertAtIndex (var_b_5989, var_targetCluster_4431.add_operation (var_sourceCluster_4552, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 138)).divide_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 138)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 138)) ;
                              }
                              GalgasBool test_17 = GalgasBool::boolTrue ;
                              if (GalgasBool::boolTrue == test_17) {
                                test_17 = var_neededConversionForClusterOrder_2035.getter_hasKey (function_sortKey (var_candidate_5902, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 139)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 139)).operator_not (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 139)).boolEnum () ;
                                if (GalgasBool::boolTrue == test_17) {
                                  var_clusterList_1992 = var_candidate_5902 ;
                                  var_correctionLoop_4221 = GGS_bool (false) ;
                                  var_continue_2118 = GGS_bool (true) ;
                                  GGS_string var_m_6321 = GGS_string ("roll up [#").add_operation (var_targetCluster_4431.add_operation (var_sourceCluster_4552, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 143)).divide_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 143)).getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 143)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 143)).add_operation (GGS_string (", #"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 143)).add_operation (var_targetCluster_4431.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 143)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 143)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 143)) ;
                                  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  --> ").add_operation (var_m_6321, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 144)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 144)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 144)) ;
                                  GalgasBool test_18 = GalgasBool::boolTrue ;
                                  if (GalgasBool::boolTrue == test_18) {
                                    test_18 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 145)).boolEnum () ;
                                    if (GalgasBool::boolTrue == test_18) {
                                      {
                                      routine_print_3F_ (GGS_string (" -> ").add_operation (var_m_6321, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 146)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 146)) ;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                          if (GalgasBool::boolFalse == test_16) {
                            GalgasBool test_19 = GalgasBool::boolTrue ;
                            if (GalgasBool::boolTrue == test_19) {
                              test_19 = GGS_bool (ComparisonKind::greaterThan, var_sourceCluster_4552.objectCompare (var_targetCluster_4431)).boolEnum () ;
                              if (GalgasBool::boolTrue == test_19) {
                                GGS_clusterList var_candidate_6677 = var_clusterList_1992 ;
                                GGS_ipic_31__38_BlockList var_b_6764 ;
                                {
                                var_candidate_6677.setter_removeAtIndex (var_b_6764, var_sourceCluster_4552, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 151)) ;
                                }
                                {
                                var_candidate_6677.setter_insertAtIndex (var_b_6764, var_targetCluster_4431.add_operation (var_sourceCluster_4552, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 152)).divide_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 152)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 152)) ;
                                }
                                GalgasBool test_20 = GalgasBool::boolTrue ;
                                if (GalgasBool::boolTrue == test_20) {
                                  test_20 = var_neededConversionForClusterOrder_2035.getter_hasKey (function_sortKey (var_candidate_6677, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 153)) COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 153)).operator_not (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 153)).boolEnum () ;
                                  if (GalgasBool::boolTrue == test_20) {
                                    var_clusterList_1992 = var_candidate_6677 ;
                                    var_correctionLoop_4221 = GGS_bool (false) ;
                                    var_continue_2118 = GGS_bool (true) ;
                                    GGS_string var_m_7096 = GGS_string ("roll up [#").add_operation (var_targetCluster_4431.getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 157)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 157)).add_operation (GGS_string (", #"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 157)).add_operation (var_targetCluster_4431.add_operation (var_sourceCluster_4552, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 157)).divide_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 157)).getter_string (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 157)), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 157)).add_operation (GGS_string ("]"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 157)) ;
                                    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  --> ").add_operation (var_m_7096, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 158)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 158)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 158)) ;
                                    GalgasBool test_21 = GalgasBool::boolTrue ;
                                    if (GalgasBool::boolTrue == test_21) {
                                      test_21 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 159)).boolEnum () ;
                                      if (GalgasBool::boolTrue == test_21) {
                                        {
                                        routine_print_3F_ (GGS_string (" -> ").add_operation (var_m_7096, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 160)), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 160)) ;
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
                  enumerator_4328.gotoNextObject () ;
                  if (enumerator_4328.hasCurrentObject ()) {
                    bool_10 = var_correctionLoop_4221.isValidAndTrue () ;
                  }
                }
              }
              enumerator_4258.gotoNextObject () ;
              if (enumerator_4258.hasCurrentObject ()) {
                bool_9 = var_correctionLoop_4221.isValidAndTrue () ;
              }
            }
          }
          GalgasBool test_22 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_22) {
            test_22 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 167)).boolEnum () ;
            if (GalgasBool::boolTrue == test_22) {
              {
              routine_print_3F_ (GGS_string (".\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 168)) ;
              }
            }
          }
        }
      }
    }
    GalgasBool test_23 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_23) {
      test_23 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 171)).boolEnum () ;
      if (GalgasBool::boolTrue == test_23) {
        {
        routine_print_3F_ (GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 172)) ;
        }
      }
    }
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 174)) ;
    GGS_ipic_31__38_BlockList var_newBlockList_7679 = GGS_ipic_31__38_BlockList::init (inCompiler COMMA_HERE) ;
    var_continue_2118 = GGS_bool (true) ;
    UpEnumerator_ipic_31__38_BlockList enumerator_7786 (ioArgument_ioBlockList) ;
    bool bool_24 = var_continue_2118.isValidAndTrue () ;
    if (enumerator_7786.hasCurrentObject () && bool_24) {
      while (enumerator_7786.hasCurrentObject () && bool_24) {
        var_continue_2118 = GGS_bool (ComparisonKind::notEqual, enumerator_7786.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 180)))) ;
        GalgasBool test_25 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_25) {
          test_25 = var_continue_2118.boolEnum () ;
          if (GalgasBool::boolTrue == test_25) {
            var_newBlockList_7679.addAssignOperation (enumerator_7786.current_mBlock (HERE)  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 182)) ;
          }
        }
        enumerator_7786.gotoNextObject () ;
        if (enumerator_7786.hasCurrentObject ()) {
          bool_24 = var_continue_2118.isValidAndTrue () ;
        }
      }
    }
    UpEnumerator_clusterList enumerator_7986 (var_clusterList_1992) ;
    while (enumerator_7986.hasCurrentObject ()) {
      var_newBlockList_7679.plusAssignOperation(enumerator_7986.current_mBlockList (HERE), inCompiler  COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 187)) ;
      enumerator_7986.gotoNextObject () ;
    }
    GGS_uint var_insertionIndex_8116 = var_newBlockList_7679.getter_count (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 190)) ;
    var_continue_2118 = GGS_bool (true) ;
    DownEnumerator_ipic_31__38_BlockList enumerator_8183 (ioArgument_ioBlockList) ;
    bool bool_26 = var_continue_2118.isValidAndTrue () ;
    if (enumerator_8183.hasCurrentObject () && bool_26) {
      while (enumerator_8183.hasCurrentObject () && bool_26) {
        var_continue_2118 = GGS_bool (ComparisonKind::notEqual, enumerator_8183.current_mBlock (HERE).readProperty_mAddress ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 193)))) ;
        GalgasBool test_27 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_27) {
          test_27 = var_continue_2118.boolEnum () ;
          if (GalgasBool::boolTrue == test_27) {
            {
            var_newBlockList_7679.setter_insertAtIndex (enumerator_8183.current_mBlock (HERE), var_insertionIndex_8116, inCompiler COMMA_SOURCE_FILE ("ipic18_cluster_ordering.galgas3", 195)) ;
            }
          }
        }
        enumerator_8183.gotoNextObject () ;
        if (enumerator_8183.hasCurrentObject ()) {
          bool_26 = var_continue_2118.isValidAndTrue () ;
        }
      }
    }
    ioArgument_ioBlockList = var_newBlockList_7679 ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_intermediate_NULL generateAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_NULL::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                         const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                         GGS_baseline_5F_assembly_5F_instructionList & /* ioArgument_ioAssemblyInstructionList */,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_intermediate_pseudo_PAGE generateAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_PAGE::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                   const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                   GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE temp_0 = this ;
  ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_pseudo_5F_ORG::init_21_ (temp_0.readProperty_mPage ().multiply_operation (GGS_uint (uint32_t (512U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 26)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 26)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_intermediate_pseudo_BEGIN_ROUTINE generateAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                               const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                               GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE temp_1 = this ;
  ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::init_21__21_ (temp_0.readProperty_mRoutineName (), temp_1.readProperty_mIsRegular (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 35)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_intermediate_pseudo_END_ROUTINE generateAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                             const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                             GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE temp_1 = this ;
  ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::init_21__21_ (temp_0.readProperty_mRoutineName (), temp_1.readProperty_mPage (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 44)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_intermediate_instruction_FD generateAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_FD::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                      const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                      GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FD temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FD temp_1 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FD temp_2 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FD temp_3 = this ;
  ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_instruction_5F_FD::init_21__21__21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mInstruction (), temp_2.readProperty_mRegisterDescription (), temp_3.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 53)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_intermediate_instruction_F generateAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_F::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                     const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                     GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instruction_5F_F temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_F temp_1 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_F temp_2 = this ;
  ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_instruction_5F_F::init_21__21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mInstruction (), temp_2.readProperty_mRegisterDescription (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 66)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_intermediate_instruction_FB generateAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_FB::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                      const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                      GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FB temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FB temp_1 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FB temp_2 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_FB temp_3 = this ;
  ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_instruction_5F_FB::init_21__21__21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mInstruction (), temp_2.readProperty_mRegisterDescription (), temp_3.readProperty_mBitNumber (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 78)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_intermediate_instruction_BitTestSkip generateAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                               const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                               GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip temp_1 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip temp_2 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_BitTestSkip temp_3 = this ;
  ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::init_21__21__21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mSkipIfSet (), temp_2.readProperty_mRegisterDescription (), temp_3.readProperty_mBitNumber (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 91)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_intermediate_WO_OPERAND generateAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_WO_5F_OPERAND::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                  const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                  GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_WO_5F_OPERAND temp_1 = this ;
  ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_WO_5F_OPERAND::init_21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mInstruction (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 104)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_intermediate_TRIS generateAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_TRIS::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                         const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                         GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_TRIS temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_TRIS temp_1 = this ;
  const GGS_baseline_5F_intermediate_5F_TRIS temp_2 = this ;
  ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_TRIS::init_21__21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mOperand (), temp_2.readProperty_mOpcode (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 115)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_intermediate_instruction_literalOperation generateAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_literalOperation::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                                    const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                                    GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation temp_1 = this ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_literalOperation temp_2 = this ;
  ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mInstruction (), temp_2.readProperty_mLiteralValue (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 127)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_intermediate_pseudo_LABEL generateAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_pseudo_5F_LABEL::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                    const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                    GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL::init_21_ (temp_0.readProperty_mLabel (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 139)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_intermediate_instruction_MNOP generateAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_instruction_5F_MNOP::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                        const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                        GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ().objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mOccurrenceFactor ().readProperty_location (), GGS_string ("No generated code"), fixItArray3  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 150)) ;
    }
  }
  GGS_uint var_idx_6961 = GGS_uint (uint32_t (0U)) ;
  const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP temp_4 = this ;
  if (temp_4.readProperty_mOccurrenceFactor ().readProperty_uint ().isValid ()) {
    uint32_t variant_6971 = temp_4.readProperty_mOccurrenceFactor ().readProperty_uint ().uintValue () ;
    bool loop_6971 = true ;
    while (loop_6971) {
      const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP temp_5 = this ;
      loop_6971 = GGS_bool (ComparisonKind::lowerThan, var_idx_6961.objectCompare (temp_5.readProperty_mOccurrenceFactor ().readProperty_uint ())).isValid () ;
      if (loop_6971) {
        loop_6971 = GGS_bool (ComparisonKind::lowerThan, var_idx_6961.objectCompare (temp_5.readProperty_mOccurrenceFactor ().readProperty_uint ())).boolValue () ;
      }
      if (loop_6971 && (0 == variant_6971)) {
        loop_6971 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_build_assembly_code.galgas3", 153)) ;
      }
      if (loop_6971) {
        variant_6971 -= 1 ;
        const GGS_baseline_5F_intermediate_5F_instruction_5F_MNOP temp_6 = this ;
        ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_WO_5F_OPERAND::init_21__21_ (temp_6.readProperty_mInstructionLocation (), GGS_baseline_5F_WO_5F_OPERAND_5F_group::class_func_NOP (SOURCE_FILE ("baseline_build_assembly_code.galgas3", 158)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 156)) ;
        var_idx_6961.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 159)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_intermediate_GOTO generateAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_GOTO::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                         const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                         GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_GOTO temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_GOTO temp_1 = this ;
  ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_GOTO::init_21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mTargetLabel (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 169)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_intermediate_JUMP generateAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_JUMP::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression constinArgument_inSTATUSregister,
                                                                         const GGS_bitSliceTable constinArgument_inStatusRegisterBitSliceTable,
                                                                         GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_JUMP temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_JUMP temp_1 = this ;
  GGS_uint var_pageChangeFlags_8030 = temp_0.readProperty_mCurrentPage ().operator_xor (temp_1.readProperty_mTargetPage () COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 181)) ;
  const GGS_baseline_5F_intermediate_5F_JUMP temp_2 = this ;
  GGS_uint var_targetPageFlags_8097 = temp_2.readProperty_mTargetPage () ;
  GGS_uint var_idx_8144 = GGS_uint (uint32_t (0U)) ;
  if (GGS_uint (uint32_t (8U)).isValid ()) {
    uint32_t variant_8154 = GGS_uint (uint32_t (8U)).uintValue () ;
    bool loop_8154 = true ;
    while (loop_8154) {
      loop_8154 = GGS_bool (ComparisonKind::notEqual, var_pageChangeFlags_8030.objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
      if (loop_8154) {
        loop_8154 = GGS_bool (ComparisonKind::notEqual, var_pageChangeFlags_8030.objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_8154 && (0 == variant_8154)) {
        loop_8154 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_build_assembly_code.galgas3", 184)) ;
      }
      if (loop_8154) {
        variant_8154 -= 1 ;
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = GGS_bool (ComparisonKind::notEqual, var_pageChangeFlags_8030.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 185)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            GGS_uint var_bitIndex_8248 ;
            GalgasBool test_4 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_4) {
              test_4 = constinArgument_inStatusRegisterBitSliceTable.getter_hasKey (GGS_string ("PA") COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 187)).boolEnum () ;
              if (GalgasBool::boolTrue == test_4) {
                GGS_uint var_sliceIndex_8443 ;
                GGS_uint var_sliceSize_8476 ;
                const GGS_baseline_5F_intermediate_5F_JUMP temp_5 = this ;
                constinArgument_inStatusRegisterBitSliceTable.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("PA"), temp_5.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), var_sliceIndex_8443, var_sliceSize_8476, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 188)) ;
                GalgasBool test_6 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_6) {
                  test_6 = GGS_bool (ComparisonKind::greaterOrEqual, var_idx_8144.objectCompare (var_sliceSize_8476)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_6) {
                    const GGS_baseline_5F_intermediate_5F_JUMP temp_7 = this ;
                    GenericArray <FixItDescription> fixItArray8 ;
                    inCompiler->emitSemanticError (temp_7.readProperty_mInstructionLocation (), GGS_string ("internal error, idx (").add_operation (var_idx_8144.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas3", 194)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 194)).add_operation (GGS_string (") >= sliceSize ("), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 194)).add_operation (var_sliceSize_8476.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas3", 194)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 194)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 194)), fixItArray8  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 194)) ;
                  }
                }
                var_bitIndex_8248 = var_sliceIndex_8443.add_operation (var_idx_8144, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 196)) ;
              }
            }
            if (GalgasBool::boolFalse == test_4) {
              GalgasBool test_9 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_9) {
                test_9 = constinArgument_inStatusRegisterBitSliceTable.getter_hasKey (GGS_string ("PA").add_operation (var_idx_8144.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas3", 197)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 197)) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 197)).boolEnum () ;
                if (GalgasBool::boolTrue == test_9) {
                  GGS_uint var_sliceIndex_8891 ;
                  GGS_uint var_sliceSize_8924 ;
                  const GGS_baseline_5F_intermediate_5F_JUMP temp_10 = this ;
                  constinArgument_inStatusRegisterBitSliceTable.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("PA").add_operation (var_idx_8144.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas3", 199)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 199)), temp_10.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), var_sliceIndex_8891, var_sliceSize_8924, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 198)) ;
                  GalgasBool test_11 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_11) {
                    test_11 = GGS_bool (ComparisonKind::notEqual, var_sliceSize_8924.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_11) {
                      const GGS_baseline_5F_intermediate_5F_JUMP temp_12 = this ;
                      GenericArray <FixItDescription> fixItArray13 ;
                      inCompiler->emitSemanticError (temp_12.readProperty_mInstructionLocation (), GGS_string ("internal error: sliceSize (").add_operation (var_sliceSize_8924.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas3", 204)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 204)).add_operation (GGS_string (") != 1"), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 204)), fixItArray13  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 204)) ;
                    }
                  }
                  var_bitIndex_8248 = var_sliceIndex_8891 ;
                }
              }
              if (GalgasBool::boolFalse == test_9) {
                const GGS_baseline_5F_intermediate_5F_JUMP temp_14 = this ;
                GenericArray <FixItDescription> fixItArray15 ;
                inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GGS_string ("internal error, cannot solve page bit addressing"), fixItArray15  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 208)) ;
                var_bitIndex_8248.drop () ; // Release error dropped variable
              }
            }
            const GGS_baseline_5F_intermediate_5F_JUMP temp_16 = this ;
            GGS_baseline_5F_bit_5F_oriented_5F_op temp_17 ;
            const GalgasBool test_18 = GGS_bool (ComparisonKind::notEqual, var_targetPageFlags_8097.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 212)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_18) {
              temp_17 = GGS_baseline_5F_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("baseline_build_assembly_code.galgas3", 212)) ;
            }else if (GalgasBool::boolFalse == test_18) {
              temp_17 = GGS_baseline_5F_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("baseline_build_assembly_code.galgas3", 212)) ;
            }
            ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_instruction_5F_FB::init_21__21__21__21_ (temp_16.readProperty_mInstructionLocation (), temp_17, constinArgument_inSTATUSregister, var_bitIndex_8248, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 210)) ;
          }
        }
        var_pageChangeFlags_8030 = var_pageChangeFlags_8030.divide_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 216)) ;
        var_targetPageFlags_8097 = var_targetPageFlags_8097.divide_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 217)) ;
        var_idx_8144 = var_idx_8144.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 218)) ;
      }
    }
  }
  const GGS_baseline_5F_intermediate_5F_JUMP temp_19 = this ;
  const GGS_baseline_5F_intermediate_5F_JUMP temp_20 = this ;
  ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_GOTO::init_21__21_ (temp_19.readProperty_mInstructionLocation (), temp_20.readProperty_mTargetLabel (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 220)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_intermediate_CALL generateAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_CALL::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                         const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                         GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_CALL temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_CALL temp_1 = this ;
  ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_CALL::init_21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mTargetLabel (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 231)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_intermediate_JSR generateAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_JSR::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression constinArgument_inSTATUSregister,
                                                                        const GGS_bitSliceTable constinArgument_inStatusRegisterBitSliceTable,
                                                                        GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_JSR temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_JSR temp_1 = this ;
  GGS_uint var_pageChangeFlags_10561 = temp_0.readProperty_mCurrentPage ().operator_xor (temp_1.readProperty_mTargetPage () COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 243)) ;
  const GGS_baseline_5F_intermediate_5F_JSR temp_2 = this ;
  GGS_uint var_targetPageFlags_10628 = temp_2.readProperty_mTargetPage () ;
  GGS_uint var_idx_10675 = GGS_uint (uint32_t (0U)) ;
  GGS_baseline_5F_assembly_5F_instructionList var_pageRestoreInstructions_10689 = GGS_baseline_5F_assembly_5F_instructionList::init (inCompiler COMMA_HERE) ;
  if (GGS_uint (uint32_t (8U)).isValid ()) {
    uint32_t variant_10754 = GGS_uint (uint32_t (8U)).uintValue () ;
    bool loop_10754 = true ;
    while (loop_10754) {
      loop_10754 = GGS_bool (ComparisonKind::notEqual, var_pageChangeFlags_10561.objectCompare (GGS_uint (uint32_t (0U)))).isValid () ;
      if (loop_10754) {
        loop_10754 = GGS_bool (ComparisonKind::notEqual, var_pageChangeFlags_10561.objectCompare (GGS_uint (uint32_t (0U)))).boolValue () ;
      }
      if (loop_10754 && (0 == variant_10754)) {
        loop_10754 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_build_assembly_code.galgas3", 247)) ;
      }
      if (loop_10754) {
        variant_10754 -= 1 ;
        GalgasBool test_3 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_3) {
          test_3 = GGS_bool (ComparisonKind::notEqual, var_pageChangeFlags_10561.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 248)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_3) {
            GGS_uint var_bitIndex_10848 ;
            GalgasBool test_4 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_4) {
              test_4 = constinArgument_inStatusRegisterBitSliceTable.getter_hasKey (GGS_string ("PA") COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 250)).boolEnum () ;
              if (GalgasBool::boolTrue == test_4) {
                GGS_uint var_sliceIndex_11043 ;
                GGS_uint var_sliceSize_11076 ;
                const GGS_baseline_5F_intermediate_5F_JSR temp_5 = this ;
                constinArgument_inStatusRegisterBitSliceTable.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("PA"), temp_5.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), var_sliceIndex_11043, var_sliceSize_11076, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 251)) ;
                GalgasBool test_6 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_6) {
                  test_6 = GGS_bool (ComparisonKind::greaterOrEqual, var_idx_10675.objectCompare (var_sliceSize_11076)).boolEnum () ;
                  if (GalgasBool::boolTrue == test_6) {
                    const GGS_baseline_5F_intermediate_5F_JSR temp_7 = this ;
                    GenericArray <FixItDescription> fixItArray8 ;
                    inCompiler->emitSemanticError (temp_7.readProperty_mInstructionLocation (), GGS_string ("internal error, idx (").add_operation (var_idx_10675.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas3", 257)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 257)).add_operation (GGS_string (") >= sliceSize ("), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 257)).add_operation (var_sliceSize_11076.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas3", 257)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 257)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 257)), fixItArray8  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 257)) ;
                  }
                }
                var_bitIndex_10848 = var_sliceIndex_11043.add_operation (var_idx_10675, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 259)) ;
              }
            }
            if (GalgasBool::boolFalse == test_4) {
              GalgasBool test_9 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_9) {
                test_9 = constinArgument_inStatusRegisterBitSliceTable.getter_hasKey (GGS_string ("PA").add_operation (var_idx_10675.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas3", 260)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 260)) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 260)).boolEnum () ;
                if (GalgasBool::boolTrue == test_9) {
                  GGS_uint var_sliceIndex_11491 ;
                  GGS_uint var_sliceSize_11524 ;
                  const GGS_baseline_5F_intermediate_5F_JSR temp_10 = this ;
                  constinArgument_inStatusRegisterBitSliceTable.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("PA").add_operation (var_idx_10675.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas3", 262)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 262)), temp_10.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), var_sliceIndex_11491, var_sliceSize_11524, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 261)) ;
                  GalgasBool test_11 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_11) {
                    test_11 = GGS_bool (ComparisonKind::notEqual, var_sliceSize_11524.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_11) {
                      const GGS_baseline_5F_intermediate_5F_JSR temp_12 = this ;
                      GenericArray <FixItDescription> fixItArray13 ;
                      inCompiler->emitSemanticError (temp_12.readProperty_mInstructionLocation (), GGS_string ("internal error: sliceSize (").add_operation (var_sliceSize_11524.getter_string (SOURCE_FILE ("baseline_build_assembly_code.galgas3", 267)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 267)).add_operation (GGS_string (") != 1"), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 267)), fixItArray13  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 267)) ;
                    }
                  }
                  var_bitIndex_10848 = var_sliceIndex_11491 ;
                }
              }
              if (GalgasBool::boolFalse == test_9) {
                const GGS_baseline_5F_intermediate_5F_JSR temp_14 = this ;
                GenericArray <FixItDescription> fixItArray15 ;
                inCompiler->emitSemanticError (temp_14.readProperty_mInstructionLocation (), GGS_string ("internal error, cannot solve page bit addressing"), fixItArray15  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 271)) ;
                var_bitIndex_10848.drop () ; // Release error dropped variable
              }
            }
            const GGS_baseline_5F_intermediate_5F_JSR temp_16 = this ;
            GGS_baseline_5F_bit_5F_oriented_5F_op temp_17 ;
            const GalgasBool test_18 = GGS_bool (ComparisonKind::notEqual, var_targetPageFlags_10628.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 275)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_18) {
              temp_17 = GGS_baseline_5F_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("baseline_build_assembly_code.galgas3", 275)) ;
            }else if (GalgasBool::boolFalse == test_18) {
              temp_17 = GGS_baseline_5F_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("baseline_build_assembly_code.galgas3", 275)) ;
            }
            ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_instruction_5F_FB::init_21__21__21__21_ (temp_16.readProperty_mInstructionLocation (), temp_17, constinArgument_inSTATUSregister, var_bitIndex_10848, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 273)) ;
            const GGS_baseline_5F_intermediate_5F_JSR temp_19 = this ;
            GGS_baseline_5F_bit_5F_oriented_5F_op temp_20 ;
            const GalgasBool test_21 = GGS_bool (ComparisonKind::equal, var_targetPageFlags_10628.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 280)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_21) {
              temp_20 = GGS_baseline_5F_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("baseline_build_assembly_code.galgas3", 280)) ;
            }else if (GalgasBool::boolFalse == test_21) {
              temp_20 = GGS_baseline_5F_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("baseline_build_assembly_code.galgas3", 280)) ;
            }
            var_pageRestoreInstructions_10689.addAssignOperation (GGS_baseline_5F_assembly_5F_instruction_5F_FB::init_21__21__21__21_ (temp_19.readProperty_mInstructionLocation (), temp_20, constinArgument_inSTATUSregister, var_bitIndex_10848, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 278)) ;
          }
        }
        var_pageChangeFlags_10561 = var_pageChangeFlags_10561.divide_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 284)) ;
        var_targetPageFlags_10628 = var_targetPageFlags_10628.divide_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 285)) ;
        var_idx_10675 = var_idx_10675.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 286)) ;
      }
    }
  }
  const GGS_baseline_5F_intermediate_5F_JSR temp_22 = this ;
  const GGS_baseline_5F_intermediate_5F_JSR temp_23 = this ;
  ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_CALL::init_21__21_ (temp_22.readProperty_mInstructionLocation (), temp_23.readProperty_mTargetLabel (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 288)) ;
  UpEnumerator_baseline_5F_assembly_5F_instructionList enumerator_12615 (var_pageRestoreInstructions_10689) ;
  while (enumerator_12615.hasCurrentObject ()) {
    ioArgument_ioAssemblyInstructionList.addAssignOperation (enumerator_12615.current_mInstruction (HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 292)) ;
    enumerator_12615.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_intermediate_incDecRegisterInCondition generateAssemblyCode'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_intermediate_5F_incDecRegisterInCondition::method_generateAssemblyCode (const GGS_baseline_5F_intermediate_5F_registerExpression /* constinArgument_inSTATUSregister */,
                                                                                              const GGS_bitSliceTable /* constinArgument_inStatusRegisterBitSliceTable */,
                                                                                              GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_0 = this ;
  const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_1 = this ;
  const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_2 = this ;
  const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_3 = this ;
  ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_incDecRegisterInCondition::init_21__21__21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mRegisterDescription (), temp_2.readProperty_mIncrement (), temp_3.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 302)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_5 = this ;
    test_4 = temp_5.readProperty_mBranchIfZero ().boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_6 = this ;
      ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_SKIP::init_21_ (temp_6.readProperty_mInstructionLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 309)) ;
    }
  }
  const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_7 = this ;
  const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_8 = this ;
  const GGS_baseline_5F_intermediate_5F_incDecRegisterInCondition temp_9 = this ;
  ioArgument_ioAssemblyInstructionList.addAssignOperation (GGS_baseline_5F_assembly_5F_GOTO::init_21__21_ (temp_7.readProperty_mInstructionLocation (), GGS_lstring::init_21__21_ (temp_8.readProperty_mTargetLabel (), temp_9.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 313)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'build_baseline_assembly_code????&'
//
//--------------------------------------------------------------------------------------------------

void routine_build_5F_baseline_5F_assembly_5F_code_3F__3F__3F__3F__26_ (const GGS_baseline_5F_intermediate_5F_instructionList constinArgument_inGeneratedInstructionList,
                                                                        const GGS_actualConfigurationMap constinArgument_inActualConfigurationMap,
                                                                        const GGS_baseline_5F_intermediate_5F_registerExpression constinArgument_inSTATUSregister,
                                                                        const GGS_bitSliceTable constinArgument_inStatusRegisterBitSliceTable,
                                                                        GGS_baseline_5F_assembly_5F_instructionList & ioArgument_ioAssemblyInstructionList,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_14313 (constinArgument_inGeneratedInstructionList) ;
  while (enumerator_14313.hasCurrentObject ()) {
    callExtensionMethod_generateAssemblyCode ((cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_14313.current_mInstruction (HERE).ptr (), constinArgument_inSTATUSregister, constinArgument_inStatusRegisterBitSliceTable, ioArgument_ioAssemblyInstructionList, inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 331)) ;
    enumerator_14313.gotoNextObject () ;
  }
  UpEnumerator_actualConfigurationMap enumerator_14565 (constinArgument_inActualConfigurationMap) ;
  while (enumerator_14565.hasCurrentObject ()) {
    {
    routine_setEmitAddress_3F_ (enumerator_14565.current_mRegisterAddress (HERE).add_operation (enumerator_14565.current_mRegisterAddress (HERE), inCompiler COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 335)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 335)) ;
    }
    {
    routine_emitCode_3F_ (enumerator_14565.current_mRegisterValue (HERE), inCompiler  COMMA_SOURCE_FILE ("baseline_build_assembly_code.galgas3", 336)) ;
    }
    enumerator_14565.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_instruction_literalOperation shouldTerminateWithMOVLW'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_literalOperation::method_shouldTerminateWithMOVLW (const GGS_string constinArgument_inErrorMessage,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_baseline_5F_instruction_5F_literalOperation temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mLiteralInstruction ().objectCompare (GGS_baseline_5F_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("baseline_compilation.galgas3", 23)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_baseline_5F_instruction_5F_literalOperation temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), constinArgument_inErrorMessage, fixItArray3  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 24)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_instruction_CALL shouldTerminateWithMOVLW'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_CALL::method_shouldTerminateWithMOVLW (const GGS_string /* constinArgument_inErrorMessage */,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_instruction_structured_if shouldTerminateWithMOVLW'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_structured_5F_if::method_shouldTerminateWithMOVLW (const GGS_string /* constinArgument_inErrorMessage */,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_baseline_5F_instruction_5F_structured_5F_if temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mThenInstructionList ().getter_count (SOURCE_FILE ("baseline_compilation.galgas3", 39)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_baseline_5F_instruction_5F_structured_5F_if temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("the 'then' branch of this 'if' instruction does not have any instruction; it must terminate with a MOVLW instruction"), fixItArray3  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 40)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_baseline_5F_instruction var_lastInstruction_1826 ;
    const GGS_baseline_5F_instruction_5F_structured_5F_if temp_4 = this ;
    temp_4.readProperty_mThenInstructionList ().method_last (var_lastInstruction_1826, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 42)) ;
    callExtensionMethod_shouldTerminateWithMOVLW ((cPtr_baseline_5F_instruction *) var_lastInstruction_1826.ptr (), GGS_string ("the 'then' branch of this 'if' instruction must terminate with a MOVLW instruction"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 43)) ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_baseline_5F_instruction_5F_structured_5F_if temp_6 = this ;
    test_5 = GGS_bool (ComparisonKind::equal, temp_6.readProperty_mElseInstructionList ().getter_count (SOURCE_FILE ("baseline_compilation.galgas3", 46)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_baseline_5F_instruction_5F_structured_5F_if temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mInstructionLocation (), GGS_string ("the 'else' branch of this 'if' instruction does not have any instruction; it must terminate with a MOVLW instruction"), fixItArray8  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 47)) ;
    }
  }
  if (GalgasBool::boolFalse == test_5) {
    GGS_baseline_5F_instruction var_lastInstruction_2274 ;
    const GGS_baseline_5F_instruction_5F_structured_5F_if temp_9 = this ;
    temp_9.readProperty_mElseInstructionList ().method_last (var_lastInstruction_2274, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 49)) ;
    callExtensionMethod_shouldTerminateWithMOVLW ((cPtr_baseline_5F_instruction *) var_lastInstruction_2274.ptr (), GGS_string ("the 'else' branch of this 'if' instruction must terminate with a MOVLW instruction"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 50)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_instruction_GOTO shouldNotContinueInSequence'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_GOTO::method_shouldNotContinueInSequence (const GGS_string /* constinArgument_inErrorMessage */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_instruction_JUMP shouldNotContinueInSequence'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_JUMP::method_shouldNotContinueInSequence (const GGS_string /* constinArgument_inErrorMessage */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension proc '@baseline_instruction_FOREVER shouldNotContinueInSequence'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_FOREVER::method_shouldNotContinueInSequence (const GGS_string /* constinArgument_inErrorMessage */,
                                                                                  Compiler * /* inCompiler */
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'baseline_analysis??'
//
//--------------------------------------------------------------------------------------------------

void routine_baseline_5F_analysis_3F__3F_ (const GGS_baseline_5F_model constinArgument_inPiccoloModel,
                                           const GGS_string constinArgument_inSourceFileName,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_sourceFileBaseName_4080 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("baseline_compilation.galgas3", 92)).getter_deletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas3", 92)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_sourceFileBaseName_4080.objectCompare (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_string ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_location (), GGS_string ("the program name ('").add_operation (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 94)).add_operation (GGS_string ("') should be identical to the file base name '"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 94)).add_operation (var_sourceFileBaseName_4080, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 95)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 95)), fixItArray1  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 94)) ;
    }
  }
  GGS_string var_listFileContents_4420 = GGS_string::makeEmptyString () ;
  GGS_piccoloDeviceModel var_piccoloDeviceModel_4552 ;
  {
  routine_parseDeviceDefinition_3F__21_ (constinArgument_inPiccoloModel.readProperty_mDeviceName (), var_piccoloDeviceModel_4552, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 99)) ;
  }
  switch (var_piccoloDeviceModel_4552.readProperty_mProcessorType ().enumValue ()) {
  case GGS_processorType::Enumeration::invalid:
    break ;
  case GGS_processorType::Enumeration::enum_baseline:
    break ;
  case GGS_processorType::Enumeration::enum_pic_31__38__5F__36__30_:
  case GGS_processorType::Enumeration::enum_pic_31__38__5F__38__30_:
    {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mDeviceName ().readProperty_location (), GGS_string ("a pic18 device is not accepted here : only a baseline device"), fixItArray2  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 102)) ;
    }
    break ;
  case GGS_processorType::Enumeration::enum_midrange:
    {
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mDeviceName ().readProperty_location (), GGS_string ("a mid-ranfe device is not accepted here : only a baseline device"), fixItArray3  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 103)) ;
    }
    break ;
  }
  GGS_actualConfigurationMap var_actualConfigurationMap_5083 ;
  {
  routine_buildConfig_3F__3F__26__21_ (var_piccoloDeviceModel_4552.readProperty_mConfigRegisterMap (), constinArgument_inPiccoloModel.readProperty_mConfigDefinitionList (), var_listFileContents_4420, var_actualConfigurationMap_5083, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 106)) ;
  }
  GGS_constantMap var_constantMap_5183 = GGS_constantMap::init (inCompiler COMMA_HERE) ;
  GGS_registerTable var_registerTable_5222 = var_piccoloDeviceModel_4552.readProperty_mRegisterTable () ;
  GGS_stringset var_usedRegisters_5318 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_constantDefinitionList enumerator_5359 (constinArgument_inPiccoloModel.readProperty_mConstantDefinitionList ()) ;
  while (enumerator_5359.hasCurrentObject ()) {
    GGS_sint_36__34_ var_result_5483 ;
    callExtensionMethod_eval ((cPtr_immediatExpression *) enumerator_5359.current_mExpression (HERE).ptr (), var_registerTable_5222, var_constantMap_5183, var_result_5483, var_usedRegisters_5318, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 118)) ;
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = var_registerTable_5222.getter_hasKey (enumerator_5359.current_mConstantName (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 119)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_5359.current_mConstantName (HERE).readProperty_location (), GGS_string ("'").add_operation (enumerator_5359.current_mConstantName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 120)).add_operation (GGS_string ("' is already declared as ram register or special register"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 120)), fixItArray5  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 120)) ;
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      {
      var_constantMap_5183.setter_insertKey (enumerator_5359.current_mConstantName (HERE), var_result_5483, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 122)) ;
      }
    }
    enumerator_5359.gotoNextObject () ;
  }
  GGS_ramBankTable var_ramBank_5825 = var_piccoloDeviceModel_4552.readProperty_mRamBankTable () ;
  GGS_declaredByteMap var_declaredByteMap_6125 ;
  {
  routine_analyze_5F_ram_5F_sections_3F__3F__3F__26__26__3F__26__26__21_ (GGS_string ("DECLARED VARIABLES"), constinArgument_inPiccoloModel.readProperty_mRamDefinitionList (), var_constantMap_5183, var_usedRegisters_5318, var_ramBank_5825, var_piccoloDeviceModel_4552.readProperty_mRegisterTable (), var_listFileContents_4420, var_registerTable_5222, var_declaredByteMap_6125, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 127)) ;
  }
  GGS_baselineRoutineMap var_routineMap_6204 = GGS_baselineRoutineMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_baseline_5F_routineDefinitionList enumerator_6279 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList ()) ;
  while (enumerator_6279.hasCurrentObject ()) {
    {
    var_routineMap_6204.setter_insertKey (enumerator_6279.current_mRoutineName (HERE), enumerator_6279.current_mIsNoReturn (HERE), enumerator_6279.current_mPage (HERE), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 141)) ;
    }
    enumerator_6279.gotoNextObject () ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (gOption_piccoloOptions_ouputListingFile.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      {
      routine_print_5F_constant_5F_definition_3F__26_ (var_constantMap_5183, var_listFileContents_4420, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 145)) ;
      }
    }
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = var_routineMap_6204.getter_hasKey (GGS_string ("main") COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 151)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      GGS_bool var_isNoReturn_6783 ;
      GGS_luint var_page_6807 ;
      var_routineMap_6204.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("main"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 152)), inCompiler COMMA_HERE), var_isNoReturn_6783, var_page_6807, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 152)) ;
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        test_8 = var_isNoReturn_6783.operator_not (SOURCE_FILE ("baseline_compilation.galgas3", 153)).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_routineMap_6204.getter_locationForKey (GGS_string ("main"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 154)), GGS_string ("the \"main\" should be declared with \"noreturn\" qualifier: \"noreturn main page 0\""), fixItArray9  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 154)) ;
        }
      }
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        test_10 = GGS_bool (ComparisonKind::notEqual, var_page_6807.readProperty_uint ().objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          GenericArray <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (var_page_6807.readProperty_location (), GGS_string ("the \"main\" should be declared in page 0: \"noreturn main page 0\""), fixItArray11  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 157)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_7) {
    GenericArray <FixItDescription> fixItArray12 ;
    inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mEndOfProgram (), GGS_string ("the program should declare the \"main\" routine"), fixItArray12  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 160)) ;
  }
  GGS_bool var_needsToSavePCLATH_7323 = GGS_bool (false) ;
  GGS_uint var_totalPageCount_7361 = var_piccoloDeviceModel_4552.readProperty_mRomSize ().readProperty_uint ().add_operation (GGS_uint (uint32_t (511U)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 164)).divide_operation (GGS_uint (uint32_t (512U)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 164)) ;
  UpEnumerator_baseline_5F_routineDefinitionList enumerator_7444 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList ()) ;
  while (enumerator_7444.hasCurrentObject ()) {
    GalgasBool test_13 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_13) {
      test_13 = GGS_bool (ComparisonKind::greaterThan, enumerator_7444.current_mPage (HERE).readProperty_uint ().objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_13) {
        var_needsToSavePCLATH_7323 = GGS_bool (true) ;
      }
    }
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      test_14 = GGS_bool (ComparisonKind::greaterOrEqual, enumerator_7444.current_mPage (HERE).readProperty_uint ().objectCompare (var_totalPageCount_7361)).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        GenericArray <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (enumerator_7444.current_mPage (HERE).readProperty_location (), GGS_string ("invalid value (").add_operation (enumerator_7444.current_mPage (HERE).readProperty_uint ().getter_string (SOURCE_FILE ("baseline_compilation.galgas3", 170)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 170)).add_operation (GGS_string ("); the device has "), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 170)).add_operation (var_totalPageCount_7361.getter_string (SOURCE_FILE ("baseline_compilation.galgas3", 170)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 170)).add_operation (GGS_string (" 512 word page(s) on rom"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 170)), fixItArray15  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 170)) ;
      }
    }
    enumerator_7444.gotoNextObject () ;
  }
  GGS_baseline_5F_routineDefinitionList var_sortedRoutineDefinitionList_7818 = GGS_baseline_5F_routineDefinitionList::init (inCompiler COMMA_HERE) ;
  UpEnumerator_baseline_5F_routineDefinitionList enumerator_7937 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList ()) ;
  while (enumerator_7937.hasCurrentObject ()) {
    GalgasBool test_16 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_16) {
      test_16 = GGS_bool (ComparisonKind::equal, enumerator_7937.current_mRoutineName (HERE).readProperty_string ().objectCompare (GGS_string ("main"))).boolEnum () ;
      if (GalgasBool::boolTrue == test_16) {
        {
        var_sortedRoutineDefinitionList_7818.setter_insertAtIndex (enumerator_7937.current_mRoutineName (HERE), enumerator_7937.current_mPage (HERE), enumerator_7937.current_mIsNoReturn (HERE), enumerator_7937.current_mInstructionList (HERE), enumerator_7937.current_mEndOfRoutineLocation (HERE), GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 177)) ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_16) {
      var_sortedRoutineDefinitionList_7818.addAssignOperation (enumerator_7937.current_mRoutineName (HERE), enumerator_7937.current_mPage (HERE), enumerator_7937.current_mIsNoReturn (HERE), enumerator_7937.current_mInstructionList (HERE), enumerator_7937.current_mEndOfRoutineLocation (HERE)  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 186)) ;
    }
    enumerator_7937.gotoNextObject () ;
  }
  GGS_baseline_5F_intermediate_5F_instructionList var_intermediateInstructionList_8482 = GGS_baseline_5F_intermediate_5F_instructionList::init (inCompiler COMMA_HERE) ;
  GalgasBool test_17 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_17) {
    test_17 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("baseline_compilation.galgas3", 196)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      GGS_uint var_currentPage_8600 = GGS_uint (uint32_t (0U)) ;
      GGS_uint var_localLabelIndex_8630 = GGS_uint (uint32_t (0U)) ;
      if (var_totalPageCount_7361.isValid ()) {
        uint32_t variant_8654 = var_totalPageCount_7361.uintValue () ;
        bool loop_8654 = true ;
        while (loop_8654) {
          loop_8654 = GGS_bool (ComparisonKind::lowerThan, var_currentPage_8600.objectCompare (var_totalPageCount_7361)).isValid () ;
          if (loop_8654) {
            loop_8654 = GGS_bool (ComparisonKind::lowerThan, var_currentPage_8600.objectCompare (var_totalPageCount_7361)).boolValue () ;
          }
          if (loop_8654 && (0 == variant_8654)) {
            loop_8654 = false ;
            inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_compilation.galgas3", 199)) ;
          }
          if (loop_8654) {
            variant_8654 -= 1 ;
            GGS_bool var_pseudo_5F_PAGE_5F_generated_8730 = GGS_bool (false) ;
            UpEnumerator_baseline_5F_routineDefinitionList enumerator_8819 (var_sortedRoutineDefinitionList_7818) ;
            while (enumerator_8819.hasCurrentObject ()) {
              GalgasBool test_18 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_18) {
                test_18 = GGS_bool (ComparisonKind::equal, enumerator_8819.current_mPage (HERE).readProperty_uint ().objectCompare (var_currentPage_8600)).boolEnum () ;
                if (GalgasBool::boolTrue == test_18) {
                  GalgasBool test_19 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_19) {
                    test_19 = var_pseudo_5F_PAGE_5F_generated_8730.operator_not (SOURCE_FILE ("baseline_compilation.galgas3", 204)).boolEnum () ;
                    if (GalgasBool::boolTrue == test_19) {
                      var_pseudo_5F_PAGE_5F_generated_8730 = GGS_bool (true) ;
                      var_intermediateInstructionList_8482.addAssignOperation (GGS_baseline_5F_intermediate_5F_pseudo_5F_PAGE::init_21_ (var_currentPage_8600, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 206)) ;
                    }
                  }
                  GGS_routineKind var_routineKind_9148 ;
                  GalgasBool test_20 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_20) {
                    test_20 = enumerator_8819.current_mIsNoReturn (HERE).boolEnum () ;
                    if (GalgasBool::boolTrue == test_20) {
                      var_routineKind_9148 = GGS_routineKind::class_func_noReturnRoutine (SOURCE_FILE ("baseline_compilation.galgas3", 211)) ;
                      GalgasBool test_21 = GalgasBool::boolTrue ;
                      if (GalgasBool::boolTrue == test_21) {
                        test_21 = GGS_bool (ComparisonKind::equal, enumerator_8819.current_mInstructionList (HERE).getter_count (SOURCE_FILE ("baseline_compilation.galgas3", 213)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
                        if (GalgasBool::boolTrue == test_21) {
                          GenericArray <FixItDescription> fixItArray22 ;
                          inCompiler->emitSemanticError (enumerator_8819.current_mRoutineName (HERE).readProperty_location (), GGS_string ("a noreturn routine should terminate by a GOTO or a FOREVER loop"), fixItArray22  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 214)) ;
                        }
                      }
                      if (GalgasBool::boolFalse == test_21) {
                        GGS_baseline_5F_instruction var_lastInstruction_9529 ;
                        enumerator_8819.current_mInstructionList (HERE).method_last (var_lastInstruction_9529, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 216)) ;
                        callExtensionMethod_shouldNotContinueInSequence ((cPtr_baseline_5F_instruction *) var_lastInstruction_9529.ptr (), GGS_string ("a noreturn routine should terminate by a GOTO or a FOREVER loop"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 217)) ;
                      }
                    }
                  }
                  if (GalgasBool::boolFalse == test_20) {
                    var_routineKind_9148 = GGS_routineKind::class_func_regularRoutine (SOURCE_FILE ("baseline_compilation.galgas3", 220)) ;
                    GalgasBool test_23 = GalgasBool::boolTrue ;
                    if (GalgasBool::boolTrue == test_23) {
                      test_23 = GGS_bool (ComparisonKind::equal, enumerator_8819.current_mInstructionList (HERE).getter_count (SOURCE_FILE ("baseline_compilation.galgas3", 222)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
                      if (GalgasBool::boolTrue == test_23) {
                        GenericArray <FixItDescription> fixItArray24 ;
                        inCompiler->emitSemanticError (enumerator_8819.current_mRoutineName (HERE).readProperty_location (), GGS_string ("a baseline routine must end with a MOVLW instruction"), fixItArray24  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 223)) ;
                      }
                    }
                    if (GalgasBool::boolFalse == test_23) {
                      GGS_baseline_5F_instruction var_lastInstruction_10051 ;
                      enumerator_8819.current_mInstructionList (HERE).method_last (var_lastInstruction_10051, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 225)) ;
                      callExtensionMethod_shouldTerminateWithMOVLW ((cPtr_baseline_5F_instruction *) var_lastInstruction_10051.ptr (), GGS_string ("the last routine instruction should be MOVLW"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 226)) ;
                    }
                  }
                  GalgasBool test_25 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_25) {
                    test_25 = GGS_bool (ComparisonKind::notEqual, enumerator_8819.current_mRoutineName (HERE).readProperty_string ().objectCompare (GGS_string ("main"))).boolEnum () ;
                    if (GalgasBool::boolTrue == test_25) {
                      var_intermediateInstructionList_8482.addAssignOperation (GGS_baseline_5F_intermediate_5F_pseudo_5F_BEGIN_5F_ROUTINE::init_21__21_ (enumerator_8819.current_mRoutineName (HERE), enumerator_8819.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("baseline_compilation.galgas3", 231)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 231)) ;
                      var_intermediateInstructionList_8482.addAssignOperation (GGS_baseline_5F_intermediate_5F_pseudo_5F_LABEL::init_21_ (enumerator_8819.current_mRoutineName (HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 232)) ;
                    }
                  }
                  GGS_bool var_continuesInSequence_10837 ;
                  {
                  routine_handleBaselineInstructionList_3F__3F__3F__3F__3F__26__26__26__21__3F__3F__26_ (var_currentPage_8600, enumerator_8819.current_mInstructionList (HERE), var_routineMap_6204, var_registerTable_5222, var_constantMap_5183, var_localLabelIndex_8630, var_intermediateInstructionList_8482, var_listFileContents_4420, var_continuesInSequence_10837, var_routineKind_9148, enumerator_8819.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("baseline_compilation.galgas3", 245)), var_usedRegisters_5318, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 234)) ;
                  }
                  var_intermediateInstructionList_8482.addAssignOperation (GGS_baseline_5F_intermediate_5F_pseudo_5F_END_5F_ROUTINE::init_21__21_ (enumerator_8819.current_mRoutineName (HERE), var_currentPage_8600, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 248)) ;
                  GalgasBool test_26 = GalgasBool::boolTrue ;
                  if (GalgasBool::boolTrue == test_26) {
                    test_26 = enumerator_8819.current_mIsNoReturn (HERE).operator_and (var_continuesInSequence_10837 COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 249)).boolEnum () ;
                    if (GalgasBool::boolTrue == test_26) {
                      GenericArray <FixItDescription> fixItArray27 ;
                      inCompiler->emitSemanticError (enumerator_8819.current_mRoutineName (HERE).readProperty_location (), GGS_string ("execution should not reach the end of a \"noreturn\" routine"), fixItArray27  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 250)) ;
                    }
                  }
                }
              }
              enumerator_8819.gotoNextObject () ;
            }
            var_currentPage_8600.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 254)) ;
          }
        }
      }
    }
  }
  GGS_stringset var_usedRoutineSet_11404 = function_baseline_5F_computeUsedRoutines (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 258)) ;
  GGS_baseline_5F_declaredRoutineMap var_declaredRoutineMap_11505 = GGS_baseline_5F_declaredRoutineMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_baseline_5F_routineDefinitionList enumerator_11583 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList ()) ;
  while (enumerator_11583.hasCurrentObject ()) {
    {
    var_declaredRoutineMap_11505.setter_insertKey (enumerator_11583.current_mRoutineName (HERE), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 263)) ;
    }
    enumerator_11583.gotoNextObject () ;
  }
  GGS_stringset var_unusedRoutineDeclarationUnicity_11749 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_lstringlist enumerator_11803 (constinArgument_inPiccoloModel.readProperty_mUnusedRoutineList ()) ;
  while (enumerator_11803.hasCurrentObject ()) {
    GalgasBool test_28 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_28) {
      test_28 = var_declaredRoutineMap_11505.getter_hasKey (enumerator_11803.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 268)).operator_not (SOURCE_FILE ("baseline_compilation.galgas3", 268)).boolEnum () ;
      if (GalgasBool::boolTrue == test_28) {
        GenericArray <FixItDescription> fixItArray29 ;
        inCompiler->emitSemanticError (enumerator_11803.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_11803.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 269)).add_operation (GGS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 269)), fixItArray29  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 269)) ;
      }
    }
    if (GalgasBool::boolFalse == test_28) {
      GalgasBool test_30 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_30) {
        test_30 = var_unusedRoutineDeclarationUnicity_11749.getter_hasKey (enumerator_11803.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 270)).boolEnum () ;
        if (GalgasBool::boolTrue == test_30) {
          GenericArray <FixItDescription> fixItArray31 ;
          inCompiler->emitSemanticWarning (enumerator_11803.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_11803.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 271)).add_operation (GGS_string ("' routine is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 271)), fixItArray31  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 271)) ;
        }
      }
      if (GalgasBool::boolFalse == test_30) {
        GalgasBool test_32 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_32) {
          test_32 = var_usedRoutineSet_11404.getter_hasKey (enumerator_11803.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 272)).boolEnum () ;
          if (GalgasBool::boolTrue == test_32) {
            GenericArray <FixItDescription> fixItArray33 ;
            inCompiler->emitSemanticWarning (enumerator_11803.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_11803.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 273)).add_operation (GGS_string ("' routine is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 273)), fixItArray33  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 273)) ;
          }
        }
      }
    }
    var_unusedRoutineDeclarationUnicity_11749.plusPlusAssignOperation (enumerator_11803.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 275)) ;
    enumerator_11803.gotoNextObject () ;
  }
  UpEnumerator_baseline_5F_declaredRoutineMap enumerator_12354 (var_declaredRoutineMap_11505) ;
  while (enumerator_12354.hasCurrentObject ()) {
    GalgasBool test_34 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_34) {
      test_34 = var_usedRoutineSet_11404.getter_hasKey (enumerator_12354.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 278)).operator_not (SOURCE_FILE ("baseline_compilation.galgas3", 278)).operator_and (var_unusedRoutineDeclarationUnicity_11749.getter_hasKey (enumerator_12354.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 278)).operator_not (SOURCE_FILE ("baseline_compilation.galgas3", 278)) COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 278)).boolEnum () ;
      if (GalgasBool::boolTrue == test_34) {
        GenericArray <FixItDescription> fixItArray35 ;
        inCompiler->emitSemanticWarning (enumerator_12354.current_lkey (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_12354.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 279)).add_operation (GGS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 279)), fixItArray35  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 279)) ;
      }
    }
    enumerator_12354.gotoNextObject () ;
  }
  GGS_stringset var_unusedDeclarationUnicity_12675 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_lstringlist enumerator_12722 (constinArgument_inPiccoloModel.readProperty_mUnusedRegisterList ()) ;
  while (enumerator_12722.hasCurrentObject ()) {
    GalgasBool test_36 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_36) {
      test_36 = var_registerTable_5222.getter_hasKey (enumerator_12722.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 285)).operator_not (SOURCE_FILE ("baseline_compilation.galgas3", 285)).boolEnum () ;
      if (GalgasBool::boolTrue == test_36) {
        GenericArray <FixItDescription> fixItArray37 ;
        inCompiler->emitSemanticError (enumerator_12722.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_12722.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 286)).add_operation (GGS_string ("' byte is not declared"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 286)), fixItArray37  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 286)) ;
      }
    }
    if (GalgasBool::boolFalse == test_36) {
      GalgasBool test_38 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_38) {
        test_38 = var_unusedDeclarationUnicity_12675.getter_hasKey (enumerator_12722.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 287)).boolEnum () ;
        if (GalgasBool::boolTrue == test_38) {
          GenericArray <FixItDescription> fixItArray39 ;
          inCompiler->emitSemanticWarning (enumerator_12722.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_12722.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 288)).add_operation (GGS_string ("' byte is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 288)), fixItArray39  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 288)) ;
        }
      }
      if (GalgasBool::boolFalse == test_38) {
        GalgasBool test_40 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_40) {
          test_40 = var_usedRegisters_5318.getter_hasKey (enumerator_12722.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 289)).boolEnum () ;
          if (GalgasBool::boolTrue == test_40) {
            GenericArray <FixItDescription> fixItArray41 ;
            inCompiler->emitSemanticWarning (enumerator_12722.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_12722.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 290)).add_operation (GGS_string ("' byte is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 290)), fixItArray41  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 290)) ;
          }
        }
      }
    }
    var_unusedDeclarationUnicity_12675.plusPlusAssignOperation (enumerator_12722.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 292)) ;
    enumerator_12722.gotoNextObject () ;
  }
  UpEnumerator_declaredByteMap enumerator_13245 (var_declaredByteMap_6125) ;
  while (enumerator_13245.hasCurrentObject ()) {
    GalgasBool test_42 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_42) {
      test_42 = var_usedRegisters_5318.getter_hasKey (enumerator_13245.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 295)).operator_not (SOURCE_FILE ("baseline_compilation.galgas3", 295)).operator_and (var_unusedDeclarationUnicity_12675.getter_hasKey (enumerator_13245.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 295)).operator_not (SOURCE_FILE ("baseline_compilation.galgas3", 295)) COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 295)).boolEnum () ;
      if (GalgasBool::boolTrue == test_42) {
        GenericArray <FixItDescription> fixItArray43 ;
        inCompiler->emitSemanticWarning (enumerator_13245.current_lkey (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_13245.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 296)).add_operation (GGS_string ("' byte is unused"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 296)), fixItArray43  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 296)) ;
      }
    }
    enumerator_13245.gotoNextObject () ;
  }
  GalgasBool test_44 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_44) {
    test_44 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("baseline_compilation.galgas3", 300)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (gOption_piccoloOptions_ouputListingFile.readProperty_value ()) COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 300)).boolEnum () ;
    if (GalgasBool::boolTrue == test_44) {
      var_listFileContents_4420.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 301)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 301)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 301)) ;
      var_listFileContents_4420.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("INTERMEDIATE INSTRUCTION LIST").getter_leftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 302)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 302)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 302)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 302)) ;
      var_listFileContents_4420.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 303)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 303)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 303)) ;
      var_listFileContents_4420.plusAssignOperation(GGS_string ("Generated intermediate code:\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 304)) ;
      var_listFileContents_4420.plusAssignOperation(GGS_string (" Line Length Mnemonic\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 305)) ;
      GGS_uint var_currentAddress_13966 = GGS_uint (uint32_t (0U)) ;
      UpEnumerator_baseline_5F_intermediate_5F_instructionList enumerator_13994 (var_intermediateInstructionList_8482) ;
      GGS_uint index_13989 (uint32_t (0)) ;
      while (enumerator_13994.hasCurrentObject ()) {
        var_listFileContents_4420.plusAssignOperation(index_13989.getter_string (SOURCE_FILE ("baseline_compilation.galgas3", 308)).getter_leftPadding (GGS_uint (uint32_t (5U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 308)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 308)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 308)) ;
        var_listFileContents_4420.plusAssignOperation(callExtensionGetter_length ((const cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_13994.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 309)).getter_string (SOURCE_FILE ("baseline_compilation.galgas3", 309)).getter_leftPadding (GGS_uint (uint32_t (6U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 309)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 309)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 309)) ;
        callExtensionMethod_print ((cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_13994.current_mInstruction (HERE).ptr (), var_listFileContents_4420, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 310)) ;
        var_listFileContents_4420.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 311)) ;
        callExtensionMethod_setCurrentAddress ((cPtr_baseline_5F_intermediate_5F_instruction *) enumerator_13994.current_mInstruction (HERE).ptr (), var_currentAddress_13966, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 312)) ;
        enumerator_13994.gotoNextObject () ;
        index_13989.increment_operation (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 307)) ;
      }
      var_listFileContents_4420.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 314)) ;
      var_listFileContents_4420.plusAssignOperation(GGS_string ("Code size without optimization: ").add_operation (var_currentAddress_13966.getter_string (SOURCE_FILE ("baseline_compilation.galgas3", 315)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 315)).add_operation (GGS_string (" words.\n\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 315)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 315)) ;
    }
  }
  GalgasBool test_45 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_45) {
    test_45 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("baseline_compilation.galgas3", 318)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (gOption_piccoloOptions_performOptimizations.readProperty_value ()) COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 318)).boolEnum () ;
    if (GalgasBool::boolTrue == test_45) {
      {
      routine_perform_5F_baseline_5F_optimizations_26__26_ (var_intermediateInstructionList_8482, var_listFileContents_4420, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 319)) ;
      }
    }
  }
  {
  routine_initCodeGenerator (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 322)) ;
  }
  GGS_registerExpression var_sr_14809 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("STATUS"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 324)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 325)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 326)), inCompiler COMMA_HERE) ;
  GGS_baseline_5F_intermediate_5F_registerExpression var_statusRegister_15033 ;
  GGS_bitSliceTable var_statusRegisterBitSliceTable_15073 ;
  callExtensionMethod_resolveBaselineAccess ((cPtr_registerExpression *) var_sr_14809.ptr (), var_registerTable_5222, var_constantMap_5183, var_statusRegister_15033, var_statusRegisterBitSliceTable_15073, var_usedRegisters_5318, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 328)) ;
  GGS_baseline_5F_assembly_5F_instructionList var_assemblyInstructionList_15132 = GGS_baseline_5F_assembly_5F_instructionList::init (inCompiler COMMA_HERE) ;
  GalgasBool test_46 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_46) {
    test_46 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("baseline_compilation.galgas3", 336)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_46) {
      {
      routine_build_5F_baseline_5F_assembly_5F_code_3F__3F__3F__3F__26_ (var_intermediateInstructionList_8482, var_actualConfigurationMap_5083, var_statusRegister_15033, var_statusRegisterBitSliceTable_15073, var_assemblyInstructionList_15132, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 337)) ;
      }
    }
  }
  GalgasBool test_47 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_47) {
    test_47 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("baseline_compilation.galgas3", 346)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_47) {
      var_listFileContents_4420.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 347)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 347)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 347)) ;
      var_listFileContents_4420.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("GENERATED CODE").getter_leftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 348)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 348)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 348)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 348)) ;
      var_listFileContents_4420.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 349)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 349)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 349)) ;
      var_listFileContents_4420.plusAssignOperation(GGS_string ("Address Code Mnemonic\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 350)) ;
      GGS_uint var_usedROMsize_15945 ;
      {
      routine_build_5F_baseline_5F_binary_5F_code_3F__3F__26__21_ (var_assemblyInstructionList_15132, var_piccoloDeviceModel_4552.readProperty_mRomSize ().readProperty_uint (), var_listFileContents_4420, var_usedROMsize_15945, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 351)) ;
      }
    }
  }
  GalgasBool test_48 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_48) {
    test_48 = GGS_bool (gOption_piccoloOptions_ouputListingFile.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_48) {
      GGS_string var_listFile_16090 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas3", 360)).add_operation (GGS_string (".list"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 360)) ;
      GGS_bool joker_16216 ; // Joker input parameter
      var_listFileContents_4420.method_writeToFileWhenDifferentContents (var_listFile_16090, joker_16216, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 361)) ;
    }
  }
  GalgasBool test_49 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_49) {
    test_49 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("baseline_compilation.galgas3", 365)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_49) {
      GGS_string var_contents_16392 ;
      {
      routine_getGeneratedContents_21_ (var_contents_16392, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 366)) ;
      }
      GGS_string var_destinationFile_16418 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas3", 367)).add_operation (GGS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 367)) ;
      GGS_bool joker_16549 ; // Joker input parameter
      var_contents_16392.method_writeToFileWhenDifferentContents (var_destinationFile_16418, joker_16549, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 368)) ;
      GalgasBool test_50 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_50) {
        test_50 = GGS_bool (gOption_piccoloOptions_output_5F_C_5F_Array.readProperty_value ()).boolEnum () ;
        if (GalgasBool::boolTrue == test_50) {
          GGS_string var_baseName_16628 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("baseline_compilation.galgas3", 370)).getter_deletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas3", 370)) ;
          {
          routine_get_5F_C_5F_ArrayImplementation_3F__21_ (var_baseName_16628, var_contents_16392, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 371)) ;
          }
          var_destinationFile_16418 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas3", 372)).add_operation (GGS_string (".c"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 372)) ;
          GGS_bool joker_16890 ; // Joker input parameter
          var_contents_16392.method_writeToFileWhenDifferentContents (var_destinationFile_16418, joker_16890, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 373)) ;
          {
          routine_get_5F_C_5F_ArrayHeader_3F__21_ (var_baseName_16628, var_contents_16392, inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 374)) ;
          }
          var_destinationFile_16418 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas3", 375)).add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 375)) ;
          GGS_bool joker_17080 ; // Joker input parameter
          var_contents_16392.method_writeToFileWhenDifferentContents (var_destinationFile_16418, joker_17080, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 376)) ;
        }
      }
      GalgasBool test_51 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_51) {
        test_51 = GGS_bool (gOption_piccoloOptions_generateAssembly.readProperty_value ()).boolEnum () ;
        if (GalgasBool::boolTrue == test_51) {
          GGS_string var_assemblyCode_17228 = GGS_string ("  processor ").add_operation (constinArgument_inPiccoloModel.readProperty_mDeviceName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 380)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 380)) ;
          UpEnumerator_baseline_5F_assembly_5F_instructionList enumerator_17307 (var_assemblyInstructionList_15132) ;
          while (enumerator_17307.hasCurrentObject ()) {
            callExtensionMethod_print ((cPtr_baseline_5F_assembly_5F_instruction *) enumerator_17307.current_mInstruction (HERE).ptr (), var_assemblyCode_17228, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 382)) ;
            var_assemblyCode_17228.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 383)) ;
            enumerator_17307.gotoNextObject () ;
          }
          var_assemblyCode_17228.plusAssignOperation(GGS_string ("\n;--- Registers\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 385)) ;
          UpEnumerator_registerTable enumerator_17521 (var_registerTable_5222) ;
          while (enumerator_17521.hasCurrentObject ()) {
            GGS_uint var_address_17592 ;
            enumerator_17521.current_mRegisterAddressList (HERE).method_first (var_address_17592, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 387)) ;
            var_assemblyCode_17228.plusAssignOperation(enumerator_17521.current_lkey (HERE).readProperty_string ().add_operation (GGS_string (" EQU "), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 388)).add_operation (var_address_17592.getter_hexString (SOURCE_FILE ("baseline_compilation.galgas3", 388)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 388)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 388)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 388)) ;
            enumerator_17521.gotoNextObject () ;
          }
          var_assemblyCode_17228.plusAssignOperation(GGS_string ("W EQU 0\n\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 390)) ;
          var_assemblyCode_17228.plusAssignOperation(GGS_string (";--- Configuration\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 391)) ;
          UpEnumerator_actualConfigurationMap enumerator_17795 (var_actualConfigurationMap_5083) ;
          while (enumerator_17795.hasCurrentObject ()) {
            var_assemblyCode_17228.plusAssignOperation(GGS_string ("  __config ").add_operation (enumerator_17795.current_mRegisterAddress (HERE).getter_hexString (SOURCE_FILE ("baseline_compilation.galgas3", 393)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 393)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 393)).add_operation (enumerator_17795.current_mRegisterValue (HERE).operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 393)).getter_hexString (SOURCE_FILE ("baseline_compilation.galgas3", 393)), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 393)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 393)), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 393)) ;
            enumerator_17795.gotoNextObject () ;
          }
          var_assemblyCode_17228.plusAssignOperation(GGS_string ("\n  END\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 395)) ;
          GGS_string var_asmDestinationFile_18019 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas3", 396)).add_operation (GGS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 396)) ;
          GGS_bool joker_18162 ; // Joker input parameter
          var_assemblyCode_17228.method_writeToFileWhenDifferentContents (var_asmDestinationFile_18019, joker_18162, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 397)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_49) {
    GGS_string var_hexDestinationFile_18244 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas3", 400)).add_operation (GGS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 400)) ;
    GalgasBool test_52 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_52) {
      test_52 = var_hexDestinationFile_18244.getter_fileExists (SOURCE_FILE ("baseline_compilation.galgas3", 401)).boolEnum () ;
      if (GalgasBool::boolTrue == test_52) {
        {
        GGS_string::class_method_deleteFile (var_hexDestinationFile_18244, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 402)) ;
        }
      }
    }
    GGS_string var_asmDestinationFile_18426 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("baseline_compilation.galgas3", 404)).add_operation (GGS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 404)) ;
    GalgasBool test_53 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_53) {
      test_53 = var_asmDestinationFile_18426.getter_fileExists (SOURCE_FILE ("baseline_compilation.galgas3", 405)).boolEnum () ;
      if (GalgasBool::boolTrue == test_53) {
        {
        GGS_string::class_method_deleteFile (var_asmDestinationFile_18426, inCompiler COMMA_SOURCE_FILE ("baseline_compilation.galgas3", 406)) ;
        }
      }
    }
  }
}


