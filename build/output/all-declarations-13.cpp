#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-13.h"

//--------------------------------------------------------------------------------------------------
//
//Routine 'parseDeviceDefinition?!'
//
//--------------------------------------------------------------------------------------------------

void routine_parseDeviceDefinition_3F__21_ (const GGS_lstring constinArgument_inDeviceName,
                                            GGS_piccoloDeviceModel & outArgument_outPiccoloDeviceModel,
                                            Compiler * inCompiler
                                            COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outPiccoloDeviceModel.drop () ; // Release 'out' argument
  GGS_filewrapper var_fw_319 = GGS_filewrapper (gWrapperDirectory_0_embeddedDevices) ;
  GGS_string var_deviceFullName_368 = constinArgument_inDeviceName.readProperty_string ().add_operation (GGS_string (".piccoloDevice"), inCompiler COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas", 17)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = var_fw_319.getter_fileExistsAtPath (var_deviceFullName_368, inCompiler COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas", 18)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_string var_definitionString_488 = var_fw_319.getter_textFileContentsAtPath (var_deviceFullName_368, inCompiler COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas", 19)) ;
      outArgument_outPiccoloDeviceModel.drop () ;
      cGrammar_piccoloDevice_5F_grammar::_performSourceStringParsing_ (inCompiler, var_definitionString_488, var_deviceFullName_368, outArgument_outPiccoloDeviceModel  COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas", 20)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GenericArray <FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inDeviceName.readProperty_location (), GGS_string ("The '").add_operation (constinArgument_inDeviceName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas", 24)).add_operation (GGS_string ("' definition file is not defined"), inCompiler COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas", 24)), fixItArray1  COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas", 22)) ;
    outArgument_outPiccoloDeviceModel.drop () ; // Release error dropped variable
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_switch analyze'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_switch::method_analyze (const GGS_uint constinArgument_inAccessBankSplitOffset,
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
  GGS_caseConstantMap var_caseConstantMap_2422 = GGS_caseConstantMap::init (inCompiler COMMA_HERE) ;
  const GGS_pic_31__38_Instruction_5F_switch temp_0 = this ;
  GGS_lstring var_exitLabel_2477 = GGS_lstring::init_21__21_ (GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 63)), temp_0.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 64)) ;
  GGS_sint_36__34_ var_lastComparisonValue_2625 = GGS_sint_36__34_ (int64_t (0LL)) ;
  GGS_bool var_continuesInSequence_2706 = GGS_bool (false) ;
  GGS_uint var_initialBankSetting_2745 = ioArgument_ioCurrentBank ;
  GGS_uint var_finalBankSetting_2792 = GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 71)) ;
  GGS_bool var_finalBankSettingDefined_2834 = GGS_bool (false) ;
  const GGS_pic_31__38_Instruction_5F_switch temp_1 = this ;
  UpEnumerator_pic_31__38_SwitchInstructionCaseList enumerator_2911 (temp_1.readProperty_mCaseList ()) ;
  while (enumerator_2911.hasCurrentObject ()) {
    const GGS_pic_31__38_Instruction_5F_switch temp_2 = this ;
    GGS_lstring var_conditionTrueLabel_2972 = GGS_lstring::init_21__21_ (GGS_string (".L.accepted.").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 76)), temp_2.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
    UpEnumerator_pic_31__38_CaseExpressionList enumerator_3115 (enumerator_2911.current_mCaseExpressionList (HERE)) ;
    while (enumerator_3115.hasCurrentObject ()) {
      GGS_string var_conditionLabel_3162 = ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 79)) ;
      ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 80)) ;
      callExtensionMethod_analyzeCaseItem ((cPtr_pic_31__38_AbstractCaseItem *) enumerator_3115.current_mCaseItem (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_conditionTrueLabel_2972, var_conditionLabel_3162, ioArgument_ioUsedRegisters, var_caseConstantMap_2422, ioArgument_ioGeneratedInstructionList, ioArgument_ioGeneratedBlockList, ioArgument_ioBlockLabel, var_lastComparisonValue_2625, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 81)) ;
      enumerator_3115.gotoNextObject () ;
    }
    GGS_lstring var_conditionFalseLabel_3606 = ioArgument_ioBlockLabel ;
    ioArgument_ioBlockLabel = var_conditionTrueLabel_2972 ;
    GGS_uint var_branchFinalBank_3693 = var_initialBankSetting_2745 ;
    {
    routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (enumerator_2911.current_mInstructionList (HERE), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_branchFinalBank_3693, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 98)) ;
    }
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      test_3 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        var_continuesInSequence_2706 = GGS_bool (true) ;
        const GGS_pic_31__38_Instruction_5F_switch temp_4 = this ;
        ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 119)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_4.readProperty_mInstructionLocation (), var_exitLabel_2477, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18-switch-instruction.galgas", 122)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 123)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 118)) ;
      }
    }
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = var_finalBankSettingDefined_2834.boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GalgasBool test_6 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_6) {
          test_6 = GGS_bool (ComparisonKind::notEqual, var_finalBankSetting_2792.objectCompare (var_branchFinalBank_3693)).boolEnum () ;
          if (GalgasBool::boolTrue == test_6) {
            GGS_string temp_7 ;
            const GalgasBool test_8 = GGS_bool (ComparisonKind::equal, var_branchFinalBank_3693.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 130)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              temp_7 = GGS_string ("'no selection'") ;
            }else if (GalgasBool::boolFalse == test_8) {
              temp_7 = var_branchFinalBank_3693.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 130)) ;
            }
            GGS_string temp_9 ;
            const GalgasBool test_10 = GGS_bool (ComparisonKind::equal, var_finalBankSetting_2792.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 132)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_10) {
              temp_9 = GGS_string ("'no selection'") ;
            }else if (GalgasBool::boolFalse == test_10) {
              temp_9 = var_finalBankSetting_2792.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 132)) ;
            }
            GenericArray <FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (enumerator_2911.current_mStartOfCase (HERE), GGS_string ("this branch leaves bank setting to ").add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 129)).add_operation (GGS_string (", but first branch leaves bank setting to "), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 130)).add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 131)).add_operation (GGS_string (" (should be the same setting)"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 132)), fixItArray11  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 129)) ;
          }
        }
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      var_finalBankSettingDefined_2834 = GGS_bool (true) ;
      var_finalBankSetting_2792 = var_branchFinalBank_3693 ;
    }
    ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
    ioArgument_ioBlockLabel = var_conditionFalseLabel_3606 ;
    enumerator_2911.gotoNextObject () ;
  }
  GGS_uint var_branchFinalBank_5225 = var_initialBankSetting_2745 ;
  {
  const GGS_pic_31__38_Instruction_5F_switch temp_12 = this ;
  routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (temp_12.readProperty_mElseInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_branchFinalBank_5225, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 144)) ;
  }
  GGS_bool var_thenContinuesInSequence_5670 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GGS_string::makeEmptyString ())) ;
  GalgasBool test_13 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_13) {
    test_13 = var_thenContinuesInSequence_5670.boolEnum () ;
    if (GalgasBool::boolTrue == test_13) {
      const GGS_pic_31__38_Instruction_5F_switch temp_14 = this ;
      ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 165)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_14.readProperty_mInstructionLocation (), var_exitLabel_2477, GGS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18-switch-instruction.galgas", 168)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 169)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 164)) ;
    }
  }
  ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    test_15 = GGS_bool (ComparisonKind::notEqual, var_finalBankSetting_2792.objectCompare (var_branchFinalBank_5225)).boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      const GGS_pic_31__38_Instruction_5F_switch temp_16 = this ;
      GGS_string temp_17 ;
      const GalgasBool test_18 = GGS_bool (ComparisonKind::equal, var_branchFinalBank_5225.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 177)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_18) {
        temp_17 = GGS_string ("'no selection'") ;
      }else if (GalgasBool::boolFalse == test_18) {
        temp_17 = var_branchFinalBank_5225.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 177)) ;
      }
      GGS_string temp_19 ;
      const GalgasBool test_20 = GGS_bool (ComparisonKind::equal, var_finalBankSetting_2792.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 179)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_20) {
        temp_19 = GGS_string ("'no selection'") ;
      }else if (GalgasBool::boolFalse == test_20) {
        temp_19 = var_finalBankSetting_2792.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 179)) ;
      }
      GenericArray <FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_16.readProperty_mElseBranchStartLocation (), GGS_string ("the 'else' branch leaves bank setting to ").add_operation (temp_17, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 176)).add_operation (GGS_string (", but first branch leaves bank setting to "), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 177)).add_operation (temp_19, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 178)).add_operation (GGS_string (" (should be the same setting)"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 179)), fixItArray21  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 176)) ;
    }
  }
  ioArgument_ioCurrentBank = var_finalBankSetting_2792 ;
  GalgasBool test_22 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_22) {
    test_22 = var_continuesInSequence_2706.boolEnum () ;
    if (GalgasBool::boolTrue == test_22) {
      ioArgument_ioBlockLabel = var_exitLabel_2477 ;
    }
  }
  if (GalgasBool::boolFalse == test_22) {
    ioArgument_ioBlockLabel = GGS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18-switch-instruction.galgas", 187)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18SimpleConstantCaseItem analyzeCaseItem'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_SimpleConstantCaseItem::method_analyzeCaseItem (const GGS_registerTable constinArgument_inRegisterTable,
                                                                     const GGS_constantMap constinArgument_inConstantMap,
                                                                     const GGS_lstring constinArgument_inConditionTrueLabel,
                                                                     const GGS_string constinArgument_inIndexForLabels,
                                                                     GGS_stringset & ioArgument_ioUsedRegisters,
                                                                     GGS_caseConstantMap & ioArgument_ioCaseConstantMap,
                                                                     GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                     GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                     GGS_lstring & ioArgument_ioBlockLabel,
                                                                     GGS_sint_36__34_ & ioArgument_ioLastComparisonValue,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_result_8045 ;
  const GGS_pic_31__38_SimpleConstantCaseItem temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mCaseExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_8045, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 225)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::greaterThan, var_result_8045.objectCompare (GGS_sint_36__34_ (int64_t (255LL)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_result_8045.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 227)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_pic_31__38_SimpleConstantCaseItem temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mCaseExpressionLocation (), GGS_string ("case value is evaluated as ").add_operation (var_result_8045.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 228)).add_operation (GGS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 228)), fixItArray3  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 228)) ;
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = ioArgument_ioCaseConstantMap.getter_hasKey (var_result_8045.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 231)) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 231)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_pic_31__38_SimpleConstantCaseItem temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mCaseExpressionLocation (), GGS_string ("the '").add_operation (var_result_8045.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 232)).add_operation (GGS_string ("' constant is already used in switch instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 232)), fixItArray6  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 232)) ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (ioArgument_ioCaseConstantMap.getter_locationForKey (var_result_8045.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)), GGS_string ("the '").add_operation (var_result_8045.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)).add_operation (GGS_string ("' constant is used here"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)), fixItArray7  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)) ;
    }
  }
  if (GalgasBool::boolFalse == test_4) {
    {
    const GGS_pic_31__38_SimpleConstantCaseItem temp_8 = this ;
    ioArgument_ioCaseConstantMap.setter_insertKey (GGS_lstring::init_21__21_ (var_result_8045.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 235)), temp_8.readProperty_mCaseExpressionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 235)) ;
    }
  }
  const GGS_pic_31__38_SimpleConstantCaseItem temp_9 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_9.readProperty_mCaseExpressionLocation (), GGS_literal_5F_instruction_5F_opcode::class_func_ADDLW (SOURCE_FILE ("ipic18-switch-instruction.galgas", 240)), ioArgument_ioLastComparisonValue.substract_operation (var_result_8045, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 241)).operator_and (GGS_sint_36__34_ (int64_t (255LL)) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 241)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 241)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 243)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 238)) ;
  ioArgument_ioLastComparisonValue = var_result_8045 ;
  const GGS_pic_31__38_SimpleConstantCaseItem temp_10 = this ;
  GGS_lstring var_conditionFalseLabel_8975 = GGS_lstring::init_21__21_ (GGS_string (".L.value.rejected.").add_operation (constinArgument_inIndexForLabels, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 248)), temp_10.readProperty_mCaseExpressionLocation (), inCompiler COMMA_HERE) ;
  const GGS_pic_31__38_SimpleConstantCaseItem temp_11 = this ;
  GGS_ipic_31__38_AbstractBlockTerminator var_t_9169 = GGS_ipic_31__38_ConditionalJumpTerminator::init_21__21__21__21__21__21_ (temp_11.readProperty_mCaseExpressionLocation (), GGS_conditional_5F_branch::class_func_bz (SOURCE_FILE ("ipic18-switch-instruction.galgas", 252)), constinArgument_inConditionTrueLabel, GGS_conditionalBranchMode::class_func_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 254)), var_conditionFalseLabel_8975, GGS_conditionalBranchMode::class_func_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 256)), inCompiler COMMA_HERE) ;
  ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 259)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_t_9169, GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 263)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 258)) ;
  ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  ioArgument_ioBlockLabel = var_conditionFalseLabel_8975 ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18IntervalCaseItem analyzeCaseItem'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_IntervalCaseItem::method_analyzeCaseItem (const GGS_registerTable constinArgument_inRegisterTable,
                                                               const GGS_constantMap constinArgument_inConstantMap,
                                                               const GGS_lstring constinArgument_inConditionTrueLabel,
                                                               const GGS_string constinArgument_inIndexForLabels,
                                                               GGS_stringset & ioArgument_ioUsedRegisters,
                                                               GGS_caseConstantMap & ioArgument_ioCaseConstantMap,
                                                               GGS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                               GGS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                               GGS_lstring & ioArgument_ioBlockLabel,
                                                               GGS_sint_36__34_ & ioArgument_ioLastComparisonValue,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_minBound_10250 ;
  const GGS_pic_31__38_IntervalCaseItem temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mMinExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_minBound_10250, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 284)) ;
  GGS_sint_36__34_ var_maxBound_10351 ;
  const GGS_pic_31__38_IntervalCaseItem temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mMaxExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_maxBound_10351, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 285)) ;
  GGS_bool var_ok_10390 = GGS_bool (true) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::greaterThan, var_minBound_10250.objectCompare (GGS_sint_36__34_ (int64_t (255LL)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_minBound_10250.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 288)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_pic_31__38_IntervalCaseItem temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mCaseExpressionLocation (), GGS_string ("min bound is evaluated as ").add_operation (var_minBound_10250.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 289)).add_operation (GGS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 289)), fixItArray4  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 289)) ;
      var_ok_10390 = GGS_bool (false) ;
    }
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = GGS_bool (ComparisonKind::greaterThan, var_maxBound_10351.objectCompare (GGS_sint_36__34_ (int64_t (255LL)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_maxBound_10351.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 292)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_pic_31__38_IntervalCaseItem temp_6 = this ;
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mCaseExpressionLocation (), GGS_string ("max bound is evaluated as ").add_operation (var_maxBound_10351.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 293)).add_operation (GGS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 293)), fixItArray7  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 293)) ;
      var_ok_10390 = GGS_bool (false) ;
    }
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    test_8 = GGS_bool (ComparisonKind::lowerOrEqual, var_maxBound_10351.objectCompare (var_minBound_10250)).boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      const GGS_pic_31__38_IntervalCaseItem temp_9 = this ;
      GenericArray <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mCaseExpressionLocation (), GGS_string ("max bound (").add_operation (var_maxBound_10351.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)).add_operation (GGS_string (") should be greater than low bound ("), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)).add_operation (var_minBound_10250.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)), fixItArray10  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)) ;
      var_ok_10390 = GGS_bool (false) ;
    }
  }
  if (GalgasBool::boolFalse == test_8) {
    GalgasBool test_11 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_11) {
      test_11 = GGS_bool (ComparisonKind::equal, var_maxBound_10351.objectCompare (GGS_sint_36__34_ (int64_t (255LL)))).operator_and (GGS_bool (ComparisonKind::equal, var_minBound_10250.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 299)).boolEnum () ;
      if (GalgasBool::boolTrue == test_11) {
        const GGS_pic_31__38_IntervalCaseItem temp_12 = this ;
        GenericArray <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mCaseExpressionLocation (), GGS_string ("condition is always true"), fixItArray13  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 300)) ;
        var_ok_10390 = GGS_bool (false) ;
      }
    }
  }
  GalgasBool test_14 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_14) {
    test_14 = var_ok_10390.boolEnum () ;
    if (GalgasBool::boolTrue == test_14) {
      UpEnumerator_range enumerator_11178 (GGS_range::init_21__21_ (var_minBound_10250.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 305)), var_maxBound_10351.substract_operation (var_minBound_10250, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 305)).add_operation (GGS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 305)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 305)), inCompiler COMMA_HERE)) ;
      while (enumerator_11178.hasCurrentObject ()) {
        GalgasBool test_15 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_15) {
          test_15 = ioArgument_ioCaseConstantMap.getter_hasKey (enumerator_11178.current (HERE).getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 306)) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 306)).boolEnum () ;
          if (GalgasBool::boolTrue == test_15) {
            const GGS_pic_31__38_IntervalCaseItem temp_16 = this ;
            GenericArray <FixItDescription> fixItArray17 ;
            inCompiler->emitSemanticError (temp_16.readProperty_mCaseExpressionLocation (), GGS_string ("the '").add_operation (enumerator_11178.current (HERE).getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 307)).add_operation (GGS_string ("' constant is already used in switch instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 307)), fixItArray17  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 307)) ;
            GenericArray <FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (ioArgument_ioCaseConstantMap.getter_locationForKey (enumerator_11178.current (HERE).getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)), GGS_string ("the '").add_operation (enumerator_11178.current (HERE).getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)).add_operation (GGS_string ("' constant is used here"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)), fixItArray18  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)) ;
          }
        }
        if (GalgasBool::boolFalse == test_15) {
          {
          const GGS_pic_31__38_IntervalCaseItem temp_19 = this ;
          ioArgument_ioCaseConstantMap.setter_insertKey (GGS_lstring::init_21__21_ (enumerator_11178.current (HERE).getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 310)), temp_19.readProperty_mCaseExpressionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 310)) ;
          }
        }
        enumerator_11178.gotoNextObject () ;
      }
      const GGS_pic_31__38_IntervalCaseItem temp_20 = this ;
      GGS_lstring var_firstConditionAcceptedLabel_11595 = GGS_lstring::init_21__21_ (GGS_string (".L.first.accepted.").add_operation (constinArgument_inIndexForLabels, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 314)), temp_20.readProperty_mCaseExpressionLocation (), inCompiler COMMA_HERE) ;
      const GGS_pic_31__38_IntervalCaseItem temp_21 = this ;
      GGS_lstring var_firstConditionRejectedLabel_11717 = GGS_lstring::init_21__21_ (GGS_string (".L.first.rejected.").add_operation (constinArgument_inIndexForLabels, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 315)), temp_21.readProperty_mCaseExpressionLocation (), inCompiler COMMA_HERE) ;
      const GGS_pic_31__38_IntervalCaseItem temp_22 = this ;
      GGS_lstring var_intervalRejectedLabel_11839 = GGS_lstring::init_21__21_ (GGS_string (".L.interval.rejected.").add_operation (constinArgument_inIndexForLabels, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 316)), temp_22.readProperty_mCaseExpressionLocation (), inCompiler COMMA_HERE) ;
      const GGS_pic_31__38_IntervalCaseItem temp_23 = this ;
      GGS_ipic_31__38_SequentialInstruction var_secondTestInstruction_12021 = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_23.readProperty_mCaseExpressionLocation (), GGS_literal_5F_instruction_5F_opcode::class_func_ADDLW (SOURCE_FILE ("ipic18-switch-instruction.galgas", 320)), var_maxBound_10351.substract_operation (var_minBound_10250, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 321)).add_operation (GGS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 321)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 321)), inCompiler COMMA_HERE) ;
      const GGS_pic_31__38_IntervalCaseItem temp_24 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_24.readProperty_mCaseExpressionLocation (), GGS_literal_5F_instruction_5F_opcode::class_func_ADDLW (SOURCE_FILE ("ipic18-switch-instruction.galgas", 326)), ioArgument_ioLastComparisonValue.add_operation (GGS_sint_36__34_ (int64_t (255LL)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 327)).substract_operation (var_maxBound_10351, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 327)).operator_and (GGS_sint_36__34_ (int64_t (255LL)) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 327)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 327)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 329)), GGS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 324)) ;
      const GGS_pic_31__38_IntervalCaseItem temp_25 = this ;
      GGS_ipic_31__38_AbstractBlockTerminator var_t_12554 = GGS_ipic_31__38_ConditionalJumpTerminator::init_21__21__21__21__21__21_ (temp_25.readProperty_mCaseExpressionLocation (), GGS_conditional_5F_branch::class_func_bnc (SOURCE_FILE ("ipic18-switch-instruction.galgas", 334)), var_firstConditionAcceptedLabel_11595, GGS_conditionalBranchMode::class_func_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 336)), var_firstConditionRejectedLabel_11717, GGS_conditionalBranchMode::class_func_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 338)), inCompiler COMMA_HERE) ;
      ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 342)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_t_12554, GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 346)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 341)) ;
      GGS_ipic_31__38_SequentialInstructionList temp_26 = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 353)) ;
      temp_26.plusPlusAssignOperation (GGS_ipic_31__38_SequentialInstructionList_2E_element::init_21__21__21_ (var_secondTestInstruction_12021, GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 353)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 353)) ;
      const GGS_pic_31__38_IntervalCaseItem temp_27 = this ;
      ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 351)), var_firstConditionRejectedLabel_11717, temp_26, GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_27.readProperty_mCaseExpressionLocation (), var_intervalRejectedLabel_11839, GGS_jumpInstructionKind::class_func_relative (SOURCE_FILE ("ipic18-switch-instruction.galgas", 354)), inCompiler COMMA_HERE), GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 355)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 350)) ;
      const GGS_pic_31__38_IntervalCaseItem temp_28 = this ;
      GGS_ipic_31__38_AbstractBlockTerminator var_t_32__13338 = GGS_ipic_31__38_ConditionalJumpTerminator::init_21__21__21__21__21__21_ (temp_28.readProperty_mCaseExpressionLocation (), GGS_conditional_5F_branch::class_func_bc (SOURCE_FILE ("ipic18-switch-instruction.galgas", 361)), constinArgument_inConditionTrueLabel, GGS_conditionalBranchMode::class_func_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 363)), var_intervalRejectedLabel_11839, GGS_conditionalBranchMode::class_func_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 365)), inCompiler COMMA_HERE) ;
      GGS_ipic_31__38_SequentialInstructionList temp_29 = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 371)) ;
      temp_29.plusPlusAssignOperation (GGS_ipic_31__38_SequentialInstructionList_2E_element::init_21__21__21_ (var_secondTestInstruction_12021, GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 371)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 371)) ;
      ioArgument_ioGeneratedBlockList.addAssignOperation (GGS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 369)), var_firstConditionAcceptedLabel_11595, temp_29, var_t_32__13338, GGS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 373)), GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 368)) ;
      ioArgument_ioGeneratedInstructionList = GGS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
      ioArgument_ioBlockLabel = var_intervalRejectedLabel_11839 ;
      ioArgument_ioLastComparisonValue = var_minBound_10250 ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_switch addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_switch::method_addUsedRoutines (const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                    GGS_stringset & ioArgument_ioUsedRoutines,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_switch temp_0 = this ;
  UpEnumerator_pic_31__38_SwitchInstructionCaseList enumerator_14166 (temp_0.readProperty_mCaseList ()) ;
  while (enumerator_14166.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (enumerator_14166.current_mInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 391)) ;
    }
    enumerator_14166.gotoNextObject () ;
  }
  {
  const GGS_pic_31__38_Instruction_5F_switch temp_1 = this ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (temp_1.readProperty_mElseInstructionList (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 393)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'displayBlockList?&?'
//
//--------------------------------------------------------------------------------------------------

void routine_displayBlockList_3F__26__3F_ (const GGS_string constinArgument_inTitle,
                                           GGS_string & ioArgument_ioListFileContents,
                                           const GGS_ipic_31__38_BlockList constinArgument_inGeneratedBlockList,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 40)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 40)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 40)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*").add_operation (constinArgument_inTitle.getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 41)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 41)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 41)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 42)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 42)) ;
  UpEnumerator_ipic_31__38_BlockList enumerator_1388 (constinArgument_inGeneratedBlockList) ;
  GGS_uint index_1383 (uint32_t (0)) ;
  while (enumerator_1388.hasCurrentObject ()) {
    GGS_string var_nextBlockLabel_1452 ;
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::lowerThan, index_1383.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 45)).objectCompare (constinArgument_inGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_display_block_list.galgas", 45)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        var_nextBlockLabel_1452 = constinArgument_inGeneratedBlockList.getter_mBlockAtIndex (index_1383.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 46)).readProperty_mLabel ().readProperty_string () ;
      }
    }
    if (GalgasBool::boolFalse == test_0) {
      var_nextBlockLabel_1452 = GGS_string::makeEmptyString () ;
    }
    extensionMethod_display (enumerator_1388.current_mBlock (HERE), var_nextBlockLabel_1452, ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 50)) ;
    enumerator_1388.gotoNextObject () ;
    index_1383.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 43)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_IF_BitTest addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_instruction_5F_IF_5F_BitTest temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_baseline_5F_instruction *) temp_0.readProperty_mInstruction ().ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 12)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_IF_SEMI_COLON addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_baseline_5F_instruction *) temp_0.readProperty_mInstruction ().ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 19)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_IF_IncDec addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_instruction_5F_IF_5F_IncDec temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_baseline_5F_instruction *) temp_0.readProperty_mInstruction ().ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 26)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_JUMP addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_JUMP::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_instruction_5F_JUMP temp_0 = this ;
  ioArgument_ioUsedRoutines.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 33)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_GOTO addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_GOTO::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_instruction_5F_GOTO temp_0 = this ;
  ioArgument_ioUsedRoutines.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 40)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_CALL addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_CALL::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_instruction_5F_CALL temp_0 = this ;
  ioArgument_ioUsedRoutines.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 47)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_FOREVER addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_FOREVER::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_baseline_5F_instruction_5F_FOREVER temp_0 = this ;
  routine_addBaselineUsedRoutinesFromInstructionList_3F__26_ (temp_0.readProperty_mInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 54)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_STATIC_REPEAT addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_STATIC_5F_REPEAT::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_baseline_5F_instruction_5F_STATIC_5F_REPEAT temp_0 = this ;
  routine_addBaselineUsedRoutinesFromInstructionList_3F__26_ (temp_0.readProperty_mInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 61)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_MNOP addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_MNOP::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_TRIS addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_TRIS::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_WO_OPERAND addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_WO_5F_OPERAND::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_F addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_F::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_FB addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_FB::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_do_while addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_do_5F_while::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_baseline_5F_instruction_5F_do_5F_while temp_0 = this ;
  routine_addBaselineUsedRoutinesFromInstructionList_3F__26_ (temp_0.readProperty_mRepeatedInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 98)) ;
  }
  const GGS_baseline_5F_instruction_5F_do_5F_while temp_1 = this ;
  UpEnumerator_baseline_5F_partList enumerator_3261 (temp_1.readProperty_mWhilePartList ()) ;
  while (enumerator_3261.hasCurrentObject ()) {
    {
    routine_addBaselineUsedRoutinesFromInstructionList_3F__26_ (enumerator_3261.current_mInstructionList (HERE), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 100)) ;
    }
    enumerator_3261.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_structured_if addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_structured_5F_if::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_baseline_5F_instruction_5F_structured_5F_if temp_0 = this ;
  routine_addBaselineUsedRoutinesFromInstructionList_3F__26_ (temp_0.readProperty_mThenInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 108)) ;
  }
  {
  const GGS_baseline_5F_instruction_5F_structured_5F_if temp_1 = this ;
  routine_addBaselineUsedRoutinesFromInstructionList_3F__26_ (temp_1.readProperty_mElseInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 109)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_FD addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_FD::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_JSR addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_JSR::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_instruction_5F_JSR temp_0 = this ;
  ioArgument_ioUsedRoutines.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 122)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_literalOperation addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_literalOperation::method_addUsedRoutines (GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'addBaselineUsedRoutinesFromInstructionList?&'
//
//--------------------------------------------------------------------------------------------------

void routine_addBaselineUsedRoutinesFromInstructionList_3F__26_ (const GGS_baseline_5F_instructionList constinArgument_inInstructionList,
                                                                 GGS_stringset & ioArgument_ioUsedRoutines,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_baseline_5F_instructionList enumerator_4559 (constinArgument_inInstructionList) ;
  while (enumerator_4559.hasCurrentObject ()) {
    callExtensionMethod_addUsedRoutines ((cPtr_baseline_5F_instruction *) enumerator_4559.current_mInstruction (HERE).ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 137)) ;
    enumerator_4559.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Function 'baseline_computeUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

GGS_stringset function_baseline_5F_computeUsedRoutines (const GGS_baseline_5F_routineDefinitionList & constinArgument_inRoutineDefinitionList,
                                                        Compiler * inCompiler
                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset result_outUsedRoutineSet ; // Returned variable
  result_outUsedRoutineSet = GGS_stringset::class_func_setWithString (GGS_string ("main")  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 147)) ;
  GGS_stringset var_s_5003 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  if (constinArgument_inRoutineDefinitionList.getter_count (SOURCE_FILE ("baseline_used_routines.galgas", 150)).isValid ()) {
    uint32_t variant_5023 = constinArgument_inRoutineDefinitionList.getter_count (SOURCE_FILE ("baseline_used_routines.galgas", 150)).uintValue () ;
    bool loop_5023 = true ;
    while (loop_5023) {
      loop_5023 = GGS_bool (ComparisonKind::notEqual, var_s_5003.objectCompare (result_outUsedRoutineSet)).isValid () ;
      if (loop_5023) {
        loop_5023 = GGS_bool (ComparisonKind::notEqual, var_s_5003.objectCompare (result_outUsedRoutineSet)).boolValue () ;
      }
      if (loop_5023 && (0 == variant_5023)) {
        loop_5023 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_used_routines.galgas", 150)) ;
      }
      if (loop_5023) {
        variant_5023 -= 1 ;
        var_s_5003 = result_outUsedRoutineSet ;
        UpEnumerator_baseline_5F_routineDefinitionList enumerator_5165 (constinArgument_inRoutineDefinitionList) ;
        while (enumerator_5165.hasCurrentObject ()) {
          GalgasBool test_0 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_0) {
            test_0 = result_outUsedRoutineSet.getter_hasKey (enumerator_5165.current_mRoutineName (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 154)).boolEnum () ;
            if (GalgasBool::boolTrue == test_0) {
              {
              routine_addBaselineUsedRoutinesFromInstructionList_3F__26_ (enumerator_5165.current_mInstructionList (HERE), result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas", 155)) ;
              }
            }
          }
          enumerator_5165.gotoNextObject () ;
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

static const GALGAS_TypeDescriptor * functionArgs_baseline_5F_computeUsedRoutines [2] = {
  & kTypeDescriptor_GALGAS_baseline_5F_routineDefinitionList,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_baseline_5F_computeUsedRoutines (Compiler * inCompiler,
                                                                             const cObjectArray & inEffectiveParameterArray,
                                                                             const GGS_location & /* inErrorLocation */
                                                                             COMMA_LOCATION_ARGS) {
  const GGS_baseline_5F_routineDefinitionList operand0 = GGS_baseline_5F_routineDefinitionList::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                               inCompiler
                                                                                                               COMMA_THERE) ;
  return function_baseline_5F_computeUsedRoutines (operand0,
                                                   inCompiler
                                                   COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_baseline_5F_computeUsedRoutines ("baseline_computeUsedRoutines",
                                                                                 functionWithGenericHeader_baseline_5F_computeUsedRoutines,
                                                                                 & kTypeDescriptor_GALGAS_stringset,
                                                                                 1,
                                                                                 functionArgs_baseline_5F_computeUsedRoutines) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_NULL instructionLength'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_midrange_5F_intermediate_5F_NULL::getter_instructionLength (Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outLength ; // Returned variable
  result_outLength = GGS_uint (uint32_t (0U)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_pseudo_ORG instructionLength'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_midrange_5F_intermediate_5F_pseudo_5F_ORG::getter_instructionLength (Compiler */* inCompiler */
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outLength ; // Returned variable
  result_outLength = GGS_uint (uint32_t (0U)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_pseudo_LABEL instructionLength'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::getter_instructionLength (Compiler */* inCompiler */
                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outLength ; // Returned variable
  result_outLength = GGS_uint (uint32_t (0U)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_actualInstruction instructionLength'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_midrange_5F_intermediate_5F_actualInstruction::getter_instructionLength (Compiler */* inCompiler */
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outLength ; // Returned variable
  result_outLength = GGS_uint (uint32_t (1U)) ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_JUMP instructionLength'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_midrange_5F_intermediate_5F_JUMP::getter_instructionLength (Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outLength ; // Returned variable
  result_outLength = GGS_uint (uint32_t (1U)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_intermediate_5F_JUMP temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mBit_31__31_ ().objectCompare (GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 36)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_outLength.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 37)) ;
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_midrange_5F_intermediate_5F_JUMP temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mBit_31__32_ ().objectCompare (GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 39)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      result_outLength.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 40)) ;
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

GGS_uint cPtr_midrange_5F_intermediate_5F_JSR::getter_instructionLength (Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outLength ; // Returned variable
  result_outLength = GGS_uint (uint32_t (1U)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_intermediate_5F_JSR temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mBit_31__31_ ().objectCompare (GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 49)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_outLength = result_outLength.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 50)) ;
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_midrange_5F_intermediate_5F_JSR temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::notEqual, temp_3.readProperty_mBit_31__32_ ().objectCompare (GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 52)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      result_outLength = result_outLength.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("midrange_intermediate_instruction_length.galgas", 53)) ;
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

GGS_uint cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP::getter_instructionLength (Compiler */* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outLength ; // Returned variable
  const GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_0 = this ;
  result_outLength = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint () ;
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@midrange_intermediate_incDecRegisterInCondition instructionLength'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_midrange_5F_intermediate_5F_incDecRegisterInCondition::getter_instructionLength (Compiler */* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outLength ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_1 = this ;
    test_0 = temp_1.readProperty_mBranchIfZero ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_outLength = GGS_uint (uint32_t (3U)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_outLength = GGS_uint (uint32_t (2U)) ;
  }
//---
  return result_outLength ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_IF_BitTest addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::method_addUsedRoutines (const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                           GGS_stringset & ioArgument_ioUsedRoutines,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 15)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_IF_FA_SEMI_COLON addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::method_addUsedRoutines (const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                       GGS_stringset & ioArgument_ioUsedRoutines,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 24)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_IF_IncDec addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::method_addUsedRoutines (const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                          GGS_stringset & ioArgument_ioUsedRoutines,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 33)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_JUMP addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_JUMP::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                  GGS_stringset & ioArgument_ioUsedRoutines,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_JUMP temp_0 = this ;
  ioArgument_ioUsedRoutines.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 42)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_JUMPCC addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_JUMPCC::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                    GGS_stringset & ioArgument_ioUsedRoutines,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_JUMPCC temp_0 = this ;
  ioArgument_ioUsedRoutines.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 51)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_FOREVER addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FOREVER::method_addUsedRoutines (const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                     GGS_stringset & ioArgument_ioUsedRoutines,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_pic_31__38_Instruction_5F_FOREVER temp_0 = this ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (temp_0.readProperty_mInstructionList (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 60)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_repetitionStatique addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_repetitionStatique::method_addUsedRoutines (const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                GGS_stringset & ioArgument_ioUsedRoutines,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_pic_31__38_Instruction_5F_repetitionStatique temp_0 = this ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (temp_0.readProperty_mInstructionList (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 69)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_checkbank addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_checkbank::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                       GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_LDATA16PTR addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                              GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_LDATA8PTR addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                          GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_LTBLPTR addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LTBLPTR::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                     GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_MNOP addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_MNOP::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                  GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_NOPBRA addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_NOPBRA::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                    GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_banksel addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_banksel::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                     GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_checknobank addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_checknobank::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                         GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_banksel_register addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_banksel_5F_register::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                 GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                 Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_computed_bra addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_computed_5F_bra::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                             GGS_stringset & ioArgument_ioUsedRoutines,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_computed_5F_bra temp_0 = this ;
  UpEnumerator_lstringlist enumerator_4391 (temp_0.readProperty_mTargetLabels ()) ;
  while (enumerator_4391.hasCurrentObject ()) {
    ioArgument_ioUsedRoutines.plusPlusAssignOperation (enumerator_4391.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 151)) ;
    enumerator_4391.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_computed_goto addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_computed_5F_goto::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                              GGS_stringset & ioArgument_ioUsedRoutines,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_computed_5F_goto temp_0 = this ;
  UpEnumerator_lstringlist enumerator_4693 (temp_0.readProperty_mTargetLabels ()) ;
  while (enumerator_4693.hasCurrentObject ()) {
    ioArgument_ioUsedRoutines.plusPlusAssignOperation (enumerator_4693.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 162)) ;
    enumerator_4693.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_computed_rcall addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_computed_5F_rcall::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                               GGS_stringset & ioArgument_ioUsedRoutines,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_computed_5F_rcall temp_0 = this ;
  UpEnumerator_lstringlist enumerator_4996 (temp_0.readProperty_mTargetLabels ()) ;
  while (enumerator_4996.hasCurrentObject ()) {
    ioArgument_ioUsedRoutines.plusPlusAssignOperation (enumerator_4996.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 173)) ;
    enumerator_4996.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_computed_retlw addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_computed_5F_retlw::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                               GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_do_while addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_do_5F_while::method_addUsedRoutines (const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                         GGS_stringset & ioArgument_ioUsedRoutines,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_pic_31__38_Instruction_5F_do_5F_while temp_0 = this ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (temp_0.readProperty_mRepeatedInstructionList (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 191)) ;
  }
  const GGS_pic_31__38_Instruction_5F_do_5F_while temp_1 = this ;
  UpEnumerator_pic_31__38_DoWhilePartList enumerator_5636 (temp_1.readProperty_mWhilePartList ()) ;
  while (enumerator_5636.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (enumerator_5636.current_mInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 193)) ;
    }
    enumerator_5636.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_nobanksel addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_nobanksel::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                       GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_savebank addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_savebank::method_addUsedRoutines (const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                      GGS_stringset & ioArgument_ioUsedRoutines,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_pic_31__38_Instruction_5F_savebank temp_0 = this ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (temp_0.readProperty_mInstructionList (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 211)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_structured_if addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_structured_5F_if::method_addUsedRoutines (const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                              GGS_stringset & ioArgument_ioUsedRoutines,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_0 = this ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (temp_0.readProperty_mThenInstructionList (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 220)) ;
  }
  {
  const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_1 = this ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (temp_1.readProperty_mElseInstructionList (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 221)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_macro addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_macro::method_addUsedRoutines (const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                   GGS_stringset & ioArgument_ioUsedRoutines,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InstructionList var_instructionList_6956 ;
  const GGS_pic_31__38_Instruction_5F_macro temp_0 = this ;
  GGS_lstringlist joker_6948 ; // Joker input parameter
  constinArgument_inMacroMap.method_searchKey (temp_0.readProperty_mMacroName (), joker_6948, var_instructionList_6956, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 230)) ;
  {
  routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (var_instructionList_6956, constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 231)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_FA addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FA::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_FBA addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FBA::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                 GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_FDA addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FDA::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                 GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_JSR addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_JSR::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                 GGS_stringset & ioArgument_ioUsedRoutines,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_JSR temp_0 = this ;
  ioArgument_ioUsedRoutines.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 264)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_LFSR addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LFSR::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                  GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_MOVFF addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_MOVFF::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                   GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_TBLWT addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_TBLWT::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                   GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_TBLRD addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_TBLRD::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                   GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_literalOperation addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_literalOperation::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                              GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_fnop addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_fnop::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                  GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_withNoOperand addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_withNoOperand::method_addUsedRoutines (const GGS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                           GGS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                           Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_block addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_block::method_addUsedRoutines (const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                   GGS_stringset & ioArgument_ioUsedRoutines,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_pic_31__38_Instruction_5F_block temp_0 = this ;
  UpEnumerator_pic_31__38_BlockInstructionBlockList enumerator_9728 (temp_0.readProperty_mBlockList ()) ;
  while (enumerator_9728.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (enumerator_9728.current_mInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 330)) ;
    }
    enumerator_9728.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'addPic18UsedRoutinesFromInstructionList??&'
//
//--------------------------------------------------------------------------------------------------

void routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (const GGS_pic_31__38_InstructionList constinArgument_inInstructionList,
                                                                        const GGS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                        GGS_stringset & ioArgument_ioUsedRoutines,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  UpEnumerator_pic_31__38_InstructionList enumerator_10100 (constinArgument_inInstructionList) ;
  while (enumerator_10100.hasCurrentObject ()) {
    callExtensionMethod_addUsedRoutines ((cPtr_pic_31__38_PiccoloInstruction *) enumerator_10100.current_mInstruction (HERE).ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 342)) ;
    enumerator_10100.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_computeUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

GGS_stringset function_pic_31__38__5F_computeUsedRoutines (const GGS_pic_31__38_InterruptDefinitionList & constinArgument_inInterruptDefinitionList,
                                                           const GGS_pic_31__38_RoutineDefinitionList & constinArgument_inRoutineDefinitionList,
                                                           const GGS_pic_31__38_MacroMap & constinArgument_inMacroMap,
                                                           const GGS_routineDeclarationList & constinArgument_inBootloaderRoutineDeclarationListForBootloaderImplementation,
                                                           const GGS_routineDeclarationList & constinArgument_inUserRoutineDeclarationListForUserProgramImplementation,
                                                           Compiler * inCompiler
                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_stringset result_outUsedRoutineSet ; // Returned variable
  result_outUsedRoutineSet = GGS_stringset::class_func_setWithString (GGS_string ("main")  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 356)) ;
  UpEnumerator_pic_31__38_InterruptDefinitionList enumerator_10859 (constinArgument_inInterruptDefinitionList) ;
  while (enumerator_10859.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (enumerator_10859.current_mInstructionList (HERE), constinArgument_inMacroMap, result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 359)) ;
    }
    enumerator_10859.gotoNextObject () ;
  }
  UpEnumerator_routineDeclarationList enumerator_11083 (constinArgument_inBootloaderRoutineDeclarationListForBootloaderImplementation) ;
  while (enumerator_11083.hasCurrentObject ()) {
    result_outUsedRoutineSet.plusPlusAssignOperation (enumerator_11083.current_mRoutineName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 367)) ;
    enumerator_11083.gotoNextObject () ;
  }
  UpEnumerator_routineDeclarationList enumerator_11261 (constinArgument_inUserRoutineDeclarationListForUserProgramImplementation) ;
  while (enumerator_11261.hasCurrentObject ()) {
    result_outUsedRoutineSet.plusPlusAssignOperation (enumerator_11261.current_mRoutineName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 371)) ;
    enumerator_11261.gotoNextObject () ;
  }
  GGS_stringset var_s_11427 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  if (constinArgument_inRoutineDefinitionList.getter_count (SOURCE_FILE ("pic18_used_routines.galgas", 375)).isValid ()) {
    uint32_t variant_11446 = constinArgument_inRoutineDefinitionList.getter_count (SOURCE_FILE ("pic18_used_routines.galgas", 375)).uintValue () ;
    bool loop_11446 = true ;
    while (loop_11446) {
      loop_11446 = GGS_bool (ComparisonKind::notEqual, var_s_11427.objectCompare (result_outUsedRoutineSet)).isValid () ;
      if (loop_11446) {
        loop_11446 = GGS_bool (ComparisonKind::notEqual, var_s_11427.objectCompare (result_outUsedRoutineSet)).boolValue () ;
      }
      if (loop_11446 && (0 == variant_11446)) {
        loop_11446 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("pic18_used_routines.galgas", 375)) ;
      }
      if (loop_11446) {
        variant_11446 -= 1 ;
        var_s_11427 = result_outUsedRoutineSet ;
        UpEnumerator_pic_31__38_RoutineDefinitionList enumerator_11592 (constinArgument_inRoutineDefinitionList) ;
        while (enumerator_11592.hasCurrentObject ()) {
          GalgasBool test_0 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_0) {
            test_0 = result_outUsedRoutineSet.getter_hasKey (enumerator_11592.current_mRoutineName (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 379)).boolEnum () ;
            if (GalgasBool::boolTrue == test_0) {
              {
              routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (enumerator_11592.current_mInstructionList (HERE), constinArgument_inMacroMap, result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 380)) ;
              }
            }
          }
          enumerator_11592.gotoNextObject () ;
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

static const GALGAS_TypeDescriptor * functionArgs_pic_31__38__5F_computeUsedRoutines [6] = {
  & kTypeDescriptor_GALGAS_pic_31__38_InterruptDefinitionList,
  & kTypeDescriptor_GALGAS_pic_31__38_RoutineDefinitionList,
  & kTypeDescriptor_GALGAS_pic_31__38_MacroMap,
  & kTypeDescriptor_GALGAS_routineDeclarationList,
  & kTypeDescriptor_GALGAS_routineDeclarationList,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GGS_object functionWithGenericHeader_pic_31__38__5F_computeUsedRoutines (Compiler * inCompiler,
                                                                                const cObjectArray & inEffectiveParameterArray,
                                                                                const GGS_location & /* inErrorLocation */
                                                                                COMMA_LOCATION_ARGS) {
  const GGS_pic_31__38_InterruptDefinitionList operand0 = GGS_pic_31__38_InterruptDefinitionList::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                                 inCompiler
                                                                                                                 COMMA_THERE) ;
  const GGS_pic_31__38_RoutineDefinitionList operand1 = GGS_pic_31__38_RoutineDefinitionList::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                                             inCompiler
                                                                                                             COMMA_THERE) ;
  const GGS_pic_31__38_MacroMap operand2 = GGS_pic_31__38_MacroMap::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                                   inCompiler
                                                                                   COMMA_THERE) ;
  const GGS_routineDeclarationList operand3 = GGS_routineDeclarationList::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                                         inCompiler
                                                                                         COMMA_THERE) ;
  const GGS_routineDeclarationList operand4 = GGS_routineDeclarationList::extractObject (inEffectiveParameterArray.objectAtIndex (4 COMMA_HERE),
                                                                                         inCompiler
                                                                                         COMMA_THERE) ;
  return function_pic_31__38__5F_computeUsedRoutines (operand0,
                                                      operand1,
                                                      operand2,
                                                      operand3,
                                                      operand4,
                                                      inCompiler
                                                      COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_computeUsedRoutines ("pic18_computeUsedRoutines",
                                                                                    functionWithGenericHeader_pic_31__38__5F_computeUsedRoutines,
                                                                                    & kTypeDescriptor_GALGAS_stringset,
                                                                                    5,
                                                                                    functionArgs_pic_31__38__5F_computeUsedRoutines) ;

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_FOREVER instructionUsesGOTOorCALL'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_FOREVER::method_instructionUsesGOTOorCALL (GGS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                                Compiler * /* inCompiler */
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GGS_bool (true) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_structured_if instructionUsesGOTOorCALL'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_structured_5F_if::method_instructionUsesGOTOorCALL (GGS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                                         Compiler * /* inCompiler */
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GGS_bool (true) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_CALL instructionUsesGOTOorCALL'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_CALL::method_instructionUsesGOTOorCALL (GGS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GGS_bool (true) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_JSR instructionUsesGOTOorCALL'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_JSR::method_instructionUsesGOTOorCALL (GGS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                            Compiler * /* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GGS_bool (true) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_GOTO instructionUsesGOTOorCALL'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_GOTO::method_instructionUsesGOTOorCALL (GGS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GGS_bool (true) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_JUMP instructionUsesGOTOorCALL'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_JUMP::method_instructionUsesGOTOorCALL (GGS_bool & ioArgument_ioUsesGOTOorCALL,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsesGOTOorCALL = GGS_bool (true) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'handleMidrangeInstructionList????&&&?&?!?&'
//
//--------------------------------------------------------------------------------------------------

void routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (const GGS_midrange_5F_instructionList constinArgument_inInstructionList,
                                                                                                const GGS_routineMap constinArgument_inRoutineMap,
                                                                                                const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                const GGS_constantMap constinArgument_inConstantMap,
                                                                                                GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                GGS_string & ioArgument_ioListFileContents,
                                                                                                const GGS_uint constinArgument_inTotalBankCount,
                                                                                                GGS_uint & ioArgument_ioCurrentBank,
                                                                                                const GGS_bool constinArgument_inShouldPreserveBank,
                                                                                                GGS_bool & outArgument_outContinuesInSequence,
                                                                                                const GGS_routineKind constinArgument_inRoutineKind,
                                                                                                GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outContinuesInSequence.drop () ; // Release 'out' argument
  outArgument_outContinuesInSequence = GGS_bool (true) ;
  UpEnumerator_midrange_5F_instructionList enumerator_2926 (constinArgument_inInstructionList) ;
  while (enumerator_2926.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = outArgument_outContinuesInSequence.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 89)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GenericArray <FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_2926.current_mInstruction (HERE).readProperty_mInstructionLocation (), GGS_string ("Unreachable code"), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 90)) ;
        outArgument_outContinuesInSequence = GGS_bool (true) ;
      }
    }
    callExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList ((cPtr_midrange_5F_instruction *) enumerator_2926.current_mInstruction (HERE).ptr (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBank, outArgument_outContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 93)) ;
    enumerator_2926.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_nobanksel build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_nobanksel::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                     const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                     const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                     GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                     GGS_midrange_5F_intermediate_5F_instructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                                                                     GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                     const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                                     GGS_uint & ioArgument_ioCurrentBank,
                                                                                                     const GGS_bool constinArgument_inShouldPreserveBank,
                                                                                                     GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                     const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                     GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inShouldPreserveBank.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_midrange_5F_instruction_5F_nobanksel temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("cannot use \"nobank\" here: bank selection should be preserved (use it in a \"banksave\" construct)"), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 126)) ;
    }
  }
  ioArgument_ioCurrentBank = GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 128)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_savebank build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_savebank::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap constinArgument_inRoutineMap,
                                                                                                    const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                    const GGS_constantMap constinArgument_inConstantMap,
                                                                                                    GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                    GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                    GGS_string & ioArgument_ioListFileContents,
                                                                                                    const GGS_uint constinArgument_inTotalBankCount,
                                                                                                    GGS_uint & ioArgument_ioCurrentBank,
                                                                                                    const GGS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                    GGS_bool & ioArgument_ioContinuesInSequence,
                                                                                                    const GGS_routineKind constinArgument_inRoutineKind,
                                                                                                    GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                    Compiler * inCompiler
                                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GGS_registerExpression var_STATUS_5F_register_5003 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("STATUS"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 149)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 150)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 151)), inCompiler COMMA_HERE) ;
  GGS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_5171 ;
  GGS_bitSliceTable joker_5380 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_STATUS_5F_register_5003.ptr (), constinArgument_inTotalBankCount, GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 156)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_5171, joker_5380, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 154)) ;
  GGS_midrange_5F_intermediate_5F_registerExpression var_save_5F_IPICregisterDescription_5502 ;
  const GGS_midrange_5F_instruction_5F_savebank temp_0 = this ;
  GGS_bitSliceTable joker_5706 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegister ().ptr (), constinArgument_inTotalBankCount, GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 167)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_save_5F_IPICregisterDescription_5502, joker_5706, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 165)) ;
  const GGS_midrange_5F_instruction_5F_savebank temp_1 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (temp_1.readProperty_mInstructionLocation (), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 177)), var_STATUS_5F_IPICregisterDescription_5171, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 175)) ;
  const GGS_midrange_5F_instruction_5F_savebank temp_2 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (temp_2.readProperty_mInstructionLocation (), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 183)), var_save_5F_IPICregisterDescription_5502, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 181)) ;
  GGS_uint var_finalBank_6247 = ioArgument_ioCurrentBank ;
  {
  const GGS_midrange_5F_instruction_5F_savebank temp_3 = this ;
  routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_3.readProperty_mInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_finalBank_6247, GGS_bool (false), ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 187)) ;
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = ioArgument_ioContinuesInSequence.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 202)).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_midrange_5F_instruction_5F_savebank temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mEndOfSaveBankInstruction (), GGS_string ("useless saving: execution does reach the end of \"savebank\" instruction list"), fixItArray6  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 203)) ;
    }
  }
  const GGS_midrange_5F_instruction_5F_savebank temp_7 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (temp_7.readProperty_mInstructionLocation (), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 208)), var_save_5F_IPICregisterDescription_5502, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 206)) ;
  const GGS_midrange_5F_instruction_5F_savebank temp_8 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (temp_8.readProperty_mInstructionLocation (), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 214)), var_STATUS_5F_IPICregisterDescription_5171, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 212)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_banksel build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_banksel::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                   const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                   const GGS_constantMap constinArgument_inConstantMap,
                                                                                                   GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                   GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                   GGS_string & ioArgument_ioListFileContents,
                                                                                                   const GGS_uint constinArgument_inTotalBankCount,
                                                                                                   GGS_uint & ioArgument_ioCurrentBank,
                                                                                                   const GGS_bool constinArgument_inShouldPreserveBank,
                                                                                                   GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                   const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                   GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inShouldPreserveBank.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_midrange_5F_instruction_5F_banksel temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("cannot use \"banksel\" here: bank selection should be preserved (use \"banksave\" instruction)"), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 234)) ;
    }
  }
  GGS_registerExpression var_STATUS_5F_register_8049 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("STATUS"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 238)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 239)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 240)), inCompiler COMMA_HERE) ;
  GGS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_8218 ;
  GGS_bitSliceTable var_bitSliceTable_8270 ;
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_STATUS_5F_register_8049.ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_8218, var_bitSliceTable_8270, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 244)) ;
  const GGS_midrange_5F_instruction_5F_banksel temp_3 = this ;
  GGS_lstring var_RP_8493 = GGS_lstring::init_21__21_ (GGS_string ("RP"), temp_3.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  GGS_uint var_rpIndex_8585 ;
  GGS_uint var_sliceSize_8604 ;
  var_bitSliceTable_8270.method_searchKey (var_RP_8493, var_rpIndex_8585, var_sliceSize_8604, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 254)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::lowerThan, var_sliceSize_8604.objectCompare (constinArgument_inTotalBankCount.substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 255)).getter_significantBitCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 255)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_midrange_5F_instruction_5F_banksel temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("internal error: sliceSize == ").add_operation (var_sliceSize_8604.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 256)).add_operation (GGS_string (", total bank count == "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 256)).add_operation (constinArgument_inTotalBankCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 256)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 256)), fixItArray6  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 256)) ;
    }
  }
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    const GGS_midrange_5F_instruction_5F_banksel temp_8 = this ;
    test_7 = GGS_bool (ComparisonKind::equal, temp_8.readProperty_mBankIndex ().readProperty_uint ().objectCompare (ioArgument_ioCurrentBank)).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        const GGS_midrange_5F_instruction_5F_banksel temp_10 = this ;
        test_9 = temp_10.readProperty_mWarningOnUselessBanksel ().boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          const GGS_midrange_5F_instruction_5F_banksel temp_11 = this ;
          GenericArray <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticWarning (temp_11.readProperty_mBankIndex ().readProperty_location (), GGS_string ("useless instruction: the bank ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 261)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 261)).add_operation (GGS_string (" is already selected"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 261)), fixItArray12  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 261)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_7) {
    GalgasBool test_13 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_13) {
      const GGS_midrange_5F_instruction_5F_banksel temp_14 = this ;
      test_13 = GGS_bool (ComparisonKind::greaterOrEqual, temp_14.readProperty_mBankIndex ().readProperty_uint ().objectCompare (constinArgument_inTotalBankCount)).boolEnum () ;
      if (GalgasBool::boolTrue == test_13) {
        const GGS_midrange_5F_instruction_5F_banksel temp_15 = this ;
        const GGS_midrange_5F_instruction_5F_banksel temp_16 = this ;
        GenericArray <FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (temp_15.readProperty_mBankIndex ().readProperty_location (), GGS_string ("the bank ").add_operation (temp_16.readProperty_mBankIndex ().readProperty_uint ().getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)).add_operation (GGS_string (" does not exist (the device has "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)).add_operation (constinArgument_inTotalBankCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)).add_operation (GGS_string (" bank(s))"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)), fixItArray17  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 264)) ;
      }
    }
    if (GalgasBool::boolFalse == test_13) {
      GalgasBool test_18 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_18) {
        test_18 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 265)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          const GGS_midrange_5F_instruction_5F_banksel temp_19 = this ;
          GGS_uint var_shiftedBank_9348 = temp_19.readProperty_mBankIndex ().readProperty_uint () ;
          GGS_uint var_idx_9397 = GGS_uint (uint32_t (0U)) ;
          if (var_sliceSize_8604.isValid ()) {
            uint32_t variant_9409 = var_sliceSize_8604.uintValue () ;
            bool loop_9409 = true ;
            while (loop_9409) {
              loop_9409 = GGS_bool (ComparisonKind::lowerThan, var_idx_9397.objectCompare (var_sliceSize_8604)).isValid () ;
              if (loop_9409) {
                loop_9409 = GGS_bool (ComparisonKind::lowerThan, var_idx_9397.objectCompare (var_sliceSize_8604)).boolValue () ;
              }
              if (loop_9409 && (0 == variant_9409)) {
                loop_9409 = false ;
                inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 268)) ;
              }
              if (loop_9409) {
                variant_9409 -= 1 ;
                GGS_midrange_5F_bit_5F_oriented_5F_op var_op_9487 ;
                GalgasBool test_20 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_20) {
                  test_20 = GGS_bool (ComparisonKind::equal, var_shiftedBank_9348.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 270)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_20) {
                    var_op_9487 = GGS_midrange_5F_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 271)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_20) {
                  var_op_9487 = GGS_midrange_5F_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 273)) ;
                }
                const GGS_midrange_5F_instruction_5F_banksel temp_21 = this ;
                ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FB::init_21__21__21__21_ (temp_21.readProperty_mInstructionLocation (), var_op_9487, var_STATUS_5F_IPICregisterDescription_8218, var_rpIndex_8585.add_operation (var_idx_9397, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 279)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 275)) ;
                var_idx_9397.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 280)) ;
                var_shiftedBank_9348 = var_shiftedBank_9348.right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 281)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 281)) ;
              }
            }
          }
          const GGS_midrange_5F_instruction_5F_banksel temp_22 = this ;
          ioArgument_ioCurrentBank = temp_22.readProperty_mBankIndex ().readProperty_uint () ;
        }
      }
      if (GalgasBool::boolFalse == test_18) {
        GGS_bool var_optimize_9954 = GGS_bool (gOption_piccoloOptions_performOptimizations.readProperty_value ()) ;
        const GGS_midrange_5F_instruction_5F_banksel temp_23 = this ;
        GGS_uint var_shiftedBank_10030 = temp_23.readProperty_mBankIndex ().readProperty_uint () ;
        const GGS_midrange_5F_instruction_5F_banksel temp_24 = this ;
        GGS_uint var_shiftedXorBank_10079 = temp_24.readProperty_mBankIndex ().readProperty_uint ().operator_xor (ioArgument_ioCurrentBank COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 287)) ;
        GGS_uint var_idx_10147 = GGS_uint (uint32_t (0U)) ;
        if (var_sliceSize_8604.isValid ()) {
          uint32_t variant_10159 = var_sliceSize_8604.uintValue () ;
          bool loop_10159 = true ;
          while (loop_10159) {
            loop_10159 = GGS_bool (ComparisonKind::lowerThan, var_idx_10147.objectCompare (var_sliceSize_8604)).isValid () ;
            if (loop_10159) {
              loop_10159 = GGS_bool (ComparisonKind::lowerThan, var_idx_10147.objectCompare (var_sliceSize_8604)).boolValue () ;
            }
            if (loop_10159 && (0 == variant_10159)) {
              loop_10159 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 289)) ;
            }
            if (loop_10159) {
              variant_10159 -= 1 ;
              GGS_midrange_5F_bit_5F_oriented_5F_op var_op_10237 ;
              GalgasBool test_25 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_25) {
                test_25 = GGS_bool (ComparisonKind::equal, var_shiftedBank_10030.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 291)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_25) {
                  var_op_10237 = GGS_midrange_5F_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 292)) ;
                }
              }
              if (GalgasBool::boolFalse == test_25) {
                var_op_10237 = GGS_midrange_5F_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 294)) ;
              }
              GalgasBool test_26 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_26) {
                test_26 = GGS_bool (ComparisonKind::notEqual, var_shiftedXorBank_10079.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 296)).objectCompare (GGS_uint (uint32_t (0U)))).operator_or (var_optimize_9954.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 296)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 296)).boolEnum () ;
                if (GalgasBool::boolTrue == test_26) {
                  const GGS_midrange_5F_instruction_5F_banksel temp_27 = this ;
                  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FB::init_21__21__21__21_ (temp_27.readProperty_mInstructionLocation (), var_op_10237, var_STATUS_5F_IPICregisterDescription_8218, var_rpIndex_8585.add_operation (var_idx_10147, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 301)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 297)) ;
                }
              }
              if (GalgasBool::boolFalse == test_26) {
                ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 303)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 303)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 303)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 303)) ;
                ioArgument_ioListFileContents.plusAssignOperation(GGS_string (": useless '").add_operation (extensionGetter_mnemonic (var_op_10237, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 304)).add_operation (GGS_string (" STATUS, "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 304)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 304)) ;
                ioArgument_ioListFileContents.plusAssignOperation(var_rpIndex_8585.add_operation (var_idx_10147, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 305)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 305)).add_operation (GGS_string ("' not generated\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 305)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 305)) ;
              }
              var_idx_10147.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 307)) ;
              var_shiftedBank_10030 = var_shiftedBank_10030.right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 308)) ;
              var_shiftedXorBank_10079 = var_shiftedXorBank_10079.right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 309)) ;
            }
          }
        }
        const GGS_midrange_5F_instruction_5F_banksel temp_28 = this ;
        ioArgument_ioCurrentBank = temp_28.readProperty_mBankIndex ().readProperty_uint () ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_banksel_register build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_banksel_5F_register::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                               const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                               const GGS_constantMap constinArgument_inConstantMap,
                                                                                                               GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                               GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                               GGS_string & ioArgument_ioListFileContents,
                                                                                                               const GGS_uint constinArgument_inTotalBankCount,
                                                                                                               GGS_uint & ioArgument_ioCurrentBank,
                                                                                                               const GGS_bool constinArgument_inShouldPreserveBank,
                                                                                                               GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                               const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                               GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inShouldPreserveBank.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("cannot use \"banksel\" here: bank selection should be preserved (use \"banksave\" instruction)"), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 331)) ;
    }
  }
  GGS_registerExpression var_STATUS_5F_register_11859 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("STATUS"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 335)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 336)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 337)), inCompiler COMMA_HERE) ;
  GGS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_12153 ;
  GGS_bitSliceTable var_bitSliceTable_12208 ;
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_STATUS_5F_register_11859.ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_12153, var_bitSliceTable_12208, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 339)) ;
  const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_3 = this ;
  GGS_lstring var_RP_12254 = GGS_lstring::init_21__21_ (GGS_string ("RP"), temp_3.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  GGS_uint var_rpIndex_12346 ;
  GGS_uint var_sliceSize_12365 ;
  var_bitSliceTable_12208.method_searchKey (var_RP_12254, var_rpIndex_12346, var_sliceSize_12365, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 349)) ;
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::lowerThan, var_sliceSize_12365.objectCompare (constinArgument_inTotalBankCount.substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 350)).getter_significantBitCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 350)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_5 = this ;
      GenericArray <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("internal error: sliceSize == ").add_operation (var_sliceSize_12365.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 351)).add_operation (GGS_string (", total bank count == "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 351)).add_operation (constinArgument_inTotalBankCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 351)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 351)), fixItArray6  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 351)) ;
    }
  }
  GGS_uintlist var_registerAddressList_12680 ;
  GGS_uint var_size_12715 ;
  GGS_registerProtection var_protection_12737 ;
  const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_7 = this ;
  GGS_bitSliceTable joker_12724_2 ; // Joker input parameter
  GGS_string joker_12724_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (temp_7.readProperty_mRegister ().readProperty_mRegisterName (), var_registerAddressList_12680, var_size_12715, joker_12724_2, joker_12724_1, var_protection_12737, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 354)) ;
  const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_8 = this ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, temp_8.readProperty_mRegister ().readProperty_mRegisterName (), GGS_bool (false), var_protection_12737, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 361)) ;
  GGS_uint var_address_12886 ;
  var_registerAddressList_12680.method_first (var_address_12886, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 362)) ;
  GGS_uint var_newBank_12907 = var_address_12886.right_shift_operation (GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 363)) ;
  GGS_sint_36__34_ var_offset_13011 ;
  const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_9 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_9.readProperty_mRegister ().readProperty_mOffset ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_offset_13011, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 365)) ;
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = GGS_bool (ComparisonKind::lowerThan, var_offset_13011.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mRegister ().readProperty_mEndOfOffsetExpression (), GGS_string ("index value (").add_operation (var_offset_13011.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 367)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 367)).add_operation (GGS_string (") should be <= 0 "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 367)), fixItArray12  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 367)) ;
    }
  }
  if (GalgasBool::boolFalse == test_10) {
    GalgasBool test_13 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_13) {
      test_13 = GGS_bool (ComparisonKind::greaterOrEqual, var_offset_13011.getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 368)).objectCompare (var_size_12715)).boolEnum () ;
      if (GalgasBool::boolTrue == test_13) {
        const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_14 = this ;
        GenericArray <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticError (temp_14.readProperty_mRegister ().readProperty_mEndOfOffsetExpression (), GGS_string ("maximum index value is ").add_operation (var_size_12715.substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 369)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 369)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 369)), fixItArray15  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 369)) ;
      }
    }
  }
  GalgasBool test_16 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_16) {
    test_16 = GGS_bool (ComparisonKind::equal, var_newBank_12907.objectCompare (ioArgument_ioCurrentBank)).boolEnum () ;
    if (GalgasBool::boolTrue == test_16) {
      GalgasBool test_17 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_17) {
        const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_18 = this ;
        test_17 = temp_18.readProperty_mWarningOnUselessBanksel ().boolEnum () ;
        if (GalgasBool::boolTrue == test_17) {
          const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_19 = this ;
          GenericArray <FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticWarning (temp_19.readProperty_mRegister ().readProperty_mRegisterName ().readProperty_location (), GGS_string ("useless instruction: the bank ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 374)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 374)).add_operation (GGS_string (" is already selected"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 374)), fixItArray20  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 374)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_16) {
    GalgasBool test_21 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_21) {
      test_21 = GGS_bool (ComparisonKind::greaterOrEqual, var_newBank_12907.objectCompare (constinArgument_inTotalBankCount)).boolEnum () ;
      if (GalgasBool::boolTrue == test_21) {
        const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_22 = this ;
        GenericArray <FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticError (temp_22.readProperty_mRegister ().readProperty_mRegisterName ().readProperty_location (), GGS_string ("the bank ").add_operation (var_newBank_12907.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 377)).add_operation (GGS_string (" does not exist (the device has "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 377)).add_operation (constinArgument_inTotalBankCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 377)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 377)).add_operation (GGS_string (" bank(s))"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 377)), fixItArray23  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 377)) ;
      }
    }
    if (GalgasBool::boolFalse == test_21) {
      GalgasBool test_24 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_24) {
        test_24 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 378)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_24) {
          GGS_uint var_shiftedBank_13789 = var_newBank_12907 ;
          GGS_uint var_idx_13825 = GGS_uint (uint32_t (0U)) ;
          if (var_sliceSize_12365.isValid ()) {
            uint32_t variant_13837 = var_sliceSize_12365.uintValue () ;
            bool loop_13837 = true ;
            while (loop_13837) {
              loop_13837 = GGS_bool (ComparisonKind::lowerThan, var_idx_13825.objectCompare (var_sliceSize_12365)).isValid () ;
              if (loop_13837) {
                loop_13837 = GGS_bool (ComparisonKind::lowerThan, var_idx_13825.objectCompare (var_sliceSize_12365)).boolValue () ;
              }
              if (loop_13837 && (0 == variant_13837)) {
                loop_13837 = false ;
                inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 381)) ;
              }
              if (loop_13837) {
                variant_13837 -= 1 ;
                GGS_midrange_5F_bit_5F_oriented_5F_op var_op_13915 ;
                GalgasBool test_25 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_25) {
                  test_25 = GGS_bool (ComparisonKind::equal, var_shiftedBank_13789.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 383)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_25) {
                    var_op_13915 = GGS_midrange_5F_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 384)) ;
                  }
                }
                if (GalgasBool::boolFalse == test_25) {
                  var_op_13915 = GGS_midrange_5F_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 386)) ;
                }
                const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_26 = this ;
                ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FB::init_21__21__21__21_ (temp_26.readProperty_mInstructionLocation (), var_op_13915, var_STATUS_5F_IPICregisterDescription_12153, var_rpIndex_12346.add_operation (var_idx_13825, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 392)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 388)) ;
                var_idx_13825.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 393)) ;
                var_shiftedBank_13789 = var_shiftedBank_13789.right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 394)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 394)) ;
              }
            }
          }
          ioArgument_ioCurrentBank = var_newBank_12907 ;
        }
      }
      if (GalgasBool::boolFalse == test_24) {
        GGS_bool var_optimize_14369 = GGS_bool (gOption_piccoloOptions_performOptimizations.readProperty_value ()) ;
        GGS_uint var_shiftedBank_14445 = var_newBank_12907 ;
        GGS_uint var_shiftedXorBank_14481 = var_newBank_12907.operator_xor (ioArgument_ioCurrentBank COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 400)) ;
        GGS_uint var_idx_14536 = GGS_uint (uint32_t (0U)) ;
        if (var_sliceSize_12365.isValid ()) {
          uint32_t variant_14548 = var_sliceSize_12365.uintValue () ;
          bool loop_14548 = true ;
          while (loop_14548) {
            loop_14548 = GGS_bool (ComparisonKind::lowerThan, var_idx_14536.objectCompare (var_sliceSize_12365)).isValid () ;
            if (loop_14548) {
              loop_14548 = GGS_bool (ComparisonKind::lowerThan, var_idx_14536.objectCompare (var_sliceSize_12365)).boolValue () ;
            }
            if (loop_14548 && (0 == variant_14548)) {
              loop_14548 = false ;
              inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 402)) ;
            }
            if (loop_14548) {
              variant_14548 -= 1 ;
              GGS_midrange_5F_bit_5F_oriented_5F_op var_op_14626 ;
              GalgasBool test_27 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_27) {
                test_27 = GGS_bool (ComparisonKind::equal, var_shiftedBank_14445.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 404)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_27) {
                  var_op_14626 = GGS_midrange_5F_bit_5F_oriented_5F_op::class_func_BCF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 405)) ;
                }
              }
              if (GalgasBool::boolFalse == test_27) {
                var_op_14626 = GGS_midrange_5F_bit_5F_oriented_5F_op::class_func_BSF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 407)) ;
              }
              GalgasBool test_28 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_28) {
                test_28 = GGS_bool (ComparisonKind::notEqual, var_shiftedXorBank_14481.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 409)).objectCompare (GGS_uint (uint32_t (0U)))).operator_or (var_optimize_14369.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 409)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 409)).boolEnum () ;
                if (GalgasBool::boolTrue == test_28) {
                  const GGS_midrange_5F_instruction_5F_banksel_5F_register temp_29 = this ;
                  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FB::init_21__21__21__21_ (temp_29.readProperty_mInstructionLocation (), var_op_14626, var_STATUS_5F_IPICregisterDescription_12153, var_rpIndex_12346.add_operation (var_idx_14536, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 414)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 410)) ;
                }
              }
              if (GalgasBool::boolFalse == test_28) {
                ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 416)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 416)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 416)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 416)) ;
                ioArgument_ioListFileContents.plusAssignOperation(GGS_string (": useless '").add_operation (extensionGetter_mnemonic (var_op_14626, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 417)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 417)).add_operation (GGS_string (" STATUS, "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 417)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 417)) ;
                ioArgument_ioListFileContents.plusAssignOperation(var_rpIndex_12346.add_operation (var_idx_14536, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 418)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 418)).add_operation (GGS_string ("' not generated\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 418)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 418)) ;
              }
              var_idx_14536.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 420)) ;
              var_shiftedBank_14445 = var_shiftedBank_14445.right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 421)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 421)) ;
              var_shiftedXorBank_14481 = var_shiftedXorBank_14481.right_shift_operation (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 422)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 422)) ;
            }
          }
        }
        ioArgument_ioCurrentBank = var_newBank_12907 ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_FD build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_FD::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                                              const GGS_registerTable constinArgument_inRegisterTable,
                                                                                              const GGS_constantMap constinArgument_inConstantMap,
                                                                                              GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                              GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                              GGS_string & /* ioArgument_ioListFileContents */,
                                                                                              const GGS_uint constinArgument_inTotalBankCount,
                                                                                              GGS_uint & ioArgument_ioCurrentBank,
                                                                                              const GGS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                              GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                              const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                              GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_16235 ;
  const GGS_midrange_5F_instruction_5F_FD temp_0 = this ;
  GGS_bitSliceTable joker_16263 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_16235, joker_16263, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 443)) ;
  const GGS_midrange_5F_instruction_5F_FD temp_1 = this ;
  const GGS_midrange_5F_instruction_5F_FD temp_2 = this ;
  const GGS_midrange_5F_instruction_5F_FD temp_3 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mInstruction_5F_FD_5F_base_5F_code (), var_IPICregisterDescription_16235, temp_3.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 452)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_F build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_F::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                                             const GGS_registerTable constinArgument_inRegisterTable,
                                                                                             const GGS_constantMap constinArgument_inConstantMap,
                                                                                             GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                             GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                             GGS_string & /* ioArgument_ioListFileContents */,
                                                                                             const GGS_uint constinArgument_inTotalBankCount,
                                                                                             GGS_uint & ioArgument_ioCurrentBank,
                                                                                             const GGS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                             GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                             const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                             GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                             Compiler * inCompiler
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_17162 ;
  const GGS_midrange_5F_instruction_5F_F temp_0 = this ;
  GGS_bitSliceTable joker_17350 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_17162, joker_17350, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 476)) ;
  const GGS_midrange_5F_instruction_5F_F temp_1 = this ;
  const GGS_midrange_5F_instruction_5F_F temp_2 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mFAinstruction (), var_IPICregisterDescription_17162, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 485)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_FB build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_FB::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                                              const GGS_registerTable constinArgument_inRegisterTable,
                                                                                              const GGS_constantMap constinArgument_inConstantMap,
                                                                                              GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                              GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                              GGS_string & /* ioArgument_ioListFileContents */,
                                                                                              const GGS_uint constinArgument_inTotalBankCount,
                                                                                              GGS_uint & ioArgument_ioCurrentBank,
                                                                                              const GGS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                              GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                              const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                              GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_18302 ;
  GGS_bitSliceTable var_bitSliceTable_18335 ;
  const GGS_midrange_5F_instruction_5F_FB temp_0 = this ;
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_18302, var_bitSliceTable_18335, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 508)) ;
  GGS_uint var_bitNumber_18497 ;
  const GGS_midrange_5F_instruction_5F_FB temp_1 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_18335, var_bitNumber_18497, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 517)) ;
  const GGS_midrange_5F_instruction_5F_FB temp_2 = this ;
  const GGS_midrange_5F_instruction_5F_FB temp_3 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FB::init_21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mBitOrientedOp (), var_IPICregisterDescription_18302, var_bitNumber_18497, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 524)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_JSR build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_JSR::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap constinArgument_inRoutineMap,
                                                                                               const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                               const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                               GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                               GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                               GGS_string & /* ioArgument_ioListFileContents */,
                                                                                               const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                               GGS_uint & ioArgument_ioCurrentBank,
                                                                                               const GGS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                               GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                               const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                               GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_isNoReturn_19405 ;
  GGS_uint var_requiredBank_19421 ;
  GGS_uint var_returnedBank_19439 ;
  GGS_bool var_preservesBank_19457 ;
  const GGS_midrange_5F_instruction_5F_JSR temp_0 = this ;
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_19405, var_requiredBank_19421, var_returnedBank_19439, var_preservesBank_19457, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 548)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_19421.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 549)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_requiredBank_19421.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 549)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_midrange_5F_instruction_5F_JSR temp_2 = this ;
      GGS_string var_errorMessage_19561 = GGS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 550)).add_operation (GGS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 550)).add_operation (var_requiredBank_19421.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 550)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 550)) ;
      var_errorMessage_19561.plusAssignOperation(GGS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 551)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 552)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          var_errorMessage_19561.plusAssignOperation(GGS_string ("does contain any reliable value"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 553)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        var_errorMessage_19561.plusAssignOperation(GGS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 555)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 555)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 555)) ;
      }
      const GGS_midrange_5F_instruction_5F_JSR temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_19561, fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 557)) ;
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = var_isNoReturn_19405.boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_midrange_5F_instruction_5F_JSR temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("a \"noreturn\" routine should be called with a GOTO or JUMP instruction"), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 560)) ;
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = var_preservesBank_19457.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 562)).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      ioArgument_ioCurrentBank = var_returnedBank_19439 ;
    }
  }
  const GGS_midrange_5F_instruction_5F_JSR temp_10 = this ;
  const GGS_midrange_5F_instruction_5F_JSR temp_11 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_JSR::init_21__21__21__21_ (temp_10.readProperty_mInstructionLocation (), temp_11.readProperty_mTargetLabel (), GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 569)), GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 570)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 566)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrangeInstruction_checkbank build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrangeInstruction_5F_checkbank::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                 const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                 const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                 GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                 GGS_midrange_5F_intermediate_5F_instructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                                                                 GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                 const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                                 GGS_uint & ioArgument_ioCurrentBank,
                                                                                                 const GGS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                 GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                 const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                 GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrangeInstruction_5F_checkbank temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mBankIndex ().objectCompare (GGS_uint (uint32_t (15U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_midrangeInstruction_5F_checkbank temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("Bank index should be <= 15"), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 590)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 591)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_midrangeInstruction_5F_checkbank temp_5 = this ;
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GGS_string ("checkbank fail: there is no selected bank"), fixItArray6  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 592)) ;
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        const GGS_midrangeInstruction_5F_checkbank temp_8 = this ;
        test_7 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (temp_8.readProperty_mBankIndex ())).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_midrangeInstruction_5F_checkbank temp_9 = this ;
          const GGS_midrangeInstruction_5F_checkbank temp_10 = this ;
          GenericArray <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GGS_string ("checkbank fail: the selected bank is ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 594)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 594)).add_operation (GGS_string (", required bank is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 594)).add_operation (temp_10.readProperty_mBankIndex ().getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 594)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 594)), fixItArray11  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 594)) ;
        }
      }
    }
  }
  const GGS_midrangeInstruction_5F_checkbank temp_12 = this ;
  ioArgument_ioCurrentBank = temp_12.readProperty_mBankIndex () ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrangeInstruction_checknobank build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrangeInstruction_5F_checknobank::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                   const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                   const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                   GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                   GGS_midrange_5F_intermediate_5F_instructionList & /* ioArgument_ioGeneratedInstructionList */,
                                                                                                   GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                   const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                                   GGS_uint & ioArgument_ioCurrentBank,
                                                                                                   const GGS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                   GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                   const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                   GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 615)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_midrangeInstruction_5F_checknobank temp_1 = this ;
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GGS_string ("checknobank fail: the ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 616)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 616)).add_operation (GGS_string (" bank is selected"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 616)), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 616)) ;
      ioArgument_ioCurrentBank = GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 617)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_CALL build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_CALL::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap constinArgument_inRoutineMap,
                                                                                                const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                                GGS_uint & ioArgument_ioCurrentBank,
                                                                                                const GGS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_isNoReturn_22995 ;
  GGS_uint var_requiredBank_23011 ;
  GGS_uint var_returnedBank_23029 ;
  GGS_bool var_preservesBank_23047 ;
  const GGS_midrange_5F_instruction_5F_CALL temp_0 = this ;
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_22995, var_requiredBank_23011, var_returnedBank_23029, var_preservesBank_23047, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 637)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_23011.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 638)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_requiredBank_23011.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 638)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_midrange_5F_instruction_5F_CALL temp_2 = this ;
      GGS_string var_errorMessage_23151 = GGS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 639)).add_operation (GGS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 639)).add_operation (var_requiredBank_23011.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 639)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 639)) ;
      var_errorMessage_23151.plusAssignOperation(GGS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 640)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 641)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          var_errorMessage_23151.plusAssignOperation(GGS_string ("does contain any reliable value"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 642)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        var_errorMessage_23151.plusAssignOperation(GGS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 644)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 644)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 644)) ;
      }
      const GGS_midrange_5F_instruction_5F_CALL temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_23151, fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 646)) ;
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = var_isNoReturn_22995.boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_midrange_5F_instruction_5F_CALL temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("a \"noreturn\" routine should be called with a GOTO or JUMP instruction"), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 649)) ;
    }
  }
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = var_preservesBank_23047.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 651)).boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      ioArgument_ioCurrentBank = var_returnedBank_23029 ;
    }
  }
  const GGS_midrange_5F_instruction_5F_CALL temp_10 = this ;
  const GGS_midrange_5F_instruction_5F_CALL temp_11 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_CALL::init_21__21_ (temp_10.readProperty_mInstructionLocation (), temp_11.readProperty_mTargetLabel (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 655)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_JUMP build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_JUMP::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap constinArgument_inRoutineMap,
                                                                                                const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                                GGS_uint & ioArgument_ioCurrentBank,
                                                                                                const GGS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                GGS_bool & ioArgument_ioContinuesInSequence,
                                                                                                const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_isNoReturn_24564 ;
  GGS_uint var_requiredBank_24580 ;
  const GGS_midrange_5F_instruction_5F_JUMP temp_0 = this ;
  GGS_uint joker_24593 ; // Joker input parameter
  GGS_bool joker_24596 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_24564, var_requiredBank_24580, joker_24593, joker_24596, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 676)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_24580.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 677)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_requiredBank_24580.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 677)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_midrange_5F_instruction_5F_JUMP temp_2 = this ;
      GGS_string var_errorMessage_24689 = GGS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 678)).add_operation (GGS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 678)).add_operation (var_requiredBank_24580.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 678)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 678)) ;
      var_errorMessage_24689.plusAssignOperation(GGS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 679)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 680)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          var_errorMessage_24689.plusAssignOperation(GGS_string ("does contain any reliable value"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 681)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        var_errorMessage_24689.plusAssignOperation(GGS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 683)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 683)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 683)) ;
      }
      const GGS_midrange_5F_instruction_5F_JUMP temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_24689, fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 685)) ;
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = var_isNoReturn_24564.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 687)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_midrange_5F_instruction_5F_JUMP temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("a regular routine should be called with a CALL or JSR instruction"), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 688)) ;
    }
  }
  ioArgument_ioContinuesInSequence = GGS_bool (false) ;
  const GGS_midrange_5F_instruction_5F_JUMP temp_9 = this ;
  const GGS_midrange_5F_instruction_5F_JUMP temp_10 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_JUMP::init_21__21__21__21_ (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mTargetLabel (), GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 695)), GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 696)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 692)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_GOTO build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_GOTO::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap constinArgument_inRoutineMap,
                                                                                                const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                                GGS_uint & ioArgument_ioCurrentBank,
                                                                                                const GGS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                GGS_bool & ioArgument_ioContinuesInSequence,
                                                                                                const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_isNoReturn_26143 ;
  GGS_uint var_requiredBank_26159 ;
  const GGS_midrange_5F_instruction_5F_GOTO temp_0 = this ;
  GGS_uint joker_26172 ; // Joker input parameter
  GGS_bool joker_26175 ; // Joker input parameter
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_26143, var_requiredBank_26159, joker_26172, joker_26175, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 715)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_26159.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 716)))).operator_and (GGS_bool (ComparisonKind::notEqual, var_requiredBank_26159.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 716)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_midrange_5F_instruction_5F_GOTO temp_2 = this ;
      GGS_string var_errorMessage_26268 = GGS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 717)).add_operation (GGS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 717)).add_operation (var_requiredBank_26159.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 717)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 717)) ;
      var_errorMessage_26268.plusAssignOperation(GGS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 718)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = GGS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 719)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          var_errorMessage_26268.plusAssignOperation(GGS_string ("does contain any reliable value"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 720)) ;
        }
      }
      if (GalgasBool::boolFalse == test_3) {
        var_errorMessage_26268.plusAssignOperation(GGS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 722)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 722)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 722)) ;
      }
      const GGS_midrange_5F_instruction_5F_GOTO temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_26268, fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 724)) ;
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = var_isNoReturn_26143.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 726)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_midrange_5F_instruction_5F_GOTO temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("a regular routine should be called with a CALL or JSR instruction"), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 727)) ;
    }
  }
  ioArgument_ioContinuesInSequence = GGS_bool (false) ;
  const GGS_midrange_5F_instruction_5F_GOTO temp_9 = this ;
  const GGS_midrange_5F_instruction_5F_GOTO temp_10 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_GOTO::init_21__21_ (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mTargetLabel (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 731)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_CLRWDT build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_CLRWDT::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                  const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                  const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                  GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                  GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                  GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                  const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                                  GGS_uint & /* ioArgument_ioCurrentBank */,
                                                                                                  const GGS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                  GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                  const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                  GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_instruction_5F_CLRWDT temp_0 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_CLRWDT::init_21_ (temp_0.readProperty_mInstructionLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 751)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_CLRW build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_CLRW::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                                GGS_uint & /* ioArgument_ioCurrentBank */,
                                                                                                const GGS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_instruction_5F_CLRW temp_0 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_CLRW::init_21_ (temp_0.readProperty_mInstructionLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 770)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_NOP build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_NOP::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                                               const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                               const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                               GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                               GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                               GGS_string & /* ioArgument_ioListFileContents */,
                                                                                               const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                               GGS_uint & /* ioArgument_ioCurrentBank */,
                                                                                               const GGS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                               GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                               const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                               GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_instruction_5F_NOP temp_0 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_NOP::init_21_ (temp_0.readProperty_mInstructionLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 789)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_SLEEP build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_SLEEP::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                 const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                 const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                 GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                 GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                 GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                 const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                                 GGS_uint & /* ioArgument_ioCurrentBank */,
                                                                                                 const GGS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                 GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                 const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                 GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_instruction_5F_SLEEP temp_0 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_SLEEP::init_21_ (temp_0.readProperty_mInstructionLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 808)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_literalOperation build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_literalOperation::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                            const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                            const GGS_constantMap constinArgument_inConstantMap,
                                                                                                            GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                            GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                            GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                            const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                                            GGS_uint & /* ioArgument_ioCurrentBank */,
                                                                                                            const GGS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                            GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                            const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                            GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_result_30729 ;
  const GGS_midrange_5F_instruction_5F_literalOperation temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mImmediatExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_30729, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 827)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::greaterThan, var_result_30729.objectCompare (GGS_sint_36__34_ (int64_t (255LL)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_result_30729.objectCompare (GGS_sint_36__34_ (int64_t (-128LL)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 829)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_midrange_5F_instruction_5F_literalOperation temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("immediate value is evaluated as ").add_operation (var_result_30729.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 830)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 830)).add_operation (GGS_string (" (should be betwween -128 and 255)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 830)), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 830)) ;
    }
  }
  const GGS_midrange_5F_instruction_5F_literalOperation temp_4 = this ;
  const GGS_midrange_5F_instruction_5F_literalOperation temp_5 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mLiteralInstruction (), var_result_30729.operator_and (GGS_sint_36__34_ (int64_t (255LL)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 836)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 836)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 833)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_MNOP build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_MNOP::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                                                const GGS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                const GGS_constantMap /* constinArgument_inConstantMap */,
                                                                                                GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                const GGS_uint /* constinArgument_inTotalBankCount */,
                                                                                                GGS_uint & /* ioArgument_ioCurrentBank */,
                                                                                                const GGS_bool /* constinArgument_inShouldPreserveBank */,
                                                                                                GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                const GGS_routineKind /* constinArgument_inRoutineKind */,
                                                                                                GGS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_instruction_5F_MNOP temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ().objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_midrange_5F_instruction_5F_MNOP temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mOccurrenceFactor ().readProperty_location (), GGS_string ("occurrence argument is zero: no generated code"), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 856)) ;
    }
  }
  const GGS_midrange_5F_instruction_5F_MNOP temp_4 = this ;
  const GGS_midrange_5F_instruction_5F_MNOP temp_5 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_MNOP::init_21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mOccurrenceFactor (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 859)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_FOREVER build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_FOREVER::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap constinArgument_inRoutineMap,
                                                                                                   const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                   const GGS_constantMap constinArgument_inConstantMap,
                                                                                                   GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                   GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                   GGS_string & ioArgument_ioListFileContents,
                                                                                                   const GGS_uint constinArgument_inTotalBankCount,
                                                                                                   GGS_uint & ioArgument_ioCurrentBank,
                                                                                                   const GGS_bool constinArgument_inShouldPreserveBank,
                                                                                                   GGS_bool & ioArgument_ioContinuesInSequence,
                                                                                                   const GGS_routineKind constinArgument_inRoutineKind,
                                                                                                   GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  switch (constinArgument_inRoutineKind.enumValue ()) {
  case GGS_routineKind::Enumeration::invalid:
    break ;
  case GGS_routineKind::Enumeration::enum_regularRoutine:
    {
      const GGS_midrange_5F_instruction_5F_FOREVER temp_0 = this ;
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (temp_0.readProperty_mInstructionLocation (), GGS_string ("a regular routine does not accept the \"forever\" instruction"), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 881)) ;
    }
    break ;
  case GGS_routineKind::Enumeration::enum_noReturnRoutine:
    break ;
  case GGS_routineKind::Enumeration::enum_interruptRoutine:
    {
      const GGS_midrange_5F_instruction_5F_FOREVER temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("an interrupt routine does not accept the \"forever\" instruction"), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 884)) ;
    }
    break ;
  }
  GGS_uint var_finalBank_33023 = ioArgument_ioCurrentBank ;
  GGS_string var_label_30__33063 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 888)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 888)) ;
  ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 889)) ;
  const GGS_midrange_5F_instruction_5F_FOREVER temp_4 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::init_21__21_ (GGS_lstring::init_21__21_ (var_label_30__33063, temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 890)) ;
  {
  const GGS_midrange_5F_instruction_5F_FOREVER temp_5 = this ;
  routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_5.readProperty_mInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_finalBank_33023, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 891)) ;
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank_33023)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_midrange_5F_instruction_5F_FOREVER temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mEndOfInstructionList (), GGS_string ("instruction list does not leave bank selection unchanged"), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 907)) ;
    }
  }
  const GGS_midrange_5F_instruction_5F_FOREVER temp_9 = this ;
  const GGS_midrange_5F_instruction_5F_FOREVER temp_10 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_GOTO::init_21__21_ (temp_9.readProperty_mInstructionLocation (), GGS_lstring::init_21__21_ (var_label_30__33063, temp_10.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 910)) ;
  ioArgument_ioContinuesInSequence = GGS_bool (false) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_STATIC_REPEAT build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_STATIC_5F_REPEAT::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap constinArgument_inRoutineMap,
                                                                                                            const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                            const GGS_constantMap constinArgument_inConstantMap,
                                                                                                            GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                            GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                            GGS_string & ioArgument_ioListFileContents,
                                                                                                            const GGS_uint constinArgument_inTotalBankCount,
                                                                                                            GGS_uint & ioArgument_ioCurrentBank,
                                                                                                            const GGS_bool constinArgument_inShouldPreserveBank,
                                                                                                            GGS_bool & ioArgument_ioContinuesInSequence,
                                                                                                            const GGS_routineKind constinArgument_inRoutineKind,
                                                                                                            GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_lowerBound_34654 ;
  const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLowerBoundExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_lowerBound_34654, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 933)) ;
  GGS_sint_36__34_ var_upperBound_34764 ;
  const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mUpperBoundExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_upperBound_34764, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 934)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::greaterThan, var_lowerBound_34654.objectCompare (var_upperBound_34764)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mInstructionLocation (), GGS_string ("lower bound (").add_operation (var_lowerBound_34654.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 937)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 937)).add_operation (GGS_string (") greater then upper bound ("), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 937)).add_operation (var_upperBound_34764.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 937)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 937)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 937)), fixItArray4  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 937)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = GGS_bool (ComparisonKind::greaterThan, var_upperBound_34764.substract_operation (var_lowerBound_34654, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 938)).objectCompare (GGS_sint_36__34_ (int64_t (65535LL)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_6 = this ;
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mInstructionLocation (), GGS_string ("repeat count (").add_operation (var_upperBound_34764.substract_operation (var_lowerBound_34654, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 939)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 939)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 939)).add_operation (GGS_string (") too large (should be <= 0xFFFF)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 939)), fixItArray7  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 939)) ;
      }
    }
  }
  GGS_uint var_finalBank_35169 = ioArgument_ioCurrentBank ;
  GGS_constantMap var_tempConstantMap_35201 = constinArgument_inConstantMap ;
  {
  const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_8 = this ;
  var_tempConstantMap_35201.setter_insertKey (temp_8.readProperty_mConstantName (), var_lowerBound_34654, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 944)) ;
  }
  {
  const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_9 = this ;
  routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_9.readProperty_mInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, var_tempConstantMap_35201, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_finalBank_35169, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 945)) ;
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank_35169)).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_11 = this ;
      GenericArray <FixItDescription> fixItArray12 ;
      inCompiler->emitSemanticError (temp_11.readProperty_mEndOfInstruction (), GGS_string ("enclosed instruction list does not leave bank selection unchanged"), fixItArray12  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 961)) ;
    }
  }
  GalgasBool test_13 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_13) {
    test_13 = ioArgument_ioContinuesInSequence.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 963)).boolEnum () ;
    if (GalgasBool::boolTrue == test_13) {
      const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_14 = this ;
      GenericArray <FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_14.readProperty_mEndOfInstruction (), GGS_string ("enclosed instruction list contains an endless loop"), fixItArray15  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 964)) ;
    }
  }
  GGS_sint_36__34_ var_idx_35933 = var_lowerBound_34654.add_operation (GGS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 967)) ;
  if (var_upperBound_34764.substract_operation (var_lowerBound_34654, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 968)).add_operation (GGS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 968)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 968)).isValid ()) {
    uint32_t variant_35956 = var_upperBound_34764.substract_operation (var_lowerBound_34654, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 968)).add_operation (GGS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 968)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 968)).uintValue () ;
    bool loop_35956 = true ;
    while (loop_35956) {
      GGS_bool test_16 = GGS_bool (ComparisonKind::lowerOrEqual, var_idx_35933.objectCompare (var_upperBound_34764)) ;
      if (GalgasBool::boolTrue == test_16.boolEnum ()) {
        test_16 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 968)).objectCompare (GGS_uint (uint32_t (0U)))) ;
      }
      loop_35956 = test_16.isValid () ;
      if (loop_35956) {
        loop_35956 = test_16.boolValue () ;
      }
      if (loop_35956 && (0 == variant_35956)) {
        loop_35956 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 968)) ;
      }
      if (loop_35956) {
        variant_35956 -= 1 ;
        GGS_constantMap var_constantMap_36062 = constinArgument_inConstantMap ;
        {
        const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_17 = this ;
        var_constantMap_36062.setter_insertKey (temp_17.readProperty_mConstantName (), var_idx_35933, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 970)) ;
        }
        {
        const GGS_midrange_5F_instruction_5F_STATIC_5F_REPEAT temp_18 = this ;
        routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_18.readProperty_mInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, var_constantMap_36062, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 971)) ;
        }
        var_idx_35933.plusAssignOperation(GGS_sint_36__34_ (int64_t (1LL)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 986)) ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_IF_BitTest build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_IF_5F_BitTest::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap constinArgument_inRoutineMap,
                                                                                                         const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                         const GGS_constantMap constinArgument_inConstantMap,
                                                                                                         GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                         GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                         GGS_string & ioArgument_ioListFileContents,
                                                                                                         const GGS_uint constinArgument_inTotalBankCount,
                                                                                                         GGS_uint & ioArgument_ioCurrentBank,
                                                                                                         const GGS_bool constinArgument_inShouldPreserveBank,
                                                                                                         GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                         const GGS_routineKind constinArgument_inRoutineKind,
                                                                                                         GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_37269 ;
  GGS_bitSliceTable var_bitSliceTable_37302 ;
  const GGS_midrange_5F_instruction_5F_IF_5F_BitTest temp_0 = this ;
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_37269, var_bitSliceTable_37302, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1005)) ;
  GGS_uint var_bitNumber_37464 ;
  const GGS_midrange_5F_instruction_5F_IF_5F_BitTest temp_1 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_37302, var_bitNumber_37464, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1014)) ;
  const GGS_midrange_5F_instruction_5F_IF_5F_BitTest temp_2 = this ;
  const GGS_midrange_5F_instruction_5F_IF_5F_BitTest temp_3 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::init_21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mSkipIfSet (), var_IPICregisterDescription_37269, var_bitNumber_37464, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1021)) ;
  GGS_bool var_unusedContinuesInSequence_37696 = GGS_bool (true) ;
  const GGS_midrange_5F_instruction_5F_IF_5F_BitTest temp_4 = this ;
  callExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList ((cPtr_midrange_5F_instruction *) temp_4.readProperty_mInstruction ().ptr (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBank, var_unusedContinuesInSequence_37696, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1029)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_incDecRegisterInCondition buildIPICinstructionForCondition'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_incDecRegisterInCondition::method_buildIPICinstructionForCondition (const GGS_uint constinArgument_inTotalBankCount,
                                                                                          const GGS_uint constinArgument_inCurrentBank,
                                                                                          const GGS_registerTable constinArgument_inRegisterTable,
                                                                                          const GGS_constantMap constinArgument_inConstantMap,
                                                                                          GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                          const GGS_bool constinArgument_inComplementaryBranch,
                                                                                          const GGS_location constinArgument_inInstructionLocation,
                                                                                          const GGS_string constinArgument_inTargetLabel,
                                                                                          GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                          GGS_string & /* ioArgument_ioListFileContents */,
                                                                                          GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_39573 ;
  const GGS_midrange_5F_incDecRegisterInCondition temp_0 = this ;
  GGS_bitSliceTable joker_39601 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_39573, joker_39601, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1081)) ;
  const GGS_midrange_5F_incDecRegisterInCondition temp_1 = this ;
  const GGS_midrange_5F_incDecRegisterInCondition temp_2 = this ;
  const GGS_midrange_5F_incDecRegisterInCondition temp_3 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_incDecRegisterInCondition::init_21__21__21__21__21__21_ (constinArgument_inInstructionLocation, var_IPICregisterDescription_39573, constinArgument_inTargetLabel, temp_1.readProperty_mIncrement (), temp_2.readProperty_m_5F_W_5F_isDestination (), temp_3.readProperty_mBranchIfZero ().operator_xor (constinArgument_inComplementaryBranch COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1097)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1091)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_incDecRegisterInCondition computeInstructionCountForCondition'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_incDecRegisterInCondition::method_computeInstructionCountForCondition (const GGS_bool constinArgument_inComplementaryBranch,
                                                                                             GGS_uint & outArgument_outInstructionCount,
                                                                                             Compiler * /* inCompiler */
                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_incDecRegisterInCondition temp_1 = this ;
    test_0 = temp_1.readProperty_mBranchIfZero ().operator_xor (constinArgument_inComplementaryBranch COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1105)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outInstructionCount = GGS_uint (uint32_t (3U)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    outArgument_outInstructionCount = GGS_uint (uint32_t (2U)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_negateCondition buildIPICinstructionForCondition'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_negateCondition::method_buildIPICinstructionForCondition (const GGS_uint constinArgument_inTotalBankCount,
                                                                                const GGS_uint constinArgument_inCurrentBank,
                                                                                const GGS_registerTable constinArgument_inRegisterTable,
                                                                                const GGS_constantMap constinArgument_inConstantMap,
                                                                                GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                                const GGS_bool constinArgument_inComplementaryBranch,
                                                                                const GGS_location constinArgument_inInstructionLocation,
                                                                                const GGS_string constinArgument_inTargetLabel,
                                                                                GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                GGS_string & ioArgument_ioListFileContents,
                                                                                GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_negateCondition temp_0 = this ;
  callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) temp_0.readProperty_mCondition ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, constinArgument_inComplementaryBranch.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1132)), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1126)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_negateCondition computeInstructionCountForCondition'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_negateCondition::method_computeInstructionCountForCondition (const GGS_bool constinArgument_inComplementaryBranch,
                                                                                   GGS_uint & outArgument_outInstructionCount,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_midrange_5F_negateCondition temp_0 = this ;
  callExtensionMethod_computeInstructionCountForCondition ((cPtr_midrange_5F_conditionExpression *) temp_0.readProperty_mCondition ().ptr (), constinArgument_inComplementaryBranch.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1147)), outArgument_outInstructionCount, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1146)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_andCondition buildIPICinstructionForCondition'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_andCondition::method_buildIPICinstructionForCondition (const GGS_uint constinArgument_inTotalBankCount,
                                                                             const GGS_uint constinArgument_inCurrentBank,
                                                                             const GGS_registerTable constinArgument_inRegisterTable,
                                                                             const GGS_constantMap constinArgument_inConstantMap,
                                                                             GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                             const GGS_bool constinArgument_inComplementaryBranch,
                                                                             const GGS_location constinArgument_inInstructionLocation,
                                                                             const GGS_string constinArgument_inTargetLabel,
                                                                             GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                             GGS_string & ioArgument_ioListFileContents,
                                                                             GGS_stringset & ioArgument_ioUsedRegisters,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inComplementaryBranch.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_midrange_5F_andCondition temp_1 = this ;
      callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) temp_1.readProperty_mLeftExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (true), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1167)) ;
      const GGS_midrange_5F_andCondition temp_2 = this ;
      callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) temp_2.readProperty_mRightExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (true), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1180)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_string var_label_30__42724 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1194)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1194)) ;
    ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1194)) ;
    const GGS_midrange_5F_andCondition temp_3 = this ;
    callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) temp_3.readProperty_mLeftExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (true), constinArgument_inInstructionLocation, var_label_30__42724, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1195)) ;
    const GGS_midrange_5F_andCondition temp_4 = this ;
    callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) temp_4.readProperty_mRightExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (false), constinArgument_inInstructionLocation, constinArgument_inTargetLabel, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1208)) ;
    ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::init_21__21_ (GGS_lstring::init_21__21_ (var_label_30__42724, constinArgument_inInstructionLocation, inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1221)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_andCondition computeInstructionCountForCondition'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_andCondition::method_computeInstructionCountForCondition (const GGS_bool constinArgument_inComplementaryBranch,
                                                                                GGS_uint & outArgument_outInstructionCount,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_countLeft_43893 ;
  const GGS_midrange_5F_andCondition temp_0 = this ;
  callExtensionMethod_computeInstructionCountForCondition ((cPtr_midrange_5F_conditionExpression *) temp_0.readProperty_mLeftExpression ().ptr (), constinArgument_inComplementaryBranch, var_countLeft_43893, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1230)) ;
  GGS_uint var_countRight_44003 ;
  const GGS_midrange_5F_andCondition temp_1 = this ;
  callExtensionMethod_computeInstructionCountForCondition ((cPtr_midrange_5F_conditionExpression *) temp_1.readProperty_mLeftExpression ().ptr (), constinArgument_inComplementaryBranch, var_countRight_44003, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1234)) ;
  outArgument_outInstructionCount = var_countLeft_43893.add_operation (var_countRight_44003, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1238)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_bitTest_in_structured_if_condition buildIPICinstructionForCondition'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::method_buildIPICinstructionForCondition (const GGS_uint constinArgument_inTotalBankCount,
                                                                                                               const GGS_uint constinArgument_inCurrentBank,
                                                                                                               const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                               const GGS_constantMap constinArgument_inConstantMap,
                                                                                                               GGS_uint & /* ioArgument_ioLocalLabelIndex */,
                                                                                                               const GGS_bool constinArgument_inComplementaryBranch,
                                                                                                               const GGS_location constinArgument_inInstructionLocation,
                                                                                                               const GGS_string constinArgument_inTargetLabel,
                                                                                                               GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                               GGS_string & /* ioArgument_ioListFileContents */,
                                                                                                               GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                               Compiler * inCompiler
                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_44790 ;
  GGS_bitSliceTable var_bitSliceTable_44823 ;
  const GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition temp_0 = this ;
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, constinArgument_inCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_44790, var_bitSliceTable_44823, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1255)) ;
  GGS_uint var_bitNumber_44985 ;
  const GGS_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition temp_1 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_44823, var_bitNumber_44985, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1264)) ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_BitTestSkip::init_21__21__21__21_ (constinArgument_inInstructionLocation, constinArgument_inComplementaryBranch, var_IPICregisterDescription_44790, var_bitNumber_44985, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1271)) ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_JUMP::init_21__21__21__21_ (constinArgument_inInstructionLocation, GGS_lstring::init_21__21_ (constinArgument_inTargetLabel, constinArgument_inInstructionLocation, inCompiler COMMA_HERE), GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1280)), GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1281)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1277)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_bitTest_in_structured_if_condition computeInstructionCountForCondition'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_bitTest_5F_in_5F_structured_5F_if_5F_condition::method_computeInstructionCountForCondition (const GGS_bool /* constinArgument_inComplementaryBranch */,
                                                                                                                  GGS_uint & outArgument_outInstructionCount,
                                                                                                                  Compiler * /* inCompiler */
                                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionCount = GGS_uint (uint32_t (2U)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_structured_if build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_structured_5F_if::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap constinArgument_inRoutineMap,
                                                                                                            const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                            const GGS_constantMap constinArgument_inConstantMap,
                                                                                                            GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                            GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                            GGS_string & ioArgument_ioListFileContents,
                                                                                                            const GGS_uint constinArgument_inTotalBankCount,
                                                                                                            GGS_uint & ioArgument_ioCurrentBank,
                                                                                                            const GGS_bool constinArgument_inShouldPreserveBank,
                                                                                                            GGS_bool & ioArgument_ioContinuesInSequence,
                                                                                                            const GGS_routineKind constinArgument_inRoutineKind,
                                                                                                            GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                            Compiler * inCompiler
                                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_generateComplementaryCondition_46333 = GGS_bool (false) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (gOption_piccoloOptions_performOptimizations.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_uint var_directCount_46482 ;
      const GGS_midrange_5F_instruction_5F_structured_5F_if temp_1 = this ;
      callExtensionMethod_computeInstructionCountForCondition ((cPtr_midrange_5F_conditionExpression *) temp_1.readProperty_mIfCondition ().ptr (), GGS_bool (true), var_directCount_46482, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1311)) ;
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        const GGS_midrange_5F_instruction_5F_structured_5F_if temp_3 = this ;
        test_2 = GGS_bool (ComparisonKind::greaterThan, temp_3.readProperty_mElseInstructionList ().getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1312)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          var_directCount_46482.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1313)) ;
        }
      }
      GGS_uint var_complementaryCount_46666 ;
      const GGS_midrange_5F_instruction_5F_structured_5F_if temp_4 = this ;
      callExtensionMethod_computeInstructionCountForCondition ((cPtr_midrange_5F_conditionExpression *) temp_4.readProperty_mIfCondition ().ptr (), GGS_bool (false), var_complementaryCount_46666, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1315)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        const GGS_midrange_5F_instruction_5F_structured_5F_if temp_6 = this ;
        test_5 = GGS_bool (ComparisonKind::greaterThan, temp_6.readProperty_mThenInstructionList ().getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1316)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          var_complementaryCount_46666.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1317)) ;
        }
      }
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = GGS_bool (ComparisonKind::lowerThan, var_complementaryCount_46666.objectCompare (var_directCount_46482)).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          var_generateComplementaryCondition_46333 = GGS_bool (true) ;
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  line ").add_operation (ioArgument_ioGeneratedInstructionList.getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1321)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1321)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1321)).add_operation (GGS_string (": generates complementary test (saves "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1321)).add_operation (var_directCount_46482.substract_operation (var_complementaryCount_46666, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1322)).getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1322)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1321)).add_operation (GGS_string (" instruction"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1322)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1321)) ;
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            test_8 = GGS_bool (ComparisonKind::greaterThan, var_directCount_46482.substract_operation (var_complementaryCount_46666, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1323)).objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("s"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1324)) ;
            }
          }
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string (")\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1326)) ;
        }
      }
    }
  }
  GGS_uint var_elseBranchFinalBank_47300 = ioArgument_ioCurrentBank ;
  GGS_uint var_thenBranchFinalBank_47348 = ioArgument_ioCurrentBank ;
  GGS_bool var_elseContinuesInSequence_47396 ;
  GGS_bool var_thenContinuesInSequence_47432 ;
  GalgasBool test_9 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_9) {
    test_9 = var_generateComplementaryCondition_46333.boolEnum () ;
    if (GalgasBool::boolTrue == test_9) {
      GGS_string var_label_5F_nextCondition_47520 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1335)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1335)) ;
      ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1335)) ;
      GGS_string var_label_5F_endOfIfinstruction_47617 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1336)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1336)) ;
      ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1336)) ;
      const GGS_midrange_5F_instruction_5F_structured_5F_if temp_10 = this ;
      const GGS_midrange_5F_instruction_5F_structured_5F_if temp_11 = this ;
      callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) temp_10.readProperty_mIfCondition ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (false), temp_11.readProperty_mInstructionLocation (), var_label_5F_nextCondition_47520, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1338)) ;
      {
      const GGS_midrange_5F_instruction_5F_structured_5F_if temp_12 = this ;
      routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_12.readProperty_mElseInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_elseBranchFinalBank_47300, constinArgument_inShouldPreserveBank, var_elseContinuesInSequence_47396, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1352)) ;
      }
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        const GGS_midrange_5F_instruction_5F_structured_5F_if temp_14 = this ;
        test_13 = GGS_bool (ComparisonKind::greaterThan, temp_14.readProperty_mThenInstructionList ().getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1368)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          const GGS_midrange_5F_instruction_5F_structured_5F_if temp_15 = this ;
          const GGS_midrange_5F_instruction_5F_structured_5F_if temp_16 = this ;
          ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_GOTO::init_21__21_ (temp_15.readProperty_mInstructionLocation (), GGS_lstring::init_21__21_ (var_label_5F_endOfIfinstruction_47617, temp_16.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1369)) ;
        }
      }
      const GGS_midrange_5F_instruction_5F_structured_5F_if temp_17 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::init_21__21_ (GGS_lstring::init_21__21_ (var_label_5F_nextCondition_47520, temp_17.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1371)) ;
      {
      const GGS_midrange_5F_instruction_5F_structured_5F_if temp_18 = this ;
      routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_18.readProperty_mThenInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_thenBranchFinalBank_47348, constinArgument_inShouldPreserveBank, var_thenContinuesInSequence_47432, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1372)) ;
      }
      GalgasBool test_19 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_19) {
        const GGS_midrange_5F_instruction_5F_structured_5F_if temp_20 = this ;
        test_19 = GGS_bool (ComparisonKind::greaterThan, temp_20.readProperty_mThenInstructionList ().getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1387)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_19) {
          const GGS_midrange_5F_instruction_5F_structured_5F_if temp_21 = this ;
          ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::init_21__21_ (GGS_lstring::init_21__21_ (var_label_5F_endOfIfinstruction_47617, temp_21.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1388)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_9) {
    GGS_string var_label_5F_nextCondition_49484 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1392)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1392)) ;
    ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1392)) ;
    GGS_string var_label_5F_endOfIfinstruction_49581 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1393)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1393)) ;
    ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1393)) ;
    const GGS_midrange_5F_instruction_5F_structured_5F_if temp_22 = this ;
    const GGS_midrange_5F_instruction_5F_structured_5F_if temp_23 = this ;
    callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) temp_22.readProperty_mIfCondition ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (true), temp_23.readProperty_mInstructionLocation (), var_label_5F_nextCondition_49484, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1395)) ;
    {
    const GGS_midrange_5F_instruction_5F_structured_5F_if temp_24 = this ;
    routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_24.readProperty_mThenInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_thenBranchFinalBank_47348, constinArgument_inShouldPreserveBank, var_thenContinuesInSequence_47432, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1409)) ;
    }
    GalgasBool test_25 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_25) {
      const GGS_midrange_5F_instruction_5F_structured_5F_if temp_26 = this ;
      test_25 = GGS_bool (ComparisonKind::greaterThan, temp_26.readProperty_mElseInstructionList ().getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1425)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_25) {
        const GGS_midrange_5F_instruction_5F_structured_5F_if temp_27 = this ;
        const GGS_midrange_5F_instruction_5F_structured_5F_if temp_28 = this ;
        ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_GOTO::init_21__21_ (temp_27.readProperty_mInstructionLocation (), GGS_lstring::init_21__21_ (var_label_5F_endOfIfinstruction_49581, temp_28.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1426)) ;
      }
    }
    const GGS_midrange_5F_instruction_5F_structured_5F_if temp_29 = this ;
    ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::init_21__21_ (GGS_lstring::init_21__21_ (var_label_5F_nextCondition_49484, temp_29.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1428)) ;
    {
    const GGS_midrange_5F_instruction_5F_structured_5F_if temp_30 = this ;
    routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_30.readProperty_mElseInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_elseBranchFinalBank_47300, constinArgument_inShouldPreserveBank, var_elseContinuesInSequence_47396, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1429)) ;
    }
    GalgasBool test_31 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_31) {
      const GGS_midrange_5F_instruction_5F_structured_5F_if temp_32 = this ;
      test_31 = GGS_bool (ComparisonKind::greaterThan, temp_32.readProperty_mElseInstructionList ().getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1444)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_31) {
        const GGS_midrange_5F_instruction_5F_structured_5F_if temp_33 = this ;
        ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::init_21__21_ (GGS_lstring::init_21__21_ (var_label_5F_endOfIfinstruction_49581, temp_33.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1445)) ;
      }
    }
  }
  GalgasBool test_34 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_34) {
    test_34 = GGS_bool (ComparisonKind::equal, var_elseBranchFinalBank_47300.objectCompare (var_thenBranchFinalBank_47348)).boolEnum () ;
    if (GalgasBool::boolTrue == test_34) {
      ioArgument_ioCurrentBank = var_elseBranchFinalBank_47300 ;
    }
  }
  if (GalgasBool::boolFalse == test_34) {
    const GGS_midrange_5F_instruction_5F_structured_5F_if temp_35 = this ;
    GenericArray <FixItDescription> fixItArray36 ;
    inCompiler->emitSemanticError (temp_35.readProperty_mEndOfElsePartLocation (), GGS_string ("This branch does not leave bank selection value as the first one does"), fixItArray36  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1451)) ;
    var_elseBranchFinalBank_47300 = GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1452)) ;
  }
  ioArgument_ioContinuesInSequence = var_thenContinuesInSequence_47432.operator_or (var_elseContinuesInSequence_47396 COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1455)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_do_while build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_do_5F_while::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap constinArgument_inRoutineMap,
                                                                                                       const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                       const GGS_constantMap constinArgument_inConstantMap,
                                                                                                       GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                       GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                       GGS_string & ioArgument_ioListFileContents,
                                                                                                       const GGS_uint constinArgument_inTotalBankCount,
                                                                                                       GGS_uint & ioArgument_ioCurrentBank,
                                                                                                       const GGS_bool constinArgument_inShouldPreserveBank,
                                                                                                       GGS_bool & ioArgument_ioContinuesInSequence,
                                                                                                       const GGS_routineKind constinArgument_inRoutineKind,
                                                                                                       GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_labelInstructionBegin_52415 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1474)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1474)) ;
  ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1474)) ;
  const GGS_midrange_5F_instruction_5F_do_5F_while temp_0 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::init_21__21_ (GGS_lstring::init_21__21_ (var_labelInstructionBegin_52415, temp_0.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1476)) ;
  GGS_uint var_finalBank_52696 = ioArgument_ioCurrentBank ;
  {
  const GGS_midrange_5F_instruction_5F_do_5F_while temp_1 = this ;
  routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (temp_1.readProperty_mRepeatedInstructionList (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_finalBank_52696, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1479)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (var_finalBank_52696)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_midrange_5F_instruction_5F_do_5F_while temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mEndOfRepeatedInstructionList (), GGS_string ("This branch does not leave bank selection value unchanged"), fixItArray4  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1495)) ;
    }
  }
  const GGS_midrange_5F_instruction_5F_do_5F_while temp_5 = this ;
  UpEnumerator_midrange_5F_partList enumerator_53267 (temp_5.readProperty_mWhilePartList ()) ;
  while (enumerator_53267.hasCurrentObject ()) {
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = GGS_bool (ComparisonKind::equal, enumerator_53267.current_mInstructionList (HERE).getter_count (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1499)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_midrange_5F_instruction_5F_do_5F_while temp_7 = this ;
        callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) enumerator_53267.current_mCondition (HERE).ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (false), temp_7.readProperty_mInstructionLocation (), var_labelInstructionBegin_52415, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1500)) ;
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      GGS_string var_nextBranchLabel_53740 = GGS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1514)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1514)) ;
      ioArgument_ioLocalLabelIndex.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1514)) ;
      const GGS_midrange_5F_instruction_5F_do_5F_while temp_8 = this ;
      callExtensionMethod_buildIPICinstructionForCondition ((cPtr_midrange_5F_conditionExpression *) enumerator_53267.current_mCondition (HERE).ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, GGS_bool (true), temp_8.readProperty_mInstructionLocation (), var_nextBranchLabel_53740, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1515)) ;
      GGS_uint var_bank_54183 = ioArgument_ioCurrentBank ;
      {
      routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (enumerator_53267.current_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, var_bank_54183, constinArgument_inShouldPreserveBank, ioArgument_ioContinuesInSequence, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1529)) ;
      }
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        test_9 = GGS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (var_bank_54183)).boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          GenericArray <FixItDescription> fixItArray10 ;
          inCompiler->emitSemanticError (enumerator_53267.current_mEndOfPartLocation (HERE), GGS_string ("This branch does not leave bank selection value unchanged"), fixItArray10  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1545)) ;
        }
      }
      const GGS_midrange_5F_instruction_5F_do_5F_while temp_11 = this ;
      const GGS_midrange_5F_instruction_5F_do_5F_while temp_12 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_GOTO::init_21__21_ (temp_11.readProperty_mInstructionLocation (), GGS_lstring::init_21__21_ (var_labelInstructionBegin_52415, temp_12.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1547)) ;
      const GGS_midrange_5F_instruction_5F_do_5F_while temp_13 = this ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::init_21__21_ (GGS_lstring::init_21__21_ (var_nextBranchLabel_53740, temp_13.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1548)) ;
    }
    enumerator_53267.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@midrange_instruction_IF_IncDec build_midrange_ipic_instructionList'
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_instruction_5F_IF_5F_IncDec::method_build_5F_midrange_5F_ipic_5F_instructionList (const GGS_routineMap constinArgument_inRoutineMap,
                                                                                                        const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                        const GGS_constantMap constinArgument_inConstantMap,
                                                                                                        GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                        GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                        GGS_string & ioArgument_ioListFileContents,
                                                                                                        const GGS_uint constinArgument_inTotalBankCount,
                                                                                                        GGS_uint & ioArgument_ioCurrentBank,
                                                                                                        const GGS_bool constinArgument_inShouldPreserveBank,
                                                                                                        GGS_bool & /* ioArgument_ioContinuesInSequence */,
                                                                                                        const GGS_routineKind constinArgument_inRoutineKind,
                                                                                                        GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                        Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code var_baseCode_55681 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_midrange_5F_instruction_5F_IF_5F_IncDec temp_1 = this ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_baseCode_55681 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_INCFSZ (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1571)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    var_baseCode_55681 = GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_DECFSZ (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1573)) ;
  }
  GGS_midrange_5F_intermediate_5F_registerExpression var_IPICregisterDescription_55990 ;
  const GGS_midrange_5F_instruction_5F_IF_5F_IncDec temp_2 = this ;
  GGS_bitSliceTable joker_56018 ; // Joker input parameter
  callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) temp_2.readProperty_mRegisterExpression ().ptr (), constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_IPICregisterDescription_55990, joker_56018, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1576)) ;
  const GGS_midrange_5F_instruction_5F_IF_5F_IncDec temp_3 = this ;
  const GGS_midrange_5F_instruction_5F_IF_5F_IncDec temp_4 = this ;
  ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (temp_3.readProperty_mInstructionLocation (), var_baseCode_55681, var_IPICregisterDescription_55990, temp_4.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1586)) ;
  GGS_bool var_unusedContinuesInSequence_56248 = GGS_bool (true) ;
  const GGS_midrange_5F_instruction_5F_IF_5F_IncDec temp_5 = this ;
  callExtensionMethod_build_5F_midrange_5F_ipic_5F_instructionList ((cPtr_midrange_5F_instruction *) temp_5.readProperty_mInstruction ().ptr (), constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioListFileContents, constinArgument_inTotalBankCount, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBank, var_unusedContinuesInSequence_56248, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1594)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'build_midrange_assembly_instruction_list???????!&&'
//
//--------------------------------------------------------------------------------------------------

void routine_build_5F_midrange_5F_assembly_5F_instruction_5F_list_3F__3F__3F__3F__3F__3F__3F__21__26__26_ (const GGS_uint constinArgument_inTotalPageCount,
                                                                                                           const GGS_uint constinArgument_inTotalBankCount,
                                                                                                           const GGS_constantMap constinArgument_inConstantMap,
                                                                                                           const GGS_string constinArgument_inSharedRAMBankName,
                                                                                                           const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                           const GGS_midrange_5F_model constinArgument_inPiccoloModel,
                                                                                                           const GGS_bool constinArgument_inHasInterrupt,
                                                                                                           GGS_midrange_5F_intermediate_5F_instructionList & outArgument_outGeneratedInstructionList,
                                                                                                           GGS_string & ioArgument_ioListFileContents,
                                                                                                           GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedInstructionList.drop () ; // Release 'out' argument
  GGS_string var_generationOptimizationMessages_57157 = GGS_string::makeEmptyString () ;
  GGS_routineMap var_routineMap_57251 = GGS_routineMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_midrange_5F_routineDefinitionList enumerator_57357 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList ()) ;
  while (enumerator_57357.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::notEqual, enumerator_57357.current_mRequiredBank (HERE).readProperty_uint ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1628)))).operator_and (GGS_bool (ComparisonKind::greaterThan, enumerator_57357.current_mRequiredBank (HERE).readProperty_uint ().objectCompare (GGS_uint (uint32_t (15U)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1628)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GenericArray <FixItDescription> fixItArray1 ;
        inCompiler->emitSemanticError (enumerator_57357.current_mRequiredBank (HERE).readProperty_location (), GGS_string ("the required bank value should be lower or equal to 15"), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1629)) ;
      }
    }
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::notEqual, enumerator_57357.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1631)))).operator_and (GGS_bool (ComparisonKind::greaterThan, enumerator_57357.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GGS_uint (uint32_t (15U)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1631)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (enumerator_57357.current_mReturnedBank (HERE).readProperty_location (), GGS_string ("the returned bank value should be lower or equal to 15"), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1632)) ;
      }
    }
    {
    var_routineMap_57251.setter_insertKey (enumerator_57357.current_mRoutineName (HERE), enumerator_57357.current_mIsNoReturn (HERE), enumerator_57357.current_mRequiredBank (HERE).readProperty_uint (), enumerator_57357.current_mReturnedBank (HERE).readProperty_uint (), enumerator_57357.current_mPreservesBank (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1634)) ;
    }
    enumerator_57357.gotoNextObject () ;
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (gOption_piccoloOptions_ouputListingFile.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      {
      routine_print_5F_constant_5F_definition_3F__26_ (constinArgument_inConstantMap, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1652)) ;
      }
    }
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    test_5 = var_routineMap_57251.getter_hasKey (GGS_string ("main") COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1658)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      GGS_bool var_isNoReturn_58921 ;
      GGS_uint var_requiredBank_58943 ;
      GGS_uint joker_58956 ; // Joker input parameter
      GGS_bool joker_58959 ; // Joker input parameter
      var_routineMap_57251.method_searchKey (GGS_lstring::init_21__21_ (GGS_string ("main"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1659)), inCompiler COMMA_HERE), var_isNoReturn_58921, var_requiredBank_58943, joker_58956, joker_58959, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1659)) ;
      GGS_location var_mainDeclarationLocation_58981 = var_routineMap_57251.getter_locationForKey (GGS_string ("main"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1660)) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = var_isNoReturn_58921.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1661)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (var_mainDeclarationLocation_58981, GGS_string ("the \"main\" should be declared with \"noreturn\" qualifier: \"noreturn main bank:requires 0\""), fixItArray7  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1662)) ;
        }
      }
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        test_8 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_58943.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          GenericArray <FixItDescription> fixItArray9 ;
          inCompiler->emitSemanticError (var_mainDeclarationLocation_58981, GGS_string ("the \"main\" should be declared with \"requires:bank 0\" qualifier: \"noreturn main bank:requires 0\""), fixItArray9  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1665)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_5) {
    GenericArray <FixItDescription> fixItArray10 ;
    inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mEndOfProgram (), GGS_string ("the program should declare the \"main\" routine"), fixItArray10  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1668)) ;
  }
  GGS_uint var_localLabelIndex_59564 = GGS_uint (uint32_t (0U)) ;
  {
  routine_handleInterruptRoutine_3F__3F__3F__3F__3F__3F__3F__3F__26__26__26__21__26_ (constinArgument_inPiccoloModel, constinArgument_inHasInterrupt, constinArgument_inRegisterTable, constinArgument_inSharedRAMBankName, var_routineMap_57251, constinArgument_inTotalBankCount, constinArgument_inConstantMap, constinArgument_inTotalPageCount, var_generationOptimizationMessages_57157, var_localLabelIndex_59564, ioArgument_ioListFileContents, outArgument_outGeneratedInstructionList, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1672)) ;
  }
  GGS_uint var_currentPage_59994 = GGS_uint (uint32_t (0U)) ;
  if (constinArgument_inTotalPageCount.isValid ()) {
    uint32_t variant_60012 = constinArgument_inTotalPageCount.uintValue () ;
    bool loop_60012 = true ;
    while (loop_60012) {
      loop_60012 = GGS_bool (ComparisonKind::lowerThan, var_currentPage_59994.objectCompare (constinArgument_inTotalPageCount)).isValid () ;
      if (loop_60012) {
        loop_60012 = GGS_bool (ComparisonKind::lowerThan, var_currentPage_59994.objectCompare (constinArgument_inTotalPageCount)).boolValue () ;
      }
      if (loop_60012 && (0 == variant_60012)) {
        loop_60012 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1689)) ;
      }
      if (loop_60012) {
        variant_60012 -= 1 ;
        GGS_bool var_orgGenerated_60090 = GGS_bool (ComparisonKind::equal, var_currentPage_59994.objectCompare (GGS_uint (uint32_t (0U)))) ;
        UpEnumerator_midrange_5F_routineDefinitionList enumerator_60246 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList ()) ;
        while (enumerator_60246.hasCurrentObject ()) {
          GalgasBool test_11 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_11) {
            test_11 = GGS_bool (ComparisonKind::equal, enumerator_60246.current_mPage (HERE).readProperty_uint ().objectCompare (var_currentPage_59994)).boolEnum () ;
            if (GalgasBool::boolTrue == test_11) {
              GalgasBool test_12 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_12) {
                test_12 = var_orgGenerated_60090.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1693)).boolEnum () ;
                if (GalgasBool::boolTrue == test_12) {
                  outArgument_outGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG::init_21_ (var_currentPage_59994.multiply_operation (GGS_uint (uint32_t (2048U)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1694)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1694)) ;
                  var_orgGenerated_60090 = GGS_bool (true) ;
                }
              }
              GGS_uint var_currentBank_60526 = enumerator_60246.current_mRequiredBank (HERE).readProperty_uint () ;
              GGS_routineKind var_routineKind_60584 ;
              GalgasBool test_13 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_13) {
                test_13 = enumerator_60246.current_mIsNoReturn (HERE).boolEnum () ;
                if (GalgasBool::boolTrue == test_13) {
                  var_routineKind_60584 = GGS_routineKind::class_func_noReturnRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1700)) ;
                }
              }
              if (GalgasBool::boolFalse == test_13) {
                var_routineKind_60584 = GGS_routineKind::class_func_regularRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1702)) ;
              }
              outArgument_outGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_pseudo_5F_LABEL::init_21__21_ (enumerator_60246.current_mRoutineName (HERE), GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1704)) ;
              GGS_bool var_continuesInSequence_61201 ;
              {
              routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (enumerator_60246.current_mInstructionList (HERE), var_routineMap_57251, constinArgument_inRegisterTable, constinArgument_inConstantMap, var_localLabelIndex_59564, outArgument_outGeneratedInstructionList, var_generationOptimizationMessages_57157, constinArgument_inTotalBankCount, var_currentBank_60526, enumerator_60246.current_mPreservesBank (HERE), var_continuesInSequence_61201, var_routineKind_60584, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1705)) ;
              }
              GalgasBool test_14 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_14) {
                test_14 = enumerator_60246.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1720)).operator_and (GGS_bool (ComparisonKind::notEqual, enumerator_60246.current_mReturnedBank (HERE).readProperty_uint ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1720)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1720)).operator_and (GGS_bool (ComparisonKind::notEqual, var_currentBank_60526.objectCompare (enumerator_60246.current_mReturnedBank (HERE).readProperty_uint ())) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1720)).boolEnum () ;
                if (GalgasBool::boolTrue == test_14) {
                  GenericArray <FixItDescription> fixItArray15 ;
                  inCompiler->emitSemanticError (enumerator_60246.current_mRoutineName (HERE).readProperty_location (), GGS_string ("execution will not set bank selection to ").add_operation (enumerator_60246.current_mReturnedBank (HERE).readProperty_uint ().getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1721)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1721)), fixItArray15  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1721)) ;
                }
              }
              GalgasBool test_16 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_16) {
                test_16 = enumerator_60246.current_mIsNoReturn (HERE).operator_and (var_continuesInSequence_61201 COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1723)).boolEnum () ;
                if (GalgasBool::boolTrue == test_16) {
                  GenericArray <FixItDescription> fixItArray17 ;
                  inCompiler->emitSemanticError (enumerator_60246.current_mRoutineName (HERE).readProperty_location (), GGS_string ("execution should not reach the end of a \"noreturn\" routine"), fixItArray17  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1724)) ;
                }
              }
              GalgasBool test_18 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_18) {
                test_18 = enumerator_60246.current_mIsNoReturn (HERE).operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1727)).boolEnum () ;
                if (GalgasBool::boolTrue == test_18) {
                  outArgument_outGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_RETURN::init_21_ (enumerator_60246.current_mRoutineName (HERE).readProperty_location (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1728)) ;
                }
              }
            }
          }
          enumerator_60246.gotoNextObject () ;
        }
        var_currentPage_59994.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1732)) ;
      }
    }
  }
  GalgasBool test_19 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_19) {
    test_19 = GGS_bool (gOption_piccoloOptions_ouputListingFile.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_19) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1736)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1736)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1736)) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("IPIC INSTRUCTION LIST").getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1737)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1737)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1737)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1737)) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1738)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1738)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1738)) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Generated intermediate code:\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1739)) ;
      GGS_uint var_idx_62336 = GGS_uint (uint32_t (0U)) ;
      GGS_uint var_currentAddress_62358 = GGS_uint (uint32_t (0U)) ;
      UpEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_62386 (outArgument_outGeneratedInstructionList) ;
      while (enumerator_62386.hasCurrentObject ()) {
        callExtensionMethod_setCurrentAddress ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_62386.current_mInstruction (HERE).ptr (), var_currentAddress_62358, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1743)) ;
        ioArgument_ioListFileContents.plusAssignOperation(var_idx_62336.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1744)).getter_stringByLeftPadding (GGS_uint (uint32_t (5U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1744)).add_operation (GGS_string (": "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1744)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1744)) ;
        callExtensionMethod_print ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_62386.current_mInstruction (HERE).ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1745)) ;
        ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1746)) ;
        var_idx_62336.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1747)) ;
        enumerator_62386.gotoNextObject () ;
      }
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1749)) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Minimum code size without optimization: ").add_operation (var_currentAddress_62358.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1750)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1750)).add_operation (GGS_string (" instructions.\n\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1750)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1750)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'interruptRoutineShouldSavePCLATH??&!'
//
//--------------------------------------------------------------------------------------------------

void routine_interruptRoutineShouldSavePCLATH_3F__3F__26__21_ (const GGS_midrange_5F_model constinArgument_inPiccoloModel,
                                                               const GGS_uint constinArgument_inTotalPageCount,
                                                               GGS_string & ioArgument_ioListFileContents,
                                                               GGS_bool & outArgument_outShouldSavePCLATH,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outShouldSavePCLATH.drop () ; // Release 'out' argument
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("PCLATH should be saved \?\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1761)) ;
  outArgument_outShouldSavePCLATH = GGS_bool (false) ;
  UpEnumerator_midrange_5F_routineDefinitionList enumerator_63221 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList ()) ;
  while (enumerator_63221.hasCurrentObject ()) {
    GalgasBool test_0 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_0) {
      test_0 = GGS_bool (ComparisonKind::greaterThan, enumerator_63221.current_mPage (HERE).readProperty_uint ().objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        outArgument_outShouldSavePCLATH = GGS_bool (true) ;
      }
    }
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = GGS_bool (ComparisonKind::greaterOrEqual, enumerator_63221.current_mPage (HERE).readProperty_uint ().objectCompare (constinArgument_inTotalPageCount)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        GenericArray <FixItDescription> fixItArray2 ;
        inCompiler->emitSemanticError (enumerator_63221.current_mPage (HERE).readProperty_location (), GGS_string ("invalid value (").add_operation (enumerator_63221.current_mPage (HERE).readProperty_uint ().getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1769)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1769)).add_operation (GGS_string ("); the device has "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1769)).add_operation (constinArgument_inTotalPageCount.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1769)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1769)).add_operation (GGS_string (" 2k page(s) on rom"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1769)), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1769)) ;
      }
    }
    enumerator_63221.gotoNextObject () ;
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1772)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  No, program uses only page 0.\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1773)) ;
    }
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = outArgument_outShouldSavePCLATH.boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      outArgument_outShouldSavePCLATH = GGS_bool (false) ;
      UpEnumerator_midrange_5F_interruptDefinitionList enumerator_63798 (constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList ()) ;
      bool bool_5 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1778)).isValidAndTrue () ;
      if (enumerator_63798.hasCurrentObject () && bool_5) {
        while (enumerator_63798.hasCurrentObject () && bool_5) {
          UpEnumerator_midrange_5F_instructionList enumerator_63889 (enumerator_63798.current_mInstructionList (HERE)) ;
          bool bool_6 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1779)).isValidAndTrue () ;
          if (enumerator_63889.hasCurrentObject () && bool_6) {
            while (enumerator_63889.hasCurrentObject () && bool_6) {
              callExtensionMethod_instructionUsesGOTOorCALL ((cPtr_midrange_5F_instruction *) enumerator_63889.current_mInstruction (HERE).ptr (), outArgument_outShouldSavePCLATH, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1780)) ;
              enumerator_63889.gotoNextObject () ;
              if (enumerator_63889.hasCurrentObject ()) {
                bool_6 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1779)).isValidAndTrue () ;
              }
            }
          }
          enumerator_63798.gotoNextObject () ;
          if (enumerator_63798.hasCurrentObject ()) {
            bool_5 = outArgument_outShouldSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1778)).isValidAndTrue () ;
          }
        }
      }
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = outArgument_outShouldSavePCLATH.boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  Yes, program uses several pages and interrupt routine use CALL or GOTO instruction.\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1784)) ;
        }
      }
      if (GalgasBool::boolFalse == test_7) {
        ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  No, program uses several pages, but interrupt routine does not use CALL or GOTO instruction.\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1786)) ;
      }
    }
  }
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1789)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'handleInterruptRoutine????????&&&!&'
//
//--------------------------------------------------------------------------------------------------

void routine_handleInterruptRoutine_3F__3F__3F__3F__3F__3F__3F__3F__26__26__26__21__26_ (const GGS_midrange_5F_model constinArgument_inPiccoloModel,
                                                                                         const GGS_bool constinArgument_inHasInterrupt,
                                                                                         const GGS_registerTable constinArgument_inRegisterTable,
                                                                                         const GGS_string constinArgument_inSharedRAMBankName,
                                                                                         const GGS_routineMap constinArgument_inRoutineMap,
                                                                                         const GGS_uint constinArgument_inTotalBankCount,
                                                                                         const GGS_constantMap constinArgument_inConstantMap,
                                                                                         const GGS_uint constinArgument_inTotalPageCount,
                                                                                         GGS_string & ioArgument_ioGenerationOptimizationMessages,
                                                                                         GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                                         GGS_string & ioArgument_ioListFileContents,
                                                                                         GGS_midrange_5F_intermediate_5F_instructionList & outArgument_outGeneratedInstructionList,
                                                                                         GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outGeneratedInstructionList.drop () ; // Release 'out' argument
  outArgument_outGeneratedInstructionList = GGS_midrange_5F_intermediate_5F_instructionList::init (inCompiler COMMA_HERE) ;
  outArgument_outGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_JUMP::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1816)), GGS_lstring::init_21__21_ (GGS_string ("main"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1817)), inCompiler COMMA_HERE), GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1818)), GGS_midrange_5F_call_5F_goto_5F_bit::class_func_noChange (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1819)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1815)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = constinArgument_inHasInterrupt.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1822)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1822)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1822)) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*").add_operation (GGS_string ("INTERRUPT ROUTINE").getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1823)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1823)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1823)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1823)) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1824)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1824)), inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1824)) ;
      GGS_bool var_shouldSavePCLATH_66141 ;
      {
      routine_interruptRoutineShouldSavePCLATH_3F__3F__26__21_ (constinArgument_inPiccoloModel, constinArgument_inTotalPageCount, ioArgument_ioListFileContents, var_shouldSavePCLATH_66141, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1826)) ;
      }
      outArgument_outGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_pseudo_5F_ORG::init_21_ (GGS_uint (uint32_t (4U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1833)) ;
      UpEnumerator_midrange_5F_interruptDefinitionList enumerator_66316 (constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList ()) ;
      while (enumerator_66316.hasCurrentObject ()) {
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (ComparisonKind::notEqual, constinArgument_inSharedRAMBankName.objectCompare (GGS_string::makeEmptyString ())).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            {
            routine_generateInterruptRoutineForControllerWithSharedRAM_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__26__26__26_ (constinArgument_inTotalBankCount, constinArgument_inRegisterTable, enumerator_66316.current_mFirstSaveRegister (HERE), enumerator_66316.current_mSecondSaveRegister (HERE), var_shouldSavePCLATH_66141, enumerator_66316.current_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inConstantMap, enumerator_66316.current_mEndOfInterruptLocation (HERE), outArgument_outGeneratedInstructionList, ioArgument_ioLocalLabelIndex, ioArgument_ioGenerationOptimizationMessages, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1836)) ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_1) {
          {
          routine_generateInterruptRoutineForControllerWithoutSharedRAM_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__26__26__26_ (constinArgument_inTotalBankCount, constinArgument_inRegisterTable, enumerator_66316.current_mFirstSaveRegister (HERE), enumerator_66316.current_mSecondSaveRegister (HERE), var_shouldSavePCLATH_66141, enumerator_66316.current_mInstructionList (HERE), constinArgument_inRoutineMap, constinArgument_inConstantMap, enumerator_66316.current_mEndOfInterruptLocation (HERE), outArgument_outGeneratedInstructionList, ioArgument_ioLocalLabelIndex, ioArgument_ioGenerationOptimizationMessages, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1852)) ;
          }
        }
        enumerator_66316.gotoNextObject () ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateInterruptRoutineForControllerWithSharedRAM?????????&&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateInterruptRoutineForControllerWithSharedRAM_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__26__26__26_ (const GGS_uint constinArgument_inTotalBankCount,
                                                                                                                     const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                                     const GGS_lstring constinArgument_inFirstSaveRegister,
                                                                                                                     const GGS_lstring constinArgument_inSecondSaveRegister,
                                                                                                                     const GGS_bool constinArgument_inNeedsToSavePCLATH,
                                                                                                                     const GGS_midrange_5F_instructionList constinArgument_inInterruptRoutineInstructionList,
                                                                                                                     const GGS_routineMap constinArgument_inRoutineMap,
                                                                                                                     const GGS_constantMap constinArgument_inConstantMap,
                                                                                                                     const GGS_location constinArgument_inEndOfInterruptLocation,
                                                                                                                     GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                     GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                                     GGS_string & ioArgument_ioGenerationOptimizationMessages,
                                                                                                                     GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                     Compiler * inCompiler
                                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uintlist var_registerAddressList_68237 ;
  GGS_uint var_size_68264 ;
  GGS_registerProtection var_firstProtection_68278 ;
  GGS_bitSliceTable joker_68269_2 ; // Joker input parameter
  GGS_string joker_68269_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inFirstSaveRegister, var_registerAddressList_68237, var_size_68264, joker_68269_2, joker_68269_1, var_firstProtection_68278, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1889)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, constinArgument_inFirstSaveRegister, GGS_bool (true), var_firstProtection_68278, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1890)) ;
  GGS_uint var_bankAccessibility_68396 = GGS_uint (uint32_t (0U)) ;
  UpEnumerator_uintlist enumerator_68425 (var_registerAddressList_68237) ;
  while (enumerator_68425.hasCurrentObject ()) {
    var_bankAccessibility_68396 = var_bankAccessibility_68396.operator_or (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1893)).left_shift_operation (enumerator_68425.current_mValue (HERE).right_shift_operation (GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1893)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1893)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1893)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1893)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1893)) ;
    enumerator_68425.gotoNextObject () ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_bankAccessibility_68396.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1895)).objectCompare (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1895)).left_shift_operation (constinArgument_inTotalBankCount, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1895)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1895)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1896)).add_operation (GGS_string ("' variable cannot be accessed from any bank"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1896)), fixItArray1  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1896)) ;
    }
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::notEqual, var_size_68264.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1899)).add_operation (GGS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1899)).add_operation (var_size_68264.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1899)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1899)).add_operation (GGS_string (" (it should be 1)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1899)), fixItArray3  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1899)) ;
    }
  }
  GGS_registerProtection var_secondProtection_69051 ;
  GGS_bitSliceTable joker_69042_2 ; // Joker input parameter
  GGS_string joker_69042_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inSecondSaveRegister, var_registerAddressList_68237, var_size_68264, joker_69042_2, joker_69042_1, var_secondProtection_69051, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1902)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, constinArgument_inSecondSaveRegister, GGS_bool (true), var_secondProtection_69051, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1903)) ;
  var_bankAccessibility_68396 = GGS_uint (uint32_t (0U)) ;
  UpEnumerator_uintlist enumerator_69191 (var_registerAddressList_68237) ;
  while (enumerator_69191.hasCurrentObject ()) {
    var_bankAccessibility_68396 = var_bankAccessibility_68396.operator_or (GGS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1906)).left_shift_operation (enumerator_69191.current_mValue (HERE).right_shift_operation (GGS_bigint ("7", inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1906)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1906)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1906)).getter_uint (inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1906)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1906)) ;
    enumerator_69191.gotoNextObject () ;
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    test_4 = GGS_bool (ComparisonKind::equal, var_bankAccessibility_68396.operator_and (GGS_uint (uint32_t (1U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1908)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1909)).add_operation (GGS_string ("' variable cannot be accessed from bank 0"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1909)), fixItArray5  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1909)) ;
    }
  }
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = constinArgument_inNeedsToSavePCLATH.operator_and (GGS_bool (ComparisonKind::notEqual, var_size_68264.objectCompare (GGS_uint (uint32_t (2U)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1911)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      GenericArray <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1912)).add_operation (GGS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1912)).add_operation (var_size_68264.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1912)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1912)).add_operation (GGS_string (" (it should be 2)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1912)), fixItArray7  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1912)) ;
    }
  }
  if (GalgasBool::boolFalse == test_6) {
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      test_8 = constinArgument_inNeedsToSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1913)).operator_and (GGS_bool (ComparisonKind::notEqual, var_size_68264.objectCompare (GGS_uint (uint32_t (1U)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1913)).boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        GenericArray <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1914)).add_operation (GGS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1914)).add_operation (var_size_68264.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1914)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1914)).add_operation (GGS_string (" (it should be 1)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1914)), fixItArray9  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1914)) ;
      }
    }
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1917)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      GGS_registerExpression var_first_5F_register_69885 = GGS_registerExpression::init_21__21__21_ (constinArgument_inFirstSaveRegister, GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1920)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1921)), inCompiler COMMA_HERE) ;
      GGS_midrange_5F_intermediate_5F_registerExpression var_first_5F_IPICregisterDescription_70141 ;
      GGS_bitSliceTable joker_70177 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_first_5F_register_69885.ptr (), constinArgument_inTotalBankCount, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_IPICregisterDescription_70141, joker_70177, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1923)) ;
      GGS_registerExpression var_second_5F_register_70218 = GGS_registerExpression::init_21__21__21_ (constinArgument_inSecondSaveRegister, GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1934)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1935)), inCompiler COMMA_HERE) ;
      GGS_midrange_5F_intermediate_5F_registerExpression var_second_5F_IPICregisterDescription_70508 ;
      GGS_bitSliceTable joker_70545 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_second_5F_register_70218.ptr (), constinArgument_inTotalBankCount, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_second_5F_IPICregisterDescription_70508, joker_70545, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1937)) ;
      GGS_registerExpression var_STATUS_5F_register_70624 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("STATUS"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1948)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1949)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1950)), inCompiler COMMA_HERE) ;
      GGS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_70900 ;
      GGS_bitSliceTable joker_70937 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_STATUS_5F_register_70624.ptr (), constinArgument_inTotalBankCount, GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1954)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_70900, joker_70937, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1952)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1961)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1961)), var_first_5F_IPICregisterDescription_70141, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1961)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1962)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1962)), var_STATUS_5F_IPICregisterDescription_70900, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1962)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1963)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1963)), var_STATUS_5F_IPICregisterDescription_70900, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1963)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1964)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1964)), var_second_5F_IPICregisterDescription_70508, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1964)) ;
      GalgasBool test_11 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_11) {
        test_11 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
        if (GalgasBool::boolTrue == test_11) {
          GGS_registerExpression var_reg_71678 = GGS_registerExpression::init_21__21__21_ (constinArgument_inSecondSaveRegister, GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (1U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1968)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1969)), inCompiler COMMA_HERE) ;
          GGS_midrange_5F_intermediate_5F_registerExpression var_register_5F_for_5F_saving_5F_PCLATH_5F_description_72091 ;
          GGS_bitSliceTable joker_72138 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_reg_71678.ptr (), constinArgument_inTotalBankCount, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_register_5F_for_5F_saving_5F_PCLATH_5F_description_72091, joker_72138, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1972)) ;
          GGS_registerExpression var_PCLATH_5F_register_72225 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("PCLATH"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1983)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1984)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1985)), inCompiler COMMA_HERE) ;
          GGS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_72531 ;
          GGS_bitSliceTable joker_72570 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_PCLATH_5F_register_72225.ptr (), constinArgument_inTotalBankCount, GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1989)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_72531, joker_72570, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1987)) ;
          ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1996)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1996)), var_PCLATH_5F_IPICregisterDescription_72531, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1996)) ;
          ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1997)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1997)), var_register_5F_for_5F_saving_5F_PCLATH_5F_description_72091, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1997)) ;
          ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1998)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1998)), var_PCLATH_5F_IPICregisterDescription_72531, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 1998)) ;
        }
      }
      GGS_uint var_currentBank_73174 = GGS_uint (uint32_t (0U)) ;
      GGS_bool var_continuesInSequence_73554 ;
      {
      routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (constinArgument_inInterruptRoutineInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioGenerationOptimizationMessages, constinArgument_inTotalBankCount, var_currentBank_73174, GGS_bool (false), var_continuesInSequence_73554, GGS_routineKind::class_func_interruptRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2014)), ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2002)) ;
      }
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        test_12 = var_continuesInSequence_73554.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2017)).boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          GenericArray <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (constinArgument_inEndOfInterruptLocation, GGS_string ("execution cannot reach the end of the interrupt routine"), fixItArray13  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2018)) ;
        }
      }
      GalgasBool test_14 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_14) {
        test_14 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
        if (GalgasBool::boolTrue == test_14) {
          GGS_registerExpression var_reg_73823 = GGS_registerExpression::init_21__21__21_ (constinArgument_inSecondSaveRegister, GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (1U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2023)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2024)), inCompiler COMMA_HERE) ;
          GGS_midrange_5F_intermediate_5F_registerExpression var_register_5F_for_5F_saving_5F_PCLATH_5F_description_74121 ;
          GGS_bitSliceTable joker_74168 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_reg_73823.ptr (), constinArgument_inTotalBankCount, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_register_5F_for_5F_saving_5F_PCLATH_5F_description_74121, joker_74168, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2026)) ;
          GGS_registerExpression var_PCLATH_5F_register_74255 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("PCLATH"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2037)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2038)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2039)), inCompiler COMMA_HERE) ;
          GGS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_74560 ;
          GGS_bitSliceTable joker_74599 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_PCLATH_5F_register_74255.ptr (), constinArgument_inTotalBankCount, GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2043)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_74560, joker_74599, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2041)) ;
          ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2050)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2050)), var_register_5F_for_5F_saving_5F_PCLATH_5F_description_74121, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2050)) ;
          ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2051)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2051)), var_PCLATH_5F_IPICregisterDescription_74560, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2051)) ;
        }
      }
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2054)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2054)), var_second_5F_IPICregisterDescription_70508, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2054)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2055)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2055)), var_STATUS_5F_IPICregisterDescription_70900, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2055)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2056)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2056)), var_first_5F_IPICregisterDescription_70141, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2056)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2057)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2057)), var_first_5F_IPICregisterDescription_70141, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2057)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2059)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2059)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'generateInterruptRoutineForControllerWithoutSharedRAM?????????&&&&'
//
//--------------------------------------------------------------------------------------------------

void routine_generateInterruptRoutineForControllerWithoutSharedRAM_3F__3F__3F__3F__3F__3F__3F__3F__3F__26__26__26__26_ (const GGS_uint constinArgument_inTotalBankCount,
                                                                                                                        const GGS_registerTable constinArgument_inRegisterTable,
                                                                                                                        const GGS_lstring constinArgument_inFirstSaveRegister,
                                                                                                                        const GGS_lstring constinArgument_inSecondSaveRegister,
                                                                                                                        const GGS_bool constinArgument_inNeedsToSavePCLATH,
                                                                                                                        const GGS_midrange_5F_instructionList constinArgument_inInterruptRoutineInstructionList,
                                                                                                                        const GGS_routineMap constinArgument_inRoutineMap,
                                                                                                                        const GGS_constantMap constinArgument_inConstantMap,
                                                                                                                        const GGS_location constinArgument_inEndOfInterruptLocation,
                                                                                                                        GGS_midrange_5F_intermediate_5F_instructionList & ioArgument_ioGeneratedInstructionList,
                                                                                                                        GGS_uint & ioArgument_ioLocalLabelIndex,
                                                                                                                        GGS_string & ioArgument_ioGenerationOptimizationMessages,
                                                                                                                        GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                                                        Compiler * inCompiler
                                                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioUsedRegisters.plusPlusAssignOperation (constinArgument_inFirstSaveRegister.readProperty_string ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2081)) ;
  GGS_uintlist var_registerAddressList_76694 ;
  GGS_uint var_size_76721 ;
  GGS_registerProtection var_firstProtection_76735 ;
  GGS_bitSliceTable joker_76726_2 ; // Joker input parameter
  GGS_string joker_76726_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inFirstSaveRegister, var_registerAddressList_76694, var_size_76721, joker_76726_2, joker_76726_1, var_firstProtection_76735, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2082)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, constinArgument_inFirstSaveRegister, GGS_bool (true), var_firstProtection_76735, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2083)) ;
  GGS_bool var_accessibleFromBank_30__76853 = GGS_bool (false) ;
  GGS_uint var_offset_76893 = GGS_uint (uint32_t (0U)) ;
  UpEnumerator_uintlist enumerator_76923 (var_registerAddressList_76694) ;
  bool bool_0 = var_accessibleFromBank_30__76853.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2086)).isValidAndTrue () ;
  if (enumerator_76923.hasCurrentObject () && bool_0) {
    while (enumerator_76923.hasCurrentObject () && bool_0) {
      var_offset_76893 = enumerator_76923.current_mValue (HERE).operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2087)) ;
      var_accessibleFromBank_30__76853 = GGS_bool (ComparisonKind::equal, enumerator_76923.current_mValue (HERE).operator_and (GGS_uint (uint32_t (3968U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2088)).objectCompare (GGS_uint (uint32_t (0U)))) ;
      enumerator_76923.gotoNextObject () ;
      if (enumerator_76923.hasCurrentObject ()) {
        bool_0 = var_accessibleFromBank_30__76853.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2086)).isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = var_accessibleFromBank_30__76853.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2090)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2091)).add_operation (GGS_string ("' variable cannot be accessed from bank 0"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2091)), fixItArray2  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2091)) ;
    }
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    test_3 = constinArgument_inNeedsToSavePCLATH.operator_and (GGS_bool (ComparisonKind::notEqual, var_size_76721.objectCompare (GGS_uint (uint32_t (3U)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2093)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2094)).add_operation (GGS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2094)).add_operation (var_size_76721.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2094)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2094)).add_operation (GGS_string (" (it should be 3)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2094)), fixItArray4  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2094)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      test_5 = constinArgument_inNeedsToSavePCLATH.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2095)).operator_and (GGS_bool (ComparisonKind::notEqual, var_size_76721.objectCompare (GGS_uint (uint32_t (2U)))) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2095)).boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (constinArgument_inFirstSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2096)).add_operation (GGS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2096)).add_operation (var_size_76721.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2096)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2096)).add_operation (GGS_string (" (it should be 2)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2096)), fixItArray6  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2096)) ;
      }
    }
  }
  GGS_uintlist var_saveStatusRegisterAddressList_77686 = var_registerAddressList_76694 ;
  ioArgument_ioUsedRegisters.plusPlusAssignOperation (constinArgument_inSecondSaveRegister.readProperty_string ()  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2100)) ;
  GGS_registerProtection var_secondProtection_77875 ;
  GGS_bitSliceTable joker_77866_2 ; // Joker input parameter
  GGS_string joker_77866_1 ; // Joker input parameter
  constinArgument_inRegisterTable.method_searchKey (constinArgument_inSecondSaveRegister, var_registerAddressList_76694, var_size_76721, joker_77866_2, joker_77866_1, var_secondProtection_77875, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2101)) ;
  extensionMethod_checkPrivateAccess (constinArgument_inRegisterTable, constinArgument_inSecondSaveRegister, GGS_bool (true), var_secondProtection_77875, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2102)) ;
  var_saveStatusRegisterAddressList_77686 = var_saveStatusRegisterAddressList_77686.add_operation (var_registerAddressList_76694, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2103)) ;
  GalgasBool test_7 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_7) {
    test_7 = GGS_bool (ComparisonKind::notEqual, var_size_76721.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_7) {
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2105)).add_operation (GGS_string ("' variable size is "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2105)).add_operation (var_size_76721.getter_string (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2105)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2105)).add_operation (GGS_string (" (it should be 1)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2105)), fixItArray8  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2105)) ;
    }
  }
  GGS_bool var_accessibleFromBank_31__78283 = GGS_bool (false) ;
  UpEnumerator_uintlist enumerator_78318 (var_registerAddressList_76694) ;
  bool bool_9 = var_accessibleFromBank_31__78283.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2109)).isValidAndTrue () ;
  if (enumerator_78318.hasCurrentObject () && bool_9) {
    while (enumerator_78318.hasCurrentObject () && bool_9) {
      var_accessibleFromBank_31__78283 = GGS_bool (ComparisonKind::equal, enumerator_78318.current_mValue (HERE).operator_and (GGS_uint (uint32_t (3968U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2110)).objectCompare (GGS_uint (uint32_t (128U)))) ;
      enumerator_78318.gotoNextObject () ;
      if (enumerator_78318.hasCurrentObject ()) {
        bool_9 = var_accessibleFromBank_31__78283.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2109)).isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_10 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_10) {
    test_10 = var_accessibleFromBank_31__78283.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2112)).boolEnum () ;
    if (GalgasBool::boolTrue == test_10) {
      GenericArray <FixItDescription> fixItArray11 ;
      inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2113)).add_operation (GGS_string ("' variable cannot be accessed from bank 1"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2113)), fixItArray11  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2113)) ;
    }
  }
  GGS_bool var_offsetOk_78696 = GGS_bool (true) ;
  UpEnumerator_uintlist enumerator_78719 (var_registerAddressList_76694) ;
  bool bool_12 = var_offsetOk_78696.isValidAndTrue () ;
  if (enumerator_78719.hasCurrentObject () && bool_12) {
    while (enumerator_78719.hasCurrentObject () && bool_12) {
      var_offsetOk_78696 = GGS_bool (ComparisonKind::equal, var_offset_76893.objectCompare (enumerator_78719.current_mValue (HERE).operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2118)))) ;
      GalgasBool test_13 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_13) {
        test_13 = var_offsetOk_78696.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2119)).boolEnum () ;
        if (GalgasBool::boolTrue == test_13) {
          GenericArray <FixItDescription> fixItArray14 ;
          inCompiler->emitSemanticError (constinArgument_inSecondSaveRegister.readProperty_location (), GGS_string ("the '").add_operation (constinArgument_inSecondSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2120)).add_operation (GGS_string ("' variable has an offset equal to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2120)).add_operation (enumerator_78719.current_mValue (HERE).operator_and (GGS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2121)).getter_hexString (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2121)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2120)).add_operation (GGS_string (", while '"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2121)).add_operation (constinArgument_inFirstSaveRegister.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2121)).add_operation (GGS_string ("' has an offset equal to "), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2121)).add_operation (var_offset_76893.getter_hexString (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2122)), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2121)).add_operation (GGS_string (" (tthe two offsets should be equal)"), inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2122)), fixItArray14  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2120)) ;
        }
      }
      enumerator_78719.gotoNextObject () ;
      if (enumerator_78719.hasCurrentObject ()) {
        bool_12 = var_offsetOk_78696.isValidAndTrue () ;
      }
    }
  }
  GalgasBool test_15 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_15) {
    test_15 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2126)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_15) {
      GGS_registerExpression var_first_5F_register_79201 = GGS_registerExpression::init_21__21__21_ (constinArgument_inFirstSaveRegister, GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2129)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2130)), inCompiler COMMA_HERE) ;
      GGS_midrange_5F_intermediate_5F_registerExpression var_first_5F_IPICregisterDescription_79457 ;
      GGS_bitSliceTable joker_79493 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_first_5F_register_79201.ptr (), constinArgument_inTotalBankCount, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_IPICregisterDescription_79457, joker_79493, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2132)) ;
      GGS_registerExpression var_first_5F_register_5F_second_5F_byte_79534 = GGS_registerExpression::init_21__21__21_ (constinArgument_inFirstSaveRegister, GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (1U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2143)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2144)), inCompiler COMMA_HERE) ;
      GGS_midrange_5F_intermediate_5F_registerExpression var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription_79823 ;
      GGS_bitSliceTable joker_79875 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_first_5F_register_5F_second_5F_byte_79534.ptr (), constinArgument_inTotalBankCount, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription_79823, joker_79875, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2146)) ;
      GGS_registerExpression var_STATUS_5F_register_79954 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("STATUS"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2157)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2158)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2159)), inCompiler COMMA_HERE) ;
      GGS_midrange_5F_intermediate_5F_registerExpression var_STATUS_5F_IPICregisterDescription_80248 ;
      GGS_bitSliceTable joker_80285 ; // Joker input parameter
      callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_STATUS_5F_register_79954.ptr (), constinArgument_inTotalBankCount, GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2163)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_STATUS_5F_IPICregisterDescription_80248, joker_80285, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2161)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2170)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2170)), var_first_5F_IPICregisterDescription_79457, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2170)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2171)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2171)), var_STATUS_5F_IPICregisterDescription_80248, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2171)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2172)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2172)), var_STATUS_5F_IPICregisterDescription_80248, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2172)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2173)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2173)), var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription_79823, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2173)) ;
      GalgasBool test_16 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_16) {
        test_16 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
        if (GalgasBool::boolTrue == test_16) {
          GGS_registerExpression var_first_5F_register_5F_third_5F_byte_81043 = GGS_registerExpression::init_21__21__21_ (constinArgument_inFirstSaveRegister, GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2177)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2178)), inCompiler COMMA_HERE) ;
          GGS_midrange_5F_intermediate_5F_registerExpression var_first_5F_var_5F_third_5F_byte_5F_IPICregisterDescription_81350 ;
          GGS_bitSliceTable joker_81403 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_first_5F_register_5F_third_5F_byte_81043.ptr (), constinArgument_inTotalBankCount, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_var_5F_third_5F_byte_5F_IPICregisterDescription_81350, joker_81403, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2180)) ;
          GGS_registerExpression var_PCLATH_5F_register_81490 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("PCLATH"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2191)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2192)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2193)), inCompiler COMMA_HERE) ;
          GGS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_81803 ;
          GGS_bitSliceTable joker_81842 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_PCLATH_5F_register_81490.ptr (), constinArgument_inTotalBankCount, GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2197)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_81803, joker_81842, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2195)) ;
          ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2204)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2204)), var_PCLATH_5F_IPICregisterDescription_81803, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2204)) ;
          ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2205)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2205)), var_first_5F_var_5F_third_5F_byte_5F_IPICregisterDescription_81350, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2205)) ;
          ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2206)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2206)), var_PCLATH_5F_IPICregisterDescription_81803, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2206)) ;
        }
      }
      GGS_uint var_currentBank_82452 = GGS_uint (uint32_t (0U)) ;
      GGS_bool var_continuesInSequence_82815 ;
      {
      routine_handleMidrangeInstructionList_3F__3F__3F__3F__26__26__26__3F__26__3F__21__3F__26_ (constinArgument_inInterruptRoutineInstructionList, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioGenerationOptimizationMessages, constinArgument_inTotalBankCount, var_currentBank_82452, GGS_bool (true), var_continuesInSequence_82815, GGS_routineKind::class_func_interruptRoutine (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2222)), ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2210)) ;
      }
      GalgasBool test_17 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_17) {
        test_17 = var_continuesInSequence_82815.operator_not (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2225)).boolEnum () ;
        if (GalgasBool::boolTrue == test_17) {
          GenericArray <FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (constinArgument_inEndOfInterruptLocation, GGS_string ("execution cannot reach the end of the interrupt routine"), fixItArray18  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2226)) ;
        }
      }
      GalgasBool test_19 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_19) {
        test_19 = constinArgument_inNeedsToSavePCLATH.boolEnum () ;
        if (GalgasBool::boolTrue == test_19) {
          GGS_registerExpression var_first_5F_register_5F_third_5F_byte_83084 = GGS_registerExpression::init_21__21__21_ (constinArgument_inFirstSaveRegister, GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (2U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2231)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2232)), inCompiler COMMA_HERE) ;
          GGS_midrange_5F_intermediate_5F_registerExpression var_first_5F_var_5F_second_5F_byte_5F_IPICregisterDescription_83433 ;
          GGS_bitSliceTable joker_83487 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_first_5F_register_5F_third_5F_byte_83084.ptr (), constinArgument_inTotalBankCount, GGS_uint (uint32_t (0U)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_first_5F_var_5F_second_5F_byte_5F_IPICregisterDescription_83433, joker_83487, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2234)) ;
          GGS_registerExpression var_PCLATH_5F_register_83574 = GGS_registerExpression::init_21__21__21_ (GGS_lstring::init_21__21_ (GGS_string ("PCLATH"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2245)), inCompiler COMMA_HERE), GGS_immediatInteger::init_21_ (GGS_luint::init_21__21_ (GGS_uint (uint32_t (0U)), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2246)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2247)), inCompiler COMMA_HERE) ;
          GGS_midrange_5F_intermediate_5F_registerExpression var_PCLATH_5F_IPICregisterDescription_83787 ;
          GGS_bitSliceTable joker_84005 ; // Joker input parameter
          callExtensionMethod_resolveMidrangeAccess ((cPtr_registerExpression *) var_PCLATH_5F_register_83574.ptr (), constinArgument_inTotalBankCount, GGS_uint::class_func_max (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2252)), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_PCLATH_5F_IPICregisterDescription_83787, joker_84005, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2250)) ;
          ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2259)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_MOVF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2259)), var_first_5F_var_5F_second_5F_byte_5F_IPICregisterDescription_83433, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2259)) ;
          ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2260)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2260)), var_PCLATH_5F_IPICregisterDescription_83787, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2260)) ;
        }
      }
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2263)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2263)), var_first_5F_reg_5F_second_5F_byte_5F_IPICregisterDescription_79823, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2263)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_F::init_21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2264)), GGS_midrange_5F_F_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2264)), var_STATUS_5F_IPICregisterDescription_80248, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2264)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2265)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2265)), var_first_5F_IPICregisterDescription_79457, GGS_bool (false), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2265)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_FD::init_21__21__21__21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2266)), GGS_midrange_5F_instruction_5F_FD_5F_base_5F_code::class_func_SWAPF (SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2266)), var_first_5F_IPICregisterDescription_79457, GGS_bool (true), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2266)) ;
      ioArgument_ioGeneratedInstructionList.addAssignOperation (GGS_midrange_5F_intermediate_5F_instruction_5F_RETFIE::init_21_ (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2268)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("midrange_checkingAndBuildIPIC.galgas", 2268)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//--------------------------------------------------------------------------------------------------

BoolCommandLineOption gOption_piccoloOptions_doNotReorderCluster ("piccoloOptions",
                                         "doNotReorderCluster",
                                         78,
                                         "no-relative-resolution",
                                         "Do not try to re order blocks for using relatives branches (PIC18 compiler only)") ;

BoolCommandLineOption gOption_piccoloOptions_doNotWarnRecursive ("piccoloOptions",
                                         "doNotWarnRecursive",
                                         82,
                                         "no-warning-on-recursive-routines",
                                         "Do not warn when there are recursive routines (PIC18 compiler only)") ;

BoolCommandLineOption gOption_piccoloOptions_generateGraphvizFiles ("piccoloOptions",
                                         "generateGraphvizFiles",
                                         71,
                                         "generate-graphviz-files",
                                         "Generate Graphviz files  containing block invocation, block sorting constraints, ...") ;

BoolCommandLineOption gOption_piccoloOptions_generateAssembly ("piccoloOptions",
                                         "generateAssembly",
                                         83,
                                         "asm",
                                         "Generate also an assembly language text file (with .asm extension)") ;

BoolCommandLineOption gOption_piccoloOptions_output_5F_C_5F_Array ("piccoloOptions",
                                         "output_C_Array",
                                         67,
                                         "output-c-files",
                                         "Generate output code in a C header file and C source file") ;

BoolCommandLineOption gOption_piccoloOptions_ouputListingFile ("piccoloOptions",
                                         "ouputListingFile",
                                         76,
                                         "list",
                                         "Output a list file") ;

BoolCommandLineOption gOption_piccoloOptions_performOptimizations ("piccoloOptions",
                                         "performOptimizations",
                                         79,
                                         "optimize",
                                         "Perform code optimizations") ;

//--------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//--------------------------------------------------------------------------------------------------

StringCommandLineOption gOption_piccoloOptions_optimizationFlags ("piccoloOptions",
                                         "optimizationFlags",
                                         0,
                                         "optimization-flags",
                                         "Fine tuning of optimizations (PIC18 compiler only)",
                                         "") ;

//--------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------


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
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("   ").add_operation (extensionGetter_x_34_String (ioArgument_ioWordAddress.multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 10)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 10)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 10)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 10)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string (" ").add_operation (extensionGetter_x_34_String (constinArgument_inCode, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 11)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 11)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 11)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 11)) ;
  callExtensionMethod_print ((cPtr_baseline_5F_assembly_5F_instruction *) constinArgument_inInstruction.ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 12)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 13)) ;
  {
  routine_emitCode_3F_ (constinArgument_inCode, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 14)) ;
  }
  ioArgument_ioWordAddress = ioArgument_ioWordAddress.add_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 15)) ;
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
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("   ").add_operation (extensionGetter_x_34_String (constinArgument_inWordAddress.multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 24)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 24)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 24)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("      "), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 25)) ;
  callExtensionMethod_print ((cPtr_baseline_5F_assembly_5F_instruction *) constinArgument_inInstruction.ptr (), ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 26)) ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 27)) ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_pseudo_LABEL enterLabelAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::method_enterLabelAtAddress (GGS_baseline_5F_symbolTable & ioArgument_ioRoutineSymbolTable,
                                                                               GGS_uint & ioArgument_ioWordAddress,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL temp_0 = this ;
  ioArgument_ioRoutineSymbolTable.setter_insertKey (temp_0.readProperty_mLabel (), ioArgument_ioWordAddress, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 54)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_pseudo_ORG enterLabelAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::method_enterLabelAtAddress (GGS_baseline_5F_symbolTable & /* ioArgument_ioRoutineSymbolTable */,
                                                                             GGS_uint & ioArgument_ioWordAddress,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_pseudo_5F_ORG temp_0 = this ;
  ioArgument_ioWordAddress = temp_0.readProperty_mOrigin () ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_actualInstruction enterLabelAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_actualInstruction::method_enterLabelAtAddress (GGS_baseline_5F_symbolTable & /* ioArgument_ioRoutineSymbolTable */,
                                                                                 GGS_uint & ioArgument_ioWordAddress,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_actualInstruction temp_0 = this ;
  ioArgument_ioWordAddress = ioArgument_ioWordAddress.add_operation (callExtensionGetter_length ((const cPtr_baseline_5F_assembly_5F_actualInstruction *) temp_0.ptr (), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 70)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 70)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_pseudo_BEGINOFROUTINE generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                GGS_string & ioArgument_ioListFileContents,
                                                                                                GGS_uint & ioArgument_ioWordAddress,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE temp_1 = this ;
    test_0 = temp_1.readProperty_mIsRegular ().operator_and (GGS_bool (ComparisonKind::notEqual, ioArgument_ioWordAddress.operator_and (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 90)).objectCompare (GGS_uint (uint32_t (0U)))) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 90)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mRoutineName ().readProperty_location (), GGS_string ("the 8th bit of the routine address is not 0; a regular routine should be begin in the first half of a page"), fixItArray3  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 91)) ;
    }
  }
  {
  const GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE temp_4 = this ;
  routine_emitNoBaselineCodeAtWordAddress_3F__3F__26_ (ioArgument_ioWordAddress, temp_4, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 93)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_pseudo_ENDOFROUTINE generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                              GGS_string & ioArgument_ioListFileContents,
                                                                                              GGS_uint & ioArgument_ioWordAddress,
                                                                                              Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, ioArgument_ioWordAddress.objectCompare (temp_1.readProperty_mPage ().multiply_operation (GGS_uint (uint32_t (512U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 102)).add_operation (GGS_uint (uint32_t (512U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 102)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE temp_2 = this ;
      const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE temp_3 = this ;
      const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE temp_4 = this ;
      GenericArray <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mRoutineName ().readProperty_location (), GGS_string ("the routine is too large, it does not lie in page ").add_operation (temp_3.readProperty_mPage ().getter_string (SOURCE_FILE ("baseline_build_binary_code.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)).add_operation (ioArgument_ioWordAddress.substract_operation (temp_4.readProperty_mPage ().multiply_operation (GGS_uint (uint32_t (512U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)).add_operation (GGS_uint (uint32_t (512U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)).getter_string (SOURCE_FILE ("baseline_build_binary_code.galgas", 103)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)).add_operation (GGS_string (" word(s) in excess)"), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)), fixItArray5  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 103)) ;
    }
  }
  {
  const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE temp_6 = this ;
  routine_emitNoBaselineCodeAtWordAddress_3F__3F__26_ (ioArgument_ioWordAddress, temp_6, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 105)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_pseudo_ORG generateBinaryCodeAtAddress'
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
  routine_setEmitAddress_3F_ (temp_1.readProperty_mOrigin ().multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 115)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 115)) ;
  }
  {
  const GGS_baseline_5F_assembly_5F_pseudo_5F_ORG temp_2 = this ;
  routine_emitNoBaselineCodeAtWordAddress_3F__3F__26_ (ioArgument_ioWordAddress, temp_2, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 116)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_instruction_FD generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_FD::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                         GGS_string & ioArgument_ioListFileContents,
                                                                                         GGS_uint & ioArgument_ioWordAddress,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_5023 ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_FD temp_0 = this ;
  switch (temp_0.readProperty_mInstruction ().enumValue ()) {
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_ADDWF:
    {
      var_code_5023 = GGS_uint (uint32_t (448U)) ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_ANDWF:
    {
      var_code_5023 = GGS_uint (uint32_t (320U)) ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_COMF:
    {
      var_code_5023 = GGS_uint (uint32_t (576U)) ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_DECF:
    {
      var_code_5023 = GGS_uint (uint32_t (192U)) ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_DECFSZ:
    {
      var_code_5023 = GGS_uint (uint32_t (704U)) ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_INCF:
    {
      var_code_5023 = GGS_uint (uint32_t (640U)) ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_INCFSZ:
    {
      var_code_5023 = GGS_uint (uint32_t (15360U)) ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_IORWF:
    {
      var_code_5023 = GGS_uint (uint32_t (256U)) ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_MOVF:
    {
      var_code_5023 = GGS_uint (uint32_t (512U)) ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_RLF:
    {
      var_code_5023 = GGS_uint (uint32_t (832U)) ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_RRF:
    {
      var_code_5023 = GGS_uint (uint32_t (768U)) ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_SUBWF:
    {
      var_code_5023 = GGS_uint (uint32_t (128U)) ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_SWAPF:
    {
      var_code_5023 = GGS_uint (uint32_t (896U)) ;
    }
    break ;
  case GGS_baseline_5F_instruction_5F_FD_5F_base_5F_code::Enumeration::enum_XORWF:
    {
      var_code_5023 = GGS_uint (uint32_t (384U)) ;
    }
    break ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_baseline_5F_assembly_5F_instruction_5F_FD temp_2 = this ;
    test_1 = temp_2.readProperty_m_5F_W_5F_isDestination ().operator_not (SOURCE_FILE ("baseline_build_binary_code.galgas", 143)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      var_code_5023 = var_code_5023.operator_or (GGS_uint (uint32_t (32U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 144)) ;
    }
  }
  const GGS_baseline_5F_assembly_5F_instruction_5F_FD temp_3 = this ;
  var_code_5023 = var_code_5023.operator_or (temp_3.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (31U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 146)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 146)) ;
  {
  const GGS_baseline_5F_assembly_5F_instruction_5F_FD temp_4 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (var_code_5023, ioArgument_ioWordAddress, temp_4, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 147)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_instruction_F generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_F::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                        GGS_string & ioArgument_ioListFileContents,
                                                                                        GGS_uint & ioArgument_ioWordAddress,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_5986 ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_F temp_0 = this ;
  switch (temp_0.readProperty_mInstruction ().enumValue ()) {
  case GGS_baseline_5F_F_5F_instruction_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_baseline_5F_F_5F_instruction_5F_base_5F_code::Enumeration::enum_CLRF:
    {
      var_code_5986 = GGS_uint (uint32_t (96U)) ;
    }
    break ;
  case GGS_baseline_5F_F_5F_instruction_5F_base_5F_code::Enumeration::enum_MOVWF:
    {
      var_code_5986 = GGS_uint (uint32_t (32U)) ;
    }
    break ;
  }
  const GGS_baseline_5F_assembly_5F_instruction_5F_F temp_1 = this ;
  var_code_5986 = var_code_5986.operator_or (temp_1.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (31U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 161)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 161)) ;
  {
  const GGS_baseline_5F_assembly_5F_instruction_5F_F temp_2 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (var_code_5986, ioArgument_ioWordAddress, temp_2, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 162)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_instruction_FB generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_FB::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                         GGS_string & ioArgument_ioListFileContents,
                                                                                         GGS_uint & ioArgument_ioWordAddress,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_6528 ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_FB temp_0 = this ;
  switch (temp_0.readProperty_mInstruction ().enumValue ()) {
  case GGS_baseline_5F_bit_5F_oriented_5F_op::Enumeration::invalid:
    break ;
  case GGS_baseline_5F_bit_5F_oriented_5F_op::Enumeration::enum_BCF:
    {
      var_code_6528 = GGS_uint (uint32_t (1024U)) ;
    }
    break ;
  case GGS_baseline_5F_bit_5F_oriented_5F_op::Enumeration::enum_BSF:
    {
      var_code_6528 = GGS_uint (uint32_t (1280U)) ;
    }
    break ;
  }
  const GGS_baseline_5F_assembly_5F_instruction_5F_FB temp_1 = this ;
  var_code_6528 = var_code_6528.operator_or (temp_1.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (31U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 176)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 176)) ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_FB temp_2 = this ;
  var_code_6528 = var_code_6528.operator_or (temp_2.readProperty_mBitNumber ().left_shift_operation (GGS_bigint ("5", inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 177)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 177)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 177)) ;
  {
  const GGS_baseline_5F_assembly_5F_instruction_5F_FB temp_3 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (var_code_6528, ioArgument_ioWordAddress, temp_3, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 178)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_instruction_BitTestSkip generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_BitTestSkip::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                  GGS_string & ioArgument_ioListFileContents,
                                                                                                  GGS_uint & ioArgument_ioWordAddress,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_7127 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_code_7127 = GGS_uint (uint32_t (1792U)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    var_code_7127 = GGS_uint (uint32_t (1536U)) ;
  }
  const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip temp_2 = this ;
  var_code_7127 = var_code_7127.operator_or (temp_2.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (31U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 194)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 194)) ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip temp_3 = this ;
  var_code_7127 = var_code_7127.operator_or (temp_3.readProperty_mBitNumber ().left_shift_operation (GGS_bigint ("5", inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 195)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 195)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 195)) ;
  {
  const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip temp_4 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (var_code_7127, ioArgument_ioWordAddress, temp_4, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 196)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_GOTO generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_GOTO::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                            GGS_string & ioArgument_ioListFileContents,
                                                                            GGS_uint & ioArgument_ioWordAddress,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_targetAddress_7744 ;
  const GGS_baseline_5F_assembly_5F_GOTO temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_7744, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 206)) ;
  {
  const GGS_baseline_5F_assembly_5F_GOTO temp_1 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (GGS_uint (uint32_t (2560U)).operator_or (var_targetAddress_7744.operator_and (GGS_uint (uint32_t (511U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 208)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 208)), ioArgument_ioWordAddress, temp_1, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 208)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_SKIP generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_SKIP::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                            GGS_string & ioArgument_ioListFileContents,
                                                                            GGS_uint & ioArgument_ioWordAddress,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_baseline_5F_assembly_5F_SKIP temp_0 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (GGS_uint (uint32_t (2560U)).operator_or (ioArgument_ioWordAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 217)).operator_and (GGS_uint (uint32_t (511U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 217)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 217)), ioArgument_ioWordAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 217)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_CALL generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_CALL::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                            GGS_string & ioArgument_ioListFileContents,
                                                                            GGS_uint & ioArgument_ioWordAddress,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_targetAddress_8582 ;
  const GGS_baseline_5F_assembly_5F_CALL temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_8582, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 227)) ;
  {
  const GGS_baseline_5F_assembly_5F_CALL temp_1 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (GGS_uint (uint32_t (2304U)).operator_or (var_targetAddress_8582.operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 229)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 229)), ioArgument_ioWordAddress, temp_1, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 229)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_incDecRegisterInCondition generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_incDecRegisterInCondition::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                 GGS_string & ioArgument_ioListFileContents,
                                                                                                 GGS_uint & ioArgument_ioWordAddress,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_8988 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition temp_1 = this ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_code_8988 = GGS_uint (uint32_t (960U)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    var_code_8988 = GGS_uint (uint32_t (704U)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition temp_3 = this ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().operator_not (SOURCE_FILE ("baseline_build_binary_code.galgas", 244)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      var_code_8988 = var_code_8988.operator_or (GGS_uint (uint32_t (32U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 245)) ;
    }
  }
  const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition temp_4 = this ;
  var_code_8988 = var_code_8988.operator_or (temp_4.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (31U)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 247)) COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 247)) ;
  {
  const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition temp_5 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (var_code_8988, ioArgument_ioWordAddress, temp_5, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 248)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_WO_OPERAND generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                     GGS_string & ioArgument_ioListFileContents,
                                                                                     GGS_uint & ioArgument_ioWordAddress,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_9590 ;
  const GGS_baseline_5F_assembly_5F_WO_5F_OPERAND temp_0 = this ;
  switch (temp_0.readProperty_mInstruction ().enumValue ()) {
  case GGS_baseline_5F_WO_5F_OPERAND_5F_group::Enumeration::invalid:
    break ;
  case GGS_baseline_5F_WO_5F_OPERAND_5F_group::Enumeration::enum_CLRW:
    {
      var_code_9590 = GGS_uint (uint32_t (64U)) ;
    }
    break ;
  case GGS_baseline_5F_WO_5F_OPERAND_5F_group::Enumeration::enum_NOP:
    {
      var_code_9590 = GGS_uint (uint32_t (0U)) ;
    }
    break ;
  case GGS_baseline_5F_WO_5F_OPERAND_5F_group::Enumeration::enum_CLRWDT:
    {
      var_code_9590 = GGS_uint (uint32_t (4U)) ;
    }
    break ;
  case GGS_baseline_5F_WO_5F_OPERAND_5F_group::Enumeration::enum_OPTION_5F_:
    {
      var_code_9590 = GGS_uint (uint32_t (2U)) ;
    }
    break ;
  case GGS_baseline_5F_WO_5F_OPERAND_5F_group::Enumeration::enum_SLEEP:
    {
      var_code_9590 = GGS_uint (uint32_t (3U)) ;
    }
    break ;
  }
  {
  const GGS_baseline_5F_assembly_5F_WO_5F_OPERAND temp_1 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (var_code_9590, ioArgument_ioWordAddress, temp_1, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 265)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_TRIS generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_TRIS::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                            GGS_string & ioArgument_ioListFileContents,
                                                                            GGS_uint & ioArgument_ioWordAddress,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_baseline_5F_assembly_5F_TRIS temp_0 = this ;
  const GGS_baseline_5F_assembly_5F_TRIS temp_1 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (temp_0.readProperty_mOpcode (), ioArgument_ioWordAddress, temp_1, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 274)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_instruction_literalOperation generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                       GGS_string & ioArgument_ioListFileContents,
                                                                                                       GGS_uint & ioArgument_ioWordAddress,
                                                                                                       Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_code_10527 ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation temp_0 = this ;
  switch (temp_0.readProperty_mInstruction ().enumValue ()) {
  case GGS_baseline_5F_literal_5F_instruction_5F_opcode::Enumeration::invalid:
    break ;
  case GGS_baseline_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_ANDLW:
    {
      var_code_10527 = GGS_uint (uint32_t (3584U)) ;
    }
    break ;
  case GGS_baseline_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_IORLW:
    {
      var_code_10527 = GGS_uint (uint32_t (3328U)) ;
    }
    break ;
  case GGS_baseline_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_MOVLW:
    {
      var_code_10527 = GGS_uint (uint32_t (3072U)) ;
    }
    break ;
  case GGS_baseline_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_RETLW:
    {
      var_code_10527 = GGS_uint (uint32_t (2048U)) ;
    }
    break ;
  case GGS_baseline_5F_literal_5F_instruction_5F_opcode::Enumeration::enum_XORLW:
    {
      var_code_10527 = GGS_uint (uint32_t (3840U)) ;
    }
    break ;
  }
  const GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation temp_1 = this ;
  var_code_10527 = var_code_10527.operator_or (temp_1.readProperty_mLiteralValue () COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 291)) ;
  {
  const GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation temp_2 = this ;
  routine_emitBaselineCodeAtWordAddress_3F__26__3F__26_ (var_code_10527, ioArgument_ioWordAddress, temp_2, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 292)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_pseudo_LABEL generateBinaryCodeAtAddress'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::method_generateBinaryCodeAtAddress (const GGS_baseline_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                       GGS_string & ioArgument_ioListFileContents,
                                                                                       GGS_uint & ioArgument_ioWordAddress,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_targetAddress_11148 ;
  const GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mLabel (), var_targetAddress_11148, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 301)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::notEqual, var_targetAddress_11148.objectCompare (ioArgument_ioWordAddress)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL temp_2 = this ;
      const GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLabel ().readProperty_location (), GGS_string ("Internal second pass error: the '").add_operation (temp_3.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 303)).add_operation (GGS_string ("' label gets "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 303)).add_operation (ioArgument_ioWordAddress.getter_hexString (SOURCE_FILE ("baseline_build_binary_code.galgas", 304)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 304)).add_operation (GGS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 304)).add_operation (var_targetAddress_11148.getter_hexString (SOURCE_FILE ("baseline_build_binary_code.galgas", 305)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 304)).add_operation (GGS_string (" in first pass"), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 305)), fixItArray4  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 303)) ;
    }
  }
  {
  const GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL temp_5 = this ;
  routine_emitNoBaselineCodeAtWordAddress_3F__3F__26_ (ioArgument_ioWordAddress, temp_5, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 307)) ;
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
  GGS_baseline_5F_symbolTable var_symbolTable_12155 = GGS_baseline_5F_symbolTable::init (inCompiler COMMA_HERE) ;
  GGS_uint var_currentWordAddress_12205 = GGS_uint (uint32_t (0U)) ;
  UpEnumerator_baseline_5F_assembly_5F_instructionList enumerator_12235 (constinArgument_inAssemblyInstructionList) ;
  while (enumerator_12235.hasCurrentObject ()) {
    callExtensionMethod_enterLabelAtAddress ((cPtr_baseline_5F_assembly_5F_instruction *) enumerator_12235.current_mInstruction (HERE).ptr (), var_symbolTable_12155, var_currentWordAddress_12205, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 325)) ;
    enumerator_12235.gotoNextObject () ;
  }
  GGS_uint var_lastAddressForFirstPass_12374 = var_currentWordAddress_12205 ;
  outArgument_outUsedROMsize = var_currentWordAddress_12205 ;
  var_currentWordAddress_12205 = GGS_uint (uint32_t (0U)) ;
  {
  routine_setEmitAddress_3F_ (GGS_uint (uint32_t (0U)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 331)) ;
  }
  UpEnumerator_baseline_5F_assembly_5F_instructionList enumerator_12574 (constinArgument_inAssemblyInstructionList) ;
  while (enumerator_12574.hasCurrentObject ()) {
    callExtensionMethod_generateBinaryCodeAtAddress ((cPtr_baseline_5F_assembly_5F_instruction *) enumerator_12574.current_mInstruction (HERE).ptr (), var_symbolTable_12155, ioArgument_ioListFileContents, var_currentWordAddress_12205, inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 333)) ;
    {
    routine_checkCurrentEmitAddress_3F_ (var_currentWordAddress_12205.multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 338)), inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 338)) ;
    }
    enumerator_12574.gotoNextObject () ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_lastAddressForFirstPass_12374.objectCompare (var_currentWordAddress_12205)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 341)), GGS_string ("Internal second pass error: the last address gets ").add_operation (var_currentWordAddress_12205.getter_hexString (SOURCE_FILE ("baseline_build_binary_code.galgas", 341)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 341)).add_operation (GGS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 341)).add_operation (var_lastAddressForFirstPass_12374.getter_hexString (SOURCE_FILE ("baseline_build_binary_code.galgas", 343)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 342)).add_operation (GGS_string (" value in first pass"), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 343)), fixItArray1  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 341)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_2 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_2) {
      test_2 = GGS_bool (ComparisonKind::greaterThan, var_lastAddressForFirstPass_12374.objectCompare (constinArgument_inROMsize)).boolEnum () ;
      if (GalgasBool::boolTrue == test_2) {
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 345)), GGS_string ("Program too large: ").add_operation (var_lastAddressForFirstPass_12374.getter_string (SOURCE_FILE ("baseline_build_binary_code.galgas", 345)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 345)).add_operation (GGS_string (" bytes (rom size is "), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 345)).add_operation (constinArgument_inROMsize.getter_string (SOURCE_FILE ("baseline_build_binary_code.galgas", 347)), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 346)).add_operation (GGS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 347)), fixItArray3  COMMA_SOURCE_FILE ("baseline_build_binary_code.galgas", 345)) ;
      }
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@byteDeclarationInRam handleDeclaration'
//--------------------------------------------------------------------------------------------------

void cPtr_byteDeclarationInRam::method_handleDeclaration (const GGS_constantMap constinArgument_inConstantMap,
                                                          GGS_stringset & ioArgument_ioUsedRegisters,
                                                          GGS_ramBankTable & ioArgument_ioRamBank,
                                                          GGS_registerTable & ioArgument_ioRegisterTable,
                                                          const GGS_lstring constinArgument_inCurrentRamBank,
                                                          GGS_declaredByteMap & ioArgument_ioDeclaredByteMap,
                                                          Compiler * inCompiler
                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_lastAddressPlusOne_1001 ;
  GGS_uint var_firstFreeAddress_1032 ;
  GGS_uintlist var_mirrorOffsetList_1065 ;
  GGS_uint joker_1123 ; // Joker input parameter
  ioArgument_ioRamBank.method_searchKey (constinArgument_inCurrentRamBank, joker_1123, var_firstFreeAddress_1032, var_lastAddressPlusOne_1001, var_mirrorOffsetList_1065, inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 30)) ;
  GGS_sint_36__34_ var_size_1257 ;
  const GGS_byteDeclarationInRam temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mSizeExpression ().ptr (), ioArgument_ioRegisterTable, constinArgument_inConstantMap, var_size_1257, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 31)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::lowerOrEqual, var_size_1257.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_byteDeclarationInRam temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mName ().readProperty_location (), GGS_string ("size expression should be > 0"), fixItArray3  COMMA_SOURCE_FILE ("ram_sections.galgas", 33)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, var_size_1257.objectCompare (GGS_sint_36__34_ (int64_t (4096LL)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_byteDeclarationInRam temp_5 = this ;
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mName ().readProperty_location (), GGS_string ("size expression should be < 4096"), fixItArray6  COMMA_SOURCE_FILE ("ram_sections.galgas", 35)) ;
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      GGS_uintlist temp_7 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 37)) ;
      temp_7.plusPlusAssignOperation (GGS_uintlist_2E_element::init_21_ (var_firstFreeAddress_1032, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ram_sections.galgas", 37)) ;
      GGS_uintlist var_addressList_1462 = temp_7 ;
      UpEnumerator_uintlist enumerator_1508 (var_mirrorOffsetList_1065) ;
      while (enumerator_1508.hasCurrentObject ()) {
        var_addressList_1462.addAssignOperation (var_firstFreeAddress_1032.add_operation (enumerator_1508.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 39))  COMMA_SOURCE_FILE ("ram_sections.galgas", 39)) ;
        enumerator_1508.gotoNextObject () ;
      }
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        const GGS_byteDeclarationInRam temp_9 = this ;
        test_8 = ioArgument_ioDeclaredByteMap.getter_hasKey (temp_9.readProperty_mName ().readProperty_string () COMMA_SOURCE_FILE ("ram_sections.galgas", 41)).operator_not (SOURCE_FILE ("ram_sections.galgas", 41)).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          {
          const GGS_byteDeclarationInRam temp_10 = this ;
          ioArgument_ioDeclaredByteMap.setter_insertKey (temp_10.readProperty_mName (), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 42)) ;
          }
        }
      }
      {
      const GGS_byteDeclarationInRam temp_11 = this ;
      const GGS_byteDeclarationInRam temp_12 = this ;
      const GGS_byteDeclarationInRam temp_13 = this ;
      const GGS_byteDeclarationInRam temp_14 = this ;
      ioArgument_ioRegisterTable.setter_insertKey (temp_11.readProperty_mName (), var_addressList_1462, var_size_1257.getter_uint (inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 47)), temp_12.readProperty_mBitSliceTable (), temp_13.readProperty_mBitDefinitionString (), temp_14.readProperty_mProtection (), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 44)) ;
      }
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        const GGS_byteDeclarationInRam temp_16 = this ;
        test_15 = constinArgument_inConstantMap.getter_hasKey (temp_16.readProperty_mName ().readProperty_string () COMMA_SOURCE_FILE ("ram_sections.galgas", 52)).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          const GGS_byteDeclarationInRam temp_17 = this ;
          GenericArray <FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (temp_17.readProperty_mName ().readProperty_location (), GGS_string ("this symbol is already declared as a constant"), fixItArray18  COMMA_SOURCE_FILE ("ram_sections.galgas", 53)) ;
        }
      }
      var_firstFreeAddress_1032 = var_firstFreeAddress_1032.add_operation (var_size_1257.getter_uint (inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 55)) ;
      {
      ioArgument_ioRamBank.setter_setMFirstFreeAddressForKey (var_firstFreeAddress_1032, constinArgument_inCurrentRamBank.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 56)) ;
      }
      GalgasBool test_19 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_19) {
        test_19 = GGS_bool (ComparisonKind::greaterThan, var_firstFreeAddress_1032.objectCompare (var_lastAddressPlusOne_1001)).boolEnum () ;
        if (GalgasBool::boolTrue == test_19) {
          const GGS_byteDeclarationInRam temp_20 = this ;
          const GGS_byteDeclarationInRam temp_21 = this ;
          GenericArray <FixItDescription> fixItArray22 ;
          inCompiler->emitSemanticError (temp_20.readProperty_mName ().readProperty_location (), GGS_string ("overflow in '").add_operation (constinArgument_inCurrentRamBank.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 58)).add_operation (GGS_string ("' ram bank for '"), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 58)).add_operation (temp_21.readProperty_mName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 58)).add_operation (GGS_string ("' declaration"), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 58)), fixItArray22  COMMA_SOURCE_FILE ("ram_sections.galgas", 58)) ;
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'analyze_ram_sections???&&?&&!'
//
//--------------------------------------------------------------------------------------------------

void routine_analyze_5F_ram_5F_sections_3F__3F__3F__26__26__3F__26__26__21_ (const GGS_string constinArgument_inListingTitle,
                                                                             const GGS_ramDefinitionList constinArgument_inRamDefinitionList,
                                                                             const GGS_constantMap constinArgument_inConstantMap,
                                                                             GGS_stringset & ioArgument_ioUsedRegisters,
                                                                             GGS_ramBankTable & ioArgument_ioRamBankTable,
                                                                             const GGS_registerTable constinArgument_inSpecialRegisterTable,
                                                                             GGS_string & ioArgument_ioListFileContents,
                                                                             GGS_registerTable & ioArgument_ioAllRegisters,
                                                                             GGS_declaredByteMap & outArgument_outDeclaredByteMap,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outDeclaredByteMap.drop () ; // Release 'out' argument
  outArgument_outDeclaredByteMap = GGS_declaredByteMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_ramDefinitionList enumerator_3134 (constinArgument_inRamDefinitionList) ;
  while (enumerator_3134.hasCurrentObject ()) {
    UpEnumerator_declarationInRamList enumerator_3184 (enumerator_3134.current_mDeclaration (HERE)) ;
    while (enumerator_3184.hasCurrentObject ()) {
      callExtensionMethod_handleDeclaration ((cPtr_declarationInRam *) enumerator_3184.current_mDeclarationInRAM (HERE).ptr (), constinArgument_inConstantMap, ioArgument_ioUsedRegisters, ioArgument_ioRamBankTable, ioArgument_ioAllRegisters, enumerator_3134.current_mBankName (HERE), outArgument_outDeclaredByteMap, inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 83)) ;
      enumerator_3184.gotoNextObject () ;
    }
    enumerator_3134.gotoNextObject () ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (gOption_piccoloOptions_ouputListingFile.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("ram_sections.galgas", 94)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 94)), inCompiler  COMMA_SOURCE_FILE ("ram_sections.galgas", 94)) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*").add_operation (constinArgument_inListingTitle.getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ram_sections.galgas", 95)), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 95)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 95)), inCompiler  COMMA_SOURCE_FILE ("ram_sections.galgas", 95)) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("ram_sections.galgas", 96)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 96)), inCompiler  COMMA_SOURCE_FILE ("ram_sections.galgas", 96)) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Variable").getter_stringByLeftPadding (GGS_uint (uint32_t (40U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ram_sections.galgas", 97)).add_operation (GGS_string (" Address\n"), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 97)), inCompiler  COMMA_SOURCE_FILE ("ram_sections.galgas", 97)) ;
      UpEnumerator_registerTable enumerator_3884 (ioArgument_ioAllRegisters) ;
      while (enumerator_3884.hasCurrentObject ()) {
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = constinArgument_inSpecialRegisterTable.getter_hasKey (enumerator_3884.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("ram_sections.galgas", 99)).operator_not (SOURCE_FILE ("ram_sections.galgas", 99)).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            ioArgument_ioListFileContents.plusAssignOperation(enumerator_3884.current_lkey (HERE).readProperty_string ().getter_stringByLeftPadding (GGS_uint (uint32_t (40U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ram_sections.galgas", 100)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 100)), inCompiler  COMMA_SOURCE_FILE ("ram_sections.galgas", 100)) ;
            UpEnumerator_uintlist enumerator_4064 (enumerator_3884.current_mRegisterAddressList (HERE)) ;
            while (enumerator_4064.hasCurrentObject ()) {
              ioArgument_ioListFileContents.plusAssignOperation(enumerator_4064.current_mValue (HERE).getter_hexString (SOURCE_FILE ("ram_sections.galgas", 102)), inCompiler  COMMA_SOURCE_FILE ("ram_sections.galgas", 102)) ;
              enumerator_4064.gotoNextObject () ;
              if (enumerator_4064.hasCurrentObject ()) {
                ioArgument_ioListFileContents.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("ram_sections.galgas", 103)) ;
              }
            }
            ioArgument_ioListFileContents.plusAssignOperation(enumerator_3884.current_mBitDefinitionString (HERE).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas", 105)), inCompiler  COMMA_SOURCE_FILE ("ram_sections.galgas", 105)) ;
          }
        }
        enumerator_3884.gotoNextObject () ;
      }
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ram_sections.galgas", 108)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ReturnTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_ipic_31__38_ReturnTerminator::getter_terminatorDisplay (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                        Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outResult ; // Returned variable
  result_outResult = GGS_string ("RETURN") ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ReturnTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_ipic_31__38_ReturnTerminator::getter_terminatorSize (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                   Compiler */* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  result_outSize = GGS_uint (uint32_t (2U)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ReturnTerminator generateTerminatorCode'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ReturnTerminator::method_generateTerminatorCode (const GGS_uint /* constinArgument_inAddress */,
                                                                       const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                       const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                       GGS_codeList & outArgument_outCode,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    RETURN"), GGS_uintlist::class_func_listWithValue (GGS_uint (uint32_t (18U))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 48))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 46)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ReturnTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_ReturnTerminator::getter_isEqualToTerminator (const GGS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                        Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetfieTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_ipic_31__38_RetfieTerminator::getter_terminatorDisplay (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outResult ; // Returned variable
  result_outResult = GGS_string ("RETFIE") ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_RetfieTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mFastReturn ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_outResult.plusAssignOperation(GGS_string (" FAST"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 70)) ;
    }
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetfieTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_ipic_31__38_RetfieTerminator::getter_terminatorSize (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                   Compiler */* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  result_outSize = GGS_uint (uint32_t (2U)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18RetfieTerminator generateTerminatorCode'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetfieTerminator::method_generateTerminatorCode (const GGS_uint /* constinArgument_inAddress */,
                                                                       const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                       const GGS_string constinArgument_inNextBlockLabel,
                                                                       GGS_codeList & outArgument_outCode,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_RetfieTerminator temp_0 = this ;
  const GGS_ipic_31__38_RetfieTerminator temp_1 = this ;
  GGS_bigint temp_2 ;
  const GalgasBool test_3 = temp_1.readProperty_mFastReturn ().boolEnum () ;
  if (GalgasBool::boolTrue == test_3) {
    temp_2 = GGS_bigint ("17", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 91)) ;
  }else if (GalgasBool::boolFalse == test_3) {
    temp_2 = GGS_bigint ("16", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 91)) ;
  }
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    ").add_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_RetfieTerminator *) temp_0.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 90)), GGS_uintlist::class_func_listWithValue (temp_2.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 91))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 91))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 89)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetfieTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_RetfieTerminator::getter_isEqualToTerminator (const GGS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                        Compiler */* inCompiler */
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetlwTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_ipic_31__38_RetlwTerminator::getter_terminatorDisplay (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outResult ; // Returned variable
  const GGS_ipic_31__38_RetlwTerminator temp_0 = this ;
  result_outResult = GGS_string ("RETLW ").add_operation (temp_0.readProperty_mLiteralValue ().getter_hexString (SOURCE_FILE ("ipic18_terminators.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 111)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetlwTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_ipic_31__38_RetlwTerminator::getter_terminatorSize (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                  Compiler */* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  result_outSize = GGS_uint (uint32_t (2U)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18RetlwTerminator generateTerminatorCode'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetlwTerminator::method_generateTerminatorCode (const GGS_uint /* constinArgument_inAddress */,
                                                                      const GGS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                      const GGS_string constinArgument_inNextBlockLabel,
                                                                      GGS_codeList & outArgument_outCode,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_RetlwTerminator temp_0 = this ;
  const GGS_ipic_31__38_RetlwTerminator temp_1 = this ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    ").add_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_RetlwTerminator *) temp_0.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 130)), GGS_uintlist::class_func_listWithValue (GGS_uint (uint32_t (3072U)).operator_or (temp_1.readProperty_mLiteralValue () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 131))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 131))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 129)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetlwTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_RetlwTerminator::getter_isEqualToTerminator (const GGS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                       Compiler */* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    GGS_ipic_31__38_RetlwTerminator var_t_4553 (dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (constinArgument_inTerminator.ptr ())) ;
    if (nullptr == var_t_4553.ptr ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      const GGS_ipic_31__38_RetlwTerminator temp_1 = this ;
      result_outResult = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mLiteralValue ().objectCompare (var_t_4553.readProperty_mLiteralValue ())) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_outResult = GGS_bool (false) ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18JumpTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_ipic_31__38_JumpTerminator::getter_terminatorSize (const GGS_string constinArgument_inNextBlockLabel,
                                                                 Compiler */* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_JumpTerminator temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mLabel ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_outSize = GGS_uint (uint32_t (0U)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_ipic_31__38_JumpTerminator temp_2 = this ;
    switch (temp_2.readProperty_mKind ().enumValue ()) {
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
  }
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18JumpTerminator terminatorRelativeBranchOverflow'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_terminatorRelativeBranchOverflow (const GGS_uint constinArgument_inAddress,
                                                                               const GGS_string constinArgument_inBlockLabel,
                                                                               const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                               const GGS_string constinArgument_inNextBlockLabel,
                                                                               GGS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_JumpTerminator temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::notEqual, temp_1.readProperty_mLabel ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_ipic_31__38_JumpTerminator temp_2 = this ;
      switch (temp_2.readProperty_mKind ().enumValue ()) {
      case GGS_jumpInstructionKind::Enumeration::invalid:
        break ;
      case GGS_jumpInstructionKind::Enumeration::enum_ipicRelative:
      case GGS_jumpInstructionKind::Enumeration::enum_relative:
        {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            const GGS_ipic_31__38_JumpTerminator temp_4 = this ;
            test_3 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_4.readProperty_mLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 185)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 185)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              {
              const GGS_ipic_31__38_JumpTerminator temp_5 = this ;
              extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_5.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 186)) ;
              }
            }
          }
        }
        break ;
      case GGS_jumpInstructionKind::Enumeration::enum_absolute:
        break ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18JumpTerminator performTerminatorRelativeBranchResolution'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_performTerminatorRelativeBranchResolution (const GGS_uint constinArgument_inAddress,
                                                                                        const GGS_string constinArgument_inBlockLabel,
                                                                                        const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                        const GGS_string constinArgument_inNextBlockLabel,
                                                                                        GGS_uint & ioArgument_ioConversionCount,
                                                                                        GGS_string & ioArgument_ioListFileContents,
                                                                                        GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_JumpTerminator temp_0 = this ;
  outArgument_outModifiedTerminator = temp_0 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_ipic_31__38_JumpTerminator temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::notEqual, constinArgument_inNextBlockLabel.objectCompare (temp_2.readProperty_mLabel ().readProperty_string ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_ipic_31__38_JumpTerminator temp_3 = this ;
      switch (temp_3.readProperty_mKind ().enumValue ()) {
      case GGS_jumpInstructionKind::Enumeration::invalid:
        break ;
      case GGS_jumpInstructionKind::Enumeration::enum_ipicRelative:
        {
          GalgasBool test_4 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_4) {
            const GGS_ipic_31__38_JumpTerminator temp_5 = this ;
            test_4 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_5.readProperty_mLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 207)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 207)).boolEnum () ;
            if (GalgasBool::boolTrue == test_4) {
              ioArgument_ioConversionCount.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 208)) ;
              const GGS_ipic_31__38_JumpTerminator temp_6 = this ;
              const GGS_ipic_31__38_JumpTerminator temp_7 = this ;
              ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)).add_operation (GGS_string (": JUMP "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)).add_operation (temp_6.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)).add_operation (GGS_string (" --> GOTO "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)).add_operation (temp_7.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)) ;
              const GGS_ipic_31__38_JumpTerminator temp_8 = this ;
              const GGS_ipic_31__38_JumpTerminator temp_9 = this ;
              outArgument_outModifiedTerminator = GGS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_8.readProperty_mInstructionLocation (), temp_9.readProperty_mLabel (), GGS_jumpInstructionKind::class_func_absolute (SOURCE_FILE ("ipic18_terminators.galgas", 210)), inCompiler COMMA_HERE) ;
            }
          }
        }
        break ;
      case GGS_jumpInstructionKind::Enumeration::enum_relative:
        {
          GalgasBool test_10 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_10) {
            const GGS_ipic_31__38_JumpTerminator temp_11 = this ;
            test_10 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_11.readProperty_mLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 213)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 213)).boolEnum () ;
            if (GalgasBool::boolTrue == test_10) {
              const GGS_ipic_31__38_JumpTerminator temp_12 = this ;
              const GGS_ipic_31__38_JumpTerminator temp_13 = this ;
              const GGS_ipic_31__38_JumpTerminator temp_14 = this ;
              GenericArray <FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mInstructionLocation (), GGS_string ("displacement (").add_operation (function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (constinArgument_inSymbolTable, temp_13.readProperty_mLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 215)).getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 214)).add_operation (GGS_string (") too large for BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 215)).add_operation (temp_14.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 215)).add_operation (GGS_string (" instruction (limited to [-1024, 1023])"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 216)), fixItArray15  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 214)) ;
            }
          }
        }
        break ;
      case GGS_jumpInstructionKind::Enumeration::enum_absolute:
        break ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18JumpTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_ipic_31__38_JumpTerminator::getter_terminatorDisplay (const GGS_string constinArgument_inNextBlockLabel,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outResult ; // Returned variable
  GGS_string var_name_7319 ;
  const GGS_ipic_31__38_JumpTerminator temp_0 = this ;
  switch (temp_0.readProperty_mKind ().enumValue ()) {
  case GGS_jumpInstructionKind::Enumeration::invalid:
    break ;
  case GGS_jumpInstructionKind::Enumeration::enum_ipicRelative:
    {
      var_name_7319 = GGS_string ("JUMP ") ;
    }
    break ;
  case GGS_jumpInstructionKind::Enumeration::enum_relative:
    {
      var_name_7319 = GGS_string ("BRA ") ;
    }
    break ;
  case GGS_jumpInstructionKind::Enumeration::enum_absolute:
    {
      var_name_7319 = GGS_string ("GOTO ") ;
    }
    break ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_ipic_31__38_JumpTerminator temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::equal, constinArgument_inNextBlockLabel.objectCompare (temp_2.readProperty_mLabel ().readProperty_string ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_ipic_31__38_JumpTerminator temp_3 = this ;
      result_outResult = GGS_string ("(").add_operation (var_name_7319, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 235)).add_operation (temp_3.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 235)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 235)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_ipic_31__38_JumpTerminator temp_4 = this ;
    result_outResult = var_name_7319.add_operation (temp_4.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 237)) ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18JumpTerminator generateTerminatorCode'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_generateTerminatorCode (const GGS_uint constinArgument_inAddress,
                                                                     const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                     const GGS_string constinArgument_inNextBlockLabel,
                                                                     GGS_codeList & outArgument_outCode,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_JumpTerminator temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mLabel ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outCode = GGS_codeList::init (inCompiler COMMA_HERE) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_uint var_targetAddress_8024 ;
    const GGS_ipic_31__38_JumpTerminator temp_2 = this ;
    constinArgument_inSymbolTable.method_searchKey (temp_2.readProperty_mLabel (), var_targetAddress_8024, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 251)) ;
    const GGS_ipic_31__38_JumpTerminator temp_3 = this ;
    switch (temp_3.readProperty_mKind ().enumValue ()) {
    case GGS_jumpInstructionKind::Enumeration::invalid:
      break ;
    case GGS_jumpInstructionKind::Enumeration::enum_ipicRelative:
    case GGS_jumpInstructionKind::Enumeration::enum_relative:
      {
        const GGS_ipic_31__38_JumpTerminator temp_4 = this ;
        outArgument_outCode = function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress_8024, temp_4.readProperty_mLabel (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 254)) ;
      }
      break ;
    case GGS_jumpInstructionKind::Enumeration::enum_absolute:
      {
        const GGS_ipic_31__38_JumpTerminator temp_5 = this ;
        outArgument_outCode = function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_targetAddress_8024, temp_5.readProperty_mLabel (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 256)) ;
      }
      break ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18JumpTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_JumpTerminator::getter_isEqualToTerminator (const GGS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                      Compiler */* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    GGS_ipic_31__38_JumpTerminator var_t_8513 (dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (constinArgument_inTerminator.ptr ())) ;
    if (nullptr == var_t_8513.ptr ()) {
      test_0 = GalgasBool::boolFalse ;
    }
    if (GalgasBool::boolTrue == test_0) {
      const GGS_ipic_31__38_JumpTerminator temp_1 = this ;
      const GGS_ipic_31__38_JumpTerminator temp_2 = this ;
      result_outResult = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mLabel ().readProperty_string ().objectCompare (var_t_8513.readProperty_mLabel ().readProperty_string ())).operator_and (GGS_bool (ComparisonKind::equal, temp_2.readProperty_mKind ().objectCompare (var_t_8513.readProperty_mKind ())) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 267)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_outResult = GGS_bool (false) ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18AbstractConditionTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_ipic_31__38_AbstractConditionTerminator::getter_terminatorSize (const GGS_string constinArgument_inNextBlockLabel,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  const GGS_ipic_31__38_AbstractConditionTerminator temp_0 = this ;
  const GGS_ipic_31__38_AbstractConditionTerminator temp_1 = this ;
  result_outSize = GGS_uint (uint32_t (2U)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 282)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 283)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18AbstractConditionTerminator terminatorRelativeBranchOverflow'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_AbstractConditionTerminator::method_terminatorRelativeBranchOverflow (const GGS_uint constinArgument_inAddress,
                                                                                            const GGS_string constinArgument_inBlockLabel,
                                                                                            const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                            const GGS_string constinArgument_inNextBlockLabel,
                                                                                            GGS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_AbstractConditionTerminator temp_0 = this ;
  callExtensionMethod_terminatorRelativeBranchOverflow ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 295)) ;
  const GGS_ipic_31__38_AbstractConditionTerminator temp_1 = this ;
  callExtensionMethod_terminatorRelativeBranchOverflow ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 302)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18RegisterComparisonTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_pic_31__38_RegisterComparisonTerminator::getter_terminatorSize (const GGS_string constinArgument_inNextBlockLabel,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  const GGS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_1 = this ;
  result_outSize = GGS_uint (uint32_t (2U)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 320)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 321)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18RegisterComparisonTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_pic_31__38_RegisterComparisonTerminator::getter_terminatorDisplay (const GGS_string constinArgument_inNextBlockLabel,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outResult ; // Returned variable
  const GGS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  result_outResult = temp_0.readProperty_mRegisterDescription ().readProperty_mAssemblyString ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 330)) ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_1 = this ;
  switch (temp_1.readProperty_mComparison ().enumValue ()) {
  case GGS_ipic_31__38_RegisterComparison::Enumeration::invalid:
    break ;
  case GGS_ipic_31__38_RegisterComparison::Enumeration::enum_registerEqualsToW:
    {
      result_outResult.plusAssignOperation(GGS_string ("=="), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 333)) ;
    }
    break ;
  case GGS_ipic_31__38_RegisterComparison::Enumeration::enum_registerGreaterThanW:
    {
      result_outResult.plusAssignOperation(GGS_string (">"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 335)) ;
    }
    break ;
  case GGS_ipic_31__38_RegisterComparison::Enumeration::enum_registerLowerThanW:
    {
      result_outResult.plusAssignOperation(GGS_string ("<"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 337)) ;
    }
    break ;
  }
  result_outResult.plusAssignOperation(GGS_string (" W \? "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 339)) ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_2 = this ;
  result_outResult.plusAssignOperation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 340)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 340)) ;
  result_outResult.plusAssignOperation(GGS_string (" : "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 341)) ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_3 = this ;
  result_outResult.plusAssignOperation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_3.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 342)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 342)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18RegisterComparisonTerminator performTerminatorRelativeBranchResolution'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_RegisterComparisonTerminator::method_performTerminatorRelativeBranchResolution (const GGS_uint constinArgument_inAddress,
                                                                                                     const GGS_string constinArgument_inBlockLabel,
                                                                                                     const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                     const GGS_string constinArgument_inNextBlockLabel,
                                                                                                     GGS_uint & ioArgument_ioConversionCount,
                                                                                                     GGS_string & ioArgument_ioListFileContents,
                                                                                                     GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_n_11554 = ioArgument_ioConversionCount ;
  GGS_ipic_31__38_AbstractBlockTerminator var_outModifiedTrueTerminator_11833 ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedTrueTerminator_11833, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 356)) ;
  GGS_ipic_31__38_AbstractBlockTerminator var_outModifiedFalseTerminator_12121 ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_1 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedFalseTerminator_12121, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 365)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, ioArgument_ioConversionCount.objectCompare (var_n_11554)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_pic_31__38_RegisterComparisonTerminator temp_3 = this ;
      outArgument_outModifiedTerminator = temp_3 ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_pic_31__38_RegisterComparisonTerminator temp_4 = this ;
    GGS_ipic_31__38_SingleInstructionTerminator temp_5 ;
    if (var_outModifiedTrueTerminator_11833.isValid ()) {
      if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedTrueTerminator_11833.ptr ())) {
        temp_5 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedTrueTerminator_11833.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedTrueTerminator_11833.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 379)) ;
      }
    }
    GGS_ipic_31__38_SingleInstructionTerminator temp_6 ;
    if (var_outModifiedFalseTerminator_12121.isValid ()) {
      if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedFalseTerminator_12121.ptr ())) {
        temp_6 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedFalseTerminator_12121.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedFalseTerminator_12121.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 380)) ;
      }
    }
    const GGS_pic_31__38_RegisterComparisonTerminator temp_7 = this ;
    const GGS_pic_31__38_RegisterComparisonTerminator temp_8 = this ;
    outArgument_outModifiedTerminator = GGS_pic_31__38_RegisterComparisonTerminator::init_21__21__21__21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5, temp_6, temp_7.readProperty_mRegisterDescription (), temp_8.readProperty_mComparison (), inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18RegisterComparisonTerminator generateTerminatorCode'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_RegisterComparisonTerminator::method_generateTerminatorCode (const GGS_uint constinArgument_inAddress,
                                                                                  const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                  const GGS_string constinArgument_inNextBlockLabel,
                                                                                  GGS_codeList & outArgument_outCode,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_binCode_12839 ;
  GGS_string var_assemblyCode_12861 ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  switch (temp_0.readProperty_mComparison ().enumValue ()) {
  case GGS_ipic_31__38_RegisterComparison::Enumeration::invalid:
    break ;
  case GGS_ipic_31__38_RegisterComparison::Enumeration::enum_registerEqualsToW:
    {
      var_binCode_12839 = GGS_uint (uint32_t (25088U)) ;
      var_assemblyCode_12861 = GGS_string ("    CPFSEQ") ;
    }
    break ;
  case GGS_ipic_31__38_RegisterComparison::Enumeration::enum_registerGreaterThanW:
    {
      var_binCode_12839 = GGS_uint (uint32_t (25600U)) ;
      var_assemblyCode_12861 = GGS_string ("    CPFSGT") ;
    }
    break ;
  case GGS_ipic_31__38_RegisterComparison::Enumeration::enum_registerLowerThanW:
    {
      var_binCode_12839 = GGS_uint (uint32_t (24576U)) ;
      var_assemblyCode_12861 = GGS_string ("    CPFSLT") ;
    }
    break ;
  }
  const GGS_pic_31__38_RegisterComparisonTerminator temp_1 = this ;
  var_assemblyCode_12861.plusAssignOperation(GGS_string (" ").add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 407)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 407)) ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_2 = this ;
  var_binCode_12839 = var_binCode_12839.operator_or (temp_2.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 408)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 408)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_pic_31__38_RegisterComparisonTerminator temp_4 = this ;
    test_3 = temp_4.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      var_binCode_12839 = var_binCode_12839.operator_or (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 410)) ;
      var_assemblyCode_12861.plusAssignOperation(GGS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 411)) ;
    }
  }
  outArgument_outCode = GGS_codeList::class_func_listWithValue (var_assemblyCode_12861, GGS_uintlist::class_func_listWithValue (var_binCode_12839  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 415))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 413)) ;
  GGS_codeList var_falseTerminatorCode_13648 ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_5 = this ;
  callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_5.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 418)), constinArgument_inSymbolTable, GGS_string::makeEmptyString (), var_falseTerminatorCode_13648, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 417)) ;
  outArgument_outCode.plusAssignOperation(var_falseTerminatorCode_13648, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 423)) ;
  GGS_codeList var_trueTerminatorCode_13934 ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_6 = this ;
  const GGS_pic_31__38_RegisterComparisonTerminator temp_7 = this ;
  callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_6.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 425)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_7.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 425)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 425)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_trueTerminatorCode_13934, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 424)) ;
  outArgument_outCode.plusAssignOperation(var_trueTerminatorCode_13934, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 430)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18RegisterComparisonTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_pic_31__38_RegisterComparisonTerminator::getter_isEqualToTerminator (const GGS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_pic_31__38_RegisterComparisonTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (nullptr != dynamic_cast <const cPtr_pic_31__38_RegisterComparisonTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_pic_31__38_RegisterComparisonTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("pic_31__38_RegisterComparisonTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 440)) ;
        }
      }
      GGS_pic_31__38_RegisterComparisonTerminator var_t_14352 = temp_1 ;
      const GGS_pic_31__38_RegisterComparisonTerminator temp_2 = this ;
      result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), var_t_14352.readProperty_mSingleInstructionTerminatorIfConditionTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 441)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_pic_31__38_RegisterComparisonTerminator temp_4 = this ;
          result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_4.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), var_t_14352.readProperty_mSingleInstructionTerminatorIfConditionFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 443)) ;
        }
      }
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_pic_31__38_RegisterComparisonTerminator temp_6 = this ;
          result_outResult = GGS_bool (ComparisonKind::equal, temp_6.readProperty_mComparison ().objectCompare (var_t_14352.readProperty_mComparison ())) ;
        }
      }
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_pic_31__38_RegisterComparisonTerminator temp_8 = this ;
          result_outResult = extensionGetter_isEqualToRegister (temp_8.readProperty_mRegisterDescription (), var_t_14352.readProperty_mRegisterDescription (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 449)) ;
        }
      }
    }
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18TestRegisterTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_pic_31__38_TestRegisterTerminator::getter_terminatorSize (const GGS_string constinArgument_inNextBlockLabel,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  const GGS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  const GGS_pic_31__38_TestRegisterTerminator temp_1 = this ;
  result_outSize = GGS_uint (uint32_t (2U)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 464)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 463)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 465)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 464)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18TestRegisterTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_pic_31__38_TestRegisterTerminator::getter_terminatorDisplay (const GGS_string constinArgument_inNextBlockLabel,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outResult ; // Returned variable
  const GGS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  result_outResult = temp_0.readProperty_mRegisterDescription ().readProperty_mAssemblyString () ;
  result_outResult.plusAssignOperation(GGS_string (" Z \? "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 474)) ;
  const GGS_pic_31__38_TestRegisterTerminator temp_1 = this ;
  result_outResult.plusAssignOperation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 475)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 475)) ;
  result_outResult.plusAssignOperation(GGS_string (" : "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 476)) ;
  const GGS_pic_31__38_TestRegisterTerminator temp_2 = this ;
  result_outResult.plusAssignOperation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 477)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 477)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18TestRegisterTerminator performTerminatorRelativeBranchResolution'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_TestRegisterTerminator::method_performTerminatorRelativeBranchResolution (const GGS_uint constinArgument_inAddress,
                                                                                               const GGS_string constinArgument_inBlockLabel,
                                                                                               const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                               const GGS_string constinArgument_inNextBlockLabel,
                                                                                               GGS_uint & ioArgument_ioConversionCount,
                                                                                               GGS_string & ioArgument_ioListFileContents,
                                                                                               GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_n_16353 = ioArgument_ioConversionCount ;
  GGS_ipic_31__38_AbstractBlockTerminator var_outModifiedTrueTerminator_16632 ;
  const GGS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedTrueTerminator_16632, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 491)) ;
  GGS_ipic_31__38_AbstractBlockTerminator var_outModifiedFalseTerminator_16920 ;
  const GGS_pic_31__38_TestRegisterTerminator temp_1 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedFalseTerminator_16920, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 500)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, ioArgument_ioConversionCount.objectCompare (var_n_16353)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_pic_31__38_TestRegisterTerminator temp_3 = this ;
      outArgument_outModifiedTerminator = temp_3 ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_pic_31__38_TestRegisterTerminator temp_4 = this ;
    GGS_ipic_31__38_SingleInstructionTerminator temp_5 ;
    if (var_outModifiedTrueTerminator_16632.isValid ()) {
      if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedTrueTerminator_16632.ptr ())) {
        temp_5 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedTrueTerminator_16632.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedTrueTerminator_16632.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 514)) ;
      }
    }
    GGS_ipic_31__38_SingleInstructionTerminator temp_6 ;
    if (var_outModifiedFalseTerminator_16920.isValid ()) {
      if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedFalseTerminator_16920.ptr ())) {
        temp_6 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedFalseTerminator_16920.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedFalseTerminator_16920.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 515)) ;
      }
    }
    const GGS_pic_31__38_TestRegisterTerminator temp_7 = this ;
    outArgument_outModifiedTerminator = GGS_pic_31__38_TestRegisterTerminator::init_21__21__21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5, temp_6, temp_7.readProperty_mRegisterDescription (), inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18TestRegisterTerminator generateTerminatorCode'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_TestRegisterTerminator::method_generateTerminatorCode (const GGS_uint constinArgument_inAddress,
                                                                            const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                            const GGS_string constinArgument_inNextBlockLabel,
                                                                            GGS_codeList & outArgument_outCode,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_binCode_17602 = GGS_uint (uint32_t (26112U)) ;
  const GGS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  GGS_string var_assemblyCode_17633 = GGS_string ("    TSTFSZ ").add_operation (temp_0.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 528)) ;
  const GGS_pic_31__38_TestRegisterTerminator temp_1 = this ;
  var_binCode_17602 = var_binCode_17602.operator_or (temp_1.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 529)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 529)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_pic_31__38_TestRegisterTerminator temp_3 = this ;
    test_2 = temp_3.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      var_binCode_17602 = var_binCode_17602.operator_or (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 531)) ;
      var_assemblyCode_17633.plusAssignOperation(GGS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 532)) ;
    }
  }
  outArgument_outCode = GGS_codeList::class_func_listWithValue (var_assemblyCode_17633, GGS_uintlist::class_func_listWithValue (var_binCode_17602  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 536))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 534)) ;
  GGS_codeList var_falseTerminatorCode_18206 ;
  const GGS_pic_31__38_TestRegisterTerminator temp_4 = this ;
  callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_4.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 539)), constinArgument_inSymbolTable, GGS_string::makeEmptyString (), var_falseTerminatorCode_18206, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 538)) ;
  outArgument_outCode.plusAssignOperation(var_falseTerminatorCode_18206, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 544)) ;
  GGS_codeList var_trueTerminatorCode_18492 ;
  const GGS_pic_31__38_TestRegisterTerminator temp_5 = this ;
  const GGS_pic_31__38_TestRegisterTerminator temp_6 = this ;
  callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_5.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 546)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_6.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GGS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 546)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 546)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_trueTerminatorCode_18492, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 545)) ;
  outArgument_outCode.plusAssignOperation(var_trueTerminatorCode_18492, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 551)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18TestRegisterTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_pic_31__38_TestRegisterTerminator::getter_isEqualToTerminator (const GGS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_pic_31__38_TestRegisterTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (nullptr != dynamic_cast <const cPtr_pic_31__38_TestRegisterTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_pic_31__38_TestRegisterTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("pic_31__38_TestRegisterTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 561)) ;
        }
      }
      GGS_pic_31__38_TestRegisterTerminator var_t_18892 = temp_1 ;
      const GGS_pic_31__38_TestRegisterTerminator temp_2 = this ;
      result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), var_t_18892.readProperty_mSingleInstructionTerminatorIfConditionTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 562)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_pic_31__38_TestRegisterTerminator temp_4 = this ;
          result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_4.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), var_t_18892.readProperty_mSingleInstructionTerminatorIfConditionFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 564)) ;
        }
      }
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_pic_31__38_TestRegisterTerminator temp_6 = this ;
          result_outResult = extensionGetter_isEqualToRegister (temp_6.readProperty_mRegisterDescription (), var_t_18892.readProperty_mRegisterDescription (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 567)) ;
        }
      }
    }
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18BitTestTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_pic_31__38_BitTestTerminator::getter_terminatorDisplay (const GGS_string constinArgument_inNextBlockLabel,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outResult ; // Returned variable
  const GGS_pic_31__38_BitTestTerminator temp_0 = this ;
  const GGS_pic_31__38_BitTestTerminator temp_1 = this ;
  result_outResult = temp_0.readProperty_mRegisterDescription ().readProperty_mAssemblyString ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 581)).add_operation (temp_1.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 581)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 581)).add_operation (GGS_string (" \? "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 581)) ;
  const GGS_pic_31__38_BitTestTerminator temp_2 = this ;
  result_outResult.plusAssignOperation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 582)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 582)) ;
  result_outResult.plusAssignOperation(GGS_string (" : "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 583)) ;
  const GGS_pic_31__38_BitTestTerminator temp_3 = this ;
  result_outResult.plusAssignOperation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_3.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 584)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 584)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18BitTestTerminator performTerminatorRelativeBranchResolution'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_BitTestTerminator::method_performTerminatorRelativeBranchResolution (const GGS_uint constinArgument_inAddress,
                                                                                          const GGS_string constinArgument_inBlockLabel,
                                                                                          const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                          const GGS_string constinArgument_inNextBlockLabel,
                                                                                          GGS_uint & ioArgument_ioConversionCount,
                                                                                          GGS_string & ioArgument_ioListFileContents,
                                                                                          GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_n_20441 = ioArgument_ioConversionCount ;
  GGS_ipic_31__38_AbstractBlockTerminator var_outModifiedTrueTerminator_20720 ;
  const GGS_pic_31__38_BitTestTerminator temp_0 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedTrueTerminator_20720, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 598)) ;
  GGS_ipic_31__38_AbstractBlockTerminator var_outModifiedFalseTerminator_21008 ;
  const GGS_pic_31__38_BitTestTerminator temp_1 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedFalseTerminator_21008, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 607)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, ioArgument_ioConversionCount.objectCompare (var_n_20441)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_pic_31__38_BitTestTerminator temp_3 = this ;
      outArgument_outModifiedTerminator = temp_3 ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_pic_31__38_BitTestTerminator temp_4 = this ;
    GGS_ipic_31__38_SingleInstructionTerminator temp_5 ;
    if (var_outModifiedTrueTerminator_20720.isValid ()) {
      if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedTrueTerminator_20720.ptr ())) {
        temp_5 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedTrueTerminator_20720.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedTrueTerminator_20720.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 621)) ;
      }
    }
    GGS_ipic_31__38_SingleInstructionTerminator temp_6 ;
    if (var_outModifiedFalseTerminator_21008.isValid ()) {
      if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedFalseTerminator_21008.ptr ())) {
        temp_6 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedFalseTerminator_21008.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedFalseTerminator_21008.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 622)) ;
      }
    }
    const GGS_pic_31__38_BitTestTerminator temp_7 = this ;
    const GGS_pic_31__38_BitTestTerminator temp_8 = this ;
    outArgument_outModifiedTerminator = GGS_pic_31__38_BitTestTerminator::init_21__21__21__21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5, temp_6, temp_7.readProperty_mRegisterDescription (), temp_8.readProperty_mBitNumber (), inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18BitTestTerminator generateTerminatorCode'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_BitTestTerminator::method_generateTerminatorCode (const GGS_uint constinArgument_inAddress,
                                                                       const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                       const GGS_string constinArgument_inNextBlockLabel,
                                                                       GGS_codeList & outArgument_outCode,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_pic_31__38_BitTestTerminator temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 636)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_uint var_binCode_21862 = GGS_uint (uint32_t (45056U)) ;
      const GGS_pic_31__38_BitTestTerminator temp_2 = this ;
      const GGS_pic_31__38_BitTestTerminator temp_3 = this ;
      GGS_string var_assemblyCode_21895 = GGS_string ("    BTFSC ").add_operation (temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 639)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 639)).add_operation (temp_3.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 639)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 639)) ;
      const GGS_pic_31__38_BitTestTerminator temp_4 = this ;
      var_binCode_21862 = var_binCode_21862.operator_or (temp_4.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 640)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 640)) ;
      const GGS_pic_31__38_BitTestTerminator temp_5 = this ;
      var_binCode_21862 = var_binCode_21862.operator_or (temp_5.readProperty_mBitNumber ().left_shift_operation (GGS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 641)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 641)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 641)) ;
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        const GGS_pic_31__38_BitTestTerminator temp_7 = this ;
        test_6 = temp_7.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          var_binCode_21862 = var_binCode_21862.operator_or (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 643)) ;
          var_assemblyCode_21895.plusAssignOperation(GGS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 644)) ;
        }
      }
      outArgument_outCode = GGS_codeList::class_func_listWithValue (var_assemblyCode_21895, GGS_uintlist::class_func_listWithValue (var_binCode_21862  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 648))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 646)) ;
      GGS_codeList var_falseTerminatorCode_22511 ;
      const GGS_pic_31__38_BitTestTerminator temp_8 = this ;
      callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_8.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 650)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_falseTerminatorCode_22511, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 649)) ;
      outArgument_outCode.plusAssignOperation(var_falseTerminatorCode_22511, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 655)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GGS_uint var_binCode_22665 = GGS_uint (uint32_t (40960U)) ;
    const GGS_pic_31__38_BitTestTerminator temp_9 = this ;
    const GGS_pic_31__38_BitTestTerminator temp_10 = this ;
    GGS_string var_assemblyCode_22698 = GGS_string ("    BTFSS ").add_operation (temp_9.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 659)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 659)).add_operation (temp_10.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 659)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 659)) ;
    const GGS_pic_31__38_BitTestTerminator temp_11 = this ;
    var_binCode_22665 = var_binCode_22665.operator_or (temp_11.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 660)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 660)) ;
    const GGS_pic_31__38_BitTestTerminator temp_12 = this ;
    var_binCode_22665 = var_binCode_22665.operator_or (temp_12.readProperty_mBitNumber ().left_shift_operation (GGS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 661)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 661)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 661)) ;
    GalgasBool test_13 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_13) {
      const GGS_pic_31__38_BitTestTerminator temp_14 = this ;
      test_13 = temp_14.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
      if (GalgasBool::boolTrue == test_13) {
        var_binCode_22665 = var_binCode_22665.operator_or (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 663)) ;
        var_assemblyCode_22698.plusAssignOperation(GGS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 664)) ;
      }
    }
    outArgument_outCode = GGS_codeList::class_func_listWithValue (var_assemblyCode_22698, GGS_uintlist::class_func_listWithValue (var_binCode_22665  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 668))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 666)) ;
    GGS_codeList var_trueTerminatorCode_23299 ;
    const GGS_pic_31__38_BitTestTerminator temp_15 = this ;
    callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_15.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 670)), constinArgument_inSymbolTable, GGS_string::makeEmptyString (), var_trueTerminatorCode_23299, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 669)) ;
    outArgument_outCode.plusAssignOperation(var_trueTerminatorCode_23299, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 675)) ;
    GGS_codeList var_falseTerminatorCode_23611 ;
    const GGS_pic_31__38_BitTestTerminator temp_16 = this ;
    const GGS_pic_31__38_BitTestTerminator temp_17 = this ;
    callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_16.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 677)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_17.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 677)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 677)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_falseTerminatorCode_23611, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 676)) ;
    outArgument_outCode.plusAssignOperation(var_falseTerminatorCode_23611, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 682)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18BitTestTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_pic_31__38_BitTestTerminator::getter_isEqualToTerminator (const GGS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_pic_31__38_BitTestTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (nullptr != dynamic_cast <const cPtr_pic_31__38_BitTestTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_pic_31__38_BitTestTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("pic_31__38_BitTestTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 693)) ;
        }
      }
      GGS_pic_31__38_BitTestTerminator var_t_24008 = temp_1 ;
      const GGS_pic_31__38_BitTestTerminator temp_2 = this ;
      result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), var_t_24008.readProperty_mSingleInstructionTerminatorIfConditionTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 694)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_pic_31__38_BitTestTerminator temp_4 = this ;
          result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_4.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), var_t_24008.readProperty_mSingleInstructionTerminatorIfConditionFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 696)) ;
        }
      }
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_pic_31__38_BitTestTerminator temp_6 = this ;
          result_outResult = GGS_bool (ComparisonKind::equal, temp_6.readProperty_mBitNumber ().objectCompare (var_t_24008.readProperty_mBitNumber ())) ;
        }
      }
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_pic_31__38_BitTestTerminator temp_8 = this ;
          result_outResult = extensionGetter_isEqualToRegister (temp_8.readProperty_mRegisterDescription (), var_t_24008.readProperty_mRegisterDescription (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 702)) ;
        }
      }
    }
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18IncDecRegisterTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_ipic_31__38_IncDecRegisterTerminator::getter_terminatorDisplay (const GGS_string constinArgument_inNextBlockLabel,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outResult ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_outResult = GGS_string ("INCF ") ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_outResult = GGS_string ("DECF ") ;
  }
  const GGS_ipic_31__38_IncDecRegisterTerminator temp_2 = this ;
  result_outResult.plusAssignOperation(temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 721)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_4 = this ;
    test_3 = temp_4.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      result_outResult.plusAssignOperation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 723)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    result_outResult.plusAssignOperation(GGS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 725)) ;
  }
  result_outResult.plusAssignOperation(GGS_string (" Z \? "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 727)) ;
  const GGS_ipic_31__38_IncDecRegisterTerminator temp_5 = this ;
  result_outResult.plusAssignOperation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_5.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 728)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 728)) ;
  result_outResult.plusAssignOperation(GGS_string (" : "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 729)) ;
  const GGS_ipic_31__38_IncDecRegisterTerminator temp_6 = this ;
  result_outResult.plusAssignOperation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_6.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 730)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 730)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18IncDecRegisterTerminator performTerminatorRelativeBranchResolution'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_IncDecRegisterTerminator::method_performTerminatorRelativeBranchResolution (const GGS_uint constinArgument_inAddress,
                                                                                                  const GGS_string constinArgument_inBlockLabel,
                                                                                                  const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                  const GGS_string constinArgument_inNextBlockLabel,
                                                                                                  GGS_uint & ioArgument_ioConversionCount,
                                                                                                  GGS_string & ioArgument_ioListFileContents,
                                                                                                  GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_n_25818 = ioArgument_ioConversionCount ;
  GGS_ipic_31__38_AbstractBlockTerminator var_outModifiedTrueTerminator_26097 ;
  const GGS_ipic_31__38_IncDecRegisterTerminator temp_0 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedTrueTerminator_26097, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 744)) ;
  GGS_ipic_31__38_AbstractBlockTerminator var_outModifiedFalseTerminator_26385 ;
  const GGS_ipic_31__38_IncDecRegisterTerminator temp_1 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedFalseTerminator_26385, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 753)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::equal, ioArgument_ioConversionCount.objectCompare (var_n_25818)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_ipic_31__38_IncDecRegisterTerminator temp_3 = this ;
      outArgument_outModifiedTerminator = temp_3 ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_4 = this ;
    GGS_ipic_31__38_SingleInstructionTerminator temp_5 ;
    if (var_outModifiedTrueTerminator_26097.isValid ()) {
      if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedTrueTerminator_26097.ptr ())) {
        temp_5 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedTrueTerminator_26097.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedTrueTerminator_26097.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 767)) ;
      }
    }
    GGS_ipic_31__38_SingleInstructionTerminator temp_6 ;
    if (var_outModifiedFalseTerminator_26385.isValid ()) {
      if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedFalseTerminator_26385.ptr ())) {
        temp_6 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedFalseTerminator_26385.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedFalseTerminator_26385.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 768)) ;
      }
    }
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_7 = this ;
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_8 = this ;
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_9 = this ;
    outArgument_outModifiedTerminator = GGS_ipic_31__38_IncDecRegisterTerminator::init_21__21__21__21__21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5, temp_6, temp_7.readProperty_mRegisterDescription (), temp_8.readProperty_mIncrement (), temp_9.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18IncDecRegisterTerminator generateTerminatorCode'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_IncDecRegisterTerminator::method_generateTerminatorCode (const GGS_uint constinArgument_inAddress,
                                                                               const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                               const GGS_string constinArgument_inNextBlockLabel,
                                                                               GGS_codeList & outArgument_outCode,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 782)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_ipic_31__38_IncDecRegisterTerminator temp_2 = this ;
      GGS_bigint temp_3 ;
      const GalgasBool test_4 = temp_2.readProperty_mIncrement ().boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        temp_3 = GGS_bigint ("15360", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 784)) ;
      }else if (GalgasBool::boolFalse == test_4) {
        temp_3 = GGS_bigint ("11264", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 784)) ;
      }
      GGS_uint var_binCode_27285 = temp_3.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 784)) ;
      const GGS_ipic_31__38_IncDecRegisterTerminator temp_5 = this ;
      GGS_string temp_6 ;
      const GalgasBool test_7 = temp_5.readProperty_mIncrement ().boolEnum () ;
      if (GalgasBool::boolTrue == test_7) {
        temp_6 = GGS_string ("    INCFSZ") ;
      }else if (GalgasBool::boolFalse == test_7) {
        temp_6 = GGS_string ("    DECFSZ") ;
      }
      GGS_string var_assemblyCode_27367 = temp_6 ;
      const GGS_ipic_31__38_IncDecRegisterTerminator temp_8 = this ;
      var_assemblyCode_27367.plusAssignOperation(GGS_string (" ").add_operation (temp_8.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 786)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 786)) ;
      const GGS_ipic_31__38_IncDecRegisterTerminator temp_9 = this ;
      var_binCode_27285 = var_binCode_27285.operator_or (temp_9.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 787)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 787)) ;
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        const GGS_ipic_31__38_IncDecRegisterTerminator temp_11 = this ;
        test_10 = temp_11.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          var_assemblyCode_27367.plusAssignOperation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 789)) ;
        }
      }
      if (GalgasBool::boolFalse == test_10) {
        var_binCode_27285 = var_binCode_27285.operator_or (GGS_uint (uint32_t (512U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 791)) ;
        var_assemblyCode_27367.plusAssignOperation(GGS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 792)) ;
      }
      GalgasBool test_12 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_12) {
        const GGS_ipic_31__38_IncDecRegisterTerminator temp_13 = this ;
        test_12 = temp_13.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
        if (GalgasBool::boolTrue == test_12) {
          var_binCode_27285 = var_binCode_27285.operator_or (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 795)) ;
          var_assemblyCode_27367.plusAssignOperation(GGS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 796)) ;
        }
      }
      outArgument_outCode = GGS_codeList::class_func_listWithValue (var_assemblyCode_27367, GGS_uintlist::class_func_listWithValue (var_binCode_27285  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 800))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 798)) ;
      GGS_codeList var_falseTerminatorCode_28122 ;
      const GGS_ipic_31__38_IncDecRegisterTerminator temp_14 = this ;
      callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_14.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 802)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_falseTerminatorCode_28122, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 801)) ;
      outArgument_outCode.plusAssignOperation(var_falseTerminatorCode_28122, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 807)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_15 = this ;
    GGS_bigint temp_16 ;
    const GalgasBool test_17 = temp_15.readProperty_mIncrement ().boolEnum () ;
    if (GalgasBool::boolTrue == test_17) {
      temp_16 = GGS_bigint ("18432", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 810)) ;
    }else if (GalgasBool::boolFalse == test_17) {
      temp_16 = GGS_bigint ("19456", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 810)) ;
    }
    GGS_uint var_binCode_28276 = temp_16.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 810)) ;
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_18 = this ;
    GGS_string temp_19 ;
    const GalgasBool test_20 = temp_18.readProperty_mIncrement ().boolEnum () ;
    if (GalgasBool::boolTrue == test_20) {
      temp_19 = GGS_string ("    INFSNZ") ;
    }else if (GalgasBool::boolFalse == test_20) {
      temp_19 = GGS_string ("    DCFSNZ") ;
    }
    GGS_string var_assemblyCode_28358 = temp_19 ;
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_21 = this ;
    var_assemblyCode_28358.plusAssignOperation(GGS_string (" ").add_operation (temp_21.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 812)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 812)) ;
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_22 = this ;
    var_binCode_28276 = var_binCode_28276.operator_or (temp_22.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 813)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 813)) ;
    GalgasBool test_23 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_23) {
      const GGS_ipic_31__38_IncDecRegisterTerminator temp_24 = this ;
      test_23 = temp_24.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
      if (GalgasBool::boolTrue == test_23) {
        var_assemblyCode_28358.plusAssignOperation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 815)) ;
      }
    }
    if (GalgasBool::boolFalse == test_23) {
      var_binCode_28276 = var_binCode_28276.operator_or (GGS_uint (uint32_t (512U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 817)) ;
      var_assemblyCode_28358.plusAssignOperation(GGS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 818)) ;
    }
    GalgasBool test_25 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_25) {
      const GGS_ipic_31__38_IncDecRegisterTerminator temp_26 = this ;
      test_25 = temp_26.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
      if (GalgasBool::boolTrue == test_25) {
        var_binCode_28276 = var_binCode_28276.operator_or (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 821)) ;
        var_assemblyCode_28358.plusAssignOperation(GGS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 822)) ;
      }
    }
    outArgument_outCode = GGS_codeList::class_func_listWithValue (var_assemblyCode_28358, GGS_uintlist::class_func_listWithValue (var_binCode_28276  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 826))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 824)) ;
    GGS_codeList var_trueTerminatorCode_29098 ;
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_27 = this ;
    callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_27.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 828)), constinArgument_inSymbolTable, GGS_string::makeEmptyString (), var_trueTerminatorCode_29098, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 827)) ;
    outArgument_outCode.plusAssignOperation(var_trueTerminatorCode_29098, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 833)) ;
    GGS_codeList var_falseTerminatorCode_29410 ;
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_28 = this ;
    const GGS_ipic_31__38_IncDecRegisterTerminator temp_29 = this ;
    callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_28.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 835)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_29.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 835)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 835)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_falseTerminatorCode_29410, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 834)) ;
    outArgument_outCode.plusAssignOperation(var_falseTerminatorCode_29410, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 840)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18IncDecRegisterTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_IncDecRegisterTerminator::getter_isEqualToTerminator (const GGS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_ipic_31__38_IncDecRegisterTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (nullptr != dynamic_cast <const cPtr_ipic_31__38_IncDecRegisterTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_ipic_31__38_IncDecRegisterTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38_IncDecRegisterTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 851)) ;
        }
      }
      GGS_ipic_31__38_IncDecRegisterTerminator var_t_29831 = temp_1 ;
      const GGS_ipic_31__38_IncDecRegisterTerminator temp_2 = this ;
      result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), var_t_29831.readProperty_mSingleInstructionTerminatorIfConditionTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 852)) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_ipic_31__38_IncDecRegisterTerminator temp_4 = this ;
          result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_4.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), var_t_29831.readProperty_mSingleInstructionTerminatorIfConditionFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 854)) ;
        }
      }
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_ipic_31__38_IncDecRegisterTerminator temp_6 = this ;
          result_outResult = GGS_bool (ComparisonKind::equal, temp_6.readProperty_mIncrement ().objectCompare (var_t_29831.readProperty_mIncrement ())) ;
        }
      }
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_ipic_31__38_IncDecRegisterTerminator temp_8 = this ;
          result_outResult = GGS_bool (ComparisonKind::equal, temp_8.readProperty_m_5F_W_5F_isDestination ().objectCompare (var_t_29831.readProperty_m_5F_W_5F_isDestination ())) ;
        }
      }
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        test_9 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          const GGS_ipic_31__38_IncDecRegisterTerminator temp_10 = this ;
          result_outResult = extensionGetter_isEqualToRegister (temp_10.readProperty_mRegisterDescription (), var_t_29831.readProperty_mRegisterDescription (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 863)) ;
        }
      }
    }
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedRETLWTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_ipic_31__38_ComputedRETLWTerminator::getter_terminatorSize (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ComputedRETLWTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_outSize = GGS_uint (uint32_t (2U)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_outSize = GGS_uint (uint32_t (4U)) ;
  }
  const GGS_ipic_31__38_ComputedRETLWTerminator temp_2 = this ;
  result_outSize = result_outSize.add_operation (GGS_uint (uint32_t (2U)).multiply_operation (temp_2.readProperty_mLiteralValues ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas", 882)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 882)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 882)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedRETLWTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_ipic_31__38_ComputedRETLWTerminator::getter_terminatorDisplay (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outResult ; // Returned variable
  result_outResult = GGS_string ("COMPUTED RETLW") ;
  const GGS_ipic_31__38_ComputedRETLWTerminator temp_0 = this ;
  UpEnumerator_uintlist enumerator_31190 (temp_0.readProperty_mLiteralValues ()) ;
  while (enumerator_31190.hasCurrentObject ()) {
    result_outResult.plusAssignOperation(GGS_string (" ").add_operation (enumerator_31190.current_mValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_terminators.galgas", 892)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 892)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 892)) ;
    enumerator_31190.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedRETLWTerminator performTerminatorRelativeBranchResolution'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::method_performTerminatorRelativeBranchResolution (const GGS_uint constinArgument_inAddress,
                                                                                                 const GGS_string constinArgument_inBlockLabel,
                                                                                                 const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                 const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                                                 GGS_uint & ioArgument_ioConversionCount,
                                                                                                 GGS_string & ioArgument_ioListFileContents,
                                                                                                 GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_ComputedRETLWTerminator temp_0 = this ;
  outArgument_outModifiedTerminator = temp_0 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_ipic_31__38_ComputedRETLWTerminator temp_2 = this ;
    test_1 = temp_2.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GGS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 908)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 908)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 908)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          ioArgument_ioConversionCount.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 909)) ;
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 910)).add_operation (GGS_string (": computed RETLW needs CALL _computed_goto_2\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 910)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 910)) ;
          const GGS_ipic_31__38_ComputedRETLWTerminator temp_4 = this ;
          const GGS_ipic_31__38_ComputedRETLWTerminator temp_5 = this ;
          outArgument_outModifiedTerminator = GGS_ipic_31__38_ComputedRETLWTerminator::init_21__21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mLiteralValues (), GGS_bool (false), inCompiler COMMA_HERE) ;
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedRETLWTerminator terminatorRelativeBranchOverflow'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::method_terminatorRelativeBranchOverflow (const GGS_uint constinArgument_inAddress,
                                                                                        const GGS_string constinArgument_inBlockLabel,
                                                                                        const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                        const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                                        GGS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ComputedRETLWTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GGS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 925)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 925)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 925)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          {
          extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, GGS_string ("_computed_goto_2"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 926)) ;
          }
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedRETLWTerminator generateTerminatorCode'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::method_generateTerminatorCode (const GGS_uint constinArgument_inAddress,
                                                                              const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                              const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                              GGS_codeList & outArgument_outCode,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_goto_32_label_32983 = GGS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 938)) ;
  GGS_uint var_targetAddress_33075 ;
  constinArgument_inSymbolTable.method_searchKey (var_goto_32_label_32983, var_targetAddress_33075, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 939)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ComputedRETLWTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress_33075, var_goto_32_label_32983, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 941)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_targetAddress_33075, var_goto_32_label_32983, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 943)) ;
  }
  const GGS_ipic_31__38_ComputedRETLWTerminator temp_2 = this ;
  UpEnumerator_uintlist enumerator_33290 (temp_2.readProperty_mLiteralValues ()) ;
  while (enumerator_33290.hasCurrentObject ()) {
    outArgument_outCode.addAssignOperation (GGS_string ("    RETLW ").add_operation (enumerator_33290.current_mValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_terminators.galgas", 947)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 947)), GGS_uintlist::class_func_listWithValue (GGS_uint (uint32_t (3072U)).operator_or (enumerator_33290.current_mValue (HERE) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 948))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 948))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 946)) ;
    enumerator_33290.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedRETLWTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_ComputedRETLWTerminator::getter_isEqualToTerminator (const GGS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_ipic_31__38_ComputedRETLWTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (nullptr != dynamic_cast <const cPtr_ipic_31__38_ComputedRETLWTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_ipic_31__38_ComputedRETLWTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38_ComputedRETLWTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 959)) ;
        }
      }
      GGS_ipic_31__38_ComputedRETLWTerminator var_t_33788 = temp_1 ;
      const GGS_ipic_31__38_ComputedRETLWTerminator temp_2 = this ;
      result_outResult = GGS_bool (ComparisonKind::equal, temp_2.readProperty_mLiteralValues ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas", 960)).objectCompare (var_t_33788.readProperty_mLiteralValues ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas", 960)))) ;
      const GGS_ipic_31__38_ComputedRETLWTerminator temp_3 = this ;
      UpEnumerator_uintlist enumerator_33923 (temp_3.readProperty_mLiteralValues ()) ;
      UpEnumerator_uintlist enumerator_33957 (var_t_33788.readProperty_mLiteralValues ()) ;
      bool bool_4 = result_outResult.isValidAndTrue () ;
      if (enumerator_33923.hasCurrentObject () && enumerator_33957.hasCurrentObject () && bool_4) {
        while (enumerator_33923.hasCurrentObject () && enumerator_33957.hasCurrentObject () && bool_4) {
          result_outResult = GGS_bool (ComparisonKind::equal, enumerator_33923.current_mValue (HERE).objectCompare (enumerator_33957.current_mValue (HERE))) ;
          enumerator_33923.gotoNextObject () ;
          enumerator_33957.gotoNextObject () ;
          if (enumerator_33923.hasCurrentObject () && enumerator_33957.hasCurrentObject ()) {
            bool_4 = result_outResult.isValidAndTrue () ;
          }
        }
      }
    }
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedGotoTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_ipic_31__38_ComputedGotoTerminator::getter_terminatorDisplay (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outResult ; // Returned variable
  result_outResult = GGS_string ("COMPUTED GOTO ") ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ComputedGotoTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_outResult.plusAssignOperation(GGS_string (" (uses RCALL)"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 978)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_outResult.plusAssignOperation(GGS_string (" (uses CALL)"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 980)) ;
  }
  const GGS_ipic_31__38_ComputedGotoTerminator temp_2 = this ;
  UpEnumerator_lstringlist enumerator_34534 (temp_2.readProperty_mTargetLabels ()) ;
  while (enumerator_34534.hasCurrentObject ()) {
    result_outResult.plusAssignOperation(GGS_string (" ").add_operation (enumerator_34534.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 983)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 983)) ;
    enumerator_34534.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedGotoTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_ipic_31__38_ComputedGotoTerminator::getter_terminatorSize (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ComputedGotoTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_outSize = GGS_uint (uint32_t (2U)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_outSize = GGS_uint (uint32_t (4U)) ;
  }
  const GGS_ipic_31__38_ComputedGotoTerminator temp_2 = this ;
  result_outSize = result_outSize.add_operation (GGS_uint (uint32_t (4U)).multiply_operation (temp_2.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas", 997)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 997)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 997)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedGotoTerminator performTerminatorRelativeBranchResolution'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::method_performTerminatorRelativeBranchResolution (const GGS_uint constinArgument_inAddress,
                                                                                                const GGS_string constinArgument_inBlockLabel,
                                                                                                const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                                                GGS_uint & ioArgument_ioConversionCount,
                                                                                                GGS_string & ioArgument_ioListFileContents,
                                                                                                GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_ComputedGotoTerminator temp_0 = this ;
  outArgument_outModifiedTerminator = temp_0 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_ipic_31__38_ComputedGotoTerminator temp_2 = this ;
    test_1 = temp_2.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GGS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1012)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1012)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1012)).boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          ioArgument_ioConversionCount.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1013)) ;
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1014)).add_operation (GGS_string (": computed GOTO needs CALL _computed_goto_4\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1014)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1014)) ;
          const GGS_ipic_31__38_ComputedGotoTerminator temp_4 = this ;
          const GGS_ipic_31__38_ComputedGotoTerminator temp_5 = this ;
          outArgument_outModifiedTerminator = GGS_ipic_31__38_ComputedGotoTerminator::init_21__21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mTargetLabels (), GGS_bool (false), inCompiler COMMA_HERE) ;
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedGotoTerminator terminatorRelativeBranchOverflow'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::method_terminatorRelativeBranchOverflow (const GGS_uint constinArgument_inAddress,
                                                                                       const GGS_string constinArgument_inBlockLabel,
                                                                                       const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                       const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                                       GGS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ComputedGotoTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GGS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1029)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1029)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1029)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          {
          extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, GGS_string ("_computed_goto_4"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1030)) ;
          }
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedGotoTerminator generateTerminatorCode'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::method_generateTerminatorCode (const GGS_uint constinArgument_inAddress,
                                                                             const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                             const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                             GGS_codeList & outArgument_outCode,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_goto_34_label_36636 = GGS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1042)) ;
  GGS_uint var_targetAddress_36728 ;
  constinArgument_inSymbolTable.method_searchKey (var_goto_34_label_36636, var_targetAddress_36728, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1043)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ComputedGotoTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress_36728, var_goto_34_label_36636, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1045)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_targetAddress_36728, var_goto_34_label_36636, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1047)) ;
  }
  const GGS_ipic_31__38_ComputedGotoTerminator temp_2 = this ;
  UpEnumerator_lstringlist enumerator_36943 (temp_2.readProperty_mTargetLabels ()) ;
  while (enumerator_36943.hasCurrentObject ()) {
    GGS_uint var_targetLabelAddress_37025 ;
    constinArgument_inSymbolTable.method_searchKey (enumerator_36943.current_mValue (HERE), var_targetLabelAddress_37025, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1050)) ;
    outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_targetLabelAddress_37025, enumerator_36943.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1051)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1051)) ;
    enumerator_36943.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedGotoTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_ComputedGotoTerminator::getter_isEqualToTerminator (const GGS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_ipic_31__38_ComputedGotoTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (nullptr != dynamic_cast <const cPtr_ipic_31__38_ComputedGotoTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_ipic_31__38_ComputedGotoTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38_ComputedGotoTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1062)) ;
        }
      }
      GGS_ipic_31__38_ComputedGotoTerminator var_t_37470 = temp_1 ;
      const GGS_ipic_31__38_ComputedGotoTerminator temp_2 = this ;
      result_outResult = GGS_bool (ComparisonKind::equal, temp_2.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas", 1063)).objectCompare (var_t_37470.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas", 1063)))) ;
      const GGS_ipic_31__38_ComputedGotoTerminator temp_3 = this ;
      UpEnumerator_lstringlist enumerator_37602 (temp_3.readProperty_mTargetLabels ()) ;
      UpEnumerator_lstringlist enumerator_37635 (var_t_37470.readProperty_mTargetLabels ()) ;
      bool bool_4 = result_outResult.isValidAndTrue () ;
      if (enumerator_37602.hasCurrentObject () && enumerator_37635.hasCurrentObject () && bool_4) {
        while (enumerator_37602.hasCurrentObject () && enumerator_37635.hasCurrentObject () && bool_4) {
          result_outResult = GGS_bool (ComparisonKind::equal, enumerator_37602.current_mValue (HERE).readProperty_string ().objectCompare (enumerator_37635.current_mValue (HERE).readProperty_string ())) ;
          enumerator_37602.gotoNextObject () ;
          enumerator_37635.gotoNextObject () ;
          if (enumerator_37602.hasCurrentObject () && enumerator_37635.hasCurrentObject ()) {
            bool_4 = result_outResult.isValidAndTrue () ;
          }
        }
      }
    }
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedBraTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_ipic_31__38_ComputedBraTerminator::getter_terminatorSize (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ComputedBraTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      result_outSize = GGS_uint (uint32_t (2U)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    result_outSize = GGS_uint (uint32_t (4U)) ;
  }
  const GGS_ipic_31__38_ComputedBraTerminator temp_2 = this ;
  result_outSize = result_outSize.add_operation (GGS_uint (uint32_t (2U)).multiply_operation (temp_2.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas", 1084)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1084)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1084)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedBraTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_ipic_31__38_ComputedBraTerminator::getter_terminatorDisplay (const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outResult ; // Returned variable
  result_outResult = GGS_string ("COMPUTED BRA") ;
  const GGS_ipic_31__38_ComputedBraTerminator temp_0 = this ;
  UpEnumerator_lstringlist enumerator_38444 (temp_0.readProperty_mTargetLabels ()) ;
  while (enumerator_38444.hasCurrentObject ()) {
    result_outResult.plusAssignOperation(GGS_string (" ").add_operation (enumerator_38444.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1094)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1094)) ;
    enumerator_38444.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedBraTerminator performTerminatorRelativeBranchResolution'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::method_performTerminatorRelativeBranchResolution (const GGS_uint constinArgument_inAddress,
                                                                                               const GGS_string constinArgument_inBlockLabel,
                                                                                               const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                               const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                                               GGS_uint & ioArgument_ioConversionCount,
                                                                                               GGS_string & ioArgument_ioListFileContents,
                                                                                               GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_ComputedBraTerminator temp_0 = this ;
  UpEnumerator_lstringlist enumerator_38954 (temp_0.readProperty_mTargetLabels ()) ;
  while (enumerator_38954.hasCurrentObject ()) {
    GalgasBool test_1 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_1) {
      test_1 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, enumerator_38954.current_mValue (HERE), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1109)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1109)).boolEnum () ;
      if (GalgasBool::boolTrue == test_1) {
        const GGS_ipic_31__38_ComputedBraTerminator temp_2 = this ;
        GenericArray <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("displacement (").add_operation (function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (constinArgument_inSymbolTable, enumerator_38954.current_mValue (HERE), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1111)).getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 1110)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1110)).add_operation (GGS_string (") too large for rcall "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1111)).add_operation (enumerator_38954.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1111)).add_operation (GGS_string (" instruction (limited to [-1024, 1023])"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1112)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1110)) ;
      }
    }
    enumerator_38954.gotoNextObject () ;
  }
  const GGS_ipic_31__38_ComputedBraTerminator temp_4 = this ;
  outArgument_outModifiedTerminator = temp_4 ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_ipic_31__38_ComputedBraTerminator temp_6 = this ;
    test_5 = temp_6.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GGS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1117)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1117)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1117)).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          ioArgument_ioConversionCount.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1118)) ;
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1119)).add_operation (GGS_string (": computed RETLW needs CALL _computed_goto_2\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1119)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1119)) ;
          const GGS_ipic_31__38_ComputedBraTerminator temp_8 = this ;
          const GGS_ipic_31__38_ComputedBraTerminator temp_9 = this ;
          outArgument_outModifiedTerminator = GGS_ipic_31__38_ComputedBraTerminator::init_21__21__21_ (temp_8.readProperty_mInstructionLocation (), temp_9.readProperty_mTargetLabels (), GGS_bool (false), inCompiler COMMA_HERE) ;
        }
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedBraTerminator terminatorRelativeBranchOverflow'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::method_terminatorRelativeBranchOverflow (const GGS_uint constinArgument_inAddress,
                                                                                      const GGS_string constinArgument_inBlockLabel,
                                                                                      const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                      const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                                      GGS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_address_40059 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ComputedBraTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GalgasBool test_2 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_2) {
        test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GGS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1135)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1135)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1135)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          {
          extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, GGS_string ("_computed_goto_2"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1136)) ;
          }
        }
      }
      var_address_40059 = constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1138)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    var_address_40059 = constinArgument_inAddress.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1140)) ;
  }
  const GGS_ipic_31__38_ComputedBraTerminator temp_3 = this ;
  UpEnumerator_lstringlist enumerator_40342 (temp_3.readProperty_mTargetLabels ()) ;
  while (enumerator_40342.hasCurrentObject ()) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, enumerator_40342.current_mValue (HERE), var_address_40059, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1143)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1143)).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        {
        extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, enumerator_40342.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1144)) ;
        }
      }
    }
    var_address_40059 = var_address_40059.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1146)) ;
    enumerator_40342.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ComputedBraTerminator generateTerminatorCode'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::method_generateTerminatorCode (const GGS_uint constinArgument_inAddress,
                                                                            const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                            const GGS_string /* constinArgument_inNextBlockLabel */,
                                                                            GGS_codeList & outArgument_outCode,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_lstring var_goto_32_label_40857 = GGS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1157)) ;
  GGS_uint var_targetAddress_40949 ;
  constinArgument_inSymbolTable.method_searchKey (var_goto_32_label_40857, var_targetAddress_40949, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1158)) ;
  GGS_uint var_address_40976 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ComputedBraTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress_40949, var_goto_32_label_40857, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1161)) ;
      var_address_40976 = constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1162)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_targetAddress_40949, var_goto_32_label_40857, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1164)) ;
    var_address_40976 = constinArgument_inAddress.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1165)) ;
  }
  const GGS_ipic_31__38_ComputedBraTerminator temp_2 = this ;
  UpEnumerator_lstringlist enumerator_41240 (temp_2.readProperty_mTargetLabels ()) ;
  while (enumerator_41240.hasCurrentObject ()) {
    GGS_uint var_labelAddress_41322 ;
    constinArgument_inSymbolTable.method_searchKey (enumerator_41240.current_mValue (HERE), var_labelAddress_41322, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1168)) ;
    outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (var_address_40976, var_labelAddress_41322, enumerator_41240.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1169)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1169)) ;
    var_address_40976 = var_address_40976.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1170)) ;
    enumerator_41240.gotoNextObject () ;
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedBraTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_ComputedBraTerminator::getter_isEqualToTerminator (const GGS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_ipic_31__38_ComputedBraTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (nullptr != dynamic_cast <const cPtr_ipic_31__38_ComputedBraTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_ipic_31__38_ComputedBraTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38_ComputedBraTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1181)) ;
        }
      }
      GGS_ipic_31__38_ComputedBraTerminator var_t_41786 = temp_1 ;
      const GGS_ipic_31__38_ComputedBraTerminator temp_2 = this ;
      result_outResult = GGS_bool (ComparisonKind::equal, temp_2.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas", 1182)).objectCompare (var_t_41786.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas", 1182)))) ;
      const GGS_ipic_31__38_ComputedBraTerminator temp_3 = this ;
      UpEnumerator_lstringlist enumerator_41917 (temp_3.readProperty_mTargetLabels ()) ;
      UpEnumerator_lstringlist enumerator_41950 (var_t_41786.readProperty_mTargetLabels ()) ;
      bool bool_4 = result_outResult.isValidAndTrue () ;
      if (enumerator_41917.hasCurrentObject () && enumerator_41950.hasCurrentObject () && bool_4) {
        while (enumerator_41917.hasCurrentObject () && enumerator_41950.hasCurrentObject () && bool_4) {
          result_outResult = GGS_bool (ComparisonKind::equal, enumerator_41917.current_mValue (HERE).readProperty_string ().objectCompare (enumerator_41950.current_mValue (HERE).readProperty_string ())) ;
          enumerator_41917.gotoNextObject () ;
          enumerator_41950.gotoNextObject () ;
          if (enumerator_41917.hasCurrentObject () && enumerator_41950.hasCurrentObject ()) {
            bool_4 = result_outResult.isValidAndTrue () ;
          }
        }
      }
    }
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ConditionalJumpTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_string cPtr_ipic_31__38_ConditionalJumpTerminator::getter_terminatorDisplay (const GGS_string constinArgument_inNextBlockLabel,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_string result_outResult ; // Returned variable
  const GGS_ipic_31__38_ConditionalJumpTerminator temp_0 = this ;
  switch (temp_0.readProperty_mConditionalBranch ().enumValue ()) {
  case GGS_conditional_5F_branch::Enumeration::invalid:
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bz:
    {
      result_outResult = GGS_string ("Z") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bn:
    {
      result_outResult = GGS_string ("N") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bc:
    {
      result_outResult = GGS_string ("C") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bov:
    {
      result_outResult = GGS_string ("OV") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bnz:
    {
      result_outResult = GGS_string ("NZ") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bnn:
    {
      result_outResult = GGS_string ("NN") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bnc:
    {
      result_outResult = GGS_string ("NC") ;
    }
    break ;
  case GGS_conditional_5F_branch::Enumeration::enum_bnov:
    {
      result_outResult = GGS_string ("NOV") ;
    }
    break ;
  }
  result_outResult.plusAssignOperation(GGS_string (" \? "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1294)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
    test_1 = GGS_bool (ComparisonKind::equal, temp_2.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_3 = this ;
      result_outResult.plusAssignOperation(GGS_string ("(").add_operation (temp_3.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1296)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1296)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1296)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
    result_outResult.plusAssignOperation(temp_4.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1298)) ;
  }
  result_outResult.plusAssignOperation(GGS_string (" : "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1300)) ;
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_6 = this ;
    test_5 = GGS_bool (ComparisonKind::equal, temp_6.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_7 = this ;
      result_outResult.plusAssignOperation(GGS_string ("(").add_operation (temp_7.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1302)).add_operation (GGS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1302)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1302)) ;
    }
  }
  if (GalgasBool::boolFalse == test_5) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_8 = this ;
    result_outResult.plusAssignOperation(temp_8.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1304)) ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ConditionalJumpTerminator performTerminatorRelativeBranchResolution'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ConditionalJumpTerminator::method_performTerminatorRelativeBranchResolution (const GGS_uint constinArgument_inAddress,
                                                                                                   const GGS_string constinArgument_inBlockLabel,
                                                                                                   const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                   const GGS_string constinArgument_inNextBlockLabel,
                                                                                                   GGS_uint & ioArgument_ioConversionCount,
                                                                                                   GGS_string & ioArgument_ioListFileContents,
                                                                                                   GGS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_ipic_31__38_ConditionalJumpTerminator temp_0 = this ;
  GGS_conditionalBranchMode var_branchModeOnFalseLabel_47811 = temp_0.readProperty_mBranchModeOnFalseLabel () ;
  const GGS_ipic_31__38_ConditionalJumpTerminator temp_1 = this ;
  GGS_conditionalBranchMode var_branchModeOnTrueLabel_47894 = temp_1.readProperty_mBranchModeOnTrueLabel () ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_3 = this ;
    test_2 = GGS_bool (ComparisonKind::equal, temp_3.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
      switch (temp_4.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GGS_conditionalBranchMode::Enumeration::invalid:
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_native:
        {
          GalgasBool test_5 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_5) {
            const GGS_ipic_31__38_ConditionalJumpTerminator temp_6 = this ;
            test_5 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_6.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1323)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1323)).boolEnum () ;
            if (GalgasBool::boolTrue == test_5) {
              var_branchModeOnFalseLabel_47811 = GGS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1324)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_7 = this ;
              ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1325)).add_operation (GGS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1325)).add_operation (temp_7.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1325)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1325)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1325)) ;
            }
          }
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
        {
          GalgasBool test_8 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_8) {
            const GGS_ipic_31__38_ConditionalJumpTerminator temp_9 = this ;
            test_8 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_9.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1328)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1328)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1328)).boolEnum () ;
            if (GalgasBool::boolTrue == test_8) {
              var_branchModeOnFalseLabel_47811 = GGS_conditionalBranchMode::class_func_ipicGOTO (SOURCE_FILE ("ipic18_terminators.galgas", 1329)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_10 = this ;
              ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1330)).add_operation (GGS_string (", terminator will use GOTO "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1330)).add_operation (temp_10.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1330)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1330)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1330)) ;
            }
          }
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
        break ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_11 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_12 = this ;
      test_11 = GGS_bool (ComparisonKind::equal, temp_12.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
      if (GalgasBool::boolTrue == test_11) {
        const GGS_ipic_31__38_ConditionalJumpTerminator temp_13 = this ;
        switch (temp_13.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
        case GGS_conditionalBranchMode::Enumeration::invalid:
          break ;
        case GGS_conditionalBranchMode::Enumeration::enum_native:
          {
            GalgasBool test_14 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_14) {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_15 = this ;
              test_14 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_15.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1337)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1337)).boolEnum () ;
              if (GalgasBool::boolTrue == test_14) {
                var_branchModeOnTrueLabel_47894 = GGS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1338)) ;
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_16 = this ;
                ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1339)).add_operation (GGS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1339)).add_operation (temp_16.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1339)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1339)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1339)) ;
              }
            }
          }
          break ;
        case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
          {
            GalgasBool test_17 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_17) {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_18 = this ;
              test_17 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_18.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1342)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1342)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1342)).boolEnum () ;
              if (GalgasBool::boolTrue == test_17) {
                var_branchModeOnTrueLabel_47894 = GGS_conditionalBranchMode::class_func_ipicGOTO (SOURCE_FILE ("ipic18_terminators.galgas", 1343)) ;
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_19 = this ;
                ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1344)).add_operation (GGS_string (", terminator will use GOTO "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1344)).add_operation (temp_19.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1344)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1344)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1344)) ;
              }
            }
          }
          break ;
        case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
          break ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_11) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_20 = this ;
      switch (temp_20.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GGS_conditionalBranchMode::Enumeration::invalid:
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_native:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_21 = this ;
          switch (temp_21.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GGS_conditionalBranchMode::Enumeration::invalid:
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_native:
          case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
            {
              GalgasBool test_22 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_22) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_23 = this ;
                test_22 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_23.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1353)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1353)).boolEnum () ;
                if (GalgasBool::boolTrue == test_22) {
                  var_branchModeOnFalseLabel_47811 = GGS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1354)) ;
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_24 = this ;
                  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1355)).add_operation (GGS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1355)).add_operation (temp_24.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1355)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1355)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1355)) ;
                }
              }
              GalgasBool test_25 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_25) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_26 = this ;
                test_25 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_26.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1357)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1357)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1357)).boolEnum () ;
                if (GalgasBool::boolTrue == test_25) {
                  var_branchModeOnTrueLabel_47894 = GGS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1358)) ;
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_27 = this ;
                  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1359)).add_operation (GGS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1359)).add_operation (temp_27.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1359)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1359)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1359)) ;
                }
              }
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
            break ;
          }
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_28 = this ;
          switch (temp_28.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GGS_conditionalBranchMode::Enumeration::invalid:
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_native:
            {
              GalgasBool test_29 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_29) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_30 = this ;
                test_29 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_30.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1366)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1366)).boolEnum () ;
                if (GalgasBool::boolTrue == test_29) {
                  var_branchModeOnTrueLabel_47894 = GGS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1367)) ;
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_31 = this ;
                  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1368)).add_operation (GGS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1368)).add_operation (temp_31.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1368)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1368)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1368)) ;
                }
              }
              GalgasBool test_32 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_32) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_33 = this ;
                test_32 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_33.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1370)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1370)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1370)).boolEnum () ;
                if (GalgasBool::boolTrue == test_32) {
                  var_branchModeOnFalseLabel_47811 = GGS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1371)) ;
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_34 = this ;
                  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1372)).add_operation (GGS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1372)).add_operation (temp_34.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1372)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1372)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1372)) ;
                }
              }
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
            {
              GalgasBool test_35 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_35) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_36 = this ;
                test_35 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_36.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1375)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1375)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1375)).boolEnum () ;
                if (GalgasBool::boolTrue == test_35) {
                  var_branchModeOnFalseLabel_47811 = GGS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1376)) ;
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_37 = this ;
                  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1377)).add_operation (GGS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1377)).add_operation (temp_37.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1377)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1377)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1377)) ;
                }
              }
              GalgasBool test_38 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_38) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_39 = this ;
                test_38 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_39.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1379)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1379)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1379)).boolEnum () ;
                if (GalgasBool::boolTrue == test_38) {
                  var_branchModeOnTrueLabel_47894 = GGS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1380)) ;
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_40 = this ;
                  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1381)).add_operation (GGS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1381)).add_operation (temp_40.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1381)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1381)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1381)) ;
                }
              }
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
            {
              GalgasBool test_41 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_41) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_42 = this ;
                test_41 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_42.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1384)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1384)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1384)).boolEnum () ;
                if (GalgasBool::boolTrue == test_41) {
                  var_branchModeOnFalseLabel_47811 = GGS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1385)) ;
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_43 = this ;
                  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1386)).add_operation (GGS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1386)).add_operation (temp_43.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1386)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1386)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1386)) ;
                }
              }
            }
            break ;
          }
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_44 = this ;
          switch (temp_44.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GGS_conditionalBranchMode::Enumeration::invalid:
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_native:
            {
              GalgasBool test_45 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_45) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_46 = this ;
                test_45 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_46.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1392)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1392)).boolEnum () ;
                if (GalgasBool::boolTrue == test_45) {
                  var_branchModeOnTrueLabel_47894 = GGS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1393)) ;
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_47 = this ;
                  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1394)).add_operation (GGS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1394)).add_operation (temp_47.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1394)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1394)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1394)) ;
                }
              }
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
            {
              GalgasBool test_48 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_48) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_49 = this ;
                test_48 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_49.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (6U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1397)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1397)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1397)).boolEnum () ;
                if (GalgasBool::boolTrue == test_48) {
                  var_branchModeOnTrueLabel_47894 = GGS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1398)) ;
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_50 = this ;
                  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1399)).add_operation (GGS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1399)).add_operation (temp_50.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1399)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1399)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1399)) ;
                }
              }
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
            break ;
          }
        }
        break ;
      }
    }
  }
  GalgasBool test_51 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_51) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_52 = this ;
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_53 = this ;
    test_51 = GGS_bool (ComparisonKind::equal, var_branchModeOnFalseLabel_47811.objectCompare (temp_52.readProperty_mBranchModeOnFalseLabel ())).operator_and (GGS_bool (ComparisonKind::equal, var_branchModeOnTrueLabel_47894.objectCompare (temp_53.readProperty_mBranchModeOnTrueLabel ())) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1405)).boolEnum () ;
    if (GalgasBool::boolTrue == test_51) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_54 = this ;
      outArgument_outModifiedTerminator = temp_54 ;
    }
  }
  if (GalgasBool::boolFalse == test_51) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_55 = this ;
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_56 = this ;
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_57 = this ;
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_58 = this ;
    outArgument_outModifiedTerminator = GGS_ipic_31__38_ConditionalJumpTerminator::init_21__21__21__21__21__21_ (temp_55.readProperty_mInstructionLocation (), temp_56.readProperty_mConditionalBranch (), temp_57.readProperty_mTargetLabelWhenTrue (), var_branchModeOnTrueLabel_47894, temp_58.readProperty_mTargetLabelWhenFalse (), var_branchModeOnFalseLabel_47811, inCompiler COMMA_HERE) ;
    ioArgument_ioConversionCount.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1415)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ConditionalJumpTerminator terminatorRelativeBranchOverflow'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ConditionalJumpTerminator::method_terminatorRelativeBranchOverflow (const GGS_uint constinArgument_inAddress,
                                                                                          const GGS_string constinArgument_inBlockLabel,
                                                                                          const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                          const GGS_string constinArgument_inNextBlockLabel,
                                                                                          GGS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
      switch (temp_2.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GGS_conditionalBranchMode::Enumeration::invalid:
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_native:
        {
          GalgasBool test_3 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_3) {
            const GGS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
            test_3 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_4.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1430)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1430)).boolEnum () ;
            if (GalgasBool::boolTrue == test_3) {
              {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_5 = this ;
              extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_5.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1431)) ;
              }
            }
          }
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
        {
          GalgasBool test_6 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_6) {
            const GGS_ipic_31__38_ConditionalJumpTerminator temp_7 = this ;
            test_6 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_7.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1434)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1434)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1434)).boolEnum () ;
            if (GalgasBool::boolTrue == test_6) {
              {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_8 = this ;
              extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_8.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1435)) ;
              }
            }
          }
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
        break ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_9 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_9) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_10 = this ;
      test_9 = GGS_bool (ComparisonKind::equal, temp_10.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
      if (GalgasBool::boolTrue == test_9) {
        const GGS_ipic_31__38_ConditionalJumpTerminator temp_11 = this ;
        switch (temp_11.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
        case GGS_conditionalBranchMode::Enumeration::invalid:
          break ;
        case GGS_conditionalBranchMode::Enumeration::enum_native:
          {
            GalgasBool test_12 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_12) {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_13 = this ;
              test_12 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_13.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1442)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1442)).boolEnum () ;
              if (GalgasBool::boolTrue == test_12) {
                {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_14 = this ;
                extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_14.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1443)) ;
                }
              }
            }
          }
          break ;
        case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
          {
            GalgasBool test_15 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_15) {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_16 = this ;
              test_15 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_16.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1446)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1446)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1446)).boolEnum () ;
              if (GalgasBool::boolTrue == test_15) {
                {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_17 = this ;
                extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_17.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1447)) ;
                }
              }
            }
          }
          break ;
        case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
          break ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_9) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_18 = this ;
      switch (temp_18.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GGS_conditionalBranchMode::Enumeration::invalid:
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_native:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_19 = this ;
          switch (temp_19.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GGS_conditionalBranchMode::Enumeration::invalid:
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_native:
          case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
            {
              GalgasBool test_20 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_20) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_21 = this ;
                test_20 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_21.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1456)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1456)).boolEnum () ;
                if (GalgasBool::boolTrue == test_20) {
                  {
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_22 = this ;
                  extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_22.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1457)) ;
                  }
                }
              }
              GalgasBool test_23 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_23) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_24 = this ;
                test_23 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_24.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1459)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1459)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1459)).boolEnum () ;
                if (GalgasBool::boolTrue == test_23) {
                  {
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_25 = this ;
                  extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_25.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1460)) ;
                  }
                }
              }
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
            break ;
          }
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_26 = this ;
          switch (temp_26.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GGS_conditionalBranchMode::Enumeration::invalid:
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_native:
            {
              GalgasBool test_27 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_27) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_28 = this ;
                test_27 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_28.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1467)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1467)).boolEnum () ;
                if (GalgasBool::boolTrue == test_27) {
                  {
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_29 = this ;
                  extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_29.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1468)) ;
                  }
                }
              }
              GalgasBool test_30 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_30) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_31 = this ;
                test_30 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_31.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1470)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1470)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1470)).boolEnum () ;
                if (GalgasBool::boolTrue == test_30) {
                  {
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_32 = this ;
                  extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_32.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1471)) ;
                  }
                }
              }
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
            {
              GalgasBool test_33 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_33) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_34 = this ;
                test_33 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_34.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1474)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1474)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1474)).boolEnum () ;
                if (GalgasBool::boolTrue == test_33) {
                  {
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_35 = this ;
                  extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_35.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1475)) ;
                  }
                }
              }
              GalgasBool test_36 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_36) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_37 = this ;
                test_36 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_37.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1477)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1477)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1477)).boolEnum () ;
                if (GalgasBool::boolTrue == test_36) {
                  {
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_38 = this ;
                  extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_38.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1478)) ;
                  }
                }
              }
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
            {
              GalgasBool test_39 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_39) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_40 = this ;
                test_39 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_40.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1481)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1481)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1481)).boolEnum () ;
                if (GalgasBool::boolTrue == test_39) {
                  {
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_41 = this ;
                  extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_41.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1482)) ;
                  }
                }
              }
            }
            break ;
          }
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_42 = this ;
          switch (temp_42.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GGS_conditionalBranchMode::Enumeration::invalid:
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_native:
            {
              GalgasBool test_43 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_43) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_44 = this ;
                test_43 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_44.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1488)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1488)).boolEnum () ;
                if (GalgasBool::boolTrue == test_43) {
                  {
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_45 = this ;
                  extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_45.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1490)) ;
                  }
                }
              }
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
            {
              GalgasBool test_46 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_46) {
                const GGS_ipic_31__38_ConditionalJumpTerminator temp_47 = this ;
                test_46 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_47.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (6U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1493)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1493)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1493)).boolEnum () ;
                if (GalgasBool::boolTrue == test_46) {
                  {
                  const GGS_ipic_31__38_ConditionalJumpTerminator temp_48 = this ;
                  extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_48.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1495)) ;
                  }
                }
              }
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
            break ;
          }
        }
        break ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ConditionalJumpTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GGS_uint cPtr_ipic_31__38_ConditionalJumpTerminator::getter_terminatorSize (const GGS_string constinArgument_inNextBlockLabel,
                                                                            Compiler */* inCompiler */
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_uint result_outSize ; // Returned variable
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::equal, temp_1.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
      switch (temp_2.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GGS_conditionalBranchMode::Enumeration::invalid:
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_native:
        {
          result_outSize = GGS_uint (uint32_t (2U)) ;
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
        {
          result_outSize = GGS_uint (uint32_t (4U)) ;
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
        {
          result_outSize = GGS_uint (uint32_t (6U)) ;
        }
        break ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GalgasBool test_3 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
      test_3 = GGS_bool (ComparisonKind::equal, temp_4.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
      if (GalgasBool::boolTrue == test_3) {
        const GGS_ipic_31__38_ConditionalJumpTerminator temp_5 = this ;
        switch (temp_5.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
        case GGS_conditionalBranchMode::Enumeration::invalid:
          break ;
        case GGS_conditionalBranchMode::Enumeration::enum_native:
          {
            result_outSize = GGS_uint (uint32_t (2U)) ;
          }
          break ;
        case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
          {
            result_outSize = GGS_uint (uint32_t (4U)) ;
          }
          break ;
        case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
          {
            result_outSize = GGS_uint (uint32_t (6U)) ;
          }
          break ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_3) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_6 = this ;
      switch (temp_6.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GGS_conditionalBranchMode::Enumeration::invalid:
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_native:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_7 = this ;
          switch (temp_7.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GGS_conditionalBranchMode::Enumeration::invalid:
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_native:
          case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
            {
              result_outSize = GGS_uint (uint32_t (4U)) ;
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
            {
              result_outSize = GGS_uint (uint32_t (6U)) ;
            }
            break ;
          }
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_8 = this ;
          switch (temp_8.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GGS_conditionalBranchMode::Enumeration::invalid:
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_native:
            {
              result_outSize = GGS_uint (uint32_t (4U)) ;
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
            {
              result_outSize = GGS_uint (uint32_t (6U)) ;
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
            {
              result_outSize = GGS_uint (uint32_t (8U)) ;
            }
            break ;
          }
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_9 = this ;
          switch (temp_9.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GGS_conditionalBranchMode::Enumeration::invalid:
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_native:
            {
              result_outSize = GGS_uint (uint32_t (6U)) ;
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
            {
              result_outSize = GGS_uint (uint32_t (8U)) ;
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
            {
              result_outSize = GGS_uint (uint32_t (10U)) ;
            }
            break ;
          }
        }
        break ;
      }
    }
  }
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@ipic18ConditionalJumpTerminator generateTerminatorCode'
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ConditionalJumpTerminator::method_generateTerminatorCode (const GGS_uint constinArgument_inAddress,
                                                                                const GGS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                const GGS_string constinArgument_inNextBlockLabel,
                                                                                GGS_codeList & outArgument_outCode,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GGS_uint var_trueTargetAddress_59127 ;
  const GGS_ipic_31__38_ConditionalJumpTerminator temp_0 = this ;
  constinArgument_inSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabelWhenTrue (), var_trueTargetAddress_59127, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1550)) ;
  GGS_uint var_falseTargetAddress_59212 ;
  const GGS_ipic_31__38_ConditionalJumpTerminator temp_1 = this ;
  constinArgument_inSymbolTable.method_searchKey (temp_1.readProperty_mTargetLabelWhenFalse (), var_falseTargetAddress_59212, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1551)) ;
  const GGS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
  GGS_lstring var_Zlabel_59238 = GGS_lstring::init_21__21_ (GGS_string ("_Bcc_").add_operation (constinArgument_inAddress.getter_xString (SOURCE_FILE ("ipic18_terminators.galgas", 1552)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1552)), temp_2.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
    test_3 = GGS_bool (ComparisonKind::equal, temp_4.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_5 = this ;
      switch (temp_5.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GGS_conditionalBranchMode::Enumeration::invalid:
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_native:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_6 = this ;
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_7 = this ;
          outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_falseTargetAddress_59212, temp_6.readProperty_mTargetLabelWhenFalse (), temp_7.readProperty_mConditionalBranch (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1556)) ;
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_8 = this ;
          outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1558)), var_Zlabel_59238, temp_8.readProperty_mConditionalBranch (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1558)) ;
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_9 = this ;
          outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1559)), var_falseTargetAddress_59212, temp_9.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1559)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1559)) ;
          outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59238, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1560)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1560)) ;
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_10 = this ;
          outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GGS_uint (uint32_t (6U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1562)), var_Zlabel_59238, temp_10.readProperty_mConditionalBranch (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1562)) ;
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_11 = this ;
          outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_falseTargetAddress_59212, temp_11.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1563)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1563)) ;
          outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59238, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1564)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1564)) ;
        }
        break ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_13 = this ;
      test_12 = GGS_bool (ComparisonKind::equal, temp_13.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        const GGS_ipic_31__38_ConditionalJumpTerminator temp_14 = this ;
        switch (temp_14.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
        case GGS_conditionalBranchMode::Enumeration::invalid:
          break ;
        case GGS_conditionalBranchMode::Enumeration::enum_native:
          {
            const GGS_ipic_31__38_ConditionalJumpTerminator temp_15 = this ;
            const GGS_ipic_31__38_ConditionalJumpTerminator temp_16 = this ;
            outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_trueTargetAddress_59127, temp_15.readProperty_mTargetLabelWhenTrue (), temp_16.readProperty_mConditionalBranch (), GGS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1569)) ;
          }
          break ;
        case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
          {
            const GGS_ipic_31__38_ConditionalJumpTerminator temp_17 = this ;
            outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1571)), var_Zlabel_59238, temp_17.readProperty_mConditionalBranch (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1571)) ;
            const GGS_ipic_31__38_ConditionalJumpTerminator temp_18 = this ;
            outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1572)), var_trueTargetAddress_59127, temp_18.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1572)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1572)) ;
            outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59238, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1573)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1573)) ;
          }
          break ;
        case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
          {
            const GGS_ipic_31__38_ConditionalJumpTerminator temp_19 = this ;
            outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GGS_uint (uint32_t (6U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1575)), var_Zlabel_59238, temp_19.readProperty_mConditionalBranch (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1575)) ;
            const GGS_ipic_31__38_ConditionalJumpTerminator temp_20 = this ;
            outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_trueTargetAddress_59127, temp_20.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1576)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1576)) ;
            outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59238, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1577)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1577)) ;
          }
          break ;
        }
      }
    }
    if (GalgasBool::boolFalse == test_12) {
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_21 = this ;
      switch (temp_21.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GGS_conditionalBranchMode::Enumeration::invalid:
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_native:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_22 = this ;
          switch (temp_22.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GGS_conditionalBranchMode::Enumeration::invalid:
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_native:
          case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
            {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_23 = this ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_24 = this ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_falseTargetAddress_59212, temp_23.readProperty_mTargetLabelWhenFalse (), temp_24.readProperty_mConditionalBranch (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1584)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_25 = this ;
              outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1585)), var_trueTargetAddress_59127, temp_25.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1585)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1585)) ;
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
            {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_26 = this ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_27 = this ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_falseTargetAddress_59212, temp_26.readProperty_mTargetLabelWhenFalse (), temp_27.readProperty_mConditionalBranch (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1587)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_28 = this ;
              outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_trueTargetAddress_59127, temp_28.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1588)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1588)) ;
            }
            break ;
          }
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_29 = this ;
          switch (temp_29.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GGS_conditionalBranchMode::Enumeration::invalid:
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_native:
            {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_30 = this ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_31 = this ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_trueTargetAddress_59127, temp_30.readProperty_mTargetLabelWhenTrue (), temp_31.readProperty_mConditionalBranch (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1593)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_32 = this ;
              outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1594)), var_falseTargetAddress_59212, temp_32.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1594)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1594)) ;
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
            {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_33 = this ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1596)), var_Zlabel_59238, temp_33.readProperty_mConditionalBranch (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1596)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_34 = this ;
              outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1597)), var_falseTargetAddress_59212, temp_34.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1597)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1597)) ;
              outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59238, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1598)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1598)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_35 = this ;
              outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress, var_trueTargetAddress_59127, temp_35.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1599)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1599)) ;
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
            {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_36 = this ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1601)), var_Zlabel_59238, temp_36.readProperty_mConditionalBranch (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1601)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_37 = this ;
              outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1602)), var_falseTargetAddress_59212, temp_37.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1602)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1602)) ;
              outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59238, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1603)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1603)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_38 = this ;
              outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_trueTargetAddress_59127, temp_38.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1604)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1604)) ;
            }
            break ;
          }
        }
        break ;
      case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
        {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_39 = this ;
          switch (temp_39.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GGS_conditionalBranchMode::Enumeration::invalid:
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_native:
            {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_40 = this ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_41 = this ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_trueTargetAddress_59127, temp_40.readProperty_mTargetLabelWhenTrue (), temp_41.readProperty_mConditionalBranch (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1609)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_42 = this ;
              outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_falseTargetAddress_59212, temp_42.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1610)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1610)) ;
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicBRA:
            {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_43 = this ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GGS_uint (uint32_t (6U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1612)), var_Zlabel_59238, temp_43.readProperty_mConditionalBranch (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1612)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_44 = this ;
              outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_falseTargetAddress_59212, temp_44.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1613)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1613)) ;
              outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59238, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1614)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1614)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_45 = this ;
              outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GGS_uint (uint32_t (6U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1615)), var_trueTargetAddress_59127, temp_45.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1615)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1615)) ;
            }
            break ;
          case GGS_conditionalBranchMode::Enumeration::enum_ipicGOTO:
            {
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_46 = this ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GGS_uint (uint32_t (6U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1617)), var_Zlabel_59238, temp_46.readProperty_mConditionalBranch (), GGS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1617)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_47 = this ;
              outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_falseTargetAddress_59212, temp_47.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1618)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1618)) ;
              outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59238, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1619)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1619)) ;
              const GGS_ipic_31__38_ConditionalJumpTerminator temp_48 = this ;
              outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_trueTargetAddress_59127, temp_48.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1620)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1620)) ;
            }
            break ;
          }
        }
        break ;
      }
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ConditionalJumpTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GGS_bool cPtr_ipic_31__38_ConditionalJumpTerminator::getter_isEqualToTerminator (const GGS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_bool result_outResult ; // Returned variable
  result_outResult = GGS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_ipic_31__38_ConditionalJumpTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (nullptr != dynamic_cast <const cPtr_ipic_31__38_ConditionalJumpTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_ipic_31__38_ConditionalJumpTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38_ConditionalJumpTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1633)) ;
        }
      }
      GGS_ipic_31__38_ConditionalJumpTerminator var_t_64483 = temp_1 ;
      const GGS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
      result_outResult = GGS_bool (ComparisonKind::equal, temp_2.readProperty_mConditionalBranch ().objectCompare (var_t_64483.readProperty_mConditionalBranch ())) ;
      GalgasBool test_3 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_3) {
        test_3 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_3) {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
          result_outResult = GGS_bool (ComparisonKind::equal, temp_4.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (var_t_64483.readProperty_mTargetLabelWhenTrue ().readProperty_string ())) ;
        }
      }
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_6 = this ;
          result_outResult = GGS_bool (ComparisonKind::equal, temp_6.readProperty_mBranchModeOnTrueLabel ().objectCompare (var_t_64483.readProperty_mBranchModeOnTrueLabel ())) ;
        }
      }
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_8 = this ;
          result_outResult = GGS_bool (ComparisonKind::equal, temp_8.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (var_t_64483.readProperty_mTargetLabelWhenFalse ().readProperty_string ())) ;
        }
      }
      GalgasBool test_9 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_9) {
        test_9 = result_outResult.boolEnum () ;
        if (GalgasBool::boolTrue == test_9) {
          const GGS_ipic_31__38_ConditionalJumpTerminator temp_10 = this ;
          result_outResult = GGS_bool (ComparisonKind::equal, temp_10.readProperty_mBranchModeOnFalseLabel ().objectCompare (var_t_64483.readProperty_mBranchModeOnFalseLabel ())) ;
        }
      }
    }
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'midrange_analyze??'
//
//--------------------------------------------------------------------------------------------------

void routine_midrange_5F_analyze_3F__3F_ (const GGS_midrange_5F_model constinArgument_inPiccoloModel,
                                          const GGS_string constinArgument_inSourceFileName,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_string var_sourceFileBaseName_760 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("midrange_semantics.galgas", 17)).getter_deletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 17)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (ComparisonKind::notEqual, var_sourceFileBaseName_760.objectCompare (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_string ())).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GenericArray <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_location (), GGS_string ("the program name ('").add_operation (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 19)).add_operation (GGS_string ("') should be identical to the file base name '"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 19)).add_operation (var_sourceFileBaseName_760, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 20)).add_operation (GGS_string ("'"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 20)), fixItArray1  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 19)) ;
    }
  }
  GGS_string var_listFileContents_1102 = GGS_string::makeEmptyString () ;
  GGS_piccoloDeviceModel var_piccoloDeviceModel_1231 ;
  {
  routine_parseDeviceDefinition_3F__21_ (constinArgument_inPiccoloModel.readProperty_mDeviceName (), var_piccoloDeviceModel_1231, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 24)) ;
  }
  switch (var_piccoloDeviceModel_1231.readProperty_mProcessorType ().enumValue ()) {
  case GGS_processorType::Enumeration::invalid:
    break ;
  case GGS_processorType::Enumeration::enum_midrange:
    break ;
  case GGS_processorType::Enumeration::enum_pic_31__38__5F__36__30_:
  case GGS_processorType::Enumeration::enum_pic_31__38__5F__38__30_:
    {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mDeviceName ().readProperty_location (), GGS_string ("a pic18 device is not accepted here : only a mid-range device"), fixItArray2  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 27)) ;
    }
    break ;
  case GGS_processorType::Enumeration::enum_baseline:
    {
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mDeviceName ().readProperty_location (), GGS_string ("a baseline device is not accepted here : only a mid-range device"), fixItArray3  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 28)) ;
    }
    break ;
  }
  GGS_bool var_hasInterrupt_1628 = GGS_bool (false) ;
  UpEnumerator_midrange_5F_interruptDefinitionList enumerator_1681 (constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList ()) ;
  while (enumerator_1681.hasCurrentObject ()) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = var_hasInterrupt_1628.boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        GenericArray <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_1681.current_mInterruptLocation (HERE), GGS_string ("only one interrupt routine can be defined"), fixItArray5  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 34)) ;
      }
    }
    var_hasInterrupt_1628 = GGS_bool (true) ;
    enumerator_1681.gotoNextObject () ;
  }
  GGS_actualConfigurationMap var_actualConfigurationMap_2054 ;
  {
  routine_buildConfig_3F__3F__26__21_ (var_piccoloDeviceModel_1231.readProperty_mConfigRegisterMap (), constinArgument_inPiccoloModel.readProperty_mConfigDefinitionList (), var_listFileContents_1102, var_actualConfigurationMap_2054, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 39)) ;
  }
  GGS_constantMap var_constantMap_2153 = GGS_constantMap::init (inCompiler COMMA_HERE) ;
  GGS_stringset var_usedRegisters_2188 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  GGS_registerTable var_registerTable_2229 = var_piccoloDeviceModel_1231.readProperty_mRegisterTable () ;
  GGS_lstring var_romSizeString_2314 = GGS_lstring::init_21__21_ (GGS_string ("ROM_SIZE"), GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 50)), inCompiler COMMA_HERE) ;
  {
  var_constantMap_2153.setter_insertKey (var_romSizeString_2314, var_piccoloDeviceModel_1231.readProperty_mRomSize ().readProperty_uint ().getter_sint_36__34_ (SOURCE_FILE ("midrange_semantics.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 51)) ;
  }
  UpEnumerator_constantDefinitionList enumerator_2490 (constinArgument_inPiccoloModel.readProperty_mConstantDefinitionList ()) ;
  while (enumerator_2490.hasCurrentObject ()) {
    GGS_sint_36__34_ var_result_2612 ;
    callExtensionMethod_eval ((cPtr_immediatExpression *) enumerator_2490.current_mExpression (HERE).ptr (), var_registerTable_2229, var_constantMap_2153, var_result_2612, var_usedRegisters_2188, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 54)) ;
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      test_6 = var_registerTable_2229.getter_hasKey (enumerator_2490.current_mConstantName (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 55)).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        GenericArray <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_2490.current_mConstantName (HERE).readProperty_location (), GGS_string ("'").add_operation (enumerator_2490.current_mConstantName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 56)).add_operation (GGS_string ("' is already declared as ram register or special register"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 56)), fixItArray7  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 56)) ;
      }
    }
    if (GalgasBool::boolFalse == test_6) {
      {
      var_constantMap_2153.setter_insertKey (enumerator_2490.current_mConstantName (HERE), var_result_2612, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 58)) ;
      }
    }
    enumerator_2490.gotoNextObject () ;
  }
  GGS_ramBankTable var_ramBank_2949 = var_piccoloDeviceModel_1231.readProperty_mRamBankTable () ;
  GGS_declaredByteMap var_declaredByteMap_3241 ;
  {
  routine_analyze_5F_ram_5F_sections_3F__3F__3F__26__26__3F__26__26__21_ (GGS_string ("DECLARED VARIABLES"), constinArgument_inPiccoloModel.readProperty_mRamDefinitionList (), var_constantMap_2153, var_usedRegisters_2188, var_ramBank_2949, var_piccoloDeviceModel_1231.readProperty_mRegisterTable (), var_listFileContents_1102, var_registerTable_2229, var_declaredByteMap_3241, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 63)) ;
  }
  GGS_midrange_5F_intermediate_5F_instructionList var_generatedInstructionList_3681 ;
  {
  routine_build_5F_midrange_5F_assembly_5F_instruction_5F_list_3F__3F__3F__3F__3F__3F__3F__21__26__26_ (var_piccoloDeviceModel_1231.readProperty_mRomSize ().readProperty_uint ().add_operation (GGS_uint (uint32_t (2047U)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 76)).divide_operation (GGS_uint (uint32_t (2048U)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 76)), var_piccoloDeviceModel_1231.readProperty_mBankCount ().readProperty_uint (), var_constantMap_2153, var_piccoloDeviceModel_1231.readProperty_mSharedBankName (), var_registerTable_2229, constinArgument_inPiccoloModel, var_hasInterrupt_1628, var_generatedInstructionList_3681, var_listFileContents_1102, var_usedRegisters_2188, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 75)) ;
  }
  GGS_stringset var_usedRoutineSet_3829 = function_midrange_5F_computeUsedRoutines (constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList (), constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 89)) ;
  GGS_midrange_5F_declaredRoutineMap var_declaredRoutineMap_3975 = GGS_midrange_5F_declaredRoutineMap::init (inCompiler COMMA_HERE) ;
  UpEnumerator_midrange_5F_routineDefinitionList enumerator_4059 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList ()) ;
  while (enumerator_4059.hasCurrentObject ()) {
    {
    var_declaredRoutineMap_3975.setter_insertKey (enumerator_4059.current_mRoutineName (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 95)) ;
    }
    enumerator_4059.gotoNextObject () ;
  }
  GGS_stringset var_unusedRoutineDeclarationUnicity_4224 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_lstringlist enumerator_4278 (constinArgument_inPiccoloModel.readProperty_mUnusedRoutineList ()) ;
  while (enumerator_4278.hasCurrentObject ()) {
    GalgasBool test_8 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_8) {
      test_8 = var_declaredRoutineMap_3975.getter_hasKey (enumerator_4278.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 100)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 100)).boolEnum () ;
      if (GalgasBool::boolTrue == test_8) {
        GenericArray <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (enumerator_4278.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_4278.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 101)).add_operation (GGS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 101)), fixItArray9  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 101)) ;
      }
    }
    if (GalgasBool::boolFalse == test_8) {
      GalgasBool test_10 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_10) {
        test_10 = var_unusedRoutineDeclarationUnicity_4224.getter_hasKey (enumerator_4278.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 102)).boolEnum () ;
        if (GalgasBool::boolTrue == test_10) {
          GenericArray <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticWarning (enumerator_4278.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_4278.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 103)).add_operation (GGS_string ("' routine is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 103)), fixItArray11  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 103)) ;
        }
      }
      if (GalgasBool::boolFalse == test_10) {
        GalgasBool test_12 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_12) {
          test_12 = var_usedRoutineSet_3829.getter_hasKey (enumerator_4278.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 104)).boolEnum () ;
          if (GalgasBool::boolTrue == test_12) {
            GenericArray <FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticWarning (enumerator_4278.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_4278.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 105)).add_operation (GGS_string ("' routine is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 105)), fixItArray13  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 105)) ;
          }
        }
      }
    }
    var_unusedRoutineDeclarationUnicity_4224.plusPlusAssignOperation (enumerator_4278.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 107)) ;
    enumerator_4278.gotoNextObject () ;
  }
  UpEnumerator_midrange_5F_declaredRoutineMap enumerator_4827 (var_declaredRoutineMap_3975) ;
  while (enumerator_4827.hasCurrentObject ()) {
    GalgasBool test_14 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_14) {
      test_14 = var_usedRoutineSet_3829.getter_hasKey (enumerator_4827.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 110)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 110)).operator_and (var_unusedRoutineDeclarationUnicity_4224.getter_hasKey (enumerator_4827.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 110)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 110)) COMMA_SOURCE_FILE ("midrange_semantics.galgas", 110)).boolEnum () ;
      if (GalgasBool::boolTrue == test_14) {
        GenericArray <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticWarning (enumerator_4827.current_lkey (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_4827.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 111)).add_operation (GGS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 111)), fixItArray15  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 111)) ;
      }
    }
    enumerator_4827.gotoNextObject () ;
  }
  GGS_stringset var_unusedByteDeclarationUnicity_5147 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  UpEnumerator_lstringlist enumerator_5198 (constinArgument_inPiccoloModel.readProperty_mUnusedRegisterList ()) ;
  while (enumerator_5198.hasCurrentObject ()) {
    GalgasBool test_16 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_16) {
      test_16 = var_registerTable_2229.getter_hasKey (enumerator_5198.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 117)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 117)).boolEnum () ;
      if (GalgasBool::boolTrue == test_16) {
        GenericArray <FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (enumerator_5198.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_5198.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 118)).add_operation (GGS_string ("' byte is not declared"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 118)), fixItArray17  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 118)) ;
      }
    }
    if (GalgasBool::boolFalse == test_16) {
      GalgasBool test_18 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_18) {
        test_18 = var_unusedByteDeclarationUnicity_5147.getter_hasKey (enumerator_5198.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 119)).boolEnum () ;
        if (GalgasBool::boolTrue == test_18) {
          GenericArray <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticWarning (enumerator_5198.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_5198.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 120)).add_operation (GGS_string ("' byte is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 120)), fixItArray19  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 120)) ;
        }
      }
      if (GalgasBool::boolFalse == test_18) {
        GalgasBool test_20 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_20) {
          test_20 = var_usedRegisters_2188.getter_hasKey (enumerator_5198.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 121)).boolEnum () ;
          if (GalgasBool::boolTrue == test_20) {
            GenericArray <FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticWarning (enumerator_5198.current_mValue (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_5198.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 122)).add_operation (GGS_string ("' byte is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 122)), fixItArray21  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 122)) ;
          }
        }
      }
    }
    var_unusedByteDeclarationUnicity_5147.plusPlusAssignOperation (enumerator_5198.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 124)) ;
    enumerator_5198.gotoNextObject () ;
  }
  UpEnumerator_declaredByteMap enumerator_5727 (var_declaredByteMap_3241) ;
  while (enumerator_5727.hasCurrentObject ()) {
    GalgasBool test_22 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_22) {
      test_22 = var_usedRegisters_2188.getter_hasKey (enumerator_5727.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 127)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 127)).operator_and (var_unusedByteDeclarationUnicity_5147.getter_hasKey (enumerator_5727.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 127)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 127)) COMMA_SOURCE_FILE ("midrange_semantics.galgas", 127)).boolEnum () ;
      if (GalgasBool::boolTrue == test_22) {
        GenericArray <FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticWarning (enumerator_5727.current_lkey (HERE).readProperty_location (), GGS_string ("the '").add_operation (enumerator_5727.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 128)).add_operation (GGS_string ("' byte is unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 128)), fixItArray23  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 128)) ;
      }
    }
    enumerator_5727.gotoNextObject () ;
  }
  GalgasBool test_24 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_24) {
    test_24 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("midrange_semantics.galgas", 132)).objectCompare (GGS_uint (uint32_t (0U)))).operator_and (GGS_bool (gOption_piccoloOptions_performOptimizations.readProperty_value ()) COMMA_SOURCE_FILE ("midrange_semantics.galgas", 132)).boolEnum () ;
    if (GalgasBool::boolTrue == test_24) {
      {
      routine_perform_5F_midrange_5F_optimizations_26__26_ (var_generatedInstructionList_3681, var_listFileContents_1102, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 133)) ;
      }
    }
  }
  GalgasBool test_25 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_25) {
    test_25 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("midrange_semantics.galgas", 136)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_25) {
      {
      routine_midrange_5F_compute_5F_JSR_5F_JUMP_26__26_ (var_generatedInstructionList_3681, var_listFileContents_1102, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 137)) ;
      }
    }
  }
  GalgasBool test_26 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_26) {
    test_26 = GGS_bool (ComparisonKind::equal, GGS_uint::class_func_errorCount (SOURCE_FILE ("midrange_semantics.galgas", 141)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_26) {
      GGS_uint var_usedROMsize_6765 ;
      {
      routine_build_5F_midrange_5F_ipic_5F_binary_5F_code_3F__3F__3F__3F__3F__3F__26__21_ (var_registerTable_2229, GGS_constantMap::init (inCompiler COMMA_HERE), var_piccoloDeviceModel_1231.readProperty_mBankCount ().readProperty_uint (), var_generatedInstructionList_3681, var_piccoloDeviceModel_1231.readProperty_mRomSize ().readProperty_uint (), var_actualConfigurationMap_2054, var_listFileContents_1102, var_usedROMsize_6765, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 143)) ;
      }
      GGS_string var_contents_6799 ;
      {
      routine_getGeneratedContents_21_ (var_contents_6799, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 154)) ;
      }
      GGS_string var_destinationFile_6863 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 155)).add_operation (GGS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 155)) ;
      GGS_bool joker_6995 ; // Joker input parameter
      var_contents_6799.method_writeToFileWhenDifferentContents (var_destinationFile_6863, joker_6995, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 156)) ;
      GalgasBool test_27 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_27) {
        test_27 = GGS_bool (gOption_piccoloOptions_output_5F_C_5F_Array.readProperty_value ()).boolEnum () ;
        if (GalgasBool::boolTrue == test_27) {
          GGS_string var_baseName_7074 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("midrange_semantics.galgas", 158)).getter_deletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 158)) ;
          {
          routine_get_5F_C_5F_ArrayImplementation_3F__21_ (var_baseName_7074, var_contents_6799, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 159)) ;
          }
          var_destinationFile_6863 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 160)).add_operation (GGS_string (".c"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 160)) ;
          GGS_bool joker_7340 ; // Joker input parameter
          var_contents_6799.method_writeToFileWhenDifferentContents (var_destinationFile_6863, joker_7340, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 161)) ;
          {
          routine_get_5F_C_5F_ArrayHeader_3F__21_ (var_baseName_7074, var_contents_6799, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 162)) ;
          }
          var_destinationFile_6863 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 163)).add_operation (GGS_string (".h"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 163)) ;
          GGS_bool joker_7530 ; // Joker input parameter
          var_contents_6799.method_writeToFileWhenDifferentContents (var_destinationFile_6863, joker_7530, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 164)) ;
        }
      }
      GalgasBool test_28 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_28) {
        test_28 = GGS_application::class_func_verboseOutput (SOURCE_FILE ("midrange_semantics.galgas", 167)).boolEnum () ;
        if (GalgasBool::boolTrue == test_28) {
          GGS_string var_verboseMessage_7636 = GGS_string ("  ROM size: ").add_operation (var_piccoloDeviceModel_1231.readProperty_mRomSize ().readProperty_uint ().getter_string (SOURCE_FILE ("midrange_semantics.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 168)).add_operation (GGS_string (" words;"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 168)) ;
          var_verboseMessage_7636.plusAssignOperation(GGS_string (" used: ").add_operation (var_usedROMsize_6765.getter_string (SOURCE_FILE ("midrange_semantics.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 169)).add_operation (GGS_string (" words ("), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 169)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 169)) ;
          var_verboseMessage_7636.plusAssignOperation(var_usedROMsize_6765.multiply_operation (GGS_uint (uint32_t (100U)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 170)).divide_operation (var_piccoloDeviceModel_1231.readProperty_mRomSize ().readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 170)).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 170)).add_operation (GGS_string ("%).\n"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 170)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 170)) ;
          UpEnumerator_ramBankTable enumerator_7960 (var_ramBank_2949) ;
          while (enumerator_7960.hasCurrentObject ()) {
            GGS_uint var_bankSize_7996 = enumerator_7960.current_mLastAddressPlusOne (HERE).substract_operation (enumerator_7960.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 172)) ;
            GGS_uint var_usedSize_8061 = enumerator_7960.current_mFirstFreeAddress (HERE).substract_operation (enumerator_7960.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 173)) ;
            var_verboseMessage_7636.plusAssignOperation(GGS_string ("  Bank '").add_operation (enumerator_7960.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 174)).add_operation (GGS_string ("': used "), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 174)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 174)) ;
            var_verboseMessage_7636.plusAssignOperation(var_usedSize_8061.getter_string (SOURCE_FILE ("midrange_semantics.galgas", 175)).add_operation (GGS_string (" / "), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 175)) ;
            var_verboseMessage_7636.plusAssignOperation(var_bankSize_7996.getter_string (SOURCE_FILE ("midrange_semantics.galgas", 176)).add_operation (GGS_string (" bytes ("), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 176)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 176)) ;
            var_verboseMessage_7636.plusAssignOperation(var_usedSize_8061.multiply_operation (GGS_uint (uint32_t (100U)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 177)).divide_operation (var_bankSize_7996, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 177)).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 177)).add_operation (GGS_string ("%).\n"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 177)) ;
            enumerator_7960.gotoNextObject () ;
          }
          {
          routine_print_3F_ (var_verboseMessage_7636, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 179)) ;
          }
        }
      }
      GalgasBool test_29 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_29) {
        test_29 = GGS_bool (gOption_piccoloOptions_generateAssembly.readProperty_value ()).boolEnum () ;
        if (GalgasBool::boolTrue == test_29) {
          GGS_string var_assemblyCode_8528 ;
          {
          routine_midrange_5F_build_5F_assembly_5F_code_3F__3F__3F__3F__3F__21_ (var_piccoloDeviceModel_1231.readProperty_mDeviceName ().readProperty_string (), var_piccoloDeviceModel_1231.readProperty_mRegisterTable (), var_registerTable_2229, var_generatedInstructionList_3681, var_actualConfigurationMap_2054, var_assemblyCode_8528, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 184)) ;
          }
          GGS_string var_asmDestinationFile_8805 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 192)).add_operation (GGS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 192)) ;
          GGS_bool joker_8949 ; // Joker input parameter
          var_assemblyCode_8528.method_writeToFileWhenDifferentContents (var_asmDestinationFile_8805, joker_8949, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 193)) ;
        }
      }
    }
  }
  if (GalgasBool::boolFalse == test_26) {
    GGS_string var_hexDestinationFile_9030 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 196)).add_operation (GGS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 196)) ;
    GalgasBool test_30 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_30) {
      test_30 = var_hexDestinationFile_9030.getter_fileExists (SOURCE_FILE ("midrange_semantics.galgas", 197)).boolEnum () ;
      if (GalgasBool::boolTrue == test_30) {
        {
        GGS_string::class_method_deleteFile (var_hexDestinationFile_9030, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 198)) ;
        }
      }
    }
    GGS_string var_asmDestinationFile_9216 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 200)).add_operation (GGS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 200)) ;
    GalgasBool test_31 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_31) {
      test_31 = var_asmDestinationFile_9216.getter_fileExists (SOURCE_FILE ("midrange_semantics.galgas", 201)).boolEnum () ;
      if (GalgasBool::boolTrue == test_31) {
        {
        GGS_string::class_method_deleteFile (var_asmDestinationFile_9216, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 202)) ;
        }
      }
    }
  }
  GalgasBool test_32 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_32) {
    test_32 = GGS_bool (gOption_piccoloOptions_ouputListingFile.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_32) {
      GGS_string var_listFile_9512 = constinArgument_inSourceFileName.getter_deletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 207)).add_operation (GGS_string (".list"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 207)) ;
      GGS_bool joker_9639 ; // Joker input parameter
      var_listFileContents_1102.method_writeToFileWhenDifferentContents (var_listFile_9512, joker_9639, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 208)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//                               Bool options                                                    
//
//--------------------------------------------------------------------------------------------------

BoolCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputBaselineDeviceList ("piccolo_options_not_in_cocoa",
                                         "outputBaselineDeviceList",
                                         0,
                                         "baseline",
                                         "Output the list of supported baseline devices") ;

BoolCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputDeviceList ("piccolo_options_not_in_cocoa",
                                         "outputDeviceList",
                                         68,
                                         "device-list",
                                         "Output the list of supported devices") ;

BoolCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputMidrangeDeviceList ("piccolo_options_not_in_cocoa",
                                         "outputMidrangeDeviceList",
                                         0,
                                         "midrange",
                                         "Output the list of supported mid-range devices") ;

BoolCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputPic_31__38_DeviceList ("piccolo_options_not_in_cocoa",
                                         "outputPic18DeviceList",
                                         0,
                                         "pic18",
                                         "Output the list of supported pic18 devices") ;

//--------------------------------------------------------------------------------------------------
//
//                               UInt options                                                    
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------
//
//                              String options                                                   
//
//--------------------------------------------------------------------------------------------------

StringCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_exportDeviceFiles ("piccolo_options_not_in_cocoa",
                                         "exportDeviceFiles",
                                         69,
                                         "export",
                                         "Export device definition files to the directory named by string",
                                         "") ;

StringCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_memoryDescription ("piccolo_options_not_in_cocoa",
                                         "memoryDescription",
                                         77,
                                         "memory",
                                         "Output the RAM, ROM and EEPROM description of the device named by string",
                                         "") ;

StringCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_configDescription ("piccolo_options_not_in_cocoa",
                                         "configDescription",
                                         70,
                                         "configuration",
                                         "Output the configuration register description of the device named by string",
                                         "") ;

StringCommandLineOption gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_registerDescription ("piccolo_options_not_in_cocoa",
                                         "registerDescription",
                                         82,
                                         "registers",
                                         "Output the special register description of the device named by string",
                                         "") ;

//--------------------------------------------------------------------------------------------------
//
//                              String List options                                              
//
//--------------------------------------------------------------------------------------------------

//--------------------------------------------------------------------------------------------------


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_withNoOperand analyzeSimpleInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_withNoOperand::method_analyzeSimpleInstruction (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
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
  const GGS_pic_31__38_Instruction_5F_withNoOperand temp_0 = this ;
  const GGS_pic_31__38_Instruction_5F_withNoOperand temp_1 = this ;
  outArgument_outInstruction = GGS_ipic_31__38_InstructionWithNoOperand::init_21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mKind (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_FDA analyzeSimpleInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FDA::method_analyzeSimpleInstruction (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                          const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                          const GGS_registerTable constinArgument_inRegisterTable,
                                                                          const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                          const GGS_constantMap constinArgument_inConstantMap,
                                                                          GGS_uint & ioArgument_ioCurrentBank,
                                                                          const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                          GGS_stringset & ioArgument_ioUsedRegisters,
                                                                          GGS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_6663 ;
  const GGS_pic_31__38_Instruction_5F_FDA temp_0 = this ;
  const GGS_pic_31__38_Instruction_5F_FDA temp_1 = this ;
  GGS_bitSliceTable joker_6691 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, temp_1.readProperty_m_5F_W_5F_isDestination ().operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 178)), var_IPICregisterDescription_6663, joker_6691, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 173)) ;
  const GGS_pic_31__38_Instruction_5F_FDA temp_2 = this ;
  const GGS_pic_31__38_Instruction_5F_FDA temp_3 = this ;
  const GGS_pic_31__38_Instruction_5F_FDA temp_4 = this ;
  outArgument_outInstruction = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::init_21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mInstruction_5F_FDA_5F_base_5F_code (), var_IPICregisterDescription_6663, temp_4.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_FA analyzeSimpleInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FA::method_analyzeSimpleInstruction (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                         const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                         const GGS_registerTable constinArgument_inRegisterTable,
                                                                         const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                         const GGS_constantMap constinArgument_inConstantMap,
                                                                         GGS_uint & ioArgument_ioCurrentBank,
                                                                         const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                         GGS_stringset & ioArgument_ioUsedRegisters,
                                                                         GGS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_7596 ;
  const GGS_pic_31__38_Instruction_5F_FA temp_0 = this ;
  GGS_bitSliceTable joker_7624 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_IPICregisterDescription_7596, joker_7624, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 203)) ;
  GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code var_code_7696 ;
  const GGS_pic_31__38_Instruction_5F_FA temp_1 = this ;
  switch (temp_1.readProperty_mFAinstruction ().enumValue ()) {
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_CLRF:
    {
      var_code_7696 = GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 215)) ;
    }
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_MOVWF:
    {
      var_code_7696 = GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 216)) ;
    }
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_MULWF:
    {
      var_code_7696 = GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MULWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 217)) ;
    }
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_NEGF:
    {
      var_code_7696 = GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_NEGF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 218)) ;
    }
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_SETF:
    {
      var_code_7696 = GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 219)) ;
    }
    break ;
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSEQ:
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSGT:
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSLT:
  case GGS_FA_5F_instruction_5F_base_5F_code::Enumeration::enum_TSTFSZ:
    {
      GenericArray <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (GGS_location::class_func_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 221)), GGS_string ("*** INTERNAL ERROR ***"), fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 221)) ;
      var_code_7696.drop () ; // Release error dropped variable
    }
    break ;
  }
  const GGS_pic_31__38_Instruction_5F_FA temp_3 = this ;
  outArgument_outInstruction = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_3.readProperty_mInstructionLocation (), var_code_7696, var_IPICregisterDescription_7596, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_MOVFF analyzeSimpleInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_MOVFF::method_analyzeSimpleInstruction (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                            const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                            const GGS_registerTable constinArgument_inRegisterTable,
                                                                            const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                            const GGS_constantMap constinArgument_inConstantMap,
                                                                            GGS_uint & /* ioArgument_ioCurrentBank */,
                                                                            const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                            GGS_stringset & ioArgument_ioUsedRegisters,
                                                                            GGS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_sourceIPICregisterDescription_8989 ;
  const GGS_pic_31__38_Instruction_5F_MOVFF temp_0 = this ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((cPtr_registerExpression *) temp_0.readProperty_mSourceRegisterName ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (false), var_sourceIPICregisterDescription_8989, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 241)) ;
  GGS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_destinationIPICregisterDescription_9254 ;
  const GGS_pic_31__38_Instruction_5F_MOVFF temp_1 = this ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((cPtr_registerExpression *) temp_1.readProperty_mDestinationRegisterName ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_destinationIPICregisterDescription_9254, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 248)) ;
  const GGS_pic_31__38_Instruction_5F_MOVFF temp_2 = this ;
  outArgument_outInstruction = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::init_21__21__21_ (temp_2.readProperty_mInstructionLocation (), var_sourceIPICregisterDescription_8989, var_destinationIPICregisterDescription_9254, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_FBA analyzeSimpleInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FBA::method_analyzeSimpleInstruction (const GGS_uint constinArgument_inAccessBankSplitOffset,
                                                                          const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                          const GGS_registerTable constinArgument_inRegisterTable,
                                                                          const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                          const GGS_constantMap constinArgument_inConstantMap,
                                                                          GGS_uint & ioArgument_ioCurrentBank,
                                                                          const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                          GGS_stringset & ioArgument_ioUsedRegisters,
                                                                          GGS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GGS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_10148 ;
  GGS_bitSliceTable var_bitSliceTable_10196 ;
  const GGS_pic_31__38_Instruction_5F_FBA temp_0 = this ;
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GGS_bool (true), var_IPICregisterDescription_10148, var_bitSliceTable_10196, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 273)) ;
  GGS_uint var_bitNumber_10364 ;
  const GGS_pic_31__38_Instruction_5F_FBA temp_1 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_10196, var_bitNumber_10364, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 283)) ;
  const GGS_pic_31__38_Instruction_5F_FBA temp_2 = this ;
  const GGS_pic_31__38_Instruction_5F_FBA temp_3 = this ;
  outArgument_outInstruction = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::init_21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mBitOrientedOp (), var_IPICregisterDescription_10148, var_bitNumber_10364, inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_literalOperation analyzeSimpleInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_literalOperation::method_analyzeSimpleInstruction (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                                       const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                                       const GGS_registerTable constinArgument_inRegisterTable,
                                                                                       const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                                       const GGS_constantMap constinArgument_inConstantMap,
                                                                                       GGS_uint & /* ioArgument_ioCurrentBank */,
                                                                                       const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                                       GGS_stringset & ioArgument_ioUsedRegisters,
                                                                                       GGS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_result_11095 ;
  const GGS_pic_31__38_Instruction_5F_literalOperation temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mImmediatExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_11095, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 309)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::greaterThan, var_result_11095.objectCompare (GGS_sint_36__34_ (int64_t (255LL)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_result_11095.objectCompare (GGS_sint_36__34_ (int64_t (-128LL)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 311)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_pic_31__38_Instruction_5F_literalOperation temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("immediate value is evaluated as ").add_operation (var_result_11095.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 312)).add_operation (GGS_string (" (should be between -128 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 312)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 312)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_literalOperation temp_4 = this ;
  const GGS_pic_31__38_Instruction_5F_literalOperation temp_5 = this ;
  outArgument_outInstruction = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mLiteralInstruction (), var_result_11095.operator_and (GGS_sint_36__34_ (int64_t (255LL)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 318)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 318)), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_fnop analyzeSimpleInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_fnop::method_analyzeSimpleInstruction (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                           const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                           const GGS_registerTable constinArgument_inRegisterTable,
                                                                           const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                           const GGS_constantMap constinArgument_inConstantMap,
                                                                           GGS_uint & /* ioArgument_ioCurrentBank */,
                                                                           const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                           GGS_stringset & ioArgument_ioUsedRegisters,
                                                                           GGS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GGS_sint_36__34_ var_result_12023 ;
  const GGS_pic_31__38_Instruction_5F_fnop temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mImmediatExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_12023, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 333)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::greaterThan, var_result_12023.objectCompare (GGS_sint_36__34_ (int64_t (4095LL)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_result_12023.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 335)).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_pic_31__38_Instruction_5F_fnop temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GGS_string ("immediate value is evaluated as ").add_operation (var_result_12023.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 336)).add_operation (GGS_string (" (should be between 0 and 4095)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 336)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 336)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_fnop temp_4 = this ;
  outArgument_outInstruction = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::init_21__21_ (temp_4.readProperty_mInstructionLocation (), var_result_12023.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 341)), inCompiler COMMA_HERE) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_LFSR analyzeSimpleInstruction'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LFSR::method_analyzeSimpleInstruction (const GGS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                           const GGS_routineMap /* constinArgument_inRoutineMap */,
                                                                           const GGS_registerTable constinArgument_inRegisterTable,
                                                                           const GGS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                           const GGS_constantMap constinArgument_inConstantMap,
                                                                           GGS_uint & /* ioArgument_ioCurrentBank */,
                                                                           const GGS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                           GGS_stringset & ioArgument_ioUsedRegisters,
                                                                           GGS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_pic_31__38_Instruction_5F_LFSR temp_1 = this ;
    test_0 = GGS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mFSRindex ().readProperty_uint ().objectCompare (GGS_uint (uint32_t (2U)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      const GGS_pic_31__38_Instruction_5F_LFSR temp_2 = this ;
      const GGS_pic_31__38_Instruction_5F_LFSR temp_3 = this ;
      GenericArray <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mFSRindex ().readProperty_location (), GGS_string ("the LFSR register idx (").add_operation (temp_3.readProperty_mFSRindex ().readProperty_uint ().getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 357)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 357)).add_operation (GGS_string (") should be lower or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 357)), fixItArray4  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 357)) ;
    }
  }
  GGS_sint_36__34_ var_result_13056 ;
  const GGS_pic_31__38_Instruction_5F_LFSR temp_5 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_5.readProperty_mImmediatExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_13056, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 360)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    test_6 = GGS_bool (ComparisonKind::greaterThan, var_result_13056.objectCompare (GGS_sint_36__34_ (int64_t (4095LL)))).operator_or (GGS_bool (ComparisonKind::lowerThan, var_result_13056.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 362)).boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_pic_31__38_Instruction_5F_LFSR temp_7 = this ;
      GenericArray <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mInstructionLocation (), GGS_string ("immediate value is evaluated as ").add_operation (var_result_13056.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 363)).add_operation (GGS_string (" (should be between 0 and 4095)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 363)), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 363)) ;
    }
  }
  const GGS_pic_31__38_Instruction_5F_LFSR temp_9 = this ;
  const GGS_pic_31__38_Instruction_5F_LFSR temp_10 = this ;
  outArgument_outInstruction = GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::init_21__21__21_ (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mFSRindex (), var_result_13056.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 368)), inCompiler COMMA_HERE) ;
}

