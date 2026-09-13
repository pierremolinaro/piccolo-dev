#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-15.h"

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
  GGS_filewrapper var_fw_321 = GGS_filewrapper (gWrapperDirectory_0_embeddedDevices) ;
  GGS_string var_deviceFullName_370 = constinArgument_inDeviceName.readProperty_string ().add_operation (GGS_string (".piccoloDevice"), inCompiler COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas3", 17)) ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = var_fw_321.getter_fileExistsAtPath (var_deviceFullName_370, inCompiler COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas3", 18)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_string var_definitionString_490 = var_fw_321.getter_textFileContentsAtPath (var_deviceFullName_370, inCompiler COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas3", 19)) ;
      outArgument_outPiccoloDeviceModel.drop () ;
      cGrammar_piccoloDevice_5F_grammar::_performSourceStringParsing_ (inCompiler, var_definitionString_490, var_deviceFullName_370, outArgument_outPiccoloDeviceModel  COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas3", 20)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    GenericArray <FixItDescription> fixItArray1 ;
    inCompiler->emitSemanticError (constinArgument_inDeviceName.readProperty_location (), GGS_string ("The '").add_operation (constinArgument_inDeviceName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas3", 24)).add_operation (GGS_string ("' definition file is not defined"), inCompiler COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas3", 24)), fixItArray1  COMMA_SOURCE_FILE ("piccolo_embedded_devices.galgas3", 22)) ;
    outArgument_outPiccoloDeviceModel.drop () ; // Release error dropped variable
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_pseudo_ORG print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_ORG::method_print (GGS_string & ioArgument_ioListFileContents,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_pseudo_5F_ORG temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ORG ").add_operation (temp_0.readProperty_mOrigin ().getter_hexString (SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 8)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 8)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 8)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_pseudo_BEGINOFROUTINE print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_pseudo_5F_BEGINOFROUTINE temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string (";  BEGIN OF ROUTINE ").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 14)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 14)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_pseudo_ENDOFROUTINE print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE temp_0 = this ;
  const GGS_baseline_5F_assembly_5F_pseudo_5F_ENDOFROUTINE temp_1 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string (";  END OF ROUTINE ").add_operation (temp_0.readProperty_mRoutineName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 20)).add_operation (GGS_string (" IN PAGE "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 20)).add_operation (temp_1.readProperty_mPage ().getter_string (SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 20)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 20)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 20)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_pseudo_LABEL print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_pseudo_5F_LABEL::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_pseudo_5F_LABEL temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(temp_0.readProperty_mLabel ().readProperty_string ().add_operation (GGS_string (":"), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 26)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 26)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_instruction_FD print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_FD::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_instruction_5F_FD temp_0 = this ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_FD temp_1 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 32)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 32)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 32)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 32)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 32)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_baseline_5F_assembly_5F_instruction_5F_FD temp_3 = this ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 34)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string (", 1"), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 36)) ;
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
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 43)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 43)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 43)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 43)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 43)) ;
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
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 49)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 49)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 49)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 49)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 49)).add_operation (temp_2.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 49)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 49)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 49)) ;
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
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  BTFSS "), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 56)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  BTFSC "), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 58)) ;
  }
  const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip temp_2 = this ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_BitTestSkip temp_3 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString ().add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 60)).add_operation (temp_3.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 60)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 60)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 60)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_GOTO print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_GOTO::method_print (GGS_string & ioArgument_ioListFileContents,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_GOTO temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  GOTO ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 66)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 66)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_SKIP print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_SKIP::method_print (GGS_string & ioArgument_ioListFileContents,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  GOTO * + 2"), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 72)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_CALL print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_CALL::method_print (GGS_string & ioArgument_ioListFileContents,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_CALL temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  CALL ").add_operation (temp_0.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 79)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 79)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_instruction_literalOperation print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_instruction_5F_literalOperation::method_print (GGS_string & ioArgument_ioListFileContents,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation temp_0 = this ;
  const GGS_baseline_5F_assembly_5F_instruction_5F_literalOperation temp_1 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 85)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 85)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 85)).add_operation (temp_1.readProperty_mLiteralValue ().getter_hexString (SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 85)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 85)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 85)) ;
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
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  INCFSZ "), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 92)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  DECFSZ "), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 94)) ;
  }
  const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition temp_2 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 96)) ;
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_baseline_5F_assembly_5F_incDecRegisterInCondition temp_4 = this ;
    test_3 = temp_4.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 98)) ;
    }
  }
  if (GalgasBool::boolFalse == test_3) {
    ioArgument_ioListFileContents.plusAssignOperation(GGS_string (", 1"), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 100)) ;
  }
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_WO_OPERAND print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_WO_5F_OPERAND::method_print (GGS_string & ioArgument_ioListFileContents,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_WO_5F_OPERAND temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mInstruction (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 107)), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 107)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 107)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_assembly_TRIS print'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_assembly_5F_TRIS::method_print (GGS_string & ioArgument_ioListFileContents,
                                                      Compiler * inCompiler
                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_assembly_5F_TRIS temp_0 = this ;
  ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  TRIS ").add_operation (temp_0.readProperty_mOperand ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 113)), inCompiler  COMMA_SOURCE_FILE ("baseline_print_assembly_instructions.galgas3", 113)) ;
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
  result_outSize = GGS_uint (uint32_t (2U)).add_operation (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 14)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 14)) ;
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
  callExtensionMethod_instructionRelativeBranchOverflow ((cPtr_ipic_31__38_SequentialInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 41)), constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 40)) ;
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
  result_outResult = GGS_stringlist::class_func_listWithValue (extensionGetter_mnemonic (temp_0.readProperty_mKind (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 80))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 80)) ;
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
  GGS_uint var_c_2926 ;
  const GGS_ipic_31__38_InstructionWithNoOperand temp_0 = this ;
  switch (temp_0.readProperty_mKind ().enumValue ()) {
  case GGS_pic_31__38_InstructionWithNoOperandKind::Enumeration::invalid:
    break ;
  case GGS_pic_31__38_InstructionWithNoOperandKind::Enumeration::enum_CLRWDT:
    {
      var_c_2926 = GGS_uint (uint32_t (4U)) ;
    }
    break ;
  case GGS_pic_31__38_InstructionWithNoOperandKind::Enumeration::enum_DAW:
    {
      var_c_2926 = GGS_uint (uint32_t (7U)) ;
    }
    break ;
  case GGS_pic_31__38_InstructionWithNoOperandKind::Enumeration::enum_NOP:
    {
      var_c_2926 = GGS_uint (uint32_t (0U)) ;
    }
    break ;
  case GGS_pic_31__38_InstructionWithNoOperandKind::Enumeration::enum_POP:
    {
      var_c_2926 = GGS_uint (uint32_t (6U)) ;
    }
    break ;
  case GGS_pic_31__38_InstructionWithNoOperandKind::Enumeration::enum_PUSH:
    {
      var_c_2926 = GGS_uint (uint32_t (5U)) ;
    }
    break ;
  case GGS_pic_31__38_InstructionWithNoOperandKind::Enumeration::enum_RESET:
    {
      var_c_2926 = GGS_uint (uint32_t (255U)) ;
    }
    break ;
  case GGS_pic_31__38_InstructionWithNoOperandKind::Enumeration::enum_SLEEP:
    {
      var_c_2926 = GGS_uint (uint32_t (3U)) ;
    }
    break ;
  }
  const GGS_ipic_31__38_InstructionWithNoOperand temp_1 = this ;
  GGS_uintlist temp_2 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 109)) ;
  temp_2.plusPlusAssignOperation (GGS_uintlist_2E_element::init_21_ (var_c_2926, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 109)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    ").add_operation (extensionGetter_mnemonic (temp_1.readProperty_mKind (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 108)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 108)), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 107)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_FDA instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::getter_instructionDisplay (Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  GGS_string var_s_3580 ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_0 = this ;
  switch (temp_0.readProperty_mInstruction_5F_FDA_5F_base_5F_code ().enumValue ()) {
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::invalid:
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_ADDWF:
    {
      var_s_3580 = GGS_string ("ADDWF") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_ADDWFC:
    {
      var_s_3580 = GGS_string ("ADDWFC") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_ANDWF:
    {
      var_s_3580 = GGS_string ("ANDWF") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_COMF:
    {
      var_s_3580 = GGS_string ("COMF") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_DECF:
    {
      var_s_3580 = GGS_string ("DECF") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_INCF:
    {
      var_s_3580 = GGS_string ("INCF") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_IORWF:
    {
      var_s_3580 = GGS_string ("IORWF") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_MOVF:
    {
      var_s_3580 = GGS_string ("MOVF") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_RLCF:
    {
      var_s_3580 = GGS_string ("RLCF") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_RLNCF:
    {
      var_s_3580 = GGS_string ("RLNCF") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_RRCF:
    {
      var_s_3580 = GGS_string ("RRCF") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_RRNCF:
    {
      var_s_3580 = GGS_string ("RRNCF") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_SUBFWB:
    {
      var_s_3580 = GGS_string ("SUBFWB") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_SUBWF:
    {
      var_s_3580 = GGS_string ("SUBWF") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_SUBWFB:
    {
      var_s_3580 = GGS_string ("SUBWFB") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_SWAPF:
    {
      var_s_3580 = GGS_string ("SWAPF") ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_XORWF:
    {
      var_s_3580 = GGS_string ("XORWF") ;
    }
    break ;
  }
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_1 = this ;
  var_s_3580.plusAssignOperation(GGS_string (" ").add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 141)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 141)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_3 = this ;
    const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_4 = this ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().operator_and (temp_4.readProperty_mRegisterDescription ().readProperty_mNeedsBSR () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 142)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      var_s_3580.plusAssignOperation(GGS_string (", W, BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 143)) ;
    }
  }
  if (GalgasBool::boolFalse == test_2) {
    GalgasBool test_5 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_5) {
      const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_6 = this ;
      test_5 = temp_6.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
      if (GalgasBool::boolTrue == test_5) {
        var_s_3580.plusAssignOperation(GGS_string (", F, BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 145)) ;
      }
    }
    if (GalgasBool::boolFalse == test_5) {
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_8 = this ;
        test_7 = temp_8.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          var_s_3580.plusAssignOperation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 147)) ;
        }
      }
      if (GalgasBool::boolFalse == test_7) {
        var_s_3580.plusAssignOperation(GGS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 149)) ;
      }
    }
  }
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_3580  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 151)) ;
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
  GGS_uint var_code_4802 ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_0 = this ;
  switch (temp_0.readProperty_mInstruction_5F_FDA_5F_base_5F_code ().enumValue ()) {
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::invalid:
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_ADDWF:
    {
      var_code_4802 = GGS_uint (uint32_t (9216U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_ADDWFC:
    {
      var_code_4802 = GGS_uint (uint32_t (8192U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_ANDWF:
    {
      var_code_4802 = GGS_uint (uint32_t (5120U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_COMF:
    {
      var_code_4802 = GGS_uint (uint32_t (7168U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_DECF:
    {
      var_code_4802 = GGS_uint (uint32_t (1024U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_INCF:
    {
      var_code_4802 = GGS_uint (uint32_t (10240U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_IORWF:
    {
      var_code_4802 = GGS_uint (uint32_t (4096U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_MOVF:
    {
      var_code_4802 = GGS_uint (uint32_t (20480U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_RLCF:
    {
      var_code_4802 = GGS_uint (uint32_t (13312U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_RLNCF:
    {
      var_code_4802 = GGS_uint (uint32_t (17408U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_RRCF:
    {
      var_code_4802 = GGS_uint (uint32_t (12288U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_RRNCF:
    {
      var_code_4802 = GGS_uint (uint32_t (16384U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_SUBFWB:
    {
      var_code_4802 = GGS_uint (uint32_t (21504U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_SUBWF:
    {
      var_code_4802 = GGS_uint (uint32_t (23552U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_SUBWFB:
    {
      var_code_4802 = GGS_uint (uint32_t (22528U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_SWAPF:
    {
      var_code_4802 = GGS_uint (uint32_t (14336U)) ;
    }
    break ;
  case GGS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::Enumeration::enum_XORWF:
    {
      var_code_4802 = GGS_uint (uint32_t (6144U)) ;
    }
    break ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_2 = this ;
    test_1 = temp_2.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      var_code_4802 = var_code_4802.operator_or (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 183)) ;
    }
  }
  GalgasBool test_3 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_3) {
    const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_4 = this ;
    test_3 = temp_4.readProperty_m_5F_W_5F_isDestination ().operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas3", 185)).boolEnum () ;
    if (GalgasBool::boolTrue == test_3) {
      var_code_4802 = var_code_4802.operator_or (GGS_uint (uint32_t (512U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 186)) ;
    }
  }
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_5 = this ;
  var_code_4802 = var_code_4802.operator_or (temp_5.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 188)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 188)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_6 = this ;
  GGS_uintlist temp_7 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 191)) ;
  temp_7.plusPlusAssignOperation (GGS_uintlist_2E_element::init_21_ (var_code_4802, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 191)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) temp_6.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 190)).getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 190)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 190)), temp_7  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 189)) ;
}

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_FA instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GGS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::getter_instructionDisplay (Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GGS_stringlist result_outResult ; // Returned variable
  GGS_string var_s_6004 ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_0 = this ;
  switch (temp_0.readProperty_mFAinstruction ().enumValue ()) {
  case GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::Enumeration::enum_CLRF:
    {
      var_s_6004 = GGS_string ("CLRF") ;
    }
    break ;
  case GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::Enumeration::enum_MOVWF:
    {
      var_s_6004 = GGS_string ("MOVWF") ;
    }
    break ;
  case GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::Enumeration::enum_MULWF:
    {
      var_s_6004 = GGS_string ("MULWF") ;
    }
    break ;
  case GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::Enumeration::enum_NEGF:
    {
      var_s_6004 = GGS_string ("NEGF") ;
    }
    break ;
  case GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::Enumeration::enum_SETF:
    {
      var_s_6004 = GGS_string ("SETF") ;
    }
    break ;
  }
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_1 = this ;
  var_s_6004.plusAssignOperation(GGS_string (" ").add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 211)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 211)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_6004  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 212)) ;
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
  GGS_uint var_code_6611 ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_0 = this ;
  switch (temp_0.readProperty_mFAinstruction ().enumValue ()) {
  case GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::Enumeration::enum_CLRF:
    {
      var_code_6611 = GGS_uint (uint32_t (27136U)) ;
    }
    break ;
  case GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::Enumeration::enum_MOVWF:
    {
      var_code_6611 = GGS_uint (uint32_t (28160U)) ;
    }
    break ;
  case GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::Enumeration::enum_MULWF:
    {
      var_code_6611 = GGS_uint (uint32_t (512U)) ;
    }
    break ;
  case GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::Enumeration::enum_NEGF:
    {
      var_code_6611 = GGS_uint (uint32_t (27648U)) ;
    }
    break ;
  case GGS_FA_5F_sequential_5F_instruction_5F_base_5F_code::Enumeration::enum_SETF:
    {
      var_code_6611 = GGS_uint (uint32_t (26624U)) ;
    }
    break ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_2 = this ;
    test_1 = temp_2.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      var_code_6611 = var_code_6611.operator_or (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 232)) ;
    }
  }
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_3 = this ;
  var_code_6611 = var_code_6611.operator_or (temp_3.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 234)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 234)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_4 = this ;
  GGS_uintlist temp_5 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 237)) ;
  temp_5.plusPlusAssignOperation (GGS_uintlist_2E_element::init_21_ (var_code_6611, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 237)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) temp_4.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 236)).getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 236)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 236)), temp_5  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 235)) ;
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
  GGS_string var_s_7587 = GGS_string ("MOVFF ").add_operation (temp_0.readProperty_mSourceRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 255)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 255)).add_operation (temp_1.readProperty_mDestinationRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 256)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_7587  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 257)) ;
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
  GGS_uintlist var_code_8088 = GGS_uintlist::init (inCompiler COMMA_HERE) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF temp_0 = this ;
  var_code_8088.addAssignOperation (GGS_uint (uint32_t (49152U)).operator_or (temp_0.readProperty_mSourceRegisterDescription ().readProperty_mRegisterAddress () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 268))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 268)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF temp_1 = this ;
  var_code_8088.addAssignOperation (GGS_uint (uint32_t (61440U)).operator_or (temp_1.readProperty_mDestinationRegisterDescription ().readProperty_mRegisterAddress () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 269))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 269)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF temp_2 = this ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) temp_2.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 271)).getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 271)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 271)), var_code_8088  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 270)) ;
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
  GGS_string var_s_8714 = extensionGetter_mnemonic (temp_0.readProperty_mLiteralInstruction (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 282)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 282)).add_operation (temp_1.readProperty_mLiteralValue ().getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas3", 282)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 282)).add_operation (GGS_string (" ; "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 282)).add_operation (temp_2.readProperty_mLiteralValue ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas3", 282)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 282)) ;
  GGS_stringlist temp_3 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 283)) ;
  temp_3.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_s_8714, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 283)) ;
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
  GGS_uint var_code_9184 ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_0 = this ;
  switch (temp_0.readProperty_mLiteralInstruction ().enumValue ()) {
  case GGS_literal_5F_instruction_5F_opcode::Enumeration::invalid:
    break ;
  case GGS_literal_5F_instruction_5F_opcode::Enumeration::enum_ADDLW:
    {
      var_code_9184 = GGS_uint (uint32_t (3840U)) ;
    }
    break ;
  case GGS_literal_5F_instruction_5F_opcode::Enumeration::enum_ANDLW:
    {
      var_code_9184 = GGS_uint (uint32_t (2816U)) ;
    }
    break ;
  case GGS_literal_5F_instruction_5F_opcode::Enumeration::enum_IORLW:
    {
      var_code_9184 = GGS_uint (uint32_t (2304U)) ;
    }
    break ;
  case GGS_literal_5F_instruction_5F_opcode::Enumeration::enum_MOVLW:
    {
      var_code_9184 = GGS_uint (uint32_t (3584U)) ;
    }
    break ;
  case GGS_literal_5F_instruction_5F_opcode::Enumeration::enum_MULLW:
    {
      var_code_9184 = GGS_uint (uint32_t (3328U)) ;
    }
    break ;
  case GGS_literal_5F_instruction_5F_opcode::Enumeration::enum_SUBLW:
    {
      var_code_9184 = GGS_uint (uint32_t (2048U)) ;
    }
    break ;
  case GGS_literal_5F_instruction_5F_opcode::Enumeration::enum_XORLW:
    {
      var_code_9184 = GGS_uint (uint32_t (2560U)) ;
    }
    break ;
  }
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_1 = this ;
  var_code_9184 = var_code_9184.operator_or (temp_1.readProperty_mLiteralValue () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 303)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_2 = this ;
  GGS_uintlist temp_3 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 306)) ;
  temp_3.plusPlusAssignOperation (GGS_uintlist_2E_element::init_21_ (var_code_9184, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 306)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) temp_2.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 305)).getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 305)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 305)), temp_3  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 304)) ;
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
  GGS_string var_s_10102 = GGS_string ("LFSR ").add_operation (temp_0.readProperty_mFSRindex ().readProperty_uint ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas3", 323)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 323)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 323)).add_operation (temp_1.readProperty_mValue ().getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas3", 323)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 323)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_10102  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 324)) ;
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
  GGS_uintlist var_code_10547 = GGS_uintlist::init (inCompiler COMMA_HERE) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_0 = this ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_1 = this ;
  var_code_10547.addAssignOperation (GGS_uint (uint32_t (60928U)).operator_or (temp_0.readProperty_mFSRindex ().readProperty_uint ().left_shift_operation (GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 335)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 335)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 335)).operator_or (temp_1.readProperty_mValue ().right_shift_operation (GGS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 335)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 335)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 335))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 335)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_2 = this ;
  var_code_10547.addAssignOperation (GGS_uint (uint32_t (61440U)).operator_or (temp_2.readProperty_mValue ().operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 336)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 336))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 336)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_3 = this ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) temp_3.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 338)).getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 338)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 338)), var_code_10547  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 337)) ;
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
  GGS_string var_s_11112 = extensionGetter_mnemonic (temp_0.readProperty_mBitOrientedOp (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 349)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 349)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 349)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 349)).add_operation (temp_2.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas3", 349)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 349)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_11112  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 350)) ;
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
  GGS_uint var_code_11605 ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_0 = this ;
  switch (temp_0.readProperty_mBitOrientedOp ().enumValue ()) {
  case GGS_bit_5F_oriented_5F_op::Enumeration::invalid:
    break ;
  case GGS_bit_5F_oriented_5F_op::Enumeration::enum_BCF:
    {
      var_code_11605 = GGS_uint (uint32_t (36864U)) ;
    }
    break ;
  case GGS_bit_5F_oriented_5F_op::Enumeration::enum_BSF:
    {
      var_code_11605 = GGS_uint (uint32_t (32768U)) ;
    }
    break ;
  case GGS_bit_5F_oriented_5F_op::Enumeration::enum_BTG:
    {
      var_code_11605 = GGS_uint (uint32_t (28672U)) ;
    }
    break ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_2 = this ;
    test_1 = temp_2.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      var_code_11605 = var_code_11605.operator_or (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 367)) ;
    }
  }
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_3 = this ;
  var_code_11605 = var_code_11605.operator_or (temp_3.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 369)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 369)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_4 = this ;
  var_code_11605 = var_code_11605.operator_or (temp_4.readProperty_mBitNumber ().left_shift_operation (GGS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 370)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 370)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 370)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_5 = this ;
  GGS_uintlist temp_6 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 373)) ;
  temp_6.plusPlusAssignOperation (GGS_uintlist_2E_element::init_21_ (var_code_11605, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 373)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) temp_5.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 372)).getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 372)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 372)), temp_6  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 371)) ;
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
  GGS_string var_s_12360 = GGS_string ("MOVLB ").add_operation (temp_0.readProperty_mBankIndex ().readProperty_uint ().getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas3", 384)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 384)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_12360  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 385)) ;
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
  GGS_uint var_code_12786 = GGS_uint (uint32_t (256U)).operator_or (temp_0.readProperty_mBankIndex ().readProperty_uint () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 395)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB temp_1 = this ;
  GGS_uintlist temp_2 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 398)) ;
  temp_2.plusPlusAssignOperation (GGS_uintlist_2E_element::init_21_ (var_code_12786, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 398)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 397)).getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 397)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 397)), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 396)) ;
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
  GGS_string var_s_13274 = GGS_string ("TBLRD ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mOption (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 409)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 409)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_13274  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 410)) ;
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
  GGS_uint var_code_13691 ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD temp_0 = this ;
  switch (temp_0.readProperty_mOption ().enumValue ()) {
  case GGS_tableAccessOption::Enumeration::invalid:
    break ;
  case GGS_tableAccessOption::Enumeration::enum_simpleAccess:
    {
      var_code_13691 = GGS_uint (uint32_t (8U)) ;
    }
    break ;
  case GGS_tableAccessOption::Enumeration::enum_postIncrement:
    {
      var_code_13691 = GGS_uint (uint32_t (9U)) ;
    }
    break ;
  case GGS_tableAccessOption::Enumeration::enum_postDecrement:
    {
      var_code_13691 = GGS_uint (uint32_t (10U)) ;
    }
    break ;
  case GGS_tableAccessOption::Enumeration::enum_preIncrement:
    {
      var_code_13691 = GGS_uint (uint32_t (11U)) ;
    }
    break ;
  }
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD temp_1 = this ;
  GGS_uintlist temp_2 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 429)) ;
  temp_2.plusPlusAssignOperation (GGS_uintlist_2E_element::init_21_ (var_code_13691, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 429)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 428)).getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 428)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 428)), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 427)) ;
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
  GGS_string var_s_14323 = GGS_string ("TBLWT ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mOption (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 440)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 440)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_14323  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 441)) ;
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
  GGS_uint var_code_14740 ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT temp_0 = this ;
  switch (temp_0.readProperty_mOption ().enumValue ()) {
  case GGS_tableAccessOption::Enumeration::invalid:
    break ;
  case GGS_tableAccessOption::Enumeration::enum_simpleAccess:
    {
      var_code_14740 = GGS_uint (uint32_t (12U)) ;
    }
    break ;
  case GGS_tableAccessOption::Enumeration::enum_postIncrement:
    {
      var_code_14740 = GGS_uint (uint32_t (13U)) ;
    }
    break ;
  case GGS_tableAccessOption::Enumeration::enum_postDecrement:
    {
      var_code_14740 = GGS_uint (uint32_t (14U)) ;
    }
    break ;
  case GGS_tableAccessOption::Enumeration::enum_preIncrement:
    {
      var_code_14740 = GGS_uint (uint32_t (15U)) ;
    }
    break ;
  }
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT temp_1 = this ;
  GGS_uintlist temp_2 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 460)) ;
  temp_2.plusPlusAssignOperation (GGS_uintlist_2E_element::init_21_ (var_code_14740, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 460)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 459)).getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 459)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 459)), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 458)) ;
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
  result_outSize = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 473)) ;
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
  GGS_string var_s_15581 = GGS_string ("MNOP ").add_operation (temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas3", 479)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 479)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_15581  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 480)) ;
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
  GGS_uint var_idx_16027 = GGS_uint (uint32_t (0U)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP temp_0 = this ;
  if (temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().isValid ()) {
    uint32_t variant_16037 = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().uintValue () ;
    bool loop_16037 = true ;
    while (loop_16037) {
      const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP temp_1 = this ;
      loop_16037 = GGS_bool (ComparisonKind::lowerThan, var_idx_16027.objectCompare (temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ())).isValid () ;
      if (loop_16037) {
        loop_16037 = GGS_bool (ComparisonKind::lowerThan, var_idx_16027.objectCompare (temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ())).boolValue () ;
      }
      if (loop_16037 && (0 == variant_16037)) {
        loop_16037 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_regular_instructions.galgas3", 493)) ;
      }
      if (loop_16037) {
        variant_16037 -= 1 ;
        GGS_uintlist temp_2 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 496)) ;
        temp_2.plusPlusAssignOperation (GGS_uintlist_2E_element::init_21_ (GGS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 496)) ;
        outArgument_outCode.addAssignOperation (GGS_string ("    NOP"), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 496)) ;
        var_idx_16027.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 497)) ;
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
  result_outSize = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().multiply_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 509)) ;
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
  GGS_string var_s_16728 = GGS_string ("NOPBRA ").add_operation (temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas3", 515)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 515)) ;
  GGS_stringlist temp_1 = GGS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 516)) ;
  temp_1.plusPlusAssignOperation (GGS_stringlist_2E_element::init_21_ (var_s_16728, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 516)) ;
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
  GGS_uint var_idx_17145 = GGS_uint (uint32_t (0U)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA temp_0 = this ;
  if (temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().isValid ()) {
    uint32_t variant_17155 = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().uintValue () ;
    bool loop_17155 = true ;
    while (loop_17155) {
      const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA temp_1 = this ;
      loop_17155 = GGS_bool (ComparisonKind::lowerThan, var_idx_17145.objectCompare (temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ())).isValid () ;
      if (loop_17155) {
        loop_17155 = GGS_bool (ComparisonKind::lowerThan, var_idx_17145.objectCompare (temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ())).boolValue () ;
      }
      if (loop_17155 && (0 == variant_17155)) {
        loop_17155 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_regular_instructions.galgas3", 529)) ;
      }
      if (loop_17155) {
        variant_17155 -= 1 ;
        GGS_uintlist temp_2 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 532)) ;
        temp_2.plusPlusAssignOperation (GGS_uintlist_2E_element::init_21_ (GGS_uint (uint32_t (53248U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 532)) ;
        outArgument_outCode.addAssignOperation (GGS_string ("    BRA $+2"), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 532)) ;
        var_idx_17145.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 533)) ;
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
  GGS_string var_s_17623 = GGS_string ("MOVLW ((").add_operation (temp_0.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 544)).add_operation (GGS_string (" + "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 544)).add_operation (temp_1.readProperty_mOffset ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas3", 544)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 544)).add_operation (GGS_string (") >> "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 544)).add_operation (temp_2.readProperty_mRightShift ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas3", 544)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 544)).add_operation (GGS_string (") & 0xFF"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 544)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_17623  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 545)) ;
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
  GGS_uint var_address_18126 ;
  const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_0 = this ;
  constinArgument_inDataAddressMap.method_searchKey (temp_0.readProperty_mLabel (), var_address_18126, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 555)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_1 = this ;
  const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_2 = this ;
  GGS_uint var_code_18147 = var_address_18126.add_operation (temp_1.readProperty_mOffset (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 556)).right_shift_operation (temp_2.readProperty_mRightShift (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 556)).operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 556)) ;
  GGS_uint var_code_5F_MOVLW_18220 = GGS_uint (uint32_t (3584U)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_3 = this ;
  const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_4 = this ;
  const GGS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_5 = this ;
  GGS_uintlist temp_6 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 560)) ;
  temp_6.plusPlusAssignOperation (GGS_uintlist_2E_element::init_21_ (var_code_18147.operator_or (var_code_5F_MOVLW_18220 COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 560)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 560)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    MOVLW ((_data_").add_operation (temp_3.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 559)).add_operation (GGS_string (" + "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 559)).add_operation (temp_4.readProperty_mOffset ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas3", 559)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 559)).add_operation (GGS_string (") >> "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 559)).add_operation (temp_5.readProperty_mRightShift ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas3", 559)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 559)).add_operation (GGS_string (") & 0xFF"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 559)), temp_6  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 558)) ;
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
  GGS_string var_s_18740 = GGS_string ("BLANK ").add_operation (temp_0.readProperty_mBlankValue ().getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas3", 571)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 571)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_18740  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 572)) ;
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
  GGS_uint var_code_19162 = GGS_uint (uint32_t (61440U)).operator_or (temp_0.readProperty_mBlankValue () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 582)) ;
  GGS_uintlist temp_1 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 585)) ;
  temp_1.plusPlusAssignOperation (GGS_uintlist_2E_element::init_21_ (var_code_19162, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 585)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    DW ").add_operation (var_code_19162.getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas3", 584)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 584)), temp_1  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 583)) ;
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
  GGS_string var_s_19619 = GGS_string ("FNOP ").add_operation (temp_0.readProperty_mBlankValue ().getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas3", 596)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 596)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_19619  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 597)) ;
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
  GGS_uint var_code_20039 = GGS_uint (uint32_t (61440U)).operator_or (temp_0.readProperty_mBlankValue () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 607)) ;
  GGS_uintlist temp_1 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 610)) ;
  temp_1.plusPlusAssignOperation (GGS_uintlist_2E_element::init_21_ (var_code_20039, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 610)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (GGS_string ("    DW ").add_operation (var_code_20039.getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas3", 609)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 609)), temp_1  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 608)) ;
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
  GGS_string var_s_20504 = temp_0.readProperty_mRegisterDescription ().readProperty_mAssemblyString ().add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 621)) ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_1 = this ;
  switch (temp_1.readProperty_mCompareInstruction ().enumValue ()) {
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSEQ:
    {
      var_s_20504.plusAssignOperation(GGS_string ("!= W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 623)) ;
    }
    break ;
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSGT:
    {
      var_s_20504.plusAssignOperation(GGS_string ("<= W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 624)) ;
    }
    break ;
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSLT:
    {
      var_s_20504.plusAssignOperation(GGS_string (">= W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 625)) ;
    }
    break ;
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::enum_TSTFSZ:
    {
      var_s_20504.plusAssignOperation(GGS_string ("!= 0"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 626)) ;
    }
    break ;
  }
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_2 = this ;
  var_s_20504.plusAssignOperation(GGS_string (" \? ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) temp_2.readProperty_mEmbeddedInstruction ().ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 628)).getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 628)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 628)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 628)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_20504  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 629)) ;
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
  GGS_uint var_code_21149 ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_0 = this ;
  switch (temp_0.readProperty_mCompareInstruction ().enumValue ()) {
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSEQ:
    {
      var_code_21149 = GGS_uint (uint32_t (25088U)) ;
    }
    break ;
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSGT:
    {
      var_code_21149 = GGS_uint (uint32_t (25600U)) ;
    }
    break ;
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSLT:
    {
      var_code_21149 = GGS_uint (uint32_t (24576U)) ;
    }
    break ;
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::enum_TSTFSZ:
    {
      var_code_21149 = GGS_uint (uint32_t (26112U)) ;
    }
    break ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_2 = this ;
    test_1 = temp_2.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      var_code_21149 = var_code_21149.operator_or (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 648)) ;
    }
  }
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_3 = this ;
  var_code_21149 = var_code_21149.operator_or (temp_3.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 650)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 650)) ;
  GGS_string var_s_21495 = GGS_string ("    ") ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_4 = this ;
  switch (temp_4.readProperty_mCompareInstruction ().enumValue ()) {
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSEQ:
    {
      var_s_21495.plusAssignOperation(GGS_string ("CPFSEQ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 654)) ;
    }
    break ;
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSGT:
    {
      var_s_21495.plusAssignOperation(GGS_string ("CPFSGT"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 655)) ;
    }
    break ;
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::enum_CPFSLT:
    {
      var_s_21495.plusAssignOperation(GGS_string ("CPFSLT"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 656)) ;
    }
    break ;
  case GGS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::Enumeration::enum_TSTFSZ:
    {
      var_s_21495.plusAssignOperation(GGS_string ("TSTFSZ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 657)) ;
    }
    break ;
  }
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_5 = this ;
  var_s_21495.plusAssignOperation(GGS_string (" ").add_operation (temp_5.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 659)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 659)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_7 = this ;
    test_6 = temp_7.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      var_s_21495.plusAssignOperation(GGS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 661)) ;
    }
  }
  GGS_uintlist temp_8 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 666)) ;
  temp_8.plusPlusAssignOperation (GGS_uintlist_2E_element::init_21_ (var_code_21149, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 666)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (var_s_21495, temp_8  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 664)) ;
  GGS_codeList var_c_21990 ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_9 = this ;
  callExtensionMethod_generateCode ((cPtr_ipic_31__38_SequentialInstruction *) temp_9.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 669)), constinArgument_inSymbolTable, constinArgument_inDataAddressMap, var_c_21990, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 668)) ;
  outArgument_outCode.plusAssignOperation(var_c_21990, inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 674)) ;
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
  GGS_uint var_n_22463 = ioArgument_ioConversionCount ;
  GGS_ipic_31__38_SequentialInstruction var_outModifiedEmbeddedInstruction_22700 ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_1 = this ;
  callExtensionMethod_performInstructionRelativeBranchResolution ((cPtr_ipic_31__38_SequentialInstruction *) temp_1.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 689)), constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedEmbeddedInstruction_22700, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 688)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::notEqual, var_n_22463.objectCompare (ioArgument_ioConversionCount)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_3 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_4 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_5 = this ;
      outArgument_outModifiedInstruction = GGS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::init_21__21__21__21_ (temp_3.readProperty_mInstructionLocation (), var_outModifiedEmbeddedInstruction_22700, temp_4.readProperty_mCompareInstruction (), temp_5.readProperty_mRegisterDescription (), inCompiler COMMA_HERE) ;
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
  GGS_string var_s_23318 = GGS_string::makeEmptyString () ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_s_23318.plusAssignOperation(GGS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 714)) ;
    }
  }
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_2 = this ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_3 = this ;
  var_s_23318.plusAssignOperation(temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString ().add_operation (GGS_string ("."), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 716)).add_operation (temp_3.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas3", 716)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 716)).add_operation (GGS_string (" \? "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 716)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 716)) ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_4 = this ;
  GGS_stringlist var_x_23478 = callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) temp_4.readProperty_mEmbeddedInstruction ().ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 718)) ;
  var_s_23318.plusAssignOperation(var_x_23478.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 719)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 719)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_23318  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 720)) ;
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
  GGS_uint var_code_23912 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_code_23912 = GGS_uint (uint32_t (40960U)) ;
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    var_code_23912 = GGS_uint (uint32_t (45056U)) ;
  }
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_3 = this ;
    test_2 = temp_3.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      var_code_23912 = var_code_23912.operator_or (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 737)) ;
    }
  }
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_4 = this ;
  var_code_23912 = var_code_23912.operator_or (temp_4.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 739)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 739)) ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_5 = this ;
  var_code_23912 = var_code_23912.operator_or (temp_5.readProperty_mBitNumber ().left_shift_operation (GGS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 740)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 740)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 740)) ;
  GGS_string var_s_24229 = GGS_string ("    ") ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_7 = this ;
    test_6 = temp_7.readProperty_mSkipIfSet ().boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      var_s_24229.plusAssignOperation(GGS_string ("BTFSS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 744)) ;
    }
  }
  if (GalgasBool::boolFalse == test_6) {
    var_s_24229.plusAssignOperation(GGS_string ("BTFSC"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 746)) ;
  }
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_8 = this ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_9 = this ;
  var_s_24229.plusAssignOperation(GGS_string (" ").add_operation (temp_8.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 748)).add_operation (GGS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 748)).add_operation (temp_9.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas3", 748)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 748)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 748)) ;
  GGS_uintlist temp_10 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 752)) ;
  temp_10.plusPlusAssignOperation (GGS_uintlist_2E_element::init_21_ (var_code_23912, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 752)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (var_s_24229, temp_10  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 750)) ;
  GGS_codeList var_c_24593 ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_11 = this ;
  callExtensionMethod_generateCode ((cPtr_ipic_31__38_SequentialInstruction *) temp_11.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 755)), constinArgument_inSymbolTable, constinArgument_inDataAddressMap, var_c_24593, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 754)) ;
  outArgument_outCode.plusAssignOperation(var_c_24593, inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 760)) ;
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
  GGS_uint var_n_25061 = ioArgument_ioConversionCount ;
  GGS_ipic_31__38_SequentialInstruction var_outModifiedEmbeddedInstruction_25298 ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_1 = this ;
  callExtensionMethod_performInstructionRelativeBranchResolution ((cPtr_ipic_31__38_SequentialInstruction *) temp_1.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 775)), constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedEmbeddedInstruction_25298, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 774)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::notEqual, var_n_25061.objectCompare (ioArgument_ioConversionCount)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_3 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_4 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_5 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_6 = this ;
      outArgument_outModifiedInstruction = GGS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::init_21__21__21__21__21_ (temp_3.readProperty_mInstructionLocation (), var_outModifiedEmbeddedInstruction_25298, temp_4.readProperty_mSkipIfSet (), temp_5.readProperty_mRegisterDescription (), temp_6.readProperty_mBitNumber (), inCompiler COMMA_HERE) ;
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
  GGS_string var_s_25909 ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_0 = this ;
  switch (temp_0.readProperty_mInstruction_5F_FDA_5F_base_5F_code ().enumValue ()) {
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::enum_DECFSZ:
    {
      var_s_25909 = GGS_string ("DECFSZ") ;
    }
    break ;
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::enum_DCFSNZ:
    {
      var_s_25909 = GGS_string ("DCFSNZ") ;
    }
    break ;
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::enum_INCFSZ:
    {
      var_s_25909 = GGS_string ("INCFSZ") ;
    }
    break ;
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::enum_INFSNZ:
    {
      var_s_25909 = GGS_string ("INFSNZ") ;
    }
    break ;
  }
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_1 = this ;
  var_s_25909.plusAssignOperation(GGS_string (" ").add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 806)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 806)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_3 = this ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      var_s_25909.plusAssignOperation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 808)) ;
    }
  }
  var_s_25909.plusAssignOperation(GGS_string (" \? "), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 810)) ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_4 = this ;
  GGS_stringlist var_x_26214 = callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) temp_4.readProperty_mEmbeddedInstruction ().ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 811)) ;
  var_s_25909.plusAssignOperation(var_x_26214.getter_mValueAtIndex (GGS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 812)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 812)) ;
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_25909  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 813)) ;
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
  GGS_uint var_binCode_26640 ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_0 = this ;
  switch (temp_0.readProperty_mInstruction_5F_FDA_5F_base_5F_code ().enumValue ()) {
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::enum_DECFSZ:
    {
      var_binCode_26640 = GGS_uint (uint32_t (11264U)) ;
    }
    break ;
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::enum_DCFSNZ:
    {
      var_binCode_26640 = GGS_uint (uint32_t (19456U)) ;
    }
    break ;
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::enum_INCFSZ:
    {
      var_binCode_26640 = GGS_uint (uint32_t (15360U)) ;
    }
    break ;
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::enum_INFSNZ:
    {
      var_binCode_26640 = GGS_uint (uint32_t (18432U)) ;
    }
    break ;
  }
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_2 = this ;
    test_1 = temp_2.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      var_binCode_26640 = var_binCode_26640.operator_or (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 831)) ;
    }
  }
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_3 = this ;
  var_binCode_26640 = var_binCode_26640.operator_or (temp_3.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GGS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 833)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 833)) ;
  GGS_string var_assemblyCode_27019 = GGS_string ("    ") ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_4 = this ;
  switch (temp_4.readProperty_mInstruction_5F_FDA_5F_base_5F_code ().enumValue ()) {
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::invalid:
    break ;
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::enum_DECFSZ:
    {
      var_assemblyCode_27019.plusAssignOperation(GGS_string ("DECFSZ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 837)) ;
    }
    break ;
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::enum_DCFSNZ:
    {
      var_assemblyCode_27019.plusAssignOperation(GGS_string ("DCFSNZ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 838)) ;
    }
    break ;
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::enum_INCFSZ:
    {
      var_assemblyCode_27019.plusAssignOperation(GGS_string ("INCFSZ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 839)) ;
    }
    break ;
  case GGS_skip_5F_instruction_5F_FDA_5F_base_5F_code::Enumeration::enum_INFSNZ:
    {
      var_assemblyCode_27019.plusAssignOperation(GGS_string ("INFSNZ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 840)) ;
    }
    break ;
  }
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_5 = this ;
  var_assemblyCode_27019.plusAssignOperation(GGS_string (" ").add_operation (temp_5.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 842)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 842)) ;
  GalgasBool test_6 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_6) {
    const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_7 = this ;
    test_6 = temp_7.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (GalgasBool::boolTrue == test_6) {
      var_assemblyCode_27019.plusAssignOperation(GGS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 844)) ;
    }
  }
  if (GalgasBool::boolFalse == test_6) {
    var_binCode_26640 = var_binCode_26640.operator_or (GGS_uint (uint32_t (512U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 846)) ;
    var_assemblyCode_27019.plusAssignOperation(GGS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 847)) ;
  }
  GalgasBool test_8 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_8) {
    const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_9 = this ;
    test_8 = temp_9.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (GalgasBool::boolTrue == test_8) {
      var_binCode_26640 = var_binCode_26640.operator_or (GGS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 850)) ;
      var_assemblyCode_27019.plusAssignOperation(GGS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 851)) ;
    }
  }
  GGS_uintlist temp_10 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 856)) ;
  temp_10.plusPlusAssignOperation (GGS_uintlist_2E_element::init_21_ (var_binCode_26640, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 856)) ;
  outArgument_outCode = GGS_codeList::class_func_listWithValue (var_assemblyCode_27019, temp_10  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 854)) ;
  GGS_codeList var_c_27772 ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_11 = this ;
  callExtensionMethod_generateCode ((cPtr_ipic_31__38_SequentialInstruction *) temp_11.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 859)), constinArgument_inSymbolTable, constinArgument_inDataAddressMap, var_c_27772, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 858)) ;
  outArgument_outCode.plusAssignOperation(var_c_27772, inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 864)) ;
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
  GGS_uint var_n_28232 = ioArgument_ioConversionCount ;
  GGS_ipic_31__38_SequentialInstruction var_outModifiedEmbeddedInstruction_28469 ;
  const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_1 = this ;
  callExtensionMethod_performInstructionRelativeBranchResolution ((cPtr_ipic_31__38_SequentialInstruction *) temp_1.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 879)), constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedEmbeddedInstruction_28469, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 878)) ;
  GalgasBool test_2 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_2) {
    test_2 = GGS_bool (ComparisonKind::notEqual, var_n_28232.objectCompare (ioArgument_ioConversionCount)).boolEnum () ;
    if (GalgasBool::boolTrue == test_2) {
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_3 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_4 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_5 = this ;
      const GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_6 = this ;
      outArgument_outModifiedInstruction = GGS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::init_21__21__21__21__21_ (temp_3.readProperty_mInstructionLocation (), var_outModifiedEmbeddedInstruction_28469, temp_4.readProperty_mInstruction_5F_FDA_5F_base_5F_code (), temp_5.readProperty_mRegisterDescription (), temp_6.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE) ;
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
        test_1 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_2.readProperty_mTargetLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 921)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas3", 921)).boolEnum () ;
        if (GalgasBool::boolTrue == test_1) {
          {
          const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_3 = this ;
          extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_3.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 923)) ;
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
        test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_3.readProperty_mTargetLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 941)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas3", 941)).boolEnum () ;
        if (GalgasBool::boolTrue == test_2) {
          ioArgument_ioConversionCount.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 942)) ;
          const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_4 = this ;
          const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_5 = this ;
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 943)).add_operation (GGS_string (": JSR "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 943)).add_operation (temp_4.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 943)).add_operation (GGS_string (" --> CALL "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 943)).add_operation (temp_5.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 943)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 943)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 943)) ;
          const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_6 = this ;
          const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_7 = this ;
          outArgument_outModifiedInstruction = GGS_ipic_31__38__5F_intermediate_5F_JSR::init_21__21__21_ (temp_6.readProperty_mInstructionLocation (), temp_7.readProperty_mTargetLabel (), GGS_jumpInstructionKind::class_func_absolute (SOURCE_FILE ("ipic18_regular_instructions.galgas3", 944)), inCompiler COMMA_HERE) ;
        }
      }
    }
    break ;
  case GGS_jumpInstructionKind::Enumeration::enum_relative:
    {
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_9 = this ;
        test_8 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_9.readProperty_mTargetLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 947)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas3", 947)).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_10 = this ;
          const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_11 = this ;
          const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_12 = this ;
          GenericArray <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GGS_string ("displacement (").add_operation (function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (constinArgument_inSymbolTable, temp_11.readProperty_mTargetLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 949)).getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas3", 948)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 948)).add_operation (GGS_string (") too large for RCALL "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 949)).add_operation (temp_12.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 950)).add_operation (GGS_string (" instruction (limited to [-1024, 1023])"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 950)), fixItArray13  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 948)) ;
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
  GGS_string var_s_31216 ;
  const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = this ;
  switch (temp_0.readProperty_mKind ().enumValue ()) {
  case GGS_jumpInstructionKind::Enumeration::invalid:
    break ;
  case GGS_jumpInstructionKind::Enumeration::enum_ipicRelative:
    {
      const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_1 = this ;
      var_s_31216 = GGS_string ("JSR ").add_operation (temp_1.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 961)) ;
    }
    break ;
  case GGS_jumpInstructionKind::Enumeration::enum_relative:
    {
      const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_2 = this ;
      var_s_31216 = GGS_string ("RCALL ").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 962)) ;
    }
    break ;
  case GGS_jumpInstructionKind::Enumeration::enum_absolute:
    {
      const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_3 = this ;
      var_s_31216 = GGS_string ("CALL ").add_operation (temp_3.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 963)) ;
    }
    break ;
  }
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_31216  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 965)) ;
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
  GGS_uint var_targetAddress_31811 ;
  const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = this ;
  constinArgument_inSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_31811, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 975)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_1 = this ;
  switch (temp_1.readProperty_mKind ().enumValue ()) {
  case GGS_jumpInstructionKind::Enumeration::invalid:
    break ;
  case GGS_jumpInstructionKind::Enumeration::enum_ipicRelative:
  case GGS_jumpInstructionKind::Enumeration::enum_relative:
    {
      const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_2 = this ;
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress_31811, temp_2.readProperty_mTargetLabel (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 978)) ;
    }
    break ;
  case GGS_jumpInstructionKind::Enumeration::enum_absolute:
    {
      const GGS_ipic_31__38__5F_intermediate_5F_JSR temp_3 = this ;
      outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_targetAddress_31811, temp_3.readProperty_mTargetLabel (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 980)) ;
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
  result_outSize = result_outSize.add_operation (GGS_uint (uint32_t (4U)).multiply_operation (temp_2.readProperty_mTargetInstructions ().getter_count (SOURCE_FILE ("ipic18_regular_instructions.galgas3", 997)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 997)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 997)).substract_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 997)) ;
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
  GGS_string var_s_32740 = GGS_string ("COMPUTED ") ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1004)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      var_s_32740.plusAssignOperation(GGS_string ("(uses CALL)"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1005)) ;
    }
  }
  result_outResult = GGS_stringlist::class_func_listWithValue (var_s_32740  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1007)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_2 = this ;
  UpEnumerator_ipic_31__38_SequentialInstructionList enumerator_32884 (temp_2.readProperty_mTargetInstructions ()) ;
  while (enumerator_32884.hasCurrentObject ()) {
    UpEnumerator_stringlist enumerator_32928 (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_32884.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1009))) ;
    while (enumerator_32928.hasCurrentObject ()) {
      result_outResult.addAssignOperation (GGS_string ("   ").add_operation (enumerator_32928.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1010))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1010)) ;
      enumerator_32928.gotoNextObject () ;
    }
    enumerator_32884.gotoNextObject () ;
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
    temp_1 = GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1022)) ;
  }else if (GalgasBool::boolFalse == test_2) {
    temp_1 = GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1022)) ;
  }
  GGS_uint var_address_33364 = constinArgument_inAddress.add_operation (temp_1.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1022)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1022)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_3 = this ;
  UpEnumerator_ipic_31__38_SequentialInstructionList enumerator_33445 (temp_3.readProperty_mTargetInstructions ()) ;
  while (enumerator_33445.hasCurrentObject ()) {
    callExtensionMethod_instructionRelativeBranchOverflow ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_33445.current_mInstruction (HERE).ptr (), var_address_33364, constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1024)) ;
    var_address_33364 = var_address_33364.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1030)) ;
    enumerator_33445.gotoNextObject () ;
  }
  GalgasBool test_4 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_4) {
    const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_5 = this ;
    test_4 = temp_5.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_4) {
      GalgasBool test_6 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_6) {
        test_6 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GGS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1033)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1033)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1033)).boolEnum () ;
        if (GalgasBool::boolTrue == test_6) {
          {
          extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, GGS_string ("_computed_goto_4"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1034)) ;
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
  GGS_uint var_unusedConversionCount_34307 = GGS_uint (uint32_t (0U)) ;
  GGS_string var_unusedListing_34347 = GGS_string::makeEmptyString () ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_1 = this ;
  GGS_bigint temp_2 ;
  const GalgasBool test_3 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
  if (GalgasBool::boolTrue == test_3) {
    temp_2 = GGS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1051)) ;
  }else if (GalgasBool::boolFalse == test_3) {
    temp_2 = GGS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1051)) ;
  }
  GGS_uint var_address_34378 = constinArgument_inAddress.add_operation (temp_2.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1051)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1051)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_4 = this ;
  UpEnumerator_ipic_31__38_SequentialInstructionList enumerator_34459 (temp_4.readProperty_mTargetInstructions ()) ;
  while (enumerator_34459.hasCurrentObject ()) {
    GGS_ipic_31__38_SequentialInstruction joker_34716 ; // Joker input parameter
    callExtensionMethod_performInstructionRelativeBranchResolution ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_34459.current_mInstruction (HERE).ptr (), var_address_34378, constinArgument_inBlockLabel, constinArgument_inSymbolTable, var_unusedConversionCount_34307, var_unusedListing_34347, joker_34716, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1054)) ;
    var_address_34378 = var_address_34378.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1062)) ;
    enumerator_34459.gotoNextObject () ;
  }
  GalgasBool test_5 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_5) {
    const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_6 = this ;
    test_5 = temp_6.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_5) {
      GalgasBool test_7 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_7) {
        test_7 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GGS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1065)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1065)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1065)).boolEnum () ;
        if (GalgasBool::boolTrue == test_7) {
          ioArgument_ioConversionCount.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1066)) ;
          ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1067)).add_operation (GGS_string (": computed rcall needs to use CALL _computed_goto_4\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1067)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1067)) ;
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
  GGS_lstring var_target_35562 = GGS_lstring::init_21__21_ (GGS_string ("_computed_goto_4"), temp_0.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  GGS_uint var_computetedGoto_34_Address_35677 ;
  constinArgument_inSymbolTable.method_searchKey (var_target_35562, var_computetedGoto_34_Address_35677, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1085)) ;
  GGS_uint var_currentInstructionAddress_35714 ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_2 = this ;
    test_1 = temp_2.readProperty_mUsesRCALL ().boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      var_currentInstructionAddress_35714 = constinArgument_inAddress.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1089)) ;
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_computetedGoto_34_Address_35677, var_target_35562, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1090)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    var_currentInstructionAddress_35714 = constinArgument_inAddress.add_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1092)) ;
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_computetedGoto_34_Address_35677, var_target_35562, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1093)) ;
  }
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_3 = this ;
  GGS_uint var_instructionFollowingComputedRcallAddress_36047 = var_currentInstructionAddress_35714.add_operation (temp_3.readProperty_mTargetInstructions ().getter_count (SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1095)).multiply_operation (GGS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1095)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1095)).substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1095)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_4 = this ;
  GGS_lstring var_nextInstructionLabel_36163 = GGS_lstring::init_21__21_ (GGS_string ("_computed_").add_operation (constinArgument_inAddress.getter_xString (SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1096)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1096)), temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  GGS_uint var_idx_36271 = GGS_uint (uint32_t (0U)) ;
  const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_5 = this ;
  UpEnumerator_ipic_31__38_SequentialInstructionList enumerator_36301 (temp_5.readProperty_mTargetInstructions ()) ;
  while (enumerator_36301.hasCurrentObject ()) {
    var_idx_36271.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1099)) ;
    GGS_codeList var_instructionCode_36479 ;
    callExtensionMethod_generateCode ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_36301.current_mInstruction (HERE).ptr (), var_currentInstructionAddress_35714, constinArgument_inSymbolTable, constinArgument_inDataAddressMap, var_instructionCode_36479, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1100)) ;
    outArgument_outCode.plusAssignOperation(var_instructionCode_36479, inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1106)) ;
    var_currentInstructionAddress_35714 = var_currentInstructionAddress_35714.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1107)) ;
    GalgasBool test_6 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_6) {
      const GGS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_7 = this ;
      test_6 = GGS_bool (ComparisonKind::lowerThan, var_idx_36271.objectCompare (temp_7.readProperty_mTargetInstructions ().getter_count (SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1108)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_6) {
        outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (var_currentInstructionAddress_35714, var_instructionFollowingComputedRcallAddress_36047, var_nextInstructionLabel_36163, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1109)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1109)) ;
        var_currentInstructionAddress_35714 = var_currentInstructionAddress_35714.add_operation (GGS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1110)) ;
      }
    }
    enumerator_36301.gotoNextObject () ;
  }
  outArgument_outCode.plusAssignOperation(function_pic_31__38__5F_definition_5F_label (var_nextInstructionLabel_36163, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1114)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas3", 1114)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_IF_BitTest addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_IF_5F_BitTest::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_instruction_5F_IF_5F_BitTest temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_baseline_5F_instruction *) temp_0.readProperty_mInstruction ().ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("baseline_used_routines.galgas3", 10)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_IF_SEMI_COLON addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_instruction_5F_IF_5F_SEMI_5F_COLON temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_baseline_5F_instruction *) temp_0.readProperty_mInstruction ().ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("baseline_used_routines.galgas3", 17)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_IF_IncDec addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_IF_5F_IncDec::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_instruction_5F_IF_5F_IncDec temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_baseline_5F_instruction *) temp_0.readProperty_mInstruction ().ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("baseline_used_routines.galgas3", 24)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_JUMP addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_JUMP::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_instruction_5F_JUMP temp_0 = this ;
  ioArgument_ioUsedRoutines.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_used_routines.galgas3", 31)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_GOTO addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_GOTO::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_instruction_5F_GOTO temp_0 = this ;
  ioArgument_ioUsedRoutines.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_used_routines.galgas3", 38)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_CALL addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_CALL::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GGS_baseline_5F_instruction_5F_CALL temp_0 = this ;
  ioArgument_ioUsedRoutines.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_used_routines.galgas3", 45)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@baseline_instruction_FOREVER addUsedRoutines'
//--------------------------------------------------------------------------------------------------

void cPtr_baseline_5F_instruction_5F_FOREVER::method_addUsedRoutines (GGS_stringset & ioArgument_ioUsedRoutines,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GGS_baseline_5F_instruction_5F_FOREVER temp_0 = this ;
  routine_addBaselineUsedRoutinesFromInstructionList_3F__26_ (temp_0.readProperty_mInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas3", 52)) ;
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
  routine_addBaselineUsedRoutinesFromInstructionList_3F__26_ (temp_0.readProperty_mInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas3", 59)) ;
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
  routine_addBaselineUsedRoutinesFromInstructionList_3F__26_ (temp_0.readProperty_mRepeatedInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas3", 96)) ;
  }
  const GGS_baseline_5F_instruction_5F_do_5F_while temp_1 = this ;
  UpEnumerator_baseline_5F_partList enumerator_3274 (temp_1.readProperty_mWhilePartList ()) ;
  while (enumerator_3274.hasCurrentObject ()) {
    {
    routine_addBaselineUsedRoutinesFromInstructionList_3F__26_ (enumerator_3274.current_mInstructionList (HERE), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas3", 98)) ;
    }
    enumerator_3274.gotoNextObject () ;
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
  routine_addBaselineUsedRoutinesFromInstructionList_3F__26_ (temp_0.readProperty_mThenInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas3", 106)) ;
  }
  {
  const GGS_baseline_5F_instruction_5F_structured_5F_if temp_1 = this ;
  routine_addBaselineUsedRoutinesFromInstructionList_3F__26_ (temp_1.readProperty_mElseInstructionList (), ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas3", 107)) ;
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
  ioArgument_ioUsedRoutines.plusPlusAssignOperation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("baseline_used_routines.galgas3", 120)) ;
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
  UpEnumerator_baseline_5F_instructionList enumerator_4577 (constinArgument_inInstructionList) ;
  while (enumerator_4577.hasCurrentObject ()) {
    callExtensionMethod_addUsedRoutines ((cPtr_baseline_5F_instruction *) enumerator_4577.current_mInstruction (HERE).ptr (), ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("baseline_used_routines.galgas3", 135)) ;
    enumerator_4577.gotoNextObject () ;
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
  result_outUsedRoutineSet = GGS_stringset::class_func_setWithString (GGS_string ("main")  COMMA_SOURCE_FILE ("baseline_used_routines.galgas3", 145)) ;
  GGS_stringset var_s_5024 = GGS_stringset::init (inCompiler COMMA_HERE) ;
  if (constinArgument_inRoutineDefinitionList.getter_count (SOURCE_FILE ("baseline_used_routines.galgas3", 148)).isValid ()) {
    uint32_t variant_5044 = constinArgument_inRoutineDefinitionList.getter_count (SOURCE_FILE ("baseline_used_routines.galgas3", 148)).uintValue () ;
    bool loop_5044 = true ;
    while (loop_5044) {
      loop_5044 = GGS_bool (ComparisonKind::notEqual, var_s_5024.objectCompare (result_outUsedRoutineSet)).isValid () ;
      if (loop_5044) {
        loop_5044 = GGS_bool (ComparisonKind::notEqual, var_s_5024.objectCompare (result_outUsedRoutineSet)).boolValue () ;
      }
      if (loop_5044 && (0 == variant_5044)) {
        loop_5044 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("baseline_used_routines.galgas3", 148)) ;
      }
      if (loop_5044) {
        variant_5044 -= 1 ;
        var_s_5024 = result_outUsedRoutineSet ;
        UpEnumerator_baseline_5F_routineDefinitionList enumerator_5184 (constinArgument_inRoutineDefinitionList) ;
        while (enumerator_5184.hasCurrentObject ()) {
          GalgasBool test_0 = GalgasBool::boolTrue ;
          if (GalgasBool::boolTrue == test_0) {
            test_0 = result_outUsedRoutineSet.getter_hasKey (enumerator_5184.current_mRoutineName (HERE).readProperty_string () COMMA_SOURCE_FILE ("baseline_used_routines.galgas3", 152)).boolEnum () ;
            if (GalgasBool::boolTrue == test_0) {
              {
              routine_addBaselineUsedRoutinesFromInstructionList_3F__26_ (enumerator_5184.current_mInstructionList (HERE), result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("baseline_used_routines.galgas3", 153)) ;
              }
            }
          }
          enumerator_5184.gotoNextObject () ;
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
                                                                             const GALGAS_ObjectArray & inEffectiveParameterArray,
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
  GGS_uint var_lastAddressPlusOne_1005 ;
  GGS_uint var_firstFreeAddress_1036 ;
  GGS_uintlist var_mirrorOffsetList_1069 ;
  GGS_uint joker_1127 ; // Joker input parameter
  ioArgument_ioRamBank.method_searchKey (constinArgument_inCurrentRamBank, joker_1127, var_firstFreeAddress_1036, var_lastAddressPlusOne_1005, var_mirrorOffsetList_1069, inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas3", 28)) ;
  GGS_sint_36__34_ var_size_1261 ;
  const GGS_byteDeclarationInRam temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mSizeExpression ().ptr (), ioArgument_ioRegisterTable, constinArgument_inConstantMap, var_size_1261, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas3", 29)) ;
  GalgasBool test_1 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_1) {
    test_1 = GGS_bool (ComparisonKind::lowerOrEqual, var_size_1261.objectCompare (GGS_sint_36__34_ (int64_t (0LL)))).boolEnum () ;
    if (GalgasBool::boolTrue == test_1) {
      const GGS_byteDeclarationInRam temp_2 = this ;
      GenericArray <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mName ().readProperty_location (), GGS_string ("size expression should be > 0"), fixItArray3  COMMA_SOURCE_FILE ("ram_sections.galgas3", 31)) ;
    }
  }
  if (GalgasBool::boolFalse == test_1) {
    GalgasBool test_4 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_4) {
      test_4 = GGS_bool (ComparisonKind::greaterThan, var_size_1261.objectCompare (GGS_sint_36__34_ (int64_t (4096LL)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_4) {
        const GGS_byteDeclarationInRam temp_5 = this ;
        GenericArray <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mName ().readProperty_location (), GGS_string ("size expression should be < 4096"), fixItArray6  COMMA_SOURCE_FILE ("ram_sections.galgas3", 33)) ;
      }
    }
    if (GalgasBool::boolFalse == test_4) {
      GGS_uintlist temp_7 = GGS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas3", 35)) ;
      temp_7.plusPlusAssignOperation (GGS_uintlist_2E_element::init_21_ (var_firstFreeAddress_1036, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ram_sections.galgas3", 35)) ;
      GGS_uintlist var_addressList_1470 = temp_7 ;
      UpEnumerator_uintlist enumerator_1516 (var_mirrorOffsetList_1069) ;
      while (enumerator_1516.hasCurrentObject ()) {
        var_addressList_1470.addAssignOperation (var_firstFreeAddress_1036.add_operation (enumerator_1516.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas3", 37))  COMMA_SOURCE_FILE ("ram_sections.galgas3", 37)) ;
        enumerator_1516.gotoNextObject () ;
      }
      GalgasBool test_8 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_8) {
        const GGS_byteDeclarationInRam temp_9 = this ;
        test_8 = ioArgument_ioDeclaredByteMap.getter_hasKey (temp_9.readProperty_mName ().readProperty_string () COMMA_SOURCE_FILE ("ram_sections.galgas3", 39)).operator_not (SOURCE_FILE ("ram_sections.galgas3", 39)).boolEnum () ;
        if (GalgasBool::boolTrue == test_8) {
          {
          const GGS_byteDeclarationInRam temp_10 = this ;
          ioArgument_ioDeclaredByteMap.setter_insertKey (temp_10.readProperty_mName (), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas3", 40)) ;
          }
        }
      }
      {
      const GGS_byteDeclarationInRam temp_11 = this ;
      const GGS_byteDeclarationInRam temp_12 = this ;
      const GGS_byteDeclarationInRam temp_13 = this ;
      const GGS_byteDeclarationInRam temp_14 = this ;
      ioArgument_ioRegisterTable.setter_insertKey (temp_11.readProperty_mName (), var_addressList_1470, var_size_1261.getter_uint (inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas3", 45)), temp_12.readProperty_mBitSliceTable (), temp_13.readProperty_mBitDefinitionString (), temp_14.readProperty_mProtection (), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas3", 42)) ;
      }
      GalgasBool test_15 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_15) {
        const GGS_byteDeclarationInRam temp_16 = this ;
        test_15 = constinArgument_inConstantMap.getter_hasKey (temp_16.readProperty_mName ().readProperty_string () COMMA_SOURCE_FILE ("ram_sections.galgas3", 50)).boolEnum () ;
        if (GalgasBool::boolTrue == test_15) {
          const GGS_byteDeclarationInRam temp_17 = this ;
          GenericArray <FixItDescription> fixItArray18 ;
          inCompiler->emitSemanticError (temp_17.readProperty_mName ().readProperty_location (), GGS_string ("this symbol is already declared as a constant"), fixItArray18  COMMA_SOURCE_FILE ("ram_sections.galgas3", 51)) ;
        }
      }
      var_firstFreeAddress_1036 = var_firstFreeAddress_1036.add_operation (var_size_1261.getter_uint (inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas3", 53)), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas3", 53)) ;
      {
      ioArgument_ioRamBank.setter_setMFirstFreeAddressForKey (var_firstFreeAddress_1036, constinArgument_inCurrentRamBank.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas3", 54)) ;
      }
      GalgasBool test_19 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_19) {
        test_19 = GGS_bool (ComparisonKind::greaterThan, var_firstFreeAddress_1036.objectCompare (var_lastAddressPlusOne_1005)).boolEnum () ;
        if (GalgasBool::boolTrue == test_19) {
          const GGS_byteDeclarationInRam temp_20 = this ;
          const GGS_byteDeclarationInRam temp_21 = this ;
          GenericArray <FixItDescription> fixItArray22 ;
          inCompiler->emitSemanticError (temp_20.readProperty_mName ().readProperty_location (), GGS_string ("overflow in '").add_operation (constinArgument_inCurrentRamBank.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas3", 56)).add_operation (GGS_string ("' ram bank for '"), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas3", 56)).add_operation (temp_21.readProperty_mName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas3", 56)).add_operation (GGS_string ("' declaration"), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas3", 56)), fixItArray22  COMMA_SOURCE_FILE ("ram_sections.galgas3", 56)) ;
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
  UpEnumerator_ramDefinitionList enumerator_3147 (constinArgument_inRamDefinitionList) ;
  while (enumerator_3147.hasCurrentObject ()) {
    UpEnumerator_declarationInRamList enumerator_3197 (enumerator_3147.current_mDeclaration (HERE)) ;
    while (enumerator_3197.hasCurrentObject ()) {
      callExtensionMethod_handleDeclaration ((cPtr_declarationInRam *) enumerator_3197.current_mDeclarationInRAM (HERE).ptr (), constinArgument_inConstantMap, ioArgument_ioUsedRegisters, ioArgument_ioRamBankTable, ioArgument_ioAllRegisters, enumerator_3147.current_mBankName (HERE), outArgument_outDeclaredByteMap, inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas3", 81)) ;
      enumerator_3197.gotoNextObject () ;
    }
    enumerator_3147.gotoNextObject () ;
  }
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    test_0 = GGS_bool (gOption_piccoloOptions_ouputListingFile.readProperty_value ()).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("ram_sections.galgas3", 92)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas3", 92)), inCompiler  COMMA_SOURCE_FILE ("ram_sections.galgas3", 92)) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("*").add_operation (constinArgument_inListingTitle.getter_leftAndRightPadding (GGS_uint (uint32_t (117U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ram_sections.galgas3", 93)), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas3", 93)).add_operation (GGS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas3", 93)), inCompiler  COMMA_SOURCE_FILE ("ram_sections.galgas3", 93)) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string::makeEmptyString ().getter_leftAndRightPadding (GGS_uint (uint32_t (119U)), GGS_char (utf32 (42)) COMMA_SOURCE_FILE ("ram_sections.galgas3", 94)).add_operation (GGS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas3", 94)), inCompiler  COMMA_SOURCE_FILE ("ram_sections.galgas3", 94)) ;
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("Variable").getter_leftPadding (GGS_uint (uint32_t (40U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ram_sections.galgas3", 95)).add_operation (GGS_string (" Address\n"), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas3", 95)), inCompiler  COMMA_SOURCE_FILE ("ram_sections.galgas3", 95)) ;
      UpEnumerator_registerTable enumerator_3865 (ioArgument_ioAllRegisters) ;
      while (enumerator_3865.hasCurrentObject ()) {
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = constinArgument_inSpecialRegisterTable.getter_hasKey (enumerator_3865.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("ram_sections.galgas3", 97)).operator_not (SOURCE_FILE ("ram_sections.galgas3", 97)).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            ioArgument_ioListFileContents.plusAssignOperation(enumerator_3865.current_lkey (HERE).readProperty_string ().getter_leftPadding (GGS_uint (uint32_t (40U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("ram_sections.galgas3", 98)).add_operation (GGS_string (" "), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas3", 98)), inCompiler  COMMA_SOURCE_FILE ("ram_sections.galgas3", 98)) ;
            UpEnumerator_uintlist enumerator_4037 (enumerator_3865.current_mRegisterAddressList (HERE)) ;
            while (enumerator_4037.hasCurrentObject ()) {
              ioArgument_ioListFileContents.plusAssignOperation(enumerator_4037.current_mValue (HERE).getter_hexString (SOURCE_FILE ("ram_sections.galgas3", 100)), inCompiler  COMMA_SOURCE_FILE ("ram_sections.galgas3", 100)) ;
              enumerator_4037.gotoNextObject () ;
              if (enumerator_4037.hasCurrentObject ()) {
                ioArgument_ioListFileContents.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("ram_sections.galgas3", 101)) ;
              }
            }
            ioArgument_ioListFileContents.plusAssignOperation(enumerator_3865.current_mBitDefinitionString (HERE).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ram_sections.galgas3", 103)), inCompiler  COMMA_SOURCE_FILE ("ram_sections.galgas3", 103)) ;
          }
        }
        enumerator_3865.gotoNextObject () ;
      }
      ioArgument_ioListFileContents.plusAssignOperation(GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("ram_sections.galgas3", 106)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_block performInlining'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_block::method_performInlining (const GGS_stringset constinArgument_inInlinedRoutineSet,
                                                                   const GGS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                   const GGS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                   GGS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_BlockInstructionBlockList var_inlinedBlockList_1148 = GGS_pic_31__38_BlockInstructionBlockList::init (inCompiler COMMA_HERE) ;
  const GGS_pic_31__38_Instruction_5F_block temp_0 = this ;
  UpEnumerator_pic_31__38_BlockInstructionBlockList enumerator_1243 (temp_0.readProperty_mBlockList ()) ;
  while (enumerator_1243.hasCurrentObject ()) {
    GGS_pic_31__38_InstructionList var_instructionList_1465 ;
    {
    routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (enumerator_1243.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList_1465, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas3", 33)) ;
    }
    var_inlinedBlockList_1148.addAssignOperation (enumerator_1243.current_mBlockName (HERE), var_instructionList_1465, enumerator_1243.current_mBlockTerminaisonForBlockInstruction (HERE), enumerator_1243.current_mEndOfBlock (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas3", 40)) ;
    enumerator_1243.gotoNextObject () ;
  }
  const GGS_pic_31__38_Instruction_5F_block temp_1 = this ;
  const GGS_pic_31__38_Instruction_5F_block temp_2 = this ;
  const GGS_pic_31__38_Instruction_5F_block temp_3 = this ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_pic_31__38_Instruction_5F_block::init_21__21__21__21_ (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mStartBlockName (), var_inlinedBlockList_1148, temp_3.readProperty_mEndOfBlockInstruction (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas3", 46)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_FOREVER performInlining'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FOREVER::method_performInlining (const GGS_stringset constinArgument_inInlinedRoutineSet,
                                                                     const GGS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                     const GGS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                     GGS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InstructionList var_instructionList_2288 ;
  {
  const GGS_pic_31__38_Instruction_5F_FOREVER temp_0 = this ;
  routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (temp_0.readProperty_mInstructionList (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList_2288, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas3", 62)) ;
  }
  const GGS_pic_31__38_Instruction_5F_FOREVER temp_1 = this ;
  const GGS_pic_31__38_Instruction_5F_FOREVER temp_2 = this ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_pic_31__38_Instruction_5F_FOREVER::init_21__21__21_ (temp_1.readProperty_mInstructionLocation (), var_instructionList_2288, temp_2.readProperty_mEndOfInstructionList (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas3", 69)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_do_while performInlining'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_do_5F_while::method_performInlining (const GGS_stringset constinArgument_inInlinedRoutineSet,
                                                                         const GGS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                         const GGS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                         GGS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InstructionList var_repeatedInstructionList_2954 ;
  {
  const GGS_pic_31__38_Instruction_5F_do_5F_while temp_0 = this ;
  routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (temp_0.readProperty_mRepeatedInstructionList (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_repeatedInstructionList_2954, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas3", 82)) ;
  }
  GGS_pic_31__38_DoWhilePartList var_whilePartList_2988 = GGS_pic_31__38_DoWhilePartList::init (inCompiler COMMA_HERE) ;
  const GGS_pic_31__38_Instruction_5F_do_5F_while temp_1 = this ;
  UpEnumerator_pic_31__38_DoWhilePartList enumerator_3063 (temp_1.readProperty_mWhilePartList ()) ;
  while (enumerator_3063.hasCurrentObject ()) {
    GGS_pic_31__38_InstructionList var_instructionList_3297 ;
    {
    routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (enumerator_3063.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList_3297, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas3", 91)) ;
    }
    var_whilePartList_2988.addAssignOperation (enumerator_3063.current_mCondition (HERE), var_instructionList_3297, enumerator_3063.current_mEndOfPartLocation (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas3", 98)) ;
    enumerator_3063.gotoNextObject () ;
  }
  const GGS_pic_31__38_Instruction_5F_do_5F_while temp_2 = this ;
  const GGS_pic_31__38_Instruction_5F_do_5F_while temp_3 = this ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_pic_31__38_Instruction_5F_do_5F_while::init_21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), var_repeatedInstructionList_2954, temp_3.readProperty_mEndOfRepeatedInstructionList (), var_whilePartList_2988, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas3", 100)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_savebank performInlining'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_savebank::method_performInlining (const GGS_stringset constinArgument_inInlinedRoutineSet,
                                                                      const GGS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                      const GGS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                      GGS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InstructionList var_instructionList_4069 ;
  {
  const GGS_pic_31__38_Instruction_5F_savebank temp_0 = this ;
  routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (temp_0.readProperty_mInstructionList (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList_4069, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas3", 114)) ;
  }
  const GGS_pic_31__38_Instruction_5F_savebank temp_1 = this ;
  const GGS_pic_31__38_Instruction_5F_savebank temp_2 = this ;
  const GGS_pic_31__38_Instruction_5F_savebank temp_3 = this ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_pic_31__38_Instruction_5F_savebank::init_21__21__21__21_ (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mRegister (), var_instructionList_4069, temp_3.readProperty_mEndOfSaveBankInstruction (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas3", 121)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_structured_if performInlining'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_structured_5F_if::method_performInlining (const GGS_stringset constinArgument_inInlinedRoutineSet,
                                                                              const GGS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                              const GGS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                              GGS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InstructionList var_thenInstructionList_4761 ;
  {
  const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_0 = this ;
  routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (temp_0.readProperty_mThenInstructionList (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_thenInstructionList_4761, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas3", 135)) ;
  }
  GGS_pic_31__38_InstructionList var_elseInstructionList_4969 ;
  {
  const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_1 = this ;
  routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (temp_1.readProperty_mElseInstructionList (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_elseInstructionList_4969, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas3", 142)) ;
  }
  const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_2 = this ;
  const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_3 = this ;
  const GGS_pic_31__38_Instruction_5F_structured_5F_if temp_4 = this ;
  ioArgument_ioInstructionList.addAssignOperation (GGS_pic_31__38_Instruction_5F_structured_5F_if::init_21__21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mIfCondition (), var_thenInstructionList_4761, var_elseInstructionList_4969, temp_4.readProperty_mEndOfElsePartLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas3", 149)) ;
}

//--------------------------------------------------------------------------------------------------
//Overriding extension method '@pic18Instruction_JSR performInlining'
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_JSR::method_performInlining (const GGS_stringset constinArgument_inInlinedRoutineSet,
                                                                 const GGS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                 const GGS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                 GGS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GGS_bool var_inlineDone_5597 ;
  GalgasBool test_0 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_0) {
    const GGS_pic_31__38_Instruction_5F_JSR temp_1 = this ;
    const GGS_pic_31__38_Instruction_5F_JSR temp_2 = this ;
    const GGS_pic_31__38_Instruction_5F_JSR temp_3 = this ;
    test_0 = constinArgument_inDeclaredRoutineMap.getter_hasKey (temp_1.readProperty_mTargetLabel ().readProperty_string () COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas3", 165)).operator_and (constinArgument_inInlinedRoutineSet.getter_hasKey (temp_2.readProperty_mTargetLabel ().readProperty_string () COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas3", 166)) COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas3", 165)).operator_and (constinArgument_inCurrentlyInlinedRoutineSet.getter_hasKey (temp_3.readProperty_mTargetLabel ().readProperty_string () COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas3", 167)).operator_not (SOURCE_FILE ("pic18_routine_inlining.galgas3", 167)) COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas3", 166)).boolEnum () ;
    if (GalgasBool::boolTrue == test_0) {
      GGS_luint var_requiredBank_5886 ;
      GGS_bool var_isNoReturn_5982 ;
      GGS_pic_31__38_InstructionList var_instructionList_6026 ;
      const GGS_pic_31__38_Instruction_5F_JSR temp_4 = this ;
      GGS_luint joker_5905 ; // Joker input parameter
      GGS_bool joker_5938 ; // Joker input parameter
      constinArgument_inDeclaredRoutineMap.method_searchKey (temp_4.readProperty_mTargetLabel (), var_requiredBank_5886, joker_5905, joker_5938, var_isNoReturn_5982, var_instructionList_6026, inCompiler COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas3", 168)) ;
      GalgasBool test_5 = GalgasBool::boolTrue ;
      if (GalgasBool::boolTrue == test_5) {
        test_5 = var_isNoReturn_5982.boolEnum () ;
        if (GalgasBool::boolTrue == test_5) {
          const GGS_pic_31__38_Instruction_5F_JSR temp_6 = this ;
          GenericArray <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mTargetLabel ().readProperty_location (), GGS_string ("a \"noreturn\" routine cannot be inlined"), fixItArray7  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas3", 177)) ;
          var_inlineDone_5597.drop () ; // Release error dropped variable
        }
      }
      if (GalgasBool::boolFalse == test_5) {
        GalgasBool test_8 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_8) {
          test_8 = GGS_bool (ComparisonKind::notEqual, var_requiredBank_5886.readProperty_uint ().objectCompare (GGS_uint::class_func_max (SOURCE_FILE ("pic18_routine_inlining.galgas3", 179)))).boolEnum () ;
          if (GalgasBool::boolTrue == test_8) {
            const GGS_pic_31__38_Instruction_5F_JSR temp_9 = this ;
            ioArgument_ioInstructionList.addAssignOperation (GGS_pic_31__38_Instruction_5F_checkbank::init_21__21_ (temp_9.readProperty_mInstructionLocation (), var_requiredBank_5886.readProperty_uint (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas3", 180)) ;
          }
        }
        GGS_stringset var_currentlyInlinedRoutineSet_6357 = constinArgument_inCurrentlyInlinedRoutineSet ;
        const GGS_pic_31__38_Instruction_5F_JSR temp_10 = this ;
        var_currentlyInlinedRoutineSet_6357.plusPlusAssignOperation (temp_10.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas3", 183)) ;
        UpEnumerator_pic_31__38_InstructionList enumerator_6535 (var_instructionList_6026) ;
        while (enumerator_6535.hasCurrentObject ()) {
          callExtensionMethod_performInlining ((cPtr_pic_31__38_PiccoloInstruction *) enumerator_6535.current_mInstruction (HERE).ptr (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, var_currentlyInlinedRoutineSet_6357, ioArgument_ioInstructionList, inCompiler COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas3", 186)) ;
          enumerator_6535.gotoNextObject () ;
        }
        var_inlineDone_5597 = GGS_bool (true) ;
      }
    }
  }
  if (GalgasBool::boolFalse == test_0) {
    var_inlineDone_5597 = GGS_bool (false) ;
  }
  GalgasBool test_11 = GalgasBool::boolTrue ;
  if (GalgasBool::boolTrue == test_11) {
    test_11 = var_inlineDone_5597.operator_not (SOURCE_FILE ("pic18_routine_inlining.galgas3", 198)).boolEnum () ;
    if (GalgasBool::boolTrue == test_11) {
      const GGS_pic_31__38_Instruction_5F_JSR temp_12 = this ;
      ioArgument_ioInstructionList.addAssignOperation (temp_12  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas3", 199)) ;
    }
  }
}

//--------------------------------------------------------------------------------------------------
//
//Routine 'performInlineFromInstructionList????!'
//
//--------------------------------------------------------------------------------------------------

void routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (const GGS_pic_31__38_InstructionList constinArgument_inInstructionList,
                                                                   const GGS_stringset constinArgument_inInlinedRoutineSet,
                                                                   const GGS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                   const GGS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                   GGS_pic_31__38_InstructionList & outArgument_outInstructionList,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionList.drop () ; // Release 'out' argument
  outArgument_outInstructionList = GGS_pic_31__38_InstructionList::init (inCompiler COMMA_HERE) ;
  UpEnumerator_pic_31__38_InstructionList enumerator_7294 (constinArgument_inInstructionList) ;
  while (enumerator_7294.hasCurrentObject ()) {
    callExtensionMethod_performInlining ((cPtr_pic_31__38_PiccoloInstruction *) enumerator_7294.current_mInstruction (HERE).ptr (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, outArgument_outInstructionList, inCompiler COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas3", 213)) ;
    enumerator_7294.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'pic18PerformRoutineInline??&&'
//
//--------------------------------------------------------------------------------------------------

void routine_pic_31__38_PerformRoutineInline_3F__3F__26__26_ (const GGS_stringset constinArgument_inInlinedRoutineSet,
                                                              const GGS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                              GGS_pic_31__38_InterruptDefinitionList & ioArgument_ioInterruptDefinitionList,
                                                              GGS_pic_31__38_RoutineDefinitionList & ioArgument_ioRoutineDefinitionList,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GGS_pic_31__38_InterruptDefinitionList var_interruptDefinitionList_7845 = GGS_pic_31__38_InterruptDefinitionList::init (inCompiler COMMA_HERE) ;
  UpEnumerator_pic_31__38_InterruptDefinitionList enumerator_7954 (ioArgument_ioInterruptDefinitionList) ;
  while (enumerator_7954.hasCurrentObject ()) {
    GGS_pic_31__38_InstructionList var_instructionList_8191 ;
    {
    routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (enumerator_7954.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, GGS_stringset::class_func_emptySet (SOURCE_FILE ("pic18_routine_inlining.galgas3", 237)), var_instructionList_8191, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas3", 233)) ;
    }
    var_interruptDefinitionList_7845.addAssignOperation (enumerator_7954.current_mInterruptName (HERE), enumerator_7954.current_mFastReturn (HERE), var_instructionList_8191, enumerator_7954.current_mEndOfInterruptLocation (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas3", 240)) ;
    enumerator_7954.gotoNextObject () ;
  }
  ioArgument_ioInterruptDefinitionList = var_interruptDefinitionList_7845 ;
  GGS_pic_31__38_RoutineDefinitionList var_routineDefinitionList_8428 = GGS_pic_31__38_RoutineDefinitionList::init (inCompiler COMMA_HERE) ;
  UpEnumerator_pic_31__38_RoutineDefinitionList enumerator_8574 (ioArgument_ioRoutineDefinitionList) ;
  while (enumerator_8574.hasCurrentObject ()) {
    GGS_pic_31__38_InstructionList var_instructionList_8807 ;
    {
    routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (enumerator_8574.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, GGS_stringset::class_func_emptySet (SOURCE_FILE ("pic18_routine_inlining.galgas3", 254)), var_instructionList_8807, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas3", 250)) ;
    }
    var_routineDefinitionList_8428.addAssignOperation (enumerator_8574.current_mRoutineName (HERE), enumerator_8574.current_mRequiredBank (HERE), enumerator_8574.current_mReturnedBank (HERE), enumerator_8574.current_mPreservesBank (HERE), enumerator_8574.current_mIsNoReturn (HERE), var_instructionList_8807, enumerator_8574.current_mEndOfRoutineLocation (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas3", 257)) ;
    enumerator_8574.gotoNextObject () ;
  }
  ioArgument_ioRoutineDefinitionList = var_routineDefinitionList_8428 ;
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
      test_0 = GGS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputDeviceList.readProperty_value ()).operator_or (GGS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputPic_31__38_DeviceList.readProperty_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas3", 4)).operator_or (GGS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputBaselineDeviceList.readProperty_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas3", 5)).operator_or (GGS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputMidrangeDeviceList.readProperty_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas3", 6)).boolEnum () ;
      if (GalgasBool::boolTrue == test_0) {
        GGS_stringlist var_allDevices_447 = GGS_filewrapper (gWrapperDirectory_0_embeddedDevices).getter_allTextFilePaths (SOURCE_FILE ("piccolo_program.galgas3", 9)) ;
        GGS_stringlist var_pic_31__38__5F_devices_515 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
        GGS_stringlist var_midrange_5F_devices_553 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
        GGS_stringlist var_baseline_5F_devices_594 = GGS_stringlist::init (inCompiler COMMA_HERE) ;
        UpEnumerator_stringlist enumerator_655 (var_allDevices_447) ;
        while (enumerator_655.hasCurrentObject ()) {
          GGS_string var_name_699 = enumerator_655.current_mValue (HERE).getter_lastPathComponent (SOURCE_FILE ("piccolo_program.galgas3", 15)).getter_deletingPathExtension (SOURCE_FILE ("piccolo_program.galgas3", 15)) ;
          GGS_piccoloDeviceModel var_piccoloDeviceModel_844 ;
          {
          routine_parseDeviceDefinition_3F__21_ (GGS_lstring::init_21__21_ (var_name_699, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 16)), inCompiler COMMA_HERE), var_piccoloDeviceModel_844, inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 16)) ;
          }
          switch (var_piccoloDeviceModel_844.readProperty_mProcessorType ().enumValue ()) {
          case GGS_processorType::Enumeration::invalid:
            break ;
          case GGS_processorType::Enumeration::enum_pic_31__38__5F__36__30_:
          case GGS_processorType::Enumeration::enum_pic_31__38__5F__38__30_:
            {
              var_pic_31__38__5F_devices_515.addAssignOperation (var_name_699  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 19)) ;
            }
            break ;
          case GGS_processorType::Enumeration::enum_midrange:
            {
              var_midrange_5F_devices_553.addAssignOperation (var_name_699  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 21)) ;
            }
            break ;
          case GGS_processorType::Enumeration::enum_baseline:
            {
              var_baseline_5F_devices_594.addAssignOperation (var_name_699  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 23)) ;
            }
            break ;
          }
          enumerator_655.gotoNextObject () ;
        }
        GalgasBool test_1 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_1) {
          test_1 = GGS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputDeviceList.readProperty_value ()).operator_or (GGS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputBaselineDeviceList.readProperty_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas3", 27)).boolEnum () ;
          if (GalgasBool::boolTrue == test_1) {
            {
            routine_print_3F_ (var_baseline_5F_devices_594.getter_count (SOURCE_FILE ("piccolo_program.galgas3", 28)).getter_string (SOURCE_FILE ("piccolo_program.galgas3", 28)).add_operation (GGS_string (" baseline devices supported by Piccolo "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 28)).add_operation (GGS_application::class_func_projectVersionString (SOURCE_FILE ("piccolo_program.galgas3", 28)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 28)).add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 28)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 28)) ;
            }
            GGS_uint var_idx_1433 = GGS_uint (uint32_t (0U)) ;
            UpEnumerator_stringlist enumerator_1452 (var_baseline_5F_devices_594) ;
            while (enumerator_1452.hasCurrentObject ()) {
              {
              routine_print_3F_ (enumerator_1452.current_mValue (HERE).getter_rightPadding (GGS_uint (uint32_t (15U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("piccolo_program.galgas3", 31)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 31)) ;
              }
              var_idx_1433.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 32)) ;
              GalgasBool test_2 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_2) {
                test_2 = GGS_bool (ComparisonKind::equal, var_idx_1433.objectCompare (GGS_uint (uint32_t (5U)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_2) {
                  var_idx_1433 = GGS_uint (uint32_t (0U)) ;
                  {
                  routine_print_3F_ (GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 35)) ;
                  }
                }
              }
              enumerator_1452.gotoNextObject () ;
            }
            GalgasBool test_3 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_3) {
              test_3 = GGS_bool (ComparisonKind::notEqual, var_idx_1433.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_3) {
                {
                routine_print_3F_ (GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 39)) ;
                }
              }
            }
          }
        }
        GalgasBool test_4 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_4) {
          test_4 = GGS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputDeviceList.readProperty_value ()).operator_or (GGS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputMidrangeDeviceList.readProperty_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas3", 43)).boolEnum () ;
          if (GalgasBool::boolTrue == test_4) {
            {
            routine_print_3F_ (var_midrange_5F_devices_553.getter_count (SOURCE_FILE ("piccolo_program.galgas3", 44)).getter_string (SOURCE_FILE ("piccolo_program.galgas3", 44)).add_operation (GGS_string (" mid-range devices supported by Piccolo "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 44)).add_operation (GGS_application::class_func_projectVersionString (SOURCE_FILE ("piccolo_program.galgas3", 44)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 44)).add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 44)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 44)) ;
            }
            GGS_uint var_idx_2031 = GGS_uint (uint32_t (0U)) ;
            UpEnumerator_stringlist enumerator_2050 (var_midrange_5F_devices_553) ;
            while (enumerator_2050.hasCurrentObject ()) {
              {
              routine_print_3F_ (enumerator_2050.current_mValue (HERE).getter_rightPadding (GGS_uint (uint32_t (15U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("piccolo_program.galgas3", 47)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 47)) ;
              }
              var_idx_2031.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 48)) ;
              GalgasBool test_5 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_5) {
                test_5 = GGS_bool (ComparisonKind::equal, var_idx_2031.objectCompare (GGS_uint (uint32_t (5U)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_5) {
                  var_idx_2031 = GGS_uint (uint32_t (0U)) ;
                  {
                  routine_print_3F_ (GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 51)) ;
                  }
                }
              }
              enumerator_2050.gotoNextObject () ;
            }
            GalgasBool test_6 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_6) {
              test_6 = GGS_bool (ComparisonKind::notEqual, var_idx_2031.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_6) {
                {
                routine_print_3F_ (GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 55)) ;
                }
              }
            }
          }
        }
        GalgasBool test_7 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_7) {
          test_7 = GGS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputDeviceList.readProperty_value ()).operator_or (GGS_bool (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_outputPic_31__38_DeviceList.readProperty_value ()) COMMA_SOURCE_FILE ("piccolo_program.galgas3", 59)).boolEnum () ;
          if (GalgasBool::boolTrue == test_7) {
            {
            routine_print_3F_ (var_pic_31__38__5F_devices_515.getter_count (SOURCE_FILE ("piccolo_program.galgas3", 60)).getter_string (SOURCE_FILE ("piccolo_program.galgas3", 60)).add_operation (GGS_string (" pic18 devices supported by Piccolo "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 60)).add_operation (GGS_application::class_func_projectVersionString (SOURCE_FILE ("piccolo_program.galgas3", 60)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 60)).add_operation (GGS_string (":\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 60)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 60)) ;
            }
            GGS_uint var_idx_2615 = GGS_uint (uint32_t (0U)) ;
            UpEnumerator_stringlist enumerator_2634 (var_pic_31__38__5F_devices_515) ;
            while (enumerator_2634.hasCurrentObject ()) {
              {
              routine_print_3F_ (enumerator_2634.current_mValue (HERE).getter_rightPadding (GGS_uint (uint32_t (15U)), GGS_char (utf32 (32)) COMMA_SOURCE_FILE ("piccolo_program.galgas3", 63)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 63)) ;
              }
              var_idx_2615.plusAssignOperation(GGS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 64)) ;
              GalgasBool test_8 = GalgasBool::boolTrue ;
              if (GalgasBool::boolTrue == test_8) {
                test_8 = GGS_bool (ComparisonKind::equal, var_idx_2615.objectCompare (GGS_uint (uint32_t (5U)))).boolEnum () ;
                if (GalgasBool::boolTrue == test_8) {
                  var_idx_2615 = GGS_uint (uint32_t (0U)) ;
                  {
                  routine_print_3F_ (GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 67)) ;
                  }
                }
              }
              enumerator_2634.gotoNextObject () ;
            }
            GalgasBool test_9 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_9) {
              test_9 = GGS_bool (ComparisonKind::notEqual, var_idx_2615.objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_9) {
                {
                routine_print_3F_ (GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 71)) ;
                }
              }
            }
          }
        }
      }
    }
    GalgasBool test_10 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_10) {
      test_10 = GGS_bool (ComparisonKind::greaterThan, GGS_string (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_exportDeviceFiles.readProperty_value ()).getter_count (SOURCE_FILE ("piccolo_program.galgas3", 77)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_10) {
        GGS_string var_dir_3074 = GGS_string (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_exportDeviceFiles.readProperty_value ()) ;
        GalgasBool test_11 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_11) {
          test_11 = var_dir_3074.getter_directoryExists (SOURCE_FILE ("piccolo_program.galgas3", 79)).operator_not (SOURCE_FILE ("piccolo_program.galgas3", 79)).boolEnum () ;
          if (GalgasBool::boolTrue == test_11) {
            var_dir_3074.method_makeDirectory (inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 80)) ;
          }
        }
        GGS_filewrapper var_fw_3233 = GGS_filewrapper (gWrapperDirectory_0_embeddedDevices) ;
        GGS_stringlist var_allDevices_3288 = GGS_filewrapper (gWrapperDirectory_0_embeddedDevices).getter_allTextFilePaths (SOURCE_FILE ("piccolo_program.galgas3", 83)) ;
        UpEnumerator_stringlist enumerator_3357 (var_allDevices_3288) ;
        while (enumerator_3357.hasCurrentObject ()) {
          GGS_string var_definitionString_3401 = var_fw_3233.getter_textFileContentsAtPath (enumerator_3357.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 85)) ;
          var_definitionString_3401.method_writeToFile (var_dir_3074.add_operation (enumerator_3357.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 86)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 86)) ;
          enumerator_3357.gotoNextObject () ;
        }
        {
        routine_print_3F_ (var_allDevices_3288.getter_count (SOURCE_FILE ("piccolo_program.galgas3", 88)).getter_string (SOURCE_FILE ("piccolo_program.galgas3", 88)).add_operation (GGS_string (" devices copied in '"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 88)).add_operation (var_dir_3074, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 88)).add_operation (GGS_string ("' directory\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 88)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 88)) ;
        }
      }
    }
    GGS_string var_deviceForMemoryDescription_3694 = GGS_string (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_memoryDescription.readProperty_value ()) ;
    GalgasBool test_12 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_12) {
      test_12 = GGS_bool (ComparisonKind::greaterThan, var_deviceForMemoryDescription_3694.getter_count (SOURCE_FILE ("piccolo_program.galgas3", 92)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_12) {
        GGS_string var_devicePath_3848 = GGS_string ("/").add_operation (var_deviceForMemoryDescription_3694, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 93)).add_operation (GGS_string (".piccoloDevice"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 93)) ;
        GalgasBool test_13 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_13) {
          test_13 = GGS_filewrapper (gWrapperDirectory_0_embeddedDevices).getter_fileExistsAtPath (var_devicePath_3848, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 94)).boolEnum () ;
          if (GalgasBool::boolTrue == test_13) {
            GGS_piccoloDeviceModel var_piccoloDeviceModel_4077 ;
            {
            routine_parseDeviceDefinition_3F__21_ (GGS_lstring::init_21__21_ (var_deviceForMemoryDescription_3694, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 95)), inCompiler COMMA_HERE), var_piccoloDeviceModel_4077, inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 95)) ;
            }
            GGS_uint var_totalRam_4113 = GGS_uint (uint32_t (0U)) ;
            UpEnumerator_ramBankTable enumerator_4179 (var_piccoloDeviceModel_4077.readProperty_mRamBankTable ()) ;
            while (enumerator_4179.hasCurrentObject ()) {
              var_totalRam_4113 = var_totalRam_4113.add_operation (enumerator_4179.current_mLastAddressPlusOne (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 98)).substract_operation (enumerator_4179.current_mFirstFreeAddress (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 98)) ;
              enumerator_4179.gotoNextObject () ;
            }
            {
            routine_print_3F_ (var_deviceForMemoryDescription_3694.add_operation (GGS_string (" device:\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 100)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 100)) ;
            }
            {
            routine_print_3F_ (GGS_string ("  ").add_operation (var_piccoloDeviceModel_4077.readProperty_mRamBankTable ().getter_count (SOURCE_FILE ("piccolo_program.galgas3", 101)).getter_string (SOURCE_FILE ("piccolo_program.galgas3", 101)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 101)).add_operation (GGS_string (" RAM banks (total "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 101)).add_operation (var_totalRam_4113.getter_string (SOURCE_FILE ("piccolo_program.galgas3", 101)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 101)).add_operation (GGS_string (" bytes):\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 101)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 101)) ;
            }
            UpEnumerator_ramBankTable enumerator_4541 (var_piccoloDeviceModel_4077.readProperty_mRamBankTable ()) ;
            while (enumerator_4541.hasCurrentObject ()) {
              {
              routine_print_3F_ (GGS_string ("    bank \"").add_operation (enumerator_4541.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 103)).add_operation (GGS_string ("\" from "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 103)).add_operation (enumerator_4541.current_mFirstFreeAddress (HERE).getter_hexString (SOURCE_FILE ("piccolo_program.galgas3", 103)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 103)).add_operation (GGS_string (" to "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 103)).add_operation (enumerator_4541.current_mLastAddressPlusOne (HERE).substract_operation (GGS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 104)).getter_hexString (SOURCE_FILE ("piccolo_program.galgas3", 104)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 104)).add_operation (GGS_string (" ("), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 104)).add_operation (enumerator_4541.current_mLastAddressPlusOne (HERE).substract_operation (enumerator_4541.current_mFirstFreeAddress (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 105)).getter_string (SOURCE_FILE ("piccolo_program.galgas3", 105)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 105)).add_operation (GGS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 105)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 103)) ;
              }
              UpEnumerator_uintlist enumerator_4823 (enumerator_4541.current_mMirrorOffsetList (HERE)) ;
              const bool bool_14 = true ;
              if (enumerator_4823.hasCurrentObject () && bool_14) {
                {
                routine_print_3F_ (GGS_string (", mirror at "), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 107)) ;
                }
                while (enumerator_4823.hasCurrentObject () && bool_14) {
                  {
                  routine_print_3F_ (enumerator_4541.current_mFirstFreeAddress (HERE).add_operation (enumerator_4823.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 108)).getter_hexString (SOURCE_FILE ("piccolo_program.galgas3", 108)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 108)) ;
                  }
                  enumerator_4823.gotoNextObject () ;
                  if (enumerator_4823.hasCurrentObject () && bool_14) {
                    {
                    routine_print_3F_ (GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 109)) ;
                    }
                  }
                }
              }
              {
              routine_print_3F_ (GGS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 111)) ;
              }
              enumerator_4541.gotoNextObject () ;
            }
            switch (var_piccoloDeviceModel_4077.readProperty_mProcessorType ().enumValue ()) {
            case GGS_processorType::Enumeration::invalid:
              break ;
            case GGS_processorType::Enumeration::enum_pic_31__38__5F__36__30_:
            case GGS_processorType::Enumeration::enum_pic_31__38__5F__38__30_:
              {
                {
                routine_print_3F_ (GGS_string ("  ROM size: ").add_operation (var_piccoloDeviceModel_4077.readProperty_mRomSize ().readProperty_uint ().getter_string (SOURCE_FILE ("piccolo_program.galgas3", 115)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 115)).add_operation (GGS_string (" bytes\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 115)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 115)) ;
                }
              }
              break ;
            case GGS_processorType::Enumeration::enum_midrange:
              {
                GGS_uint var_pageCount_5233 = var_piccoloDeviceModel_4077.readProperty_mRomSize ().readProperty_uint ().add_operation (GGS_uint (uint32_t (2047U)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 117)).divide_operation (GGS_uint (uint32_t (2048U)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 117)) ;
                GGS_string var_s_5314 = GGS_string::makeEmptyString () ;
                GalgasBool test_15 = GalgasBool::boolTrue ;
                if (GalgasBool::boolTrue == test_15) {
                  test_15 = GGS_bool (ComparisonKind::greaterThan, var_pageCount_5233.objectCompare (GGS_uint (uint32_t (1U)))).boolEnum () ;
                  if (GalgasBool::boolTrue == test_15) {
                    var_s_5314 = GGS_string ("s") ;
                  }
                }
                {
                routine_print_3F_ (GGS_string ("  ROM size: ").add_operation (var_piccoloDeviceModel_4077.readProperty_mRomSize ().readProperty_uint ().getter_string (SOURCE_FILE ("piccolo_program.galgas3", 122)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 122)).add_operation (GGS_string (" instructions ("), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 122)).add_operation (var_pageCount_5233.getter_string (SOURCE_FILE ("piccolo_program.galgas3", 123)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 122)).add_operation (GGS_string (" page"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 123)).add_operation (var_s_5314, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 123)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 123)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 122)) ;
                }
              }
              break ;
            case GGS_processorType::Enumeration::enum_baseline:
              {
                {
                routine_print_3F_ (GGS_string ("  ROM size: ").add_operation (var_piccoloDeviceModel_4077.readProperty_mRomSize ().readProperty_uint ().getter_string (SOURCE_FILE ("piccolo_program.galgas3", 125)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 125)).add_operation (GGS_string (" instructions\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 125)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 125)) ;
                }
              }
              break ;
            }
            GalgasBool test_16 = GalgasBool::boolTrue ;
            if (GalgasBool::boolTrue == test_16) {
              test_16 = GGS_bool (ComparisonKind::equal, var_piccoloDeviceModel_4077.readProperty_mEepromSize ().objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
              if (GalgasBool::boolTrue == test_16) {
                {
                routine_print_3F_ (GGS_string ("  No EEPROM\n"), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 128)) ;
                }
              }
            }
            if (GalgasBool::boolFalse == test_16) {
              {
              routine_print_3F_ (GGS_string ("  EEPROM size: ").add_operation (var_piccoloDeviceModel_4077.readProperty_mEepromSize ().getter_string (SOURCE_FILE ("piccolo_program.galgas3", 130)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 130)).add_operation (GGS_string (" bytes (at "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 130)).add_operation (var_piccoloDeviceModel_4077.readProperty_mEepromAddress ().getter_hexString (SOURCE_FILE ("piccolo_program.galgas3", 131)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 130)).add_operation (GGS_string (")\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 131)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 130)) ;
              }
            }
          }
        }
        if (GalgasBool::boolFalse == test_13) {
          GenericArray <FixItDescription> fixItArray17 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 134)), GGS_string ("The ").add_operation (var_deviceForMemoryDescription_3694, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 134)).add_operation (GGS_string (" device is not supported or does not exist"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 134)), fixItArray17  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 134)) ;
        }
      }
    }
    GGS_string var_deviceForRegistersDescription_6126 = GGS_string (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_registerDescription.readProperty_value ()) ;
    GalgasBool test_18 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_18) {
      test_18 = GGS_bool (ComparisonKind::greaterThan, var_deviceForRegistersDescription_6126.getter_count (SOURCE_FILE ("piccolo_program.galgas3", 139)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_18) {
        GGS_string var_devicePath_6288 = GGS_string ("/").add_operation (var_deviceForRegistersDescription_6126, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 140)).add_operation (GGS_string (".piccoloDevice"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 140)) ;
        GalgasBool test_19 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_19) {
          test_19 = GGS_filewrapper (gWrapperDirectory_0_embeddedDevices).getter_fileExistsAtPath (var_devicePath_6288, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 141)).boolEnum () ;
          if (GalgasBool::boolTrue == test_19) {
            GGS_piccoloDeviceModel var_piccoloDeviceModel_6524 ;
            {
            routine_parseDeviceDefinition_3F__21_ (GGS_lstring::init_21__21_ (var_deviceForRegistersDescription_6126, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 142)), inCompiler COMMA_HERE), var_piccoloDeviceModel_6524, inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 142)) ;
            }
            {
            routine_print_3F_ (var_deviceForRegistersDescription_6126.add_operation (GGS_string (" has "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 143)).add_operation (var_piccoloDeviceModel_6524.readProperty_mRegisterTable ().getter_count (SOURCE_FILE ("piccolo_program.galgas3", 143)).getter_string (SOURCE_FILE ("piccolo_program.galgas3", 143)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 143)).add_operation (GGS_string (" special registers:\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 143)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 143)) ;
            }
            UpEnumerator_registerTable enumerator_6716 (var_piccoloDeviceModel_6524.readProperty_mRegisterTable ()) ;
            while (enumerator_6716.hasCurrentObject ()) {
              GGS_string var_s_6754 = GGS_string ("  '").add_operation (enumerator_6716.current (HERE).readProperty_lkey ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 145)).add_operation (GGS_string ("' at "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 145)) ;
              UpEnumerator_uintlist enumerator_6823 (enumerator_6716.current (HERE).readProperty_mRegisterAddressList ()) ;
              while (enumerator_6823.hasCurrentObject ()) {
                var_s_6754.plusAssignOperation(enumerator_6823.current (HERE).readProperty_mValue ().getter_hexString (SOURCE_FILE ("piccolo_program.galgas3", 147)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 147)) ;
                enumerator_6823.gotoNextObject () ;
                if (enumerator_6823.hasCurrentObject ()) {
                  var_s_6754.plusAssignOperation(GGS_string (", "), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 148)) ;
                }
              }
              var_s_6754.plusAssignOperation(enumerator_6716.current (HERE).readProperty_mBitDefinitionString ().add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 150)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 150)) ;
              {
              routine_print_3F_ (var_s_6754, inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 151)) ;
              }
              enumerator_6716.gotoNextObject () ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_19) {
          GenericArray <FixItDescription> fixItArray20 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 154)), GGS_string ("The ").add_operation (var_deviceForRegistersDescription_6126, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 154)).add_operation (GGS_string (" device is not supported or does not exist"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 154)), fixItArray20  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 154)) ;
        }
      }
    }
    GGS_string var_deviceForConfigDescription_7228 = GGS_string (gOption_piccolo_5F_options_5F_not_5F_in_5F_cocoa_configDescription.readProperty_value ()) ;
    GalgasBool test_21 = GalgasBool::boolTrue ;
    if (GalgasBool::boolTrue == test_21) {
      test_21 = GGS_bool (ComparisonKind::greaterThan, var_deviceForConfigDescription_7228.getter_count (SOURCE_FILE ("piccolo_program.galgas3", 159)).objectCompare (GGS_uint (uint32_t (0U)))).boolEnum () ;
      if (GalgasBool::boolTrue == test_21) {
        GGS_string var_devicePath_7382 = GGS_string ("/").add_operation (var_deviceForConfigDescription_7228, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 160)).add_operation (GGS_string (".piccoloDevice"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 160)) ;
        GalgasBool test_22 = GalgasBool::boolTrue ;
        if (GalgasBool::boolTrue == test_22) {
          test_22 = GGS_filewrapper (gWrapperDirectory_0_embeddedDevices).getter_fileExistsAtPath (var_devicePath_7382, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 161)).boolEnum () ;
          if (GalgasBool::boolTrue == test_22) {
            GGS_piccoloDeviceModel var_piccoloDeviceModel_7612 ;
            {
            routine_parseDeviceDefinition_3F__21_ (GGS_lstring::init_21__21_ (var_deviceForConfigDescription_7228, GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 162)), inCompiler COMMA_HERE), var_piccoloDeviceModel_7612, inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 162)) ;
            }
            {
            routine_print_3F_ (var_deviceForConfigDescription_7228.add_operation (GGS_string (" has "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 163)).add_operation (var_piccoloDeviceModel_7612.readProperty_mConfigRegisterMap ().getter_count (SOURCE_FILE ("piccolo_program.galgas3", 163)).getter_string (SOURCE_FILE ("piccolo_program.galgas3", 163)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 163)).add_operation (GGS_string (" configuration registers:\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 163)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 163)) ;
            }
            UpEnumerator_configRegisterMap enumerator_7840 (var_piccoloDeviceModel_7612.readProperty_mConfigRegisterMap ()) ;
            while (enumerator_7840.hasCurrentObject ()) {
              GGS_string var_s_7923 = GGS_string ("REGISTER '").add_operation (enumerator_7840.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 165)).add_operation (GGS_string ("' at "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 165)).add_operation (enumerator_7840.current_mRegisterAddress (HERE).readProperty_uint ().getter_hexString (SOURCE_FILE ("piccolo_program.galgas3", 165)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 165)).add_operation (GGS_string (", width "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 165)).add_operation (enumerator_7840.current_mRegisterWidth (HERE).readProperty_uint ().getter_string (SOURCE_FILE ("piccolo_program.galgas3", 165)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 165)).add_operation (GGS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 165)) ;
              UpEnumerator_illegalMaskList enumerator_8080 (enumerator_7840.current_mIllegalMaskList (HERE)) ;
              while (enumerator_8080.hasCurrentObject ()) {
                var_s_7923.plusAssignOperation(GGS_string ("  illegal value ").add_operation (enumerator_8080.current_mIllegalValue (HERE).readProperty_uint ().getter_hexString (SOURCE_FILE ("piccolo_program.galgas3", 167)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 167)).add_operation (GGS_string (" mask "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 167)).add_operation (enumerator_8080.current_mIllegalMask (HERE).readProperty_uint ().getter_hexString (SOURCE_FILE ("piccolo_program.galgas3", 167)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 167)).add_operation (GGS_string (" description \""), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 167)).add_operation (enumerator_8080.current_mDescription (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 167)).add_operation (GGS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 167)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 167)) ;
                enumerator_8080.gotoNextObject () ;
              }
              UpEnumerator_configRegisterMaskMap enumerator_8343 (enumerator_7840.current_mConfigRegisterMaskMap (HERE)) ;
              while (enumerator_8343.hasCurrentObject ()) {
                var_s_7923.plusAssignOperation(GGS_string ("  setting '").add_operation (enumerator_8343.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 170)).add_operation (GGS_string ("': mask "), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 170)).add_operation (enumerator_8343.current_mMaskValue (HERE).readProperty_uint ().getter_hexString (SOURCE_FILE ("piccolo_program.galgas3", 170)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 170)).add_operation (GGS_string (" description \""), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 170)).add_operation (enumerator_8343.current_mDescription (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 170)).add_operation (GGS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 170)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 170)) ;
                UpEnumerator_fieldSettingMap enumerator_8581 (enumerator_8343.current_mFieldSettingMap (HERE)) ;
                while (enumerator_8581.hasCurrentObject ()) {
                  var_s_7923.plusAssignOperation(GGS_string ("    value ").add_operation (enumerator_8581.current_mValue (HERE).getter_hexString (SOURCE_FILE ("piccolo_program.galgas3", 172)), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 172)).add_operation (GGS_string (" description \""), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 172)).add_operation (enumerator_8581.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 172)).add_operation (GGS_string ("\"\n"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 172)), inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 172)) ;
                  enumerator_8581.gotoNextObject () ;
                }
                enumerator_8343.gotoNextObject () ;
              }
              {
              routine_print_3F_ (var_s_7923, inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 175)) ;
              }
              enumerator_7840.gotoNextObject () ;
            }
          }
        }
        if (GalgasBool::boolFalse == test_22) {
          GenericArray <FixItDescription> fixItArray23 ;
          inCompiler->emitSemanticError (GGS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 178)), GGS_string ("The ").add_operation (var_deviceForConfigDescription_7228, inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 178)).add_operation (GGS_string (" device is not supported or does not exist"), inCompiler COMMA_SOURCE_FILE ("piccolo_program.galgas3", 178)), fixItArray23  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 178)) ;
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
  cGrammar_pic_31__38__5F_grammar::_performSourceFileParsing_ (inCompiler, constinArgument_inSourceFile  COMMA_SOURCE_FILE ("piccolo_program.galgas3", 189)) ;
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

