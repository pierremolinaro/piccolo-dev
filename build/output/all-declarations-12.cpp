#include "Compiler.h"
#include "galgas-input-output.h"
#include "C_galgas_CLI_Options.h"
#include "PrologueEpilogue.h"

//--------------------------------------------------------------------------------------------------

#include "all-declarations-12.h"

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
  GALGAS_uint var_code_16873 ;
  GALGAS_string var_s_16892 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_1 = this ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (kBoolTrue == test_0) {
      var_code_16873 = GALGAS_uint (uint32_t (3840U)) ;
      var_s_16892 = GALGAS_string ("INCFSZ") ;
    }
  }
  if (kBoolFalse == test_0) {
    var_code_16873 = GALGAS_uint (uint32_t (2816U)) ;
    var_s_16892 = GALGAS_string ("DECFSZ") ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_3 = this ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().operator_not (SOURCE_FILE ("midrange_build_binary_code.galgas", 500)).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_code_16873 = var_code_16873.operator_or (GALGAS_uint (uint32_t (128U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 501)) ;
    }
  }
  const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_4 = this ;
  var_code_16873 = var_code_16873.operator_or (temp_4.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (127U)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 503)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 503)) ;
  const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_5 = this ;
  var_s_16892.plusAssign_operation(GALGAS_string (" ").add_operation (temp_5.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 504)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 504)) ;
  {
  routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (var_code_16873, ioArgument_ioAddress, var_s_16892, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 505)) ;
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
  GALGAS_uint var_targetAddress_17558 ;
  const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_9 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (GALGAS_lstring::init_21__21_ (temp_9.readProperty_mTargetLabel (), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 511)), inCompiler COMMA_HERE), var_targetAddress_17558, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 511)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_10 = this ;
  const GALGAS_midrange_5F_intermediate_5F_incDecRegisterInCondition temp_11 = this ;
  routine_emit_5F_midrange_5F_GOTOinstruction_3F__26__3F__3F__26_ (temp_10.readProperty_mInstructionLocation (), ioArgument_ioAddress, temp_11.readProperty_mTargetLabel (), var_targetAddress_17558, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 512)) ;
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
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_SLEEP generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_SLEEP::method_generateBinaryCodeAtAddress (const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                GALGAS_string & ioArgument_ioListFileContents,
                                                                                                GALGAS_uint & ioArgument_ioAddress,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_SLEEP temp_0 = this ;
  routine_emitMidrangeCodeAtWordAddress_3F__26__3F__26_ (GALGAS_uint (uint32_t (99U)), ioArgument_ioAddress, temp_0, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 584)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_literalOperation generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_literalOperation::method_generateBinaryCodeAtAddress (const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                                           const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                                           const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                                           const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                                                                           GALGAS_uint & ioArgument_ioAddress,
                                                                                                           Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_0 = this ;
  GALGAS_uint var_code_21453 = extensionGetter_baseCode (temp_0.readProperty_mLiteralInstruction (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 611)) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_1 = this ;
  var_code_21453 = var_code_21453.operator_or (temp_1.readProperty_mLiteralValue () COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 612)) ;
  {
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_literalOperation temp_2 = this ;
  routine_emitMidrangeCodeAtWordAddress_3F__26__3F__26_ (var_code_21453, ioArgument_ioAddress, temp_2, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 613)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_pseudo_LABEL generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_pseudo_5F_LABEL::method_generateBinaryCodeAtAddress (const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                           const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                           const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                           const GALGAS_midrange_5F_symbolTable constinArgument_inRoutineSymbolTable,
                                                                                           GALGAS_string & ioArgument_ioListFileContents,
                                                                                           GALGAS_uint & ioArgument_ioAddress,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_targetAddress_22059 ;
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_0 = this ;
  constinArgument_inRoutineSymbolTable.method_searchKey (temp_0.readProperty_mLabel (), var_targetAddress_22059, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 625)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::notEqual, var_targetAddress_22059.objectCompare (ioArgument_ioAddress)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_2 = this ;
      const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mLabel ().readProperty_location (), GALGAS_string ("Internal second pass error: the '").add_operation (temp_3.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 627)).add_operation (GALGAS_string ("' label gets "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 627)).add_operation (ioArgument_ioAddress.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 628)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 628)).add_operation (GALGAS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 628)).add_operation (var_targetAddress_22059.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 629)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 628)).add_operation (GALGAS_string (" in first pass"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 629)), fixItArray4  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 627)) ;
    }
  }
  {
  const GALGAS_midrange_5F_intermediate_5F_pseudo_5F_LABEL temp_5 = this ;
  routine_emitNoMidrangeCodeAtWordAddress_3F__3F__26_ (ioArgument_ioAddress, temp_5, ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 631)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@midrange_intermediate_instruction_MNOP generateBinaryCodeAtAddress'
//
//--------------------------------------------------------------------------------------------------

void cPtr_midrange_5F_intermediate_5F_instruction_5F_MNOP::method_generateBinaryCodeAtAddress (const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                                               const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                                               const GALGAS_uint /* constinArgument_inTotalBankCount */,
                                                                                               const GALGAS_midrange_5F_symbolTable /* constinArgument_inRoutineSymbolTable */,
                                                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                                                               GALGAS_uint & ioArgument_ioAddress,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ().objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticWarning (temp_2.readProperty_mOccurrenceFactor ().readProperty_location (), GALGAS_string ("No generated code"), fixItArray3  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 644)) ;
    }
  }
  GALGAS_uint var_idx_22924 = GALGAS_uint (uint32_t (0U)) ;
  const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_4 = this ;
  if (temp_4.readProperty_mOccurrenceFactor ().readProperty_uint ().isValid ()) {
    uint32_t variant_22934 = temp_4.readProperty_mOccurrenceFactor ().readProperty_uint ().uintValue () ;
    bool loop_22934 = true ;
    while (loop_22934) {
      const GALGAS_midrange_5F_intermediate_5F_instruction_5F_MNOP temp_5 = this ;
      loop_22934 = GALGAS_bool (ComparisonKind::lowerThan, var_idx_22924.objectCompare (temp_5.readProperty_mOccurrenceFactor ().readProperty_uint ())).isValid () ;
      if (loop_22934) {
        loop_22934 = GALGAS_bool (ComparisonKind::lowerThan, var_idx_22924.objectCompare (temp_5.readProperty_mOccurrenceFactor ().readProperty_uint ())).boolValue () ;
      }
      if (loop_22934 && (0 == variant_22934)) {
        loop_22934 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("midrange_build_binary_code.galgas", 647)) ;
      }
      if (loop_22934) {
        variant_22934 -- ;
        {
        routine_emitMidrangeDirectCodeAtWordAddress_3F__26__3F__26_ (GALGAS_uint (uint32_t (0U)), ioArgument_ioAddress, GALGAS_string ("NOP"), ioArgument_ioListFileContents, inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 650)) ;
        }
        var_idx_22924.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 651)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'build_midrange_ipic_binary_code??????&!'
//
//--------------------------------------------------------------------------------------------------

void routine_build_5F_midrange_5F_ipic_5F_binary_5F_code_3F__3F__3F__3F__3F__3F__26__21_ (const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                          const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                          const GALGAS_uint constinArgument_inTotalBankCount,
                                                                                          const GALGAS_midrange_5F_intermediate_5F_instructionList constinArgument_inGeneratedInstructionList,
                                                                                          const GALGAS_uint constinArgument_inROMsize,
                                                                                          const GALGAS_actualConfigurationMap constinArgument_inActualConfigurationMap,
                                                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                                                          GALGAS_uint & outArgument_outUsedROMsize,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outUsedROMsize.drop () ; // Release 'out' argument
  GALGAS_midrange_5F_symbolTable var_symbolTable_23942 = GALGAS_midrange_5F_symbolTable::init (inCompiler COMMA_HERE) ;
  GALGAS_uint var_currentAddress_23992 = GALGAS_uint (uint32_t (0U)) ;
  cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_24018 (constinArgument_inGeneratedInstructionList, EnumerationOrder::up) ;
  while (enumerator_24018.hasCurrentObject ()) {
    callExtensionMethod_enterLabelAtAddress ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_24018.current_mInstruction (HERE).ptr (), var_symbolTable_23942, var_currentAddress_23992, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 674)) ;
    enumerator_24018.gotoNextObject () ;
  }
  GALGAS_uint var_lastAddressForFirstPass_24154 = var_currentAddress_23992 ;
  outArgument_outUsedROMsize = var_currentAddress_23992 ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 679)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 679)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 679)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("GENERATED CODE").getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (117U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 680)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 680)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 680)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 680)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 681)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 681)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 681)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("Address Code Mnemonic\n"), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 682)) ;
  {
  routine_initCodeGenerator (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 683)) ;
  }
  var_currentAddress_23992 = GALGAS_uint (uint32_t (0U)) ;
  {
  routine_setEmitAddress_3F_ (GALGAS_uint (uint32_t (0U)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 685)) ;
  }
  cEnumerator_midrange_5F_intermediate_5F_instructionList enumerator_24661 (constinArgument_inGeneratedInstructionList, EnumerationOrder::up) ;
  while (enumerator_24661.hasCurrentObject ()) {
    callExtensionMethod_generateBinaryCodeAtAddress ((cPtr_midrange_5F_intermediate_5F_instruction *) enumerator_24661.current_mInstruction (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, constinArgument_inTotalBankCount, var_symbolTable_23942, ioArgument_ioListFileContents, var_currentAddress_23992, inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 687)) ;
    {
    routine_checkCurrentEmitAddress_3F_ (var_currentAddress_23992.multiply_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 696)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 696)) ;
    }
    enumerator_24661.gotoNextObject () ;
  }
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, var_lastAddressForFirstPass_24154.objectCompare (var_currentAddress_23992)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 699)), GALGAS_string ("Internal second pass error: the last address gets ").add_operation (var_currentAddress_23992.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 699)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 699)).add_operation (GALGAS_string (" value in second pass, while it gets "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 699)).add_operation (var_lastAddressForFirstPass_24154.getter_hexString (SOURCE_FILE ("midrange_build_binary_code.galgas", 701)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 700)).add_operation (GALGAS_string (" value in first pass"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 701)), fixItArray1  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 699)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_2 = kBoolTrue ;
    if (kBoolTrue == test_2) {
      test_2 = GALGAS_bool (ComparisonKind::greaterThan, var_lastAddressForFirstPass_24154.objectCompare (constinArgument_inROMsize)).boolEnum () ;
      if (kBoolTrue == test_2) {
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 703)), GALGAS_string ("Program too large: ").add_operation (var_lastAddressForFirstPass_24154.getter_string (SOURCE_FILE ("midrange_build_binary_code.galgas", 703)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 703)).add_operation (GALGAS_string (" bytes (rom size is "), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 703)).add_operation (constinArgument_inROMsize.getter_string (SOURCE_FILE ("midrange_build_binary_code.galgas", 705)), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 704)).add_operation (GALGAS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 705)), fixItArray3  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 703)) ;
      }
    }
  }
  cEnumerator_actualConfigurationMap enumerator_25587 (constinArgument_inActualConfigurationMap, EnumerationOrder::up) ;
  while (enumerator_25587.hasCurrentObject ()) {
    {
    routine_setEmitAddress_3F_ (enumerator_25587.current_mRegisterAddress (HERE).add_operation (enumerator_25587.current_mRegisterAddress (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 709)), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 709)) ;
    }
    {
    routine_emitCode_3F_ (enumerator_25587.current_mRegisterValue (HERE), inCompiler  COMMA_SOURCE_FILE ("midrange_build_binary_code.galgas", 710)) ;
    }
    enumerator_25587.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'midrange_analyze??'
//
//--------------------------------------------------------------------------------------------------

void routine_midrange_5F_analyze_3F__3F_ (const GALGAS_midrange_5F_model constinArgument_inPiccoloModel,
                                          const GALGAS_string constinArgument_inSourceFileName,
                                          Compiler * inCompiler
                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_sourceFileBaseName_760 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("midrange_semantics.galgas", 17)).getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 17)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, var_sourceFileBaseName_760.objectCompare (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_string ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_location (), GALGAS_string ("the program name ('").add_operation (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 19)).add_operation (GALGAS_string ("') should be identical to the file base name '"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 19)).add_operation (var_sourceFileBaseName_760, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 20)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 20)), fixItArray1  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 19)) ;
    }
  }
  GALGAS_string var_listFileContents_1110 = GALGAS_string::makeEmptyString () ;
  GALGAS_piccoloDeviceModel var_piccoloDeviceModel_1239 ;
  {
  routine_parseDeviceDefinition_3F__21_ (constinArgument_inPiccoloModel.readProperty_mDeviceName (), var_piccoloDeviceModel_1239, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 24)) ;
  }
  switch (var_piccoloDeviceModel_1239.readProperty_mProcessorType ().enumValue ()) {
  case GALGAS_processorType::kNotBuilt:
    break ;
  case GALGAS_processorType::kEnum_midrange:
    {
    }
    break ;
  case GALGAS_processorType::kEnum_pic_31__38__5F__36__30_:
  case GALGAS_processorType::kEnum_pic_31__38__5F__38__30_:
    {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mDeviceName ().readProperty_location (), GALGAS_string ("a pic18 device is not accepted here : only a mid-range device"), fixItArray2  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 27)) ;
    }
    break ;
  case GALGAS_processorType::kEnum_baseline:
    {
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mDeviceName ().readProperty_location (), GALGAS_string ("a baseline device is not accepted here : only a mid-range device"), fixItArray3  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 28)) ;
    }
    break ;
  }
  GALGAS_bool var_hasInterrupt_1636 = GALGAS_bool (false) ;
  cEnumerator_midrange_5F_interruptDefinitionList enumerator_1689 (constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList (), EnumerationOrder::up) ;
  while (enumerator_1689.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_hasInterrupt_1636.boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_1689.current_mInterruptLocation (HERE), GALGAS_string ("only one interrupt routine can be defined"), fixItArray5  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 34)) ;
      }
    }
    var_hasInterrupt_1636 = GALGAS_bool (true) ;
    enumerator_1689.gotoNextObject () ;
  }
  GALGAS_actualConfigurationMap var_actualConfigurationMap_2062 ;
  {
  routine_buildConfig_3F__3F__26__21_ (var_piccoloDeviceModel_1239.readProperty_mConfigRegisterMap (), constinArgument_inPiccoloModel.readProperty_mConfigDefinitionList (), var_listFileContents_1110, var_actualConfigurationMap_2062, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 39)) ;
  }
  GALGAS_constantMap var_constantMap_2161 = GALGAS_constantMap::init (inCompiler COMMA_HERE) ;
  GALGAS_stringset var_usedRegisters_2195 = GALGAS_stringset::init (inCompiler COMMA_HERE) ;
  GALGAS_registerTable var_registerTable_2235 = var_piccoloDeviceModel_1239.readProperty_mRegisterTable () ;
  GALGAS_lstring var_romSizeString_2320 = GALGAS_lstring::init_21__21_ (GALGAS_string ("ROM_SIZE"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 50)), inCompiler COMMA_HERE) ;
  {
  var_constantMap_2161.setter_insertKey (var_romSizeString_2320, var_piccoloDeviceModel_1239.readProperty_mRomSize ().readProperty_uint ().getter_sint_36__34_ (SOURCE_FILE ("midrange_semantics.galgas", 51)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 51)) ;
  }
  cEnumerator_constantDefinitionList enumerator_2501 (constinArgument_inPiccoloModel.readProperty_mConstantDefinitionList (), EnumerationOrder::up) ;
  while (enumerator_2501.hasCurrentObject ()) {
    GALGAS_sint_36__34_ var_result_2623 ;
    callExtensionMethod_eval ((cPtr_immediatExpression *) enumerator_2501.current_mExpression (HERE).ptr (), var_registerTable_2235, var_constantMap_2161, var_result_2623, var_usedRegisters_2195, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 54)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = var_registerTable_2235.getter_hasKey (enumerator_2501.current_mConstantName (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 55)).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_2501.current_mConstantName (HERE).readProperty_location (), GALGAS_string ("'").add_operation (enumerator_2501.current_mConstantName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 56)).add_operation (GALGAS_string ("' is already declared as ram register or special register"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 56)), fixItArray7  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 56)) ;
      }
    }
    if (kBoolFalse == test_6) {
      {
      var_constantMap_2161.setter_insertKey (enumerator_2501.current_mConstantName (HERE), var_result_2623, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 58)) ;
      }
    }
    enumerator_2501.gotoNextObject () ;
  }
  GALGAS_ramBankTable var_ramBank_2960 = var_piccoloDeviceModel_1239.readProperty_mRamBankTable () ;
  GALGAS_declaredByteMap var_declaredByteMap_3252 ;
  {
  routine_analyze_5F_ram_5F_sections_3F__3F__3F__26__26__3F__26__26__21_ (GALGAS_string ("DECLARED VARIABLES"), constinArgument_inPiccoloModel.readProperty_mRamDefinitionList (), var_constantMap_2161, var_usedRegisters_2195, var_ramBank_2960, var_piccoloDeviceModel_1239.readProperty_mRegisterTable (), var_listFileContents_1110, var_registerTable_2235, var_declaredByteMap_3252, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 63)) ;
  }
  GALGAS_midrange_5F_intermediate_5F_instructionList var_generatedInstructionList_3692 ;
  {
  routine_build_5F_midrange_5F_assembly_5F_instruction_5F_list_3F__3F__3F__3F__3F__3F__3F__21__26__26_ (var_piccoloDeviceModel_1239.readProperty_mRomSize ().readProperty_uint ().add_operation (GALGAS_uint (uint32_t (2047U)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 76)).divide_operation (GALGAS_uint (uint32_t (2048U)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 76)), var_piccoloDeviceModel_1239.readProperty_mBankCount ().readProperty_uint (), var_constantMap_2161, var_piccoloDeviceModel_1239.readProperty_mSharedBankName (), var_registerTable_2235, constinArgument_inPiccoloModel, var_hasInterrupt_1636, var_generatedInstructionList_3692, var_listFileContents_1110, var_usedRegisters_2195, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 75)) ;
  }
  GALGAS_stringset var_usedRoutineSet_3840 = function_midrange_5F_computeUsedRoutines (constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList (), constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 89)) ;
  GALGAS_midrange_5F_declaredRoutineMap var_declaredRoutineMap_3986 = GALGAS_midrange_5F_declaredRoutineMap::init (inCompiler COMMA_HERE) ;
  cEnumerator_midrange_5F_routineDefinitionList enumerator_4070 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), EnumerationOrder::up) ;
  while (enumerator_4070.hasCurrentObject ()) {
    {
    var_declaredRoutineMap_3986.setter_insertKey (enumerator_4070.current_mRoutineName (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 95)) ;
    }
    enumerator_4070.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedRoutineDeclarationUnicity_4235 = GALGAS_stringset::init (inCompiler COMMA_HERE) ;
  cEnumerator_lstringlist enumerator_4289 (constinArgument_inPiccoloModel.readProperty_mUnusedRoutineList (), EnumerationOrder::up) ;
  while (enumerator_4289.hasCurrentObject ()) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = var_declaredRoutineMap_3986.getter_hasKey (enumerator_4289.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 100)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 100)).boolEnum () ;
      if (kBoolTrue == test_8) {
        TC_Array <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (enumerator_4289.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_4289.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 101)).add_operation (GALGAS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 101)), fixItArray9  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 101)) ;
      }
    }
    if (kBoolFalse == test_8) {
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = var_unusedRoutineDeclarationUnicity_4235.getter_hasKey (enumerator_4289.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 102)).boolEnum () ;
        if (kBoolTrue == test_10) {
          TC_Array <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticWarning (enumerator_4289.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_4289.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 103)).add_operation (GALGAS_string ("' routine is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 103)), fixItArray11  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 103)) ;
        }
      }
      if (kBoolFalse == test_10) {
        enumGalgasBool test_12 = kBoolTrue ;
        if (kBoolTrue == test_12) {
          test_12 = var_usedRoutineSet_3840.getter_hasKey (enumerator_4289.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 104)).boolEnum () ;
          if (kBoolTrue == test_12) {
            TC_Array <FixItDescription> fixItArray13 ;
            inCompiler->emitSemanticWarning (enumerator_4289.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_4289.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 105)).add_operation (GALGAS_string ("' routine is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 105)), fixItArray13  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 105)) ;
          }
        }
      }
    }
    var_unusedRoutineDeclarationUnicity_4235.addAssign_operation (enumerator_4289.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 107)) ;
    enumerator_4289.gotoNextObject () ;
  }
  cEnumerator_midrange_5F_declaredRoutineMap enumerator_4838 (var_declaredRoutineMap_3986, EnumerationOrder::up) ;
  while (enumerator_4838.hasCurrentObject ()) {
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = var_usedRoutineSet_3840.getter_hasKey (enumerator_4838.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 110)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 110)).operator_and (var_unusedRoutineDeclarationUnicity_4235.getter_hasKey (enumerator_4838.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 110)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 110)) COMMA_SOURCE_FILE ("midrange_semantics.galgas", 110)).boolEnum () ;
      if (kBoolTrue == test_14) {
        TC_Array <FixItDescription> fixItArray15 ;
        inCompiler->emitSemanticWarning (enumerator_4838.current_lkey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_4838.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 111)).add_operation (GALGAS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 111)), fixItArray15  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 111)) ;
      }
    }
    enumerator_4838.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedByteDeclarationUnicity_5158 = GALGAS_stringset::init (inCompiler COMMA_HERE) ;
  cEnumerator_lstringlist enumerator_5209 (constinArgument_inPiccoloModel.readProperty_mUnusedRegisterList (), EnumerationOrder::up) ;
  while (enumerator_5209.hasCurrentObject ()) {
    enumGalgasBool test_16 = kBoolTrue ;
    if (kBoolTrue == test_16) {
      test_16 = var_registerTable_2235.getter_hasKey (enumerator_5209.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 117)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 117)).boolEnum () ;
      if (kBoolTrue == test_16) {
        TC_Array <FixItDescription> fixItArray17 ;
        inCompiler->emitSemanticError (enumerator_5209.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5209.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 118)).add_operation (GALGAS_string ("' byte is not declared"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 118)), fixItArray17  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 118)) ;
      }
    }
    if (kBoolFalse == test_16) {
      enumGalgasBool test_18 = kBoolTrue ;
      if (kBoolTrue == test_18) {
        test_18 = var_unusedByteDeclarationUnicity_5158.getter_hasKey (enumerator_5209.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 119)).boolEnum () ;
        if (kBoolTrue == test_18) {
          TC_Array <FixItDescription> fixItArray19 ;
          inCompiler->emitSemanticWarning (enumerator_5209.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5209.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 120)).add_operation (GALGAS_string ("' byte is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 120)), fixItArray19  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 120)) ;
        }
      }
      if (kBoolFalse == test_18) {
        enumGalgasBool test_20 = kBoolTrue ;
        if (kBoolTrue == test_20) {
          test_20 = var_usedRegisters_2195.getter_hasKey (enumerator_5209.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 121)).boolEnum () ;
          if (kBoolTrue == test_20) {
            TC_Array <FixItDescription> fixItArray21 ;
            inCompiler->emitSemanticWarning (enumerator_5209.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5209.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 122)).add_operation (GALGAS_string ("' byte is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 122)), fixItArray21  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 122)) ;
          }
        }
      }
    }
    var_unusedByteDeclarationUnicity_5158.addAssign_operation (enumerator_5209.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 124)) ;
    enumerator_5209.gotoNextObject () ;
  }
  cEnumerator_declaredByteMap enumerator_5738 (var_declaredByteMap_3252, EnumerationOrder::up) ;
  while (enumerator_5738.hasCurrentObject ()) {
    enumGalgasBool test_22 = kBoolTrue ;
    if (kBoolTrue == test_22) {
      test_22 = var_usedRegisters_2195.getter_hasKey (enumerator_5738.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 127)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 127)).operator_and (var_unusedByteDeclarationUnicity_5158.getter_hasKey (enumerator_5738.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("midrange_semantics.galgas", 127)).operator_not (SOURCE_FILE ("midrange_semantics.galgas", 127)) COMMA_SOURCE_FILE ("midrange_semantics.galgas", 127)).boolEnum () ;
      if (kBoolTrue == test_22) {
        TC_Array <FixItDescription> fixItArray23 ;
        inCompiler->emitSemanticWarning (enumerator_5738.current_lkey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5738.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 128)).add_operation (GALGAS_string ("' byte is unused"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 128)), fixItArray23  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 128)) ;
      }
    }
    enumerator_5738.gotoNextObject () ;
  }
  enumGalgasBool test_24 = kBoolTrue ;
  if (kBoolTrue == test_24) {
    test_24 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("midrange_semantics.galgas", 132)).objectCompare (GALGAS_uint (uint32_t (0U)))).operator_and (GALGAS_bool (gOption_piccolo_5F_options_performOptimizations.readProperty_value ()) COMMA_SOURCE_FILE ("midrange_semantics.galgas", 132)).boolEnum () ;
    if (kBoolTrue == test_24) {
      {
      routine_perform_5F_midrange_5F_optimizations_26__26_ (var_generatedInstructionList_3692, var_listFileContents_1110, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 133)) ;
      }
    }
  }
  enumGalgasBool test_25 = kBoolTrue ;
  if (kBoolTrue == test_25) {
    test_25 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("midrange_semantics.galgas", 136)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_25) {
      {
      routine_midrange_5F_compute_5F_JSR_5F_JUMP_26__26_ (var_generatedInstructionList_3692, var_listFileContents_1110, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 137)) ;
      }
    }
  }
  enumGalgasBool test_26 = kBoolTrue ;
  if (kBoolTrue == test_26) {
    test_26 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("midrange_semantics.galgas", 141)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_26) {
      GALGAS_uint var_usedROMsize_6776 ;
      {
      routine_build_5F_midrange_5F_ipic_5F_binary_5F_code_3F__3F__3F__3F__3F__3F__26__21_ (var_registerTable_2235, GALGAS_constantMap::init (inCompiler COMMA_HERE), var_piccoloDeviceModel_1239.readProperty_mBankCount ().readProperty_uint (), var_generatedInstructionList_3692, var_piccoloDeviceModel_1239.readProperty_mRomSize ().readProperty_uint (), var_actualConfigurationMap_2062, var_listFileContents_1110, var_usedROMsize_6776, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 143)) ;
      }
      GALGAS_string var_contents_6810 ;
      {
      routine_getGeneratedContents_21_ (var_contents_6810, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 154)) ;
      }
      GALGAS_string var_destinationFile_6874 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 155)).add_operation (GALGAS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 155)) ;
      GALGAS_bool joker_7014 ; // Joker input parameter
      var_contents_6810.method_writeToFileWhenDifferentContents (var_destinationFile_6874, joker_7014, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 156)) ;
      enumGalgasBool test_27 = kBoolTrue ;
      if (kBoolTrue == test_27) {
        test_27 = GALGAS_bool (gOption_piccolo_5F_options_output_5F_C_5F_Array.readProperty_value ()).boolEnum () ;
        if (kBoolTrue == test_27) {
          GALGAS_string var_baseName_7094 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("midrange_semantics.galgas", 158)).getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 158)) ;
          {
          routine_get_5F_C_5F_ArrayImplementation_3F__21_ (var_baseName_7094, var_contents_6810, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 159)) ;
          }
          var_destinationFile_6874 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 160)).add_operation (GALGAS_string (".c"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 160)) ;
          GALGAS_bool joker_7376 ; // Joker input parameter
          var_contents_6810.method_writeToFileWhenDifferentContents (var_destinationFile_6874, joker_7376, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 161)) ;
          {
          routine_get_5F_C_5F_ArrayHeader_3F__21_ (var_baseName_7094, var_contents_6810, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 162)) ;
          }
          var_destinationFile_6874 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 163)).add_operation (GALGAS_string (".h"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 163)) ;
          GALGAS_bool joker_7574 ; // Joker input parameter
          var_contents_6810.method_writeToFileWhenDifferentContents (var_destinationFile_6874, joker_7574, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 164)) ;
        }
      }
      enumGalgasBool test_28 = kBoolTrue ;
      if (kBoolTrue == test_28) {
        test_28 = GALGAS_application::class_func_verboseOutput (SOURCE_FILE ("midrange_semantics.galgas", 167)).boolEnum () ;
        if (kBoolTrue == test_28) {
          GALGAS_string var_verboseMessage_7680 = GALGAS_string ("  ROM size: ").add_operation (var_piccoloDeviceModel_1239.readProperty_mRomSize ().readProperty_uint ().getter_string (SOURCE_FILE ("midrange_semantics.galgas", 168)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 168)).add_operation (GALGAS_string (" words;"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 168)) ;
          var_verboseMessage_7680.plusAssign_operation(GALGAS_string (" used: ").add_operation (var_usedROMsize_6776.getter_string (SOURCE_FILE ("midrange_semantics.galgas", 169)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 169)).add_operation (GALGAS_string (" words ("), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 169)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 169)) ;
          var_verboseMessage_7680.plusAssign_operation(var_usedROMsize_6776.multiply_operation (GALGAS_uint (uint32_t (100U)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 170)).divide_operation (var_piccoloDeviceModel_1239.readProperty_mRomSize ().readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 170)).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 170)).add_operation (GALGAS_string ("%).\n"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 170)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 170)) ;
          cEnumerator_ramBankTable enumerator_8004 (var_ramBank_2960, EnumerationOrder::up) ;
          while (enumerator_8004.hasCurrentObject ()) {
            GALGAS_uint var_bankSize_8040 = enumerator_8004.current_mLastAddressPlusOne (HERE).substract_operation (enumerator_8004.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 172)) ;
            GALGAS_uint var_usedSize_8105 = enumerator_8004.current_mFirstFreeAddress (HERE).substract_operation (enumerator_8004.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 173)) ;
            var_verboseMessage_7680.plusAssign_operation(GALGAS_string ("  Bank '").add_operation (enumerator_8004.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 174)).add_operation (GALGAS_string ("': used "), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 174)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 174)) ;
            var_verboseMessage_7680.plusAssign_operation(var_usedSize_8105.getter_string (SOURCE_FILE ("midrange_semantics.galgas", 175)).add_operation (GALGAS_string (" / "), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 175)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 175)) ;
            var_verboseMessage_7680.plusAssign_operation(var_bankSize_8040.getter_string (SOURCE_FILE ("midrange_semantics.galgas", 176)).add_operation (GALGAS_string (" bytes ("), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 176)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 176)) ;
            var_verboseMessage_7680.plusAssign_operation(var_usedSize_8105.multiply_operation (GALGAS_uint (uint32_t (100U)), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 177)).divide_operation (var_bankSize_8040, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 177)).getter_string (SOURCE_FILE ("midrange_semantics.galgas", 177)).add_operation (GALGAS_string ("%).\n"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 177)), inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 177)) ;
            enumerator_8004.gotoNextObject () ;
          }
          {
          routine_print_3F_ (var_verboseMessage_7680, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 179)) ;
          }
        }
      }
      enumGalgasBool test_29 = kBoolTrue ;
      if (kBoolTrue == test_29) {
        test_29 = GALGAS_bool (gOption_piccolo_5F_options_generateAssembly.readProperty_value ()).boolEnum () ;
        if (kBoolTrue == test_29) {
          GALGAS_string var_assemblyCode_8573 ;
          {
          routine_midrange_5F_build_5F_assembly_5F_code_3F__3F__3F__3F__3F__21_ (var_piccoloDeviceModel_1239.readProperty_mDeviceName ().readProperty_string (), var_piccoloDeviceModel_1239.readProperty_mRegisterTable (), var_registerTable_2235, var_generatedInstructionList_3692, var_actualConfigurationMap_2062, var_assemblyCode_8573, inCompiler  COMMA_SOURCE_FILE ("midrange_semantics.galgas", 184)) ;
          }
          GALGAS_string var_asmDestinationFile_8850 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 192)).add_operation (GALGAS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 192)) ;
          GALGAS_bool joker_9002 ; // Joker input parameter
          var_assemblyCode_8573.method_writeToFileWhenDifferentContents (var_asmDestinationFile_8850, joker_9002, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 193)) ;
        }
      }
    }
  }
  if (kBoolFalse == test_26) {
    GALGAS_string var_hexDestinationFile_9083 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 196)).add_operation (GALGAS_string (".hex"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 196)) ;
    enumGalgasBool test_30 = kBoolTrue ;
    if (kBoolTrue == test_30) {
      test_30 = var_hexDestinationFile_9083.getter_fileExists (SOURCE_FILE ("midrange_semantics.galgas", 197)).boolEnum () ;
      if (kBoolTrue == test_30) {
        {
        GALGAS_string::class_method_deleteFile (var_hexDestinationFile_9083, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 198)) ;
        }
      }
    }
    GALGAS_string var_asmDestinationFile_9277 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 200)).add_operation (GALGAS_string (".asm"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 200)) ;
    enumGalgasBool test_31 = kBoolTrue ;
    if (kBoolTrue == test_31) {
      test_31 = var_asmDestinationFile_9277.getter_fileExists (SOURCE_FILE ("midrange_semantics.galgas", 201)).boolEnum () ;
      if (kBoolTrue == test_31) {
        {
        GALGAS_string::class_method_deleteFile (var_asmDestinationFile_9277, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 202)) ;
        }
      }
    }
  }
  enumGalgasBool test_32 = kBoolTrue ;
  if (kBoolTrue == test_32) {
    test_32 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_32) {
      GALGAS_string var_listFile_9582 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("midrange_semantics.galgas", 207)).add_operation (GALGAS_string (".list"), inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 207)) ;
      GALGAS_bool joker_9717 ; // Joker input parameter
      var_listFileContents_1110.method_writeToFileWhenDifferentContents (var_listFile_9582, joker_9717, inCompiler COMMA_SOURCE_FILE ("midrange_semantics.galgas", 208)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'pic18_analyze??'
//
//--------------------------------------------------------------------------------------------------

void routine_pic_31__38__5F_analyze_3F__3F_ (const GALGAS_pic_31__38_AST constinArgument_inPiccoloModel,
                                             const GALGAS_string constinArgument_inSourceFileName,
                                             Compiler * inCompiler
                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_string var_sourceFileBaseName_554 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("pic18_semantics.galgas", 14)).getter_stringByDeletingPathExtension (SOURCE_FILE ("pic18_semantics.galgas", 14)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, var_sourceFileBaseName_554.objectCompare (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_string ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_location (), GALGAS_string ("the program name ('").add_operation (constinArgument_inPiccoloModel.readProperty_mProgramName ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 16)).add_operation (GALGAS_string ("') should be identical to the file base name '"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 16)).add_operation (var_sourceFileBaseName_554, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 17)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 17)), fixItArray1  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 16)) ;
    }
  }
  GALGAS_string var_listFileContents_904 = GALGAS_string::makeEmptyString () ;
  GALGAS_piccoloDeviceModel var_piccoloDeviceModel_1001 ;
  GALGAS_uint var_accessBankSplitOffset_1032 ;
  GALGAS_ramBankTable var_ramBank_1074 ;
  GALGAS_bootloaderReservedRAMmap var_bootloaderReservedRAMmap_1114 ;
  GALGAS_routineDeclarationList var_bootloaderRoutineDeclarationListForBootloaderImplementation_1211 ;
  GALGAS_routineDeclarationList var_userRoutineDeclarationListForBootloaderImplementation_1301 ;
  GALGAS_routineDeclarationList var_bootloaderRoutineDeclarationListForUserProgramImplementation_1385 ;
  GALGAS_routineDeclarationList var_userRoutineDeclarationListForUserProgramImplementation_1476 ;
  GALGAS_luint var_bootloaderReservedROMsize_1544 ;
  GALGAS_registerTable var_registerTable_1690 ;
  GALGAS_string var_piccoloDeviceName_1718 ;
  switch (constinArgument_inPiccoloModel.readProperty_mProgramKind ().enumValue ()) {
  case GALGAS_programKind::kNotBuilt:
    break ;
  case GALGAS_programKind::kEnum_regularProgram:
    {
      var_piccoloDeviceName_1718 = constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference ().readProperty_string () ;
      {
      routine_parseDeviceDefinition_3F__21_ (constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference (), var_piccoloDeviceModel_1001, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 35)) ;
      }
      switch (var_piccoloDeviceModel_1001.readProperty_mProcessorType ().enumValue ()) {
      case GALGAS_processorType::kNotBuilt:
        break ;
      case GALGAS_processorType::kEnum_pic_31__38__5F__36__30_:
        {
          var_accessBankSplitOffset_1032 = GALGAS_uint (uint32_t (96U)) ;
        }
        break ;
      case GALGAS_processorType::kEnum_pic_31__38__5F__38__30_:
        {
          var_accessBankSplitOffset_1032 = GALGAS_uint (uint32_t (128U)) ;
        }
        break ;
      case GALGAS_processorType::kEnum_midrange:
        {
          TC_Array <FixItDescription> fixItArray2 ;
          inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference ().readProperty_location (), GALGAS_string ("a midrange device is not accepted here"), fixItArray2  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 39)) ;
          var_accessBankSplitOffset_1032.drop () ; // Release error dropped variable
        }
        break ;
      case GALGAS_processorType::kEnum_baseline:
        {
          TC_Array <FixItDescription> fixItArray3 ;
          inCompiler->emitSemanticError (constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference ().readProperty_location (), GALGAS_string ("a baseline device is not accepted here"), fixItArray3  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 40)) ;
          var_accessBankSplitOffset_1032.drop () ; // Release error dropped variable
        }
        break ;
      }
      var_ramBank_1074 = var_piccoloDeviceModel_1001.readProperty_mRamBankTable () ;
      var_bootloaderReservedRAMmap_1114 = GALGAS_bootloaderReservedRAMmap::init (inCompiler COMMA_HERE) ;
      var_registerTable_1690 = var_piccoloDeviceModel_1001.readProperty_mRegisterTable () ;
      var_bootloaderRoutineDeclarationListForBootloaderImplementation_1211 = GALGAS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
      var_userRoutineDeclarationListForBootloaderImplementation_1301 = GALGAS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
      var_bootloaderRoutineDeclarationListForUserProgramImplementation_1385 = GALGAS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
      var_userRoutineDeclarationListForUserProgramImplementation_1476 = GALGAS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
      var_bootloaderReservedROMsize_1544 = GALGAS_luint::init_21__21_ (GALGAS_uint (uint32_t (0U)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 49)), inCompiler COMMA_HERE) ;
    }
    break ;
  case GALGAS_programKind::kEnum_bootloaderProgram:
    {
      var_bootloaderRoutineDeclarationListForUserProgramImplementation_1385 = GALGAS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
      var_userRoutineDeclarationListForUserProgramImplementation_1476 = GALGAS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
      var_piccoloDeviceModel_1001.drop () ;
      var_piccoloDeviceName_1718.drop () ;
      var_accessBankSplitOffset_1032.drop () ;
      var_ramBank_1074.drop () ;
      var_registerTable_1690.drop () ;
      var_bootloaderReservedRAMmap_1114.drop () ;
      var_bootloaderRoutineDeclarationListForBootloaderImplementation_1211.drop () ;
      var_userRoutineDeclarationListForBootloaderImplementation_1301.drop () ;
      var_bootloaderReservedROMsize_1544.drop () ;
      cGrammar_pic_31__38__5F_grammar::_performSourceFileParsing_importBootloaderSpecification (inCompiler, constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference (), var_piccoloDeviceModel_1001, var_piccoloDeviceName_1718, var_accessBankSplitOffset_1032, var_ramBank_1074, var_registerTable_1690, var_bootloaderReservedRAMmap_1114, var_bootloaderRoutineDeclarationListForBootloaderImplementation_1211, var_userRoutineDeclarationListForBootloaderImplementation_1301, var_bootloaderReservedROMsize_1544  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 53)) ;
      cEnumerator_ramBankTable enumerator_3674 (var_ramBank_1074, EnumerationOrder::up) ;
      while (enumerator_3674.hasCurrentObject ()) {
        {
        var_ramBank_1074.setter_setMFirstFreeAddressForKey (enumerator_3674.current_mFirstAddress (HERE), enumerator_3674.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 65)) ;
        }
        enumerator_3674.gotoNextObject () ;
      }
    }
    break ;
  case GALGAS_programKind::kEnum_userProgram:
    {
      var_piccoloDeviceModel_1001.drop () ;
      var_piccoloDeviceName_1718.drop () ;
      var_accessBankSplitOffset_1032.drop () ;
      var_ramBank_1074.drop () ;
      var_registerTable_1690.drop () ;
      var_bootloaderReservedRAMmap_1114.drop () ;
      var_bootloaderRoutineDeclarationListForUserProgramImplementation_1385.drop () ;
      var_userRoutineDeclarationListForUserProgramImplementation_1476.drop () ;
      var_bootloaderReservedROMsize_1544.drop () ;
      cGrammar_pic_31__38__5F_grammar::_performSourceFileParsing_importBootloaderSpecification (inCompiler, constinArgument_inPiccoloModel.readProperty_mDeviceNameOrBootLoaderReference (), var_piccoloDeviceModel_1001, var_piccoloDeviceName_1718, var_accessBankSplitOffset_1032, var_ramBank_1074, var_registerTable_1690, var_bootloaderReservedRAMmap_1114, var_bootloaderRoutineDeclarationListForUserProgramImplementation_1385, var_userRoutineDeclarationListForUserProgramImplementation_1476, var_bootloaderReservedROMsize_1544  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 68)) ;
      var_bootloaderRoutineDeclarationListForBootloaderImplementation_1211 = GALGAS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
      var_userRoutineDeclarationListForBootloaderImplementation_1301 = GALGAS_routineDeclarationList::init (inCompiler COMMA_HERE) ;
    }
    break ;
  }
  GALGAS_pic_31__38_MacroMap var_macroMap_4529 = GALGAS_pic_31__38_MacroMap::init (inCompiler COMMA_HERE) ;
  cEnumerator_pic_31__38_MacroDefinitionList enumerator_4579 (constinArgument_inPiccoloModel.readProperty_mMacroDefinitionList (), EnumerationOrder::up) ;
  while (enumerator_4579.hasCurrentObject ()) {
    {
    var_macroMap_4529.setter_insertKey (enumerator_4579.current_mMacroName (HERE), enumerator_4579.current_mConstantNameList (HERE), enumerator_4579.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 85)) ;
    }
    enumerator_4579.gotoNextObject () ;
  }
  GALGAS_stringset var_usedRoutineSet_4797 = function_pic_31__38__5F_computeUsedRoutines (constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList (), constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), var_macroMap_4529, var_bootloaderRoutineDeclarationListForBootloaderImplementation_1211, var_userRoutineDeclarationListForUserProgramImplementation_1476, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 88)) ;
  GALGAS_declaredRoutineMap var_declaredRoutineMap_5079 = GALGAS_declaredRoutineMap::init (inCompiler COMMA_HERE) ;
  cEnumerator_pic_31__38_RoutineDefinitionList enumerator_5214 (constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList (), EnumerationOrder::up) ;
  while (enumerator_5214.hasCurrentObject ()) {
    {
    var_declaredRoutineMap_5079.setter_insertKey (enumerator_5214.current_mRoutineName (HERE), enumerator_5214.current_mRequiredBank (HERE), enumerator_5214.current_mReturnedBank (HERE), enumerator_5214.current_mPreservesBank (HERE), enumerator_5214.current_mIsNoReturn (HERE), enumerator_5214.current_mInstructionList (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 97)) ;
    }
    enumerator_5214.gotoNextObject () ;
  }
  GALGAS_stringset var_unusedDeclarationUnicity_5497 = GALGAS_stringset::init (inCompiler COMMA_HERE) ;
  cEnumerator_lstringlist enumerator_5544 (constinArgument_inPiccoloModel.readProperty_mUnusedRoutineList (), EnumerationOrder::up) ;
  while (enumerator_5544.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = var_declaredRoutineMap_5079.getter_hasKey (enumerator_5544.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 109)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 109)).boolEnum () ;
      if (kBoolTrue == test_4) {
        TC_Array <FixItDescription> fixItArray5 ;
        inCompiler->emitSemanticError (enumerator_5544.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5544.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 110)).add_operation (GALGAS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 110)), fixItArray5  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 110)) ;
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = var_unusedDeclarationUnicity_5497.getter_hasKey (enumerator_5544.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 111)).boolEnum () ;
        if (kBoolTrue == test_6) {
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticWarning (enumerator_5544.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5544.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 112)).add_operation (GALGAS_string ("' routine is already declared as unused"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 112)), fixItArray7  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 112)) ;
        }
      }
      if (kBoolFalse == test_6) {
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = var_usedRoutineSet_4797.getter_hasKey (enumerator_5544.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 113)).boolEnum () ;
          if (kBoolTrue == test_8) {
            TC_Array <FixItDescription> fixItArray9 ;
            inCompiler->emitSemanticWarning (enumerator_5544.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_5544.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 114)).add_operation (GALGAS_string ("' routine is declared as unused, but is used"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 114)), fixItArray9  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 114)) ;
          }
        }
      }
    }
    var_unusedDeclarationUnicity_5497.addAssign_operation (enumerator_5544.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 116)) ;
    enumerator_5544.gotoNextObject () ;
  }
  cEnumerator_declaredRoutineMap enumerator_6092 (var_declaredRoutineMap_5079, EnumerationOrder::up) ;
  while (enumerator_6092.hasCurrentObject ()) {
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = var_usedRoutineSet_4797.getter_hasKey (enumerator_6092.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 119)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 119)).operator_and (var_unusedDeclarationUnicity_5497.getter_hasKey (enumerator_6092.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 119)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 119)) COMMA_SOURCE_FILE ("pic18_semantics.galgas", 119)).boolEnum () ;
      if (kBoolTrue == test_10) {
        TC_Array <FixItDescription> fixItArray11 ;
        inCompiler->emitSemanticWarning (enumerator_6092.current_lkey (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_6092.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 120)).add_operation (GALGAS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 120)), fixItArray11  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 120)) ;
      }
    }
    enumerator_6092.gotoNextObject () ;
  }
  GALGAS_stringset var_inlinedRoutineSet_6361 = GALGAS_stringset::init (inCompiler COMMA_HERE) ;
  cEnumerator_lstringlist enumerator_6401 (constinArgument_inPiccoloModel.readProperty_mInlinedRoutineList (), EnumerationOrder::up) ;
  while (enumerator_6401.hasCurrentObject ()) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_declaredRoutineMap_5079.getter_hasKey (enumerator_6401.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 126)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 126)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_6401.current_mValue (HERE).readProperty_location (), GALGAS_string ("the '").add_operation (enumerator_6401.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 127)).add_operation (GALGAS_string ("' routine is not declared"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 127)), fixItArray13  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 127)) ;
      }
    }
    if (kBoolFalse == test_12) {
      enumGalgasBool test_14 = kBoolTrue ;
      if (kBoolTrue == test_14) {
        test_14 = var_usedRoutineSet_4797.getter_hasKey (enumerator_6401.current_mValue (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 128)).operator_not (SOURCE_FILE ("pic18_semantics.galgas", 128)).boolEnum () ;
        if (kBoolTrue == test_14) {
          TC_Array <FixItDescription> fixItArray15 ;
          inCompiler->emitSemanticWarning (enumerator_6401.current_mValue (HERE).readProperty_location (), GALGAS_string ("useless declaration, the '").add_operation (enumerator_6401.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 129)).add_operation (GALGAS_string ("' routine is unused"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 129)), fixItArray15  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 129)) ;
        }
      }
      if (kBoolFalse == test_14) {
        var_inlinedRoutineSet_6361.addAssign_operation (enumerator_6401.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 131)) ;
      }
    }
    enumerator_6401.gotoNextObject () ;
  }
  GALGAS_pic_31__38_InterruptDefinitionList var_interruptDefinitionList_6822 = constinArgument_inPiccoloModel.readProperty_mInterruptDefinitionList () ;
  GALGAS_pic_31__38_RoutineDefinitionList var_routineDefinitionList_6922 = constinArgument_inPiccoloModel.readProperty_mRoutineDefinitionList () ;
  {
  routine_pic_31__38_PerformRoutineInline_3F__3F__26__26_ (var_inlinedRoutineSet_6361, var_declaredRoutineMap_5079, var_interruptDefinitionList_6822, var_routineDefinitionList_6922, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 136)) ;
  }
  cEnumerator_checkpicList enumerator_7209 (constinArgument_inPiccoloModel.readProperty_mCheckpicList (), EnumerationOrder::up) ;
  while (enumerator_7209.hasCurrentObject ()) {
    GALGAS_bool var_found_7271 = GALGAS_bool (false) ;
    cEnumerator_lstringlist enumerator_7294 (enumerator_7209.current_mValueList (HERE), EnumerationOrder::up) ;
    bool bool_16 = var_found_7271.operator_not (SOURCE_FILE ("pic18_semantics.galgas", 145)).isValidAndTrue () ;
    if (enumerator_7294.hasCurrentObject () && bool_16) {
      while (enumerator_7294.hasCurrentObject () && bool_16) {
        var_found_7271 = GALGAS_bool (ComparisonKind::equal, enumerator_7294.current_mValue (HERE).readProperty_string ().objectCompare (var_piccoloDeviceName_1718)) ;
        enumerator_7294.gotoNextObject () ;
        if (enumerator_7294.hasCurrentObject ()) {
          bool_16 = var_found_7271.operator_not (SOURCE_FILE ("pic18_semantics.galgas", 145)).isValidAndTrue () ;
        }
      }
    }
    enumGalgasBool test_17 = kBoolTrue ;
    if (kBoolTrue == test_17) {
      test_17 = var_found_7271.operator_not (SOURCE_FILE ("pic18_semantics.galgas", 148)).boolEnum () ;
      if (kBoolTrue == test_17) {
        TC_Array <FixItDescription> fixItArray18 ;
        inCompiler->emitSemanticError (enumerator_7209.current_mErrorLocation (HERE), GALGAS_string ("this code is not available for '").add_operation (var_piccoloDeviceName_1718, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 149)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 149)), fixItArray18  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 149)) ;
      }
    }
    enumerator_7209.gotoNextObject () ;
  }
  GALGAS_bool var_hasHighInterrupt_7577 = GALGAS_bool (false) ;
  GALGAS_bool var_highInterruptIsFast_7614 = GALGAS_bool (false) ;
  GALGAS_bool var_hasLowInterrupt_7654 = GALGAS_bool (false) ;
  GALGAS_bool var_lowInterruptIsFast_7690 = GALGAS_bool (false) ;
  cEnumerator_pic_31__38_InterruptDefinitionList enumerator_7753 (var_interruptDefinitionList_6822, EnumerationOrder::up) ;
  while (enumerator_7753.hasCurrentObject ()) {
    enumGalgasBool test_19 = kBoolTrue ;
    if (kBoolTrue == test_19) {
      test_19 = GALGAS_bool (ComparisonKind::equal, constinArgument_inPiccoloModel.readProperty_mProgramKind ().objectCompare (GALGAS_programKind::class_func_userProgram (SOURCE_FILE ("pic18_semantics.galgas", 158)))).boolEnum () ;
      if (kBoolTrue == test_19) {
        TC_Array <FixItDescription> fixItArray20 ;
        inCompiler->emitSemanticError (enumerator_7753.current_mInterruptName (HERE).readProperty_location (), GALGAS_string ("interrupt routine is not allowed for a bootloader user program"), fixItArray20  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 159)) ;
      }
    }
    enumGalgasBool test_21 = kBoolTrue ;
    if (kBoolTrue == test_21) {
      test_21 = GALGAS_bool (ComparisonKind::equal, enumerator_7753.current_mInterruptName (HERE).readProperty_string ().objectCompare (GALGAS_string ("high"))).boolEnum () ;
      if (kBoolTrue == test_21) {
        var_highInterruptIsFast_7614 = enumerator_7753.current_mFastReturn (HERE) ;
        enumGalgasBool test_22 = kBoolTrue ;
        if (kBoolTrue == test_22) {
          test_22 = var_hasHighInterrupt_7577.boolEnum () ;
          if (kBoolTrue == test_22) {
            TC_Array <FixItDescription> fixItArray23 ;
            inCompiler->emitSemanticError (enumerator_7753.current_mInterruptName (HERE).readProperty_location (), GALGAS_string ("Only one 'high' interrupt routine is allowed"), fixItArray23  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 164)) ;
          }
        }
        var_hasHighInterrupt_7577 = GALGAS_bool (true) ;
      }
    }
    if (kBoolFalse == test_21) {
      enumGalgasBool test_24 = kBoolTrue ;
      if (kBoolTrue == test_24) {
        test_24 = GALGAS_bool (ComparisonKind::equal, enumerator_7753.current_mInterruptName (HERE).readProperty_string ().objectCompare (GALGAS_string ("low"))).boolEnum () ;
        if (kBoolTrue == test_24) {
          var_lowInterruptIsFast_7690 = enumerator_7753.current_mFastReturn (HERE) ;
          enumGalgasBool test_25 = kBoolTrue ;
          if (kBoolTrue == test_25) {
            test_25 = var_hasLowInterrupt_7654.boolEnum () ;
            if (kBoolTrue == test_25) {
              TC_Array <FixItDescription> fixItArray26 ;
              inCompiler->emitSemanticError (enumerator_7753.current_mInterruptName (HERE).readProperty_location (), GALGAS_string ("Only one 'low' interrupt routine is allowed"), fixItArray26  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 170)) ;
            }
          }
          var_hasLowInterrupt_7654 = GALGAS_bool (true) ;
        }
      }
      if (kBoolFalse == test_24) {
        TC_Array <FixItDescription> fixItArray27 ;
        inCompiler->emitSemanticError (enumerator_7753.current_mInterruptName (HERE).readProperty_location (), GALGAS_string ("An interrupt routine should be named 'low' or 'high'"), fixItArray27  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 174)) ;
      }
    }
    enumGalgasBool test_28 = kBoolTrue ;
    if (kBoolTrue == test_28) {
      test_28 = var_highInterruptIsFast_7614.operator_and (var_lowInterruptIsFast_7690 COMMA_SOURCE_FILE ("pic18_semantics.galgas", 176)).boolEnum () ;
      if (kBoolTrue == test_28) {
        TC_Array <FixItDescription> fixItArray29 ;
        inCompiler->emitSemanticError (enumerator_7753.current_mInterruptName (HERE).readProperty_location (), GALGAS_string ("either low interrupt or high interrupt can be \"fast\", not both"), fixItArray29  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 177)) ;
      }
    }
    enumerator_7753.gotoNextObject () ;
  }
  GALGAS_actualConfigurationMap var_actualConfigurationMap_8762 ;
  enumGalgasBool test_30 = kBoolTrue ;
  if (kBoolTrue == test_30) {
    test_30 = GALGAS_bool (ComparisonKind::equal, constinArgument_inPiccoloModel.readProperty_mProgramKind ().objectCompare (GALGAS_programKind::class_func_userProgram (SOURCE_FILE ("pic18_semantics.galgas", 182)))).boolEnum () ;
    if (kBoolTrue == test_30) {
      cEnumerator_configDefinitionList enumerator_8881 (constinArgument_inPiccoloModel.readProperty_mConfigDefinitionList (), EnumerationOrder::up) ;
      while (enumerator_8881.hasCurrentObject ()) {
        TC_Array <FixItDescription> fixItArray31 ;
        inCompiler->emitSemanticError (enumerator_8881.current_mDefinitionLocation (HERE), GALGAS_string ("configuration is not allowed for a bootloader user program"), fixItArray31  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 184)) ;
        enumerator_8881.gotoNextObject () ;
      }
      var_actualConfigurationMap_8762 = GALGAS_actualConfigurationMap::init (inCompiler COMMA_HERE) ;
    }
  }
  if (kBoolFalse == test_30) {
    {
    routine_buildConfig_3F__3F__26__21_ (var_piccoloDeviceModel_1001.readProperty_mConfigRegisterMap (), constinArgument_inPiccoloModel.readProperty_mConfigDefinitionList (), var_listFileContents_904, var_actualConfigurationMap_8762, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 188)) ;
    }
  }
  GALGAS_uint var_RAMsize_9330 = GALGAS_uint (uint32_t (0U)) ;
  cEnumerator_ramBankTable enumerator_9375 (var_ramBank_1074, EnumerationOrder::up) ;
  while (enumerator_9375.hasCurrentObject ()) {
    enumGalgasBool test_32 = kBoolTrue ;
    if (kBoolTrue == test_32) {
      test_32 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_9375.current_mLastAddressPlusOne (HERE).objectCompare (var_RAMsize_9330)).boolEnum () ;
      if (kBoolTrue == test_32) {
        var_RAMsize_9330 = enumerator_9375.current_mLastAddressPlusOne (HERE) ;
      }
    }
    enumerator_9375.gotoNextObject () ;
  }
  GALGAS_constantMap var_constantMap_9556 = GALGAS_constantMap::init (inCompiler COMMA_HERE) ;
  {
  var_constantMap_9556.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("ROM_SIZE"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 205)), inCompiler COMMA_HERE), var_piccoloDeviceModel_1001.readProperty_mRomSize ().readProperty_uint ().getter_sint_36__34_ (SOURCE_FILE ("pic18_semantics.galgas", 205)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 205)) ;
  }
  {
  var_constantMap_9556.setter_insertKey (GALGAS_lstring::init_21__21_ (GALGAS_string ("RAM_SIZE"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 206)), inCompiler COMMA_HERE), var_RAMsize_9330.getter_sint_36__34_ (SOURCE_FILE ("pic18_semantics.galgas", 206)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 206)) ;
  }
  enumGalgasBool test_33 = kBoolTrue ;
  if (kBoolTrue == test_33) {
    test_33 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inPiccoloModel.readProperty_mProgramKind ().objectCompare (GALGAS_programKind::class_func_regularProgram (SOURCE_FILE ("pic18_semantics.galgas", 208)))).boolEnum () ;
    if (kBoolTrue == test_33) {
      GALGAS_lstring var_bootloaderSizeString_9950 = GALGAS_lstring::init_21__21_ (GALGAS_string ("BOOTLOADER_RESERVED_SIZE"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 209)), inCompiler COMMA_HERE) ;
      {
      var_constantMap_9556.setter_insertKey (var_bootloaderSizeString_9950, var_bootloaderReservedROMsize_1544.readProperty_uint ().getter_sint_36__34_ (SOURCE_FILE ("pic18_semantics.galgas", 210)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 210)) ;
      }
    }
  }
  GALGAS_stringset var_usedRegisters_10166 = GALGAS_stringset::init (inCompiler COMMA_HERE) ;
  cEnumerator_constantDefinitionList enumerator_10217 (constinArgument_inPiccoloModel.readProperty_mConstantDefinitionList (), EnumerationOrder::up) ;
  while (enumerator_10217.hasCurrentObject ()) {
    GALGAS_sint_36__34_ var_result_10359 ;
    callExtensionMethod_eval ((cPtr_immediatExpression *) enumerator_10217.current_mExpression (HERE).ptr (), var_piccoloDeviceModel_1001.readProperty_mRegisterTable (), var_constantMap_9556, var_result_10359, var_usedRegisters_10166, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 215)) ;
    enumGalgasBool test_34 = kBoolTrue ;
    if (kBoolTrue == test_34) {
      test_34 = var_piccoloDeviceModel_1001.readProperty_mRegisterTable ().getter_hasKey (enumerator_10217.current_mConstantName (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 216)).boolEnum () ;
      if (kBoolTrue == test_34) {
        TC_Array <FixItDescription> fixItArray35 ;
        inCompiler->emitSemanticError (enumerator_10217.current_mConstantName (HERE).readProperty_location (), GALGAS_string ("'").add_operation (enumerator_10217.current_mConstantName (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 217)).add_operation (GALGAS_string ("' is already declared as ram register or special register"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 217)), fixItArray35  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 217)) ;
      }
    }
    if (kBoolFalse == test_34) {
      {
      var_constantMap_9556.setter_insertKey (enumerator_10217.current_mConstantName (HERE), var_result_10359, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 219)) ;
      }
    }
    enumerator_10217.gotoNextObject () ;
  }
  GALGAS_declaredByteMap var_declaredByteMap_10945 ;
  {
  routine_analyze_5F_ram_5F_sections_3F__3F__3F__26__26__3F__26__26__21_ (GALGAS_string ("DECLARED VARIABLES"), constinArgument_inPiccoloModel.readProperty_mRamDefinitionList (), var_constantMap_9556, var_usedRegisters_10166, var_ramBank_1074, var_piccoloDeviceModel_1001.readProperty_mRegisterTable (), var_listFileContents_904, var_registerTable_1690, var_declaredByteMap_10945, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 223)) ;
  }
  enumGalgasBool test_36 = kBoolTrue ;
  if (kBoolTrue == test_36) {
    test_36 = GALGAS_bool (ComparisonKind::equal, constinArgument_inPiccoloModel.readProperty_mProgramKind ().objectCompare (GALGAS_programKind::class_func_bootloaderProgram (SOURCE_FILE ("pic18_semantics.galgas", 235)))).boolEnum () ;
    if (kBoolTrue == test_36) {
      cEnumerator_ramBankTable enumerator_11205 (var_ramBank_1074, EnumerationOrder::up) ;
      while (enumerator_11205.hasCurrentObject ()) {
        enumGalgasBool test_37 = kBoolTrue ;
        if (kBoolTrue == test_37) {
          test_37 = var_bootloaderReservedRAMmap_1114.getter_hasKey (enumerator_11205.current_lkey (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_semantics.galgas", 237)).boolEnum () ;
          if (kBoolTrue == test_37) {
            GALGAS_luint var_bootloaderReservedSize_11302 ;
            var_bootloaderReservedRAMmap_1114.method_searchKey (enumerator_11205.current_lkey (HERE), var_bootloaderReservedSize_11302, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 239)) ;
            enumGalgasBool test_38 = kBoolTrue ;
            if (kBoolTrue == test_38) {
              test_38 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_11205.current_mFirstFreeAddress (HERE).substract_operation (enumerator_11205.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 240)).objectCompare (var_bootloaderReservedSize_11302.readProperty_uint ())).boolEnum () ;
              if (kBoolTrue == test_38) {
                TC_Array <FixItDescription> fixItArray39 ;
                inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 241)), GALGAS_string ("for '").add_operation (enumerator_11205.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 241)).add_operation (GALGAS_string ("' RAM bank, the bootloader implementation declares "), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 241)).add_operation (enumerator_11205.current_mFirstFreeAddress (HERE).substract_operation (enumerator_11205.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 242)).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 242)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 241)).add_operation (GALGAS_string (" byte(s), althought the bootloader specification reserves "), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 242)).add_operation (var_bootloaderReservedSize_11302.readProperty_uint ().getter_string (SOURCE_FILE ("pic18_semantics.galgas", 244)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 243)).add_operation (GALGAS_string (" byte(s)"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 244)), fixItArray39  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 241)) ;
              }
            }
          }
        }
        if (kBoolFalse == test_37) {
          enumGalgasBool test_40 = kBoolTrue ;
          if (kBoolTrue == test_40) {
            test_40 = GALGAS_bool (ComparisonKind::greaterThan, enumerator_11205.current_mFirstFreeAddress (HERE).objectCompare (enumerator_11205.current_mFirstAddress (HERE))).boolEnum () ;
            if (kBoolTrue == test_40) {
              TC_Array <FixItDescription> fixItArray41 ;
              inCompiler->emitSemanticError (GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 248)), GALGAS_string ("for '").add_operation (enumerator_11205.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 248)).add_operation (GALGAS_string ("' RAM bank, the bootloader implementation declares "), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 248)).add_operation (enumerator_11205.current_mFirstFreeAddress (HERE).substract_operation (enumerator_11205.current_mFirstAddress (HERE), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 249)).getter_string (SOURCE_FILE ("pic18_semantics.galgas", 249)), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 248)).add_operation (GALGAS_string (" byte(s), althought the bootloader specification reserves no space"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 249)), fixItArray41  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 248)) ;
            }
          }
        }
        enumerator_11205.gotoNextObject () ;
      }
    }
  }
  {
  routine_build_5F_ipic_31__38__5F_block_5F_representation_5F_list_3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__3F__26_ (constinArgument_inSourceFileName, var_piccoloDeviceModel_1001.readProperty_mRomSize ().readProperty_uint ().getter_sint_36__34_ (SOURCE_FILE ("pic18_semantics.galgas", 257)), var_macroMap_4529, var_bootloaderRoutineDeclarationListForBootloaderImplementation_1211, var_userRoutineDeclarationListForBootloaderImplementation_1301, var_bootloaderReservedROMsize_1544, var_bootloaderRoutineDeclarationListForUserProgramImplementation_1385, var_userRoutineDeclarationListForUserProgramImplementation_1476, var_accessBankSplitOffset_1032, var_registerTable_1690, var_declaredByteMap_10945, var_routineDefinitionList_6922, constinArgument_inPiccoloModel.readProperty_mProgramKind (), var_constantMap_9556, var_usedRegisters_10166, constinArgument_inPiccoloModel.readProperty_mDataList (), var_interruptDefinitionList_6822, constinArgument_inPiccoloModel.readProperty_mUnusedRegisterList (), var_ramBank_1074, var_hasHighInterrupt_7577, var_hasLowInterrupt_7654, var_piccoloDeviceModel_1001.readProperty_mDeviceName ().readProperty_string (), var_piccoloDeviceModel_1001.readProperty_mRegisterTable (), var_actualConfigurationMap_8762, constinArgument_inPiccoloModel.readProperty_mEndOfProgram (), var_listFileContents_904, inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 255)) ;
  }
  enumGalgasBool test_42 = kBoolTrue ;
  if (kBoolTrue == test_42) {
    test_42 = GALGAS_bool (gOption_piccolo_5F_options_ouputListingFile.readProperty_value ()).boolEnum () ;
    if (kBoolTrue == test_42) {
      var_listFileContents_904.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_semantics.galgas", 285)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 285)), inCompiler  COMMA_SOURCE_FILE ("pic18_semantics.galgas", 285)) ;
      GALGAS_string var_listFile_13321 = constinArgument_inSourceFileName.getter_stringByDeletingPathExtension (SOURCE_FILE ("pic18_semantics.galgas", 286)).add_operation (GALGAS_string (".list"), inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 286)) ;
      GALGAS_bool joker_13456 ; // Joker input parameter
      var_listFileContents_904.method_writeToFileWhenDifferentContents (var_listFile_13321, joker_13456, inCompiler COMMA_SOURCE_FILE ("pic18_semantics.galgas", 287)) ;
    }
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'pic18BootloaderSpecificationAnalysis????????!!!!!'
//
//--------------------------------------------------------------------------------------------------

void routine_pic_31__38_BootloaderSpecificationAnalysis_3F__3F__3F__3F__3F__3F__3F__3F__21__21__21__21__21_ (const GALGAS_string constinArgument_inSourceFileName,
                                                                                                             const GALGAS_lstring constinArgument_inBootloaderName,
                                                                                                             const GALGAS_lstring constinArgument_inDeviceName,
                                                                                                             const GALGAS_routineDeclarationList constinArgument_inBootloaderRoutineDeclarationList,
                                                                                                             const GALGAS_bootloaderReservedRAMmap constinArgument_inBootloaderReservedRAMmap,
                                                                                                             const GALGAS_luint constinArgument_inReservedRomSize,
                                                                                                             const GALGAS_routineDeclarationList constinArgument_inUserRoutineDeclarationList,
                                                                                                             const GALGAS_ramDefinitionList constinArgument_inSharedRamDefinitionList,
                                                                                                             GALGAS_string & outArgument_outListFileContents,
                                                                                                             GALGAS_piccoloDeviceModel & outArgument_outPiccoloDeviceModel,
                                                                                                             GALGAS_uint & outArgument_outAccessBankSplitOffset,
                                                                                                             GALGAS_ramBankTable & outArgument_outRamBank,
                                                                                                             GALGAS_registerTable & outArgument_outRegisterTable,
                                                                                                             Compiler * inCompiler
                                                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outListFileContents.drop () ; // Release 'out' argument
  outArgument_outPiccoloDeviceModel.drop () ; // Release 'out' argument
  outArgument_outAccessBankSplitOffset.drop () ; // Release 'out' argument
  outArgument_outRamBank.drop () ; // Release 'out' argument
  outArgument_outRegisterTable.drop () ; // Release 'out' argument
  GALGAS_string var_sourceFileBaseName_734 = constinArgument_inSourceFileName.getter_lastPathComponent (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 20)).getter_stringByDeletingPathExtension (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 20)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, var_sourceFileBaseName_734.objectCompare (constinArgument_inBootloaderName.readProperty_string ())).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inBootloaderName.readProperty_location (), GALGAS_string ("the bootloader name ('").add_operation (constinArgument_inBootloaderName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 22)).add_operation (GALGAS_string ("') should be identical to the file base name '"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 22)).add_operation (var_sourceFileBaseName_734, inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 23)).add_operation (GALGAS_string ("'"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 23)), fixItArray1  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 22)) ;
    }
  }
  outArgument_outListFileContents = GALGAS_string::makeEmptyString () ;
  {
  routine_parseDeviceDefinition_3F__21_ (constinArgument_inDeviceName, outArgument_outPiccoloDeviceModel, inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 27)) ;
  }
  switch (outArgument_outPiccoloDeviceModel.readProperty_mProcessorType ().enumValue ()) {
  case GALGAS_processorType::kNotBuilt:
    break ;
  case GALGAS_processorType::kEnum_pic_31__38__5F__36__30_:
    {
      outArgument_outAccessBankSplitOffset = GALGAS_uint (uint32_t (96U)) ;
    }
    break ;
  case GALGAS_processorType::kEnum_pic_31__38__5F__38__30_:
    {
      outArgument_outAccessBankSplitOffset = GALGAS_uint (uint32_t (128U)) ;
    }
    break ;
  case GALGAS_processorType::kEnum_midrange:
    {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (constinArgument_inDeviceName.readProperty_location (), GALGAS_string ("a midrange device is not accepted here"), fixItArray2  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 31)) ;
      outArgument_outAccessBankSplitOffset.drop () ; // Release error dropped variable
    }
    break ;
  case GALGAS_processorType::kEnum_baseline:
    {
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (constinArgument_inDeviceName.readProperty_location (), GALGAS_string ("a baseline device is not accepted here"), fixItArray3  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 32)) ;
      outArgument_outAccessBankSplitOffset.drop () ; // Release error dropped variable
    }
    break ;
  }
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 35)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 35)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 35)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("BOOTLOADER FOOTPRINT").getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (117U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 36)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 36)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 36)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 36)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 37)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 37)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 37)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (ComparisonKind::greaterOrEqual, constinArgument_inReservedRomSize.readProperty_uint ().objectCompare (outArgument_outPiccoloDeviceModel.readProperty_mRomSize ().readProperty_uint ())).boolEnum () ;
    if (kBoolTrue == test_4) {
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (constinArgument_inReservedRomSize.readProperty_location (), GALGAS_string ("reserved size for bootloader (").add_operation (constinArgument_inReservedRomSize.readProperty_uint ().getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 40)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 39)).add_operation (GALGAS_string (" bytes) is greater than ROM size ("), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 40)).add_operation (outArgument_outPiccoloDeviceModel.readProperty_mRomSize ().readProperty_uint ().getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 40)).add_operation (GALGAS_string (" bytes) of "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 41)).add_operation (constinArgument_inDeviceName.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 41)).add_operation (GALGAS_string (" micro controller"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 42)), fixItArray5  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 39)) ;
    }
  }
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("ROM size : ").add_operation (constinArgument_inReservedRomSize.readProperty_uint ().getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 44)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 44)).add_operation (GALGAS_string (" bytes.\n\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 44)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 44)) ;
  outArgument_outRamBank = outArgument_outPiccoloDeviceModel.readProperty_mRamBankTable () ;
  cEnumerator_bootloaderReservedRAMmap enumerator_2473 (constinArgument_inBootloaderReservedRAMmap, EnumerationOrder::up) ;
  while (enumerator_2473.hasCurrentObject ()) {
    GALGAS_uint var_firstAddress_2559 ;
    GALGAS_uint var_firstFreeAddress_2577 ;
    GALGAS_uint var_lastAddressPlusOne_2599 ;
    GALGAS_uintlist var_mirrorOffsetList_2630 ;
    outArgument_outRamBank.method_searchKey (enumerator_2473.current_lkey (HERE), var_firstAddress_2559, var_firstFreeAddress_2577, var_lastAddressPlusOne_2599, var_mirrorOffsetList_2630, inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 48)) ;
    var_firstFreeAddress_2577 = var_firstFreeAddress_2577.add_operation (enumerator_2473.current_mReservedSize (HERE).readProperty_uint (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 49)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      test_6 = GALGAS_bool (ComparisonKind::greaterThan, var_firstFreeAddress_2577.objectCompare (var_lastAddressPlusOne_2599)).boolEnum () ;
      if (kBoolTrue == test_6) {
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (enumerator_2473.current_mReservedSize (HERE).readProperty_location (), GALGAS_string ("reserved size is greater than size of '").add_operation (enumerator_2473.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 51)).add_operation (GALGAS_string ("' bank ("), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 51)).add_operation (var_lastAddressPlusOne_2599.substract_operation (var_firstAddress_2559, inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 52)).getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 52)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 51)).add_operation (GALGAS_string (" bytes)"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 52)), fixItArray7  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 51)) ;
      }
    }
    if (kBoolFalse == test_6) {
      {
      outArgument_outRamBank.setter_setMFirstFreeAddressForKey (var_firstFreeAddress_2577, enumerator_2473.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 54)) ;
      }
      outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("'").add_operation (enumerator_2473.current_lkey (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (GALGAS_string ("' RAM size : "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (enumerator_2473.current_mReservedSize (HERE).readProperty_uint ().getter_string (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (GALGAS_string (" bytes (from "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (var_firstAddress_2559.getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)).add_operation (GALGAS_string (" to "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)).add_operation (var_firstFreeAddress_2577.substract_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)).getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)).add_operation (GALGAS_string (").\n\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 56)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 55)) ;
    }
    enumerator_2473.gotoNextObject () ;
  }
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 60)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 60)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 60)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("BOOTLOADER ROUTINES").getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (117U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 61)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 61)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 61)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 61)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 62)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 62)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 62)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("Routine").getter_stringByLeftPadding (GALGAS_uint (uint32_t (40U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 63)).add_operation (GALGAS_string (" Entry point address\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 63)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 63)) ;
  GALGAS_stringset var_routineNameSet_3621 = GALGAS_stringset::init (inCompiler COMMA_HERE) ;
  GALGAS_uint var_entryPointAddress_3663 = GALGAS_uint (uint32_t (4U)) ;
  cEnumerator_routineDeclarationList enumerator_3713 (constinArgument_inBootloaderRoutineDeclarationList, EnumerationOrder::up) ;
  while (enumerator_3713.hasCurrentObject ()) {
    enumGalgasBool test_8 = kBoolTrue ;
    if (kBoolTrue == test_8) {
      test_8 = var_routineNameSet_3621.getter_hasKey (enumerator_3713.current_mRoutineName (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 67)).boolEnum () ;
      if (kBoolTrue == test_8) {
        TC_Array <FixItDescription> fixItArray9 ;
        inCompiler->emitSemanticError (enumerator_3713.current_mRoutineName (HERE).readProperty_location (), GALGAS_string ("This routine is already declared"), fixItArray9  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 68)) ;
      }
    }
    var_routineNameSet_3621.addAssign_operation (enumerator_3713.current_mRoutineName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 70)) ;
    outArgument_outListFileContents.plusAssign_operation(enumerator_3713.current_mRoutineName (HERE).readProperty_string ().getter_stringByLeftPadding (GALGAS_uint (uint32_t (40U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)).add_operation (var_entryPointAddress_3663.getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 71)) ;
    var_entryPointAddress_3663 = var_entryPointAddress_3663.add_operation (GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 72)) ;
    enumGalgasBool test_10 = kBoolTrue ;
    if (kBoolTrue == test_10) {
      test_10 = GALGAS_bool (ComparisonKind::equal, var_entryPointAddress_3663.objectCompare (GALGAS_uint (uint32_t (8U)))).boolEnum () ;
      if (kBoolTrue == test_10) {
        var_entryPointAddress_3663 = GALGAS_uint (uint32_t (12U)) ;
      }
    }
    if (kBoolFalse == test_10) {
      enumGalgasBool test_11 = kBoolTrue ;
      if (kBoolTrue == test_11) {
        test_11 = GALGAS_bool (ComparisonKind::equal, var_entryPointAddress_3663.objectCompare (GALGAS_uint (uint32_t (24U)))).boolEnum () ;
        if (kBoolTrue == test_11) {
          var_entryPointAddress_3663 = GALGAS_uint (uint32_t (28U)) ;
        }
      }
    }
    enumerator_3713.gotoNextObject () ;
  }
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 79)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 81)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 81)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 81)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (GALGAS_string ("USER PROGRAM ROUTINES").getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (117U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 82)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 82)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 82)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 82)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 83)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 83)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 83)) ;
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("Routine").getter_stringByLeftPadding (GALGAS_uint (uint32_t (40U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 84)).add_operation (GALGAS_string (" Entry point address\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 84)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 84)) ;
  var_entryPointAddress_3663 = constinArgument_inReservedRomSize.readProperty_uint () ;
  cEnumerator_routineDeclarationList enumerator_4761 (constinArgument_inUserRoutineDeclarationList, EnumerationOrder::up) ;
  while (enumerator_4761.hasCurrentObject ()) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      test_12 = var_routineNameSet_3621.getter_hasKey (enumerator_4761.current_mRoutineName (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 87)).boolEnum () ;
      if (kBoolTrue == test_12) {
        TC_Array <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (enumerator_4761.current_mRoutineName (HERE).readProperty_location (), GALGAS_string ("This routine is already declared"), fixItArray13  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 88)) ;
      }
    }
    var_routineNameSet_3621.addAssign_operation (enumerator_4761.current_mRoutineName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 90)) ;
    outArgument_outListFileContents.plusAssign_operation(enumerator_4761.current_mRoutineName (HERE).readProperty_string ().getter_stringByLeftPadding (GALGAS_uint (uint32_t (40U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)).add_operation (var_entryPointAddress_3663.getter_hexString (SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 91)) ;
    var_entryPointAddress_3663 = var_entryPointAddress_3663.add_operation (GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 92)) ;
    enumerator_4761.gotoNextObject () ;
  }
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string ("\n"), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 94)) ;
  outArgument_outRegisterTable = outArgument_outPiccoloDeviceModel.readProperty_mRegisterTable () ;
  GALGAS_stringset joker_5374 = GALGAS_stringset::init (inCompiler COMMA_HERE) ;
  {
  GALGAS_declaredByteMap joker_5498 ; // Joker input parameter
  routine_analyze_5F_ram_5F_sections_3F__3F__3F__26__26__3F__26__26__21_ (GALGAS_string ("SHARED VARIABLES"), constinArgument_inSharedRamDefinitionList, GALGAS_constantMap::init (inCompiler COMMA_HERE), joker_5374, outArgument_outRamBank, outArgument_outPiccoloDeviceModel.readProperty_mRegisterTable (), outArgument_outListFileContents, outArgument_outRegisterTable, joker_5498, inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 97)) ;
  }
  outArgument_outListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 108)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 108)), inCompiler  COMMA_SOURCE_FILE ("pic18_bootloader_specification_semantics.galgas", 108)) ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_switch analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_switch::method_analyze (const GALGAS_uint constinArgument_inAccessBankSplitOffset,
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
  GALGAS_caseConstantMap var_caseConstantMap_2431 = GALGAS_caseConstantMap::init (inCompiler COMMA_HERE) ;
  const GALGAS_pic_31__38_Instruction_5F_switch temp_0 = this ;
  GALGAS_lstring var_exitLabel_2486 = GALGAS_lstring::init_21__21_ (GALGAS_string (".L").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 63)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 63)), temp_0.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 64)) ;
  GALGAS_sint_36__34_ var_lastComparisonValue_2639 = GALGAS_sint_36__34_ (int64_t (0LL)) ;
  GALGAS_bool var_continuesInSequence_2720 = GALGAS_bool (false) ;
  GALGAS_uint var_initialBankSetting_2759 = ioArgument_ioCurrentBank ;
  GALGAS_uint var_finalBankSetting_2806 = GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 71)) ;
  GALGAS_bool var_finalBankSettingDefined_2848 = GALGAS_bool (false) ;
  const GALGAS_pic_31__38_Instruction_5F_switch temp_1 = this ;
  cEnumerator_pic_31__38_SwitchInstructionCaseList enumerator_2925 (temp_1.readProperty_mCaseList (), EnumerationOrder::up) ;
  while (enumerator_2925.hasCurrentObject ()) {
    const GALGAS_pic_31__38_Instruction_5F_switch temp_2 = this ;
    GALGAS_lstring var_conditionTrueLabel_2986 = GALGAS_lstring::init_21__21_ (GALGAS_string (".L.accepted.").add_operation (ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 76)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 76)), temp_2.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
    cEnumerator_pic_31__38_CaseExpressionList enumerator_3134 (enumerator_2925.current_mCaseExpressionList (HERE), EnumerationOrder::up) ;
    while (enumerator_3134.hasCurrentObject ()) {
      GALGAS_string var_conditionLabel_3181 = ioArgument_ioLocalLabelIndex.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 79)) ;
      ioArgument_ioLocalLabelIndex.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 80)) ;
      callExtensionMethod_analyzeCaseItem ((cPtr_pic_31__38_AbstractCaseItem *) enumerator_3134.current_mCaseItem (HERE).ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_conditionTrueLabel_2986, var_conditionLabel_3181, ioArgument_ioUsedRegisters, var_caseConstantMap_2431, ioArgument_ioGeneratedInstructionList, ioArgument_ioGeneratedBlockList, ioArgument_ioBlockLabel, var_lastComparisonValue_2639, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 81)) ;
      enumerator_3134.gotoNextObject () ;
    }
    GALGAS_lstring var_conditionFalseLabel_3625 = ioArgument_ioBlockLabel ;
    ioArgument_ioBlockLabel = var_conditionTrueLabel_2986 ;
    GALGAS_uint var_branchFinalBank_3712 = var_initialBankSetting_2759 ;
    {
    routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (enumerator_2925.current_mInstructionList (HERE), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_branchFinalBank_3712, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 98)) ;
    }
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      test_3 = GALGAS_bool (ComparisonKind::notEqual, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())).boolEnum () ;
      if (kBoolTrue == test_3) {
        var_continuesInSequence_2720 = GALGAS_bool (true) ;
        const GALGAS_pic_31__38_Instruction_5F_switch temp_4 = this ;
        ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 119)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_4.readProperty_mInstructionLocation (), var_exitLabel_2486, GALGAS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18-switch-instruction.galgas", 122)), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 123)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 118)) ;
      }
    }
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = var_finalBankSettingDefined_2848.boolEnum () ;
      if (kBoolTrue == test_5) {
        enumGalgasBool test_6 = kBoolTrue ;
        if (kBoolTrue == test_6) {
          test_6 = GALGAS_bool (ComparisonKind::notEqual, var_finalBankSetting_2806.objectCompare (var_branchFinalBank_3712)).boolEnum () ;
          if (kBoolTrue == test_6) {
            GALGAS_string temp_7 ;
            const enumGalgasBool test_8 = GALGAS_bool (ComparisonKind::equal, var_branchFinalBank_3712.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 130)))).boolEnum () ;
            if (kBoolTrue == test_8) {
              temp_7 = GALGAS_string ("'no selection'") ;
            }else if (kBoolFalse == test_8) {
              temp_7 = var_branchFinalBank_3712.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 130)) ;
            }
            GALGAS_string temp_9 ;
            const enumGalgasBool test_10 = GALGAS_bool (ComparisonKind::equal, var_finalBankSetting_2806.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 132)))).boolEnum () ;
            if (kBoolTrue == test_10) {
              temp_9 = GALGAS_string ("'no selection'") ;
            }else if (kBoolFalse == test_10) {
              temp_9 = var_finalBankSetting_2806.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 132)) ;
            }
            TC_Array <FixItDescription> fixItArray11 ;
            inCompiler->emitSemanticError (enumerator_2925.current_mStartOfCase (HERE), GALGAS_string ("this branch leaves bank setting to ").add_operation (temp_7, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 129)).add_operation (GALGAS_string (", but first branch leaves bank setting to "), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 130)).add_operation (temp_9, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 131)).add_operation (GALGAS_string (" (should be the same setting)"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 132)), fixItArray11  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 129)) ;
          }
        }
      }
    }
    if (kBoolFalse == test_5) {
      var_finalBankSettingDefined_2848 = GALGAS_bool (true) ;
      var_finalBankSetting_2806 = var_branchFinalBank_3712 ;
    }
    ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
    ioArgument_ioBlockLabel = var_conditionFalseLabel_3625 ;
    enumerator_2925.gotoNextObject () ;
  }
  GALGAS_uint var_branchFinalBank_5254 = var_initialBankSetting_2759 ;
  {
  const GALGAS_pic_31__38_Instruction_5F_switch temp_12 = this ;
  routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (temp_12.readProperty_mElseInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_branchFinalBank_5254, constinArgument_inShouldPreserveBSR, constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 144)) ;
  }
  GALGAS_bool var_thenContinuesInSequence_5699 = GALGAS_bool (ComparisonKind::notEqual, ioArgument_ioBlockLabel.readProperty_string ().objectCompare (GALGAS_string::makeEmptyString ())) ;
  enumGalgasBool test_13 = kBoolTrue ;
  if (kBoolTrue == test_13) {
    test_13 = var_thenContinuesInSequence_5699.boolEnum () ;
    if (kBoolTrue == test_13) {
      const GALGAS_pic_31__38_Instruction_5F_switch temp_14 = this ;
      ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 165)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, GALGAS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_14.readProperty_mInstructionLocation (), var_exitLabel_2486, GALGAS_jumpInstructionKind::class_func_ipicRelative (SOURCE_FILE ("ipic18-switch-instruction.galgas", 168)), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 169)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 164)) ;
    }
  }
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  enumGalgasBool test_15 = kBoolTrue ;
  if (kBoolTrue == test_15) {
    test_15 = GALGAS_bool (ComparisonKind::notEqual, var_finalBankSetting_2806.objectCompare (var_branchFinalBank_5254)).boolEnum () ;
    if (kBoolTrue == test_15) {
      const GALGAS_pic_31__38_Instruction_5F_switch temp_16 = this ;
      GALGAS_string temp_17 ;
      const enumGalgasBool test_18 = GALGAS_bool (ComparisonKind::equal, var_branchFinalBank_5254.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 177)))).boolEnum () ;
      if (kBoolTrue == test_18) {
        temp_17 = GALGAS_string ("'no selection'") ;
      }else if (kBoolFalse == test_18) {
        temp_17 = var_branchFinalBank_5254.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 177)) ;
      }
      GALGAS_string temp_19 ;
      const enumGalgasBool test_20 = GALGAS_bool (ComparisonKind::equal, var_finalBankSetting_2806.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 179)))).boolEnum () ;
      if (kBoolTrue == test_20) {
        temp_19 = GALGAS_string ("'no selection'") ;
      }else if (kBoolFalse == test_20) {
        temp_19 = var_finalBankSetting_2806.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 179)) ;
      }
      TC_Array <FixItDescription> fixItArray21 ;
      inCompiler->emitSemanticError (temp_16.readProperty_mElseBranchStartLocation (), GALGAS_string ("the 'else' branch leaves bank setting to ").add_operation (temp_17, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 176)).add_operation (GALGAS_string (", but first branch leaves bank setting to "), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 177)).add_operation (temp_19, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 178)).add_operation (GALGAS_string (" (should be the same setting)"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 179)), fixItArray21  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 176)) ;
    }
  }
  ioArgument_ioCurrentBank = var_finalBankSetting_2806 ;
  enumGalgasBool test_22 = kBoolTrue ;
  if (kBoolTrue == test_22) {
    test_22 = var_continuesInSequence_2720.boolEnum () ;
    if (kBoolTrue == test_22) {
      ioArgument_ioBlockLabel = var_exitLabel_2486 ;
    }
  }
  if (kBoolFalse == test_22) {
    ioArgument_ioBlockLabel = GALGAS_string::makeEmptyString ().getter_nowhere (SOURCE_FILE ("ipic18-switch-instruction.galgas", 187)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18SimpleConstantCaseItem analyzeCaseItem'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_SimpleConstantCaseItem::method_analyzeCaseItem (const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                     const GALGAS_constantMap constinArgument_inConstantMap,
                                                                     const GALGAS_lstring constinArgument_inConditionTrueLabel,
                                                                     const GALGAS_string constinArgument_inIndexForLabels,
                                                                     GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                     GALGAS_caseConstantMap & ioArgument_ioCaseConstantMap,
                                                                     GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                                     GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                                     GALGAS_lstring & ioArgument_ioBlockLabel,
                                                                     GALGAS_sint_36__34_ & ioArgument_ioLastComparisonValue,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_36__34_ var_result_8083 ;
  const GALGAS_pic_31__38_SimpleConstantCaseItem temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mCaseExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_8083, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 225)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::greaterThan, var_result_8083.objectCompare (GALGAS_sint_36__34_ (int64_t (255LL)))).operator_or (GALGAS_bool (ComparisonKind::lowerThan, var_result_8083.objectCompare (GALGAS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 227)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_pic_31__38_SimpleConstantCaseItem temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mCaseExpressionLocation (), GALGAS_string ("case value is evaluated as ").add_operation (var_result_8083.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 228)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 228)).add_operation (GALGAS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 228)), fixItArray3  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 228)) ;
    }
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = ioArgument_ioCaseConstantMap.getter_hasKey (var_result_8083.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 231)) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 231)).boolEnum () ;
    if (kBoolTrue == test_4) {
      const GALGAS_pic_31__38_SimpleConstantCaseItem temp_5 = this ;
      TC_Array <FixItDescription> fixItArray6 ;
      inCompiler->emitSemanticError (temp_5.readProperty_mCaseExpressionLocation (), GALGAS_string ("the '").add_operation (var_result_8083.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 232)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 232)).add_operation (GALGAS_string ("' constant is already used in switch instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 232)), fixItArray6  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 232)) ;
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (ioArgument_ioCaseConstantMap.getter_locationForKey (var_result_8083.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)), GALGAS_string ("the '").add_operation (var_result_8083.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)).add_operation (GALGAS_string ("' constant is used here"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)), fixItArray7  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 233)) ;
    }
  }
  if (kBoolFalse == test_4) {
    {
    const GALGAS_pic_31__38_SimpleConstantCaseItem temp_8 = this ;
    ioArgument_ioCaseConstantMap.setter_insertKey (GALGAS_lstring::init_21__21_ (var_result_8083.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 235)), temp_8.readProperty_mCaseExpressionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 235)) ;
    }
  }
  const GALGAS_pic_31__38_SimpleConstantCaseItem temp_9 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_9.readProperty_mCaseExpressionLocation (), GALGAS_literal_5F_instruction_5F_opcode::class_func_ADDLW (SOURCE_FILE ("ipic18-switch-instruction.galgas", 240)), ioArgument_ioLastComparisonValue.substract_operation (var_result_8083, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 241)).operator_and (GALGAS_sint_36__34_ (int64_t (255LL)) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 241)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 241)), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 243)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 238)) ;
  ioArgument_ioLastComparisonValue = var_result_8083 ;
  const GALGAS_pic_31__38_SimpleConstantCaseItem temp_10 = this ;
  GALGAS_lstring var_conditionFalseLabel_9022 = GALGAS_lstring::init_21__21_ (GALGAS_string (".L.value.rejected.").add_operation (constinArgument_inIndexForLabels, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 248)), temp_10.readProperty_mCaseExpressionLocation (), inCompiler COMMA_HERE) ;
  const GALGAS_pic_31__38_SimpleConstantCaseItem temp_11 = this ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_t_9221 = GALGAS_ipic_31__38_ConditionalJumpTerminator::init_21__21__21__21__21__21_ (temp_11.readProperty_mCaseExpressionLocation (), GALGAS_conditional_5F_branch::class_func_bz (SOURCE_FILE ("ipic18-switch-instruction.galgas", 252)), constinArgument_inConditionTrueLabel, GALGAS_conditionalBranchMode::class_func_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 254)), var_conditionFalseLabel_9022, GALGAS_conditionalBranchMode::class_func_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 256)), inCompiler COMMA_HERE) ;
  ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 259)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_t_9221, GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 263)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 258)) ;
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
  ioArgument_ioBlockLabel = var_conditionFalseLabel_9022 ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18IntervalCaseItem analyzeCaseItem'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_IntervalCaseItem::method_analyzeCaseItem (const GALGAS_registerTable constinArgument_inRegisterTable,
                                                               const GALGAS_constantMap constinArgument_inConstantMap,
                                                               const GALGAS_lstring constinArgument_inConditionTrueLabel,
                                                               const GALGAS_string constinArgument_inIndexForLabels,
                                                               GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                               GALGAS_caseConstantMap & ioArgument_ioCaseConstantMap,
                                                               GALGAS_ipic_31__38_SequentialInstructionList & ioArgument_ioGeneratedInstructionList,
                                                               GALGAS_ipic_31__38_BlockList & ioArgument_ioGeneratedBlockList,
                                                               GALGAS_lstring & ioArgument_ioBlockLabel,
                                                               GALGAS_sint_36__34_ & ioArgument_ioLastComparisonValue,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_36__34_ var_minBound_10312 ;
  const GALGAS_pic_31__38_IntervalCaseItem temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mMinExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_minBound_10312, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 284)) ;
  GALGAS_sint_36__34_ var_maxBound_10413 ;
  const GALGAS_pic_31__38_IntervalCaseItem temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mMaxExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_maxBound_10413, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 285)) ;
  GALGAS_bool var_ok_10452 = GALGAS_bool (true) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (ComparisonKind::greaterThan, var_minBound_10312.objectCompare (GALGAS_sint_36__34_ (int64_t (255LL)))).operator_or (GALGAS_bool (ComparisonKind::lowerThan, var_minBound_10312.objectCompare (GALGAS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 288)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_pic_31__38_IntervalCaseItem temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mCaseExpressionLocation (), GALGAS_string ("min bound is evaluated as ").add_operation (var_minBound_10312.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 289)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 289)).add_operation (GALGAS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 289)), fixItArray4  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 289)) ;
      var_ok_10452 = GALGAS_bool (false) ;
    }
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (ComparisonKind::greaterThan, var_maxBound_10413.objectCompare (GALGAS_sint_36__34_ (int64_t (255LL)))).operator_or (GALGAS_bool (ComparisonKind::lowerThan, var_maxBound_10413.objectCompare (GALGAS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 292)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_pic_31__38_IntervalCaseItem temp_6 = this ;
      TC_Array <FixItDescription> fixItArray7 ;
      inCompiler->emitSemanticError (temp_6.readProperty_mCaseExpressionLocation (), GALGAS_string ("max bound is evaluated as ").add_operation (var_maxBound_10413.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 293)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 293)).add_operation (GALGAS_string (" (should be between 0 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 293)), fixItArray7  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 293)) ;
      var_ok_10452 = GALGAS_bool (false) ;
    }
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    test_8 = GALGAS_bool (ComparisonKind::lowerOrEqual, var_maxBound_10413.objectCompare (var_minBound_10312)).boolEnum () ;
    if (kBoolTrue == test_8) {
      const GALGAS_pic_31__38_IntervalCaseItem temp_9 = this ;
      TC_Array <FixItDescription> fixItArray10 ;
      inCompiler->emitSemanticError (temp_9.readProperty_mCaseExpressionLocation (), GALGAS_string ("max bound (").add_operation (var_maxBound_10413.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)).add_operation (GALGAS_string (") should be greater than low bound ("), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)).add_operation (var_minBound_10312.getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)), fixItArray10  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 297)) ;
      var_ok_10452 = GALGAS_bool (false) ;
    }
  }
  if (kBoolFalse == test_8) {
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      test_11 = GALGAS_bool (ComparisonKind::equal, var_maxBound_10413.objectCompare (GALGAS_sint_36__34_ (int64_t (255LL)))).operator_and (GALGAS_bool (ComparisonKind::equal, var_minBound_10312.objectCompare (GALGAS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 299)).boolEnum () ;
      if (kBoolTrue == test_11) {
        const GALGAS_pic_31__38_IntervalCaseItem temp_12 = this ;
        TC_Array <FixItDescription> fixItArray13 ;
        inCompiler->emitSemanticError (temp_12.readProperty_mCaseExpressionLocation (), GALGAS_string ("condition is always true"), fixItArray13  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 300)) ;
        var_ok_10452 = GALGAS_bool (false) ;
      }
    }
  }
  enumGalgasBool test_14 = kBoolTrue ;
  if (kBoolTrue == test_14) {
    test_14 = var_ok_10452.boolEnum () ;
    if (kBoolTrue == test_14) {
      cEnumerator_range enumerator_11245 (GALGAS_range::init_21__21_ (var_minBound_10312.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 305)), var_maxBound_10413.substract_operation (var_minBound_10312, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 305)).add_operation (GALGAS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 305)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 305)), inCompiler COMMA_HERE), EnumerationOrder::up) ;
      while (enumerator_11245.hasCurrentObject ()) {
        enumGalgasBool test_15 = kBoolTrue ;
        if (kBoolTrue == test_15) {
          test_15 = ioArgument_ioCaseConstantMap.getter_hasKey (enumerator_11245.current (HERE).getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 306)) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 306)).boolEnum () ;
          if (kBoolTrue == test_15) {
            const GALGAS_pic_31__38_IntervalCaseItem temp_16 = this ;
            TC_Array <FixItDescription> fixItArray17 ;
            inCompiler->emitSemanticError (temp_16.readProperty_mCaseExpressionLocation (), GALGAS_string ("the '").add_operation (enumerator_11245.current (HERE).getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 307)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 307)).add_operation (GALGAS_string ("' constant is already used in switch instruction"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 307)), fixItArray17  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 307)) ;
            TC_Array <FixItDescription> fixItArray18 ;
            inCompiler->emitSemanticError (ioArgument_ioCaseConstantMap.getter_locationForKey (enumerator_11245.current (HERE).getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)), GALGAS_string ("the '").add_operation (enumerator_11245.current (HERE).getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)).add_operation (GALGAS_string ("' constant is used here"), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)), fixItArray18  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 308)) ;
          }
        }
        if (kBoolFalse == test_15) {
          {
          const GALGAS_pic_31__38_IntervalCaseItem temp_19 = this ;
          ioArgument_ioCaseConstantMap.setter_insertKey (GALGAS_lstring::init_21__21_ (enumerator_11245.current (HERE).getter_string (SOURCE_FILE ("ipic18-switch-instruction.galgas", 310)), temp_19.readProperty_mCaseExpressionLocation (), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 310)) ;
          }
        }
        enumerator_11245.gotoNextObject () ;
      }
      const GALGAS_pic_31__38_IntervalCaseItem temp_20 = this ;
      GALGAS_lstring var_firstConditionAcceptedLabel_11667 = GALGAS_lstring::init_21__21_ (GALGAS_string (".L.first.accepted.").add_operation (constinArgument_inIndexForLabels, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 314)), temp_20.readProperty_mCaseExpressionLocation (), inCompiler COMMA_HERE) ;
      const GALGAS_pic_31__38_IntervalCaseItem temp_21 = this ;
      GALGAS_lstring var_firstConditionRejectedLabel_11794 = GALGAS_lstring::init_21__21_ (GALGAS_string (".L.first.rejected.").add_operation (constinArgument_inIndexForLabels, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 315)), temp_21.readProperty_mCaseExpressionLocation (), inCompiler COMMA_HERE) ;
      const GALGAS_pic_31__38_IntervalCaseItem temp_22 = this ;
      GALGAS_lstring var_intervalRejectedLabel_11921 = GALGAS_lstring::init_21__21_ (GALGAS_string (".L.interval.rejected.").add_operation (constinArgument_inIndexForLabels, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 316)), temp_22.readProperty_mCaseExpressionLocation (), inCompiler COMMA_HERE) ;
      const GALGAS_pic_31__38_IntervalCaseItem temp_23 = this ;
      GALGAS_ipic_31__38_SequentialInstruction var_secondTestInstruction_12108 = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_23.readProperty_mCaseExpressionLocation (), GALGAS_literal_5F_instruction_5F_opcode::class_func_ADDLW (SOURCE_FILE ("ipic18-switch-instruction.galgas", 320)), var_maxBound_10413.substract_operation (var_minBound_10312, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 321)).add_operation (GALGAS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 321)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 321)), inCompiler COMMA_HERE) ;
      const GALGAS_pic_31__38_IntervalCaseItem temp_24 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_24.readProperty_mCaseExpressionLocation (), GALGAS_literal_5F_instruction_5F_opcode::class_func_ADDLW (SOURCE_FILE ("ipic18-switch-instruction.galgas", 326)), ioArgument_ioLastComparisonValue.add_operation (GALGAS_sint_36__34_ (int64_t (255LL)), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 327)).substract_operation (var_maxBound_10413, inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 327)).operator_and (GALGAS_sint_36__34_ (int64_t (255LL)) COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 327)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 327)), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 329)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 324)) ;
      const GALGAS_pic_31__38_IntervalCaseItem temp_25 = this ;
      GALGAS_ipic_31__38_AbstractBlockTerminator var_t_12651 = GALGAS_ipic_31__38_ConditionalJumpTerminator::init_21__21__21__21__21__21_ (temp_25.readProperty_mCaseExpressionLocation (), GALGAS_conditional_5F_branch::class_func_bnc (SOURCE_FILE ("ipic18-switch-instruction.galgas", 334)), var_firstConditionAcceptedLabel_11667, GALGAS_conditionalBranchMode::class_func_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 336)), var_firstConditionRejectedLabel_11794, GALGAS_conditionalBranchMode::class_func_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 338)), inCompiler COMMA_HERE) ;
      ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 342)), ioArgument_ioBlockLabel, ioArgument_ioGeneratedInstructionList, var_t_12651, GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 346)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 341)) ;
      GALGAS_ipic_31__38_SequentialInstructionList temp_26 = GALGAS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 353)) ;
      temp_26.enterElement (GALGAS_ipic_31__38_SequentialInstructionList_2D_element::init_21__21__21_ (var_secondTestInstruction_12108, GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 353)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 353)) ;
      const GALGAS_pic_31__38_IntervalCaseItem temp_27 = this ;
      ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 351)), var_firstConditionRejectedLabel_11794, temp_26, GALGAS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_27.readProperty_mCaseExpressionLocation (), var_intervalRejectedLabel_11921, GALGAS_jumpInstructionKind::class_func_relative (SOURCE_FILE ("ipic18-switch-instruction.galgas", 354)), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 355)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 350)) ;
      const GALGAS_pic_31__38_IntervalCaseItem temp_28 = this ;
      GALGAS_ipic_31__38_AbstractBlockTerminator var_t_32__13460 = GALGAS_ipic_31__38_ConditionalJumpTerminator::init_21__21__21__21__21__21_ (temp_28.readProperty_mCaseExpressionLocation (), GALGAS_conditional_5F_branch::class_func_bc (SOURCE_FILE ("ipic18-switch-instruction.galgas", 361)), constinArgument_inConditionTrueLabel, GALGAS_conditionalBranchMode::class_func_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 363)), var_intervalRejectedLabel_11921, GALGAS_conditionalBranchMode::class_func_native (SOURCE_FILE ("ipic18-switch-instruction.galgas", 365)), inCompiler COMMA_HERE) ;
      GALGAS_ipic_31__38_SequentialInstructionList temp_29 = GALGAS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 371)) ;
      temp_29.enterElement (GALGAS_ipic_31__38_SequentialInstructionList_2D_element::init_21__21__21_ (var_secondTestInstruction_12108, GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 371)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 371)) ;
      ioArgument_ioGeneratedBlockList.addAssign_operation (GALGAS_ipic_31__38_Block::init_21__21__21__21__21__21_ (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 369)), var_firstConditionAcceptedLabel_11667, temp_29, var_t_32__13460, GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18-switch-instruction.galgas", 373)), GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 368)) ;
      ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
      ioArgument_ioBlockLabel = var_intervalRejectedLabel_11921 ;
      ioArgument_ioLastComparisonValue = var_minBound_10312 ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_switch addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_switch::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                    GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_pic_31__38_Instruction_5F_switch temp_0 = this ;
  cEnumerator_pic_31__38_SwitchInstructionCaseList enumerator_14302 (temp_0.readProperty_mCaseList (), EnumerationOrder::up) ;
  while (enumerator_14302.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (enumerator_14302.current_mInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 391)) ;
    }
    enumerator_14302.gotoNextObject () ;
  }
  {
  const GALGAS_pic_31__38_Instruction_5F_switch temp_1 = this ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (temp_1.readProperty_mElseInstructionList (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("ipic18-switch-instruction.galgas", 393)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_checkBCC'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool function_pic_31__38__5F_checkBCC (const GALGAS_symbolTableForRelativesResolution & constinArgument_inSymbolTable,
                                              const GALGAS_lstring & constinArgument_inTargetLabel,
                                              const GALGAS_uint & constinArgument_inCurrentAddress,
                                              Compiler * inCompiler
                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outDisplacementOK ; // Returned variable
  GALGAS_uint var_targetAddress_18835 ;
  constinArgument_inSymbolTable.method_searchKey (constinArgument_inTargetLabel, var_targetAddress_18835, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 515)) ;
  GALGAS_sint var_displacement_18862 = var_targetAddress_18835.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 516)).substract_operation (GALGAS_sint (int32_t (2L)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 516)).substract_operation (constinArgument_inCurrentAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 516)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 516)).right_shift_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 516)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 516)) ;
  result_outDisplacementOK = GALGAS_bool (ComparisonKind::lowerOrEqual, var_displacement_18862.objectCompare (GALGAS_sint (int32_t (127L)))).operator_and (GALGAS_bool (ComparisonKind::greaterOrEqual, var_displacement_18862.objectCompare (GALGAS_sint (int32_t (-128L)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 517)) ;
//---
  return result_outDisplacementOK ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_checkBCC [4] = {
  & kTypeDescriptor_GALGAS_symbolTableForRelativesResolution,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_uint,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_checkBCC (Compiler * inCompiler,
                                                                        const cObjectArray & inEffectiveParameterArray,
                                                                        const GALGAS_location & /* inErrorLocation */
                                                                        COMMA_LOCATION_ARGS) {
  const GALGAS_symbolTableForRelativesResolution operand0 = GALGAS_symbolTableForRelativesResolution::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                                     inCompiler
                                                                                                                     COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_uint operand2 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_pic_31__38__5F_checkBCC (operand0,
                                           operand1,
                                           operand2,
                                           inCompiler
                                           COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_checkBCC ("pic18_checkBCC",
                                                                         functionWithGenericHeader_pic_31__38__5F_checkBCC,
                                                                         & kTypeDescriptor_GALGAS_bool,
                                                                         3,
                                                                         functionArgs_pic_31__38__5F_checkBCC) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_checkBRA_RCALL'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool function_pic_31__38__5F_checkBRA_5F_RCALL (const GALGAS_symbolTableForRelativesResolution & constinArgument_inSymbolTable,
                                                       const GALGAS_lstring & constinArgument_inTargetLabel,
                                                       const GALGAS_uint & constinArgument_inCurrentAddress,
                                                       Compiler * inCompiler
                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool result_outDisplacementOK ; // Returned variable
  GALGAS_uint var_targetAddress_19373 ;
  constinArgument_inSymbolTable.method_searchKey (constinArgument_inTargetLabel, var_targetAddress_19373, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 528)) ;
  GALGAS_sint var_displacement_19400 = var_targetAddress_19373.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 529)).substract_operation (GALGAS_sint (int32_t (2L)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 529)).substract_operation (constinArgument_inCurrentAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 529)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 529)).right_shift_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 529)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 529)) ;
  result_outDisplacementOK = GALGAS_bool (ComparisonKind::lowerOrEqual, var_displacement_19400.objectCompare (GALGAS_sint (int32_t (1023L)))).operator_and (GALGAS_bool (ComparisonKind::greaterOrEqual, var_displacement_19400.objectCompare (GALGAS_sint (int32_t (-1024L)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 530)) ;
//---
  return result_outDisplacementOK ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_checkBRA_5F_RCALL [4] = {
  & kTypeDescriptor_GALGAS_symbolTableForRelativesResolution,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_uint,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_checkBRA_5F_RCALL (Compiler * inCompiler,
                                                                                 const cObjectArray & inEffectiveParameterArray,
                                                                                 const GALGAS_location & /* inErrorLocation */
                                                                                 COMMA_LOCATION_ARGS) {
  const GALGAS_symbolTableForRelativesResolution operand0 = GALGAS_symbolTableForRelativesResolution::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                                     inCompiler
                                                                                                                     COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_uint operand2 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_pic_31__38__5F_checkBRA_5F_RCALL (operand0,
                                                    operand1,
                                                    operand2,
                                                    inCompiler
                                                    COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_checkBRA_5F_RCALL ("pic18_checkBRA_RCALL",
                                                                                  functionWithGenericHeader_pic_31__38__5F_checkBRA_5F_RCALL,
                                                                                  & kTypeDescriptor_GALGAS_bool,
                                                                                  3,
                                                                                  functionArgs_pic_31__38__5F_checkBRA_5F_RCALL) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_BRA_RCALL_displacement'
//
//--------------------------------------------------------------------------------------------------

GALGAS_sint function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (const GALGAS_symbolTableForRelativesResolution & constinArgument_inSymbolTable,
                                                                  const GALGAS_lstring & constinArgument_inTargetLabel,
                                                                  const GALGAS_uint & constinArgument_inCurrentAddress,
                                                                  Compiler * inCompiler
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint result_outDisplacement ; // Returned variable
  GALGAS_uint var_targetAddress_19878 ;
  constinArgument_inSymbolTable.method_searchKey (constinArgument_inTargetLabel, var_targetAddress_19878, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 540)) ;
  result_outDisplacement = var_targetAddress_19878.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 541)).substract_operation (GALGAS_sint (int32_t (2L)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 541)).substract_operation (constinArgument_inCurrentAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 541)).right_shift_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 541)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 541)) ;
//---
  return result_outDisplacement ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_BRA_5F_RCALL_5F_displacement [4] = {
  & kTypeDescriptor_GALGAS_symbolTableForRelativesResolution,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_uint,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (Compiler * inCompiler,
                                                                                            const cObjectArray & inEffectiveParameterArray,
                                                                                            const GALGAS_location & /* inErrorLocation */
                                                                                            COMMA_LOCATION_ARGS) {
  const GALGAS_symbolTableForRelativesResolution operand0 = GALGAS_symbolTableForRelativesResolution::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                                     inCompiler
                                                                                                                     COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_uint operand2 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (operand0,
                                                               operand1,
                                                               operand2,
                                                               inCompiler
                                                               COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_BRA_5F_RCALL_5F_displacement ("pic18_BRA_RCALL_displacement",
                                                                                             functionWithGenericHeader_pic_31__38__5F_BRA_5F_RCALL_5F_displacement,
                                                                                             & kTypeDescriptor_GALGAS_sint,
                                                                                             3,
                                                                                             functionArgs_pic_31__38__5F_BRA_5F_RCALL_5F_displacement) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_Bcc_instruction_code'
//
//--------------------------------------------------------------------------------------------------

GALGAS_codeList function_pic_31__38__5F_Bcc_5F_instruction_5F_code (const GALGAS_uint & constinArgument_inConditionalBranchInstructionAddress,
                                                                    const GALGAS_uint & constinArgument_inTargetAddress,
                                                                    const GALGAS_lstring & constinArgument_inTargetLabel,
                                                                    const GALGAS_conditional_5F_branch & constinArgument_inConditionalBranch,
                                                                    const GALGAS_bool & constinArgument_inComplemented,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_codeList result_outCode ; // Returned variable
  GALGAS_sint var_displacement_20457 = constinArgument_inTargetAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 557)).substract_operation (GALGAS_sint (int32_t (2L)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 557)).substract_operation (constinArgument_inConditionalBranchInstructionAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 557)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 557)).right_shift_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 557)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 557)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::greaterThan, var_displacement_20457.objectCompare (GALGAS_sint (int32_t (127L)))).operator_or (GALGAS_bool (ComparisonKind::lowerThan, var_displacement_20457.objectCompare (GALGAS_sint (int32_t (-128L)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 558)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inTargetLabel.readProperty_location (), GALGAS_string ("** INTERNAL ERROR ** displacement too large for conditional branch instruction"), fixItArray1  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 559)) ;
    }
  }
  GALGAS_conditional_5F_branch var_conditionalBranch_20748 ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = constinArgument_inComplemented.boolEnum () ;
    if (kBoolTrue == test_2) {
      switch (constinArgument_inConditionalBranch.enumValue ()) {
      case GALGAS_conditional_5F_branch::kNotBuilt:
        break ;
      case GALGAS_conditional_5F_branch::kEnum_bz:
        {
          var_conditionalBranch_20748 = GALGAS_conditional_5F_branch::class_func_bnz (SOURCE_FILE ("ipic18_block_representation.galgas", 565)) ;
        }
        break ;
      case GALGAS_conditional_5F_branch::kEnum_bnz:
        {
          var_conditionalBranch_20748 = GALGAS_conditional_5F_branch::class_func_bz (SOURCE_FILE ("ipic18_block_representation.galgas", 566)) ;
        }
        break ;
      case GALGAS_conditional_5F_branch::kEnum_bn:
        {
          var_conditionalBranch_20748 = GALGAS_conditional_5F_branch::class_func_bnn (SOURCE_FILE ("ipic18_block_representation.galgas", 567)) ;
        }
        break ;
      case GALGAS_conditional_5F_branch::kEnum_bnn:
        {
          var_conditionalBranch_20748 = GALGAS_conditional_5F_branch::class_func_bn (SOURCE_FILE ("ipic18_block_representation.galgas", 568)) ;
        }
        break ;
      case GALGAS_conditional_5F_branch::kEnum_bc:
        {
          var_conditionalBranch_20748 = GALGAS_conditional_5F_branch::class_func_bnc (SOURCE_FILE ("ipic18_block_representation.galgas", 569)) ;
        }
        break ;
      case GALGAS_conditional_5F_branch::kEnum_bnc:
        {
          var_conditionalBranch_20748 = GALGAS_conditional_5F_branch::class_func_bc (SOURCE_FILE ("ipic18_block_representation.galgas", 570)) ;
        }
        break ;
      case GALGAS_conditional_5F_branch::kEnum_bov:
        {
          var_conditionalBranch_20748 = GALGAS_conditional_5F_branch::class_func_bnov (SOURCE_FILE ("ipic18_block_representation.galgas", 571)) ;
        }
        break ;
      case GALGAS_conditional_5F_branch::kEnum_bnov:
        {
          var_conditionalBranch_20748 = GALGAS_conditional_5F_branch::class_func_bov (SOURCE_FILE ("ipic18_block_representation.galgas", 572)) ;
        }
        break ;
      }
    }
  }
  if (kBoolFalse == test_2) {
    var_conditionalBranch_20748 = constinArgument_inConditionalBranch ;
  }
  GALGAS_uint var_baseCode_21386 ;
  GALGAS_string var_mnemonic_21409 ;
  switch (var_conditionalBranch_20748.enumValue ()) {
  case GALGAS_conditional_5F_branch::kNotBuilt:
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bz:
    {
      var_baseCode_21386 = GALGAS_uint (uint32_t (57344U)) ;
      var_mnemonic_21409 = GALGAS_string ("BZ") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnz:
    {
      var_baseCode_21386 = GALGAS_uint (uint32_t (57600U)) ;
      var_mnemonic_21409 = GALGAS_string ("BNZ") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bn:
    {
      var_baseCode_21386 = GALGAS_uint (uint32_t (58880U)) ;
      var_mnemonic_21409 = GALGAS_string ("BN") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnn:
    {
      var_baseCode_21386 = GALGAS_uint (uint32_t (59136U)) ;
      var_mnemonic_21409 = GALGAS_string ("BNN") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bc:
    {
      var_baseCode_21386 = GALGAS_uint (uint32_t (57856U)) ;
      var_mnemonic_21409 = GALGAS_string ("BC") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnc:
    {
      var_baseCode_21386 = GALGAS_uint (uint32_t (58112U)) ;
      var_mnemonic_21409 = GALGAS_string ("BNC") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bov:
    {
      var_baseCode_21386 = GALGAS_uint (uint32_t (58368U)) ;
      var_mnemonic_21409 = GALGAS_string ("BOV") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnov:
    {
      var_baseCode_21386 = GALGAS_uint (uint32_t (58624U)) ;
      var_mnemonic_21409 = GALGAS_string ("BNOV") ;
    }
    break ;
  }
  result_outCode = GALGAS_codeList::class_func_listWithValue (GALGAS_string ("    ").add_operation (var_mnemonic_21409, inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 591)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 591)).add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 591)), GALGAS_uintlist::class_func_listWithValue (var_baseCode_21386.operator_or (var_displacement_20457.operator_and (GALGAS_sint (int32_t (255L)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 592)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 592)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 592))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 592))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 590)) ;
//---
  return result_outCode ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_Bcc_5F_instruction_5F_code [6] = {
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_lstring,
  & kTypeDescriptor_GALGAS_conditional_5F_branch,
  & kTypeDescriptor_GALGAS_bool,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_Bcc_5F_instruction_5F_code (Compiler * inCompiler,
                                                                                          const cObjectArray & inEffectiveParameterArray,
                                                                                          const GALGAS_location & /* inErrorLocation */
                                                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_uint operand0 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_uint operand1 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_lstring operand2 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  const GALGAS_conditional_5F_branch operand3 = GALGAS_conditional_5F_branch::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                                             inCompiler
                                                                                             COMMA_THERE) ;
  const GALGAS_bool operand4 = GALGAS_bool::extractObject (inEffectiveParameterArray.objectAtIndex (4 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  return function_pic_31__38__5F_Bcc_5F_instruction_5F_code (operand0,
                                                             operand1,
                                                             operand2,
                                                             operand3,
                                                             operand4,
                                                             inCompiler
                                                             COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_Bcc_5F_instruction_5F_code ("pic18_Bcc_instruction_code",
                                                                                           functionWithGenericHeader_pic_31__38__5F_Bcc_5F_instruction_5F_code,
                                                                                           & kTypeDescriptor_GALGAS_codeList,
                                                                                           5,
                                                                                           functionArgs_pic_31__38__5F_Bcc_5F_instruction_5F_code) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_RCALL_instruction_code'
//
//--------------------------------------------------------------------------------------------------

GALGAS_codeList function_pic_31__38__5F_RCALL_5F_instruction_5F_code (const GALGAS_uint & constinArgument_inRCALLinstructionAddress,
                                                                      const GALGAS_uint & constinArgument_inTargetAddress,
                                                                      const GALGAS_lstring & constinArgument_inTargetLabel,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_codeList result_outCode ; // Returned variable
  GALGAS_sint var_displacement_22284 = constinArgument_inTargetAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 602)).substract_operation (GALGAS_sint (int32_t (2L)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 602)).substract_operation (constinArgument_inRCALLinstructionAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 602)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 602)).right_shift_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 602)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 602)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::greaterThan, var_displacement_22284.objectCompare (GALGAS_sint (int32_t (1023L)))).operator_or (GALGAS_bool (ComparisonKind::lowerThan, var_displacement_22284.objectCompare (GALGAS_sint (int32_t (-1024L)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 603)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inTargetLabel.readProperty_location (), GALGAS_string ("** INTERNAL ERROR ** displacement too large (").add_operation (var_displacement_22284.getter_string (SOURCE_FILE ("ipic18_block_representation.galgas", 604)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 604)).add_operation (GALGAS_string (") for RCALL instruction to '"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 604)).add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 605)).add_operation (GALGAS_string ("' (should be between -1024 and 1023)"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 605)), fixItArray1  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 604)) ;
    }
  }
  result_outCode = GALGAS_codeList::class_func_listWithValue (GALGAS_string ("    RCALL ").add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 608)), GALGAS_uintlist::class_func_listWithValue (GALGAS_uint (uint32_t (55296U)).operator_or (var_displacement_22284.operator_and (GALGAS_sint (int32_t (2047L)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 609)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 609)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 609))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 609))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 607)) ;
//---
  return result_outCode ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_RCALL_5F_instruction_5F_code [4] = {
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_RCALL_5F_instruction_5F_code (Compiler * inCompiler,
                                                                                            const cObjectArray & inEffectiveParameterArray,
                                                                                            const GALGAS_location & /* inErrorLocation */
                                                                                            COMMA_LOCATION_ARGS) {
  const GALGAS_uint operand0 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_uint operand1 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_lstring operand2 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_pic_31__38__5F_RCALL_5F_instruction_5F_code (operand0,
                                                               operand1,
                                                               operand2,
                                                               inCompiler
                                                               COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_RCALL_5F_instruction_5F_code ("pic18_RCALL_instruction_code",
                                                                                             functionWithGenericHeader_pic_31__38__5F_RCALL_5F_instruction_5F_code,
                                                                                             & kTypeDescriptor_GALGAS_codeList,
                                                                                             3,
                                                                                             functionArgs_pic_31__38__5F_RCALL_5F_instruction_5F_code) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_BRA_instruction_code'
//
//--------------------------------------------------------------------------------------------------

GALGAS_codeList function_pic_31__38__5F_BRA_5F_instruction_5F_code (const GALGAS_uint & constinArgument_inRCALLinstructionAddress,
                                                                    const GALGAS_uint & constinArgument_inTargetAddress,
                                                                    const GALGAS_lstring & constinArgument_inTargetLabel,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_codeList result_outCode ; // Returned variable
  GALGAS_sint var_displacement_23036 = constinArgument_inTargetAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 619)).substract_operation (GALGAS_sint (int32_t (2L)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 619)).substract_operation (constinArgument_inRCALLinstructionAddress.getter_sint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 619)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 619)).right_shift_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 619)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 619)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::greaterThan, var_displacement_23036.objectCompare (GALGAS_sint (int32_t (1023L)))).operator_or (GALGAS_bool (ComparisonKind::lowerThan, var_displacement_23036.objectCompare (GALGAS_sint (int32_t (-1024L)))) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 620)).boolEnum () ;
    if (kBoolTrue == test_0) {
      TC_Array <FixItDescription> fixItArray1 ;
      inCompiler->emitSemanticError (constinArgument_inTargetLabel.readProperty_location (), GALGAS_string ("** INTERNAL ERROR ** displacement too large (").add_operation (var_displacement_23036.getter_string (SOURCE_FILE ("ipic18_block_representation.galgas", 621)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 621)).add_operation (GALGAS_string (") for BRA instruction to '"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 621)).add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 622)).add_operation (GALGAS_string ("' (should be between -1024 and 1023)"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 622)), fixItArray1  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 621)) ;
    }
  }
  result_outCode = GALGAS_codeList::class_func_listWithValue (GALGAS_string ("    BRA ").add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 625)), GALGAS_uintlist::class_func_listWithValue (GALGAS_uint (uint32_t (53248U)).operator_or (var_displacement_23036.operator_and (GALGAS_sint (int32_t (2047L)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 626)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 626)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 626))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 626))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 624)) ;
//---
  return result_outCode ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_BRA_5F_instruction_5F_code [4] = {
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_BRA_5F_instruction_5F_code (Compiler * inCompiler,
                                                                                          const cObjectArray & inEffectiveParameterArray,
                                                                                          const GALGAS_location & /* inErrorLocation */
                                                                                          COMMA_LOCATION_ARGS) {
  const GALGAS_uint operand0 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_uint operand1 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_lstring operand2 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_pic_31__38__5F_BRA_5F_instruction_5F_code (operand0,
                                                             operand1,
                                                             operand2,
                                                             inCompiler
                                                             COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_BRA_5F_instruction_5F_code ("pic18_BRA_instruction_code",
                                                                                           functionWithGenericHeader_pic_31__38__5F_BRA_5F_instruction_5F_code,
                                                                                           & kTypeDescriptor_GALGAS_codeList,
                                                                                           3,
                                                                                           functionArgs_pic_31__38__5F_BRA_5F_instruction_5F_code) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_CALL_instruction_code'
//
//--------------------------------------------------------------------------------------------------

GALGAS_codeList function_pic_31__38__5F_CALL_5F_instruction_5F_code (const GALGAS_uint & constinArgument_inTargetAddress,
                                                                     const GALGAS_lstring & constinArgument_inTargetLabel,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_codeList result_outCode ; // Returned variable
  GALGAS_uintlist var_binaryCode_23740 = GALGAS_uintlist::init (inCompiler COMMA_HERE) ;
  var_binaryCode_23740.addAssign_operation (GALGAS_uint (uint32_t (60416U)).operator_or (constinArgument_inTargetAddress.right_shift_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 636)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 636)).operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 636)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 636))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 636)) ;
  var_binaryCode_23740.addAssign_operation (GALGAS_uint (uint32_t (61440U)).operator_or (constinArgument_inTargetAddress.right_shift_operation (GALGAS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 637)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 637)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 637))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 637)) ;
  result_outCode = GALGAS_codeList::class_func_listWithValue (GALGAS_string ("    CALL ").add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 639)), var_binaryCode_23740  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 638)) ;
//---
  return result_outCode ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_CALL_5F_instruction_5F_code [3] = {
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_CALL_5F_instruction_5F_code (Compiler * inCompiler,
                                                                                           const cObjectArray & inEffectiveParameterArray,
                                                                                           const GALGAS_location & /* inErrorLocation */
                                                                                           COMMA_LOCATION_ARGS) {
  const GALGAS_uint operand0 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_pic_31__38__5F_CALL_5F_instruction_5F_code (operand0,
                                                              operand1,
                                                              inCompiler
                                                              COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_CALL_5F_instruction_5F_code ("pic18_CALL_instruction_code",
                                                                                            functionWithGenericHeader_pic_31__38__5F_CALL_5F_instruction_5F_code,
                                                                                            & kTypeDescriptor_GALGAS_codeList,
                                                                                            2,
                                                                                            functionArgs_pic_31__38__5F_CALL_5F_instruction_5F_code) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_GOTO_instruction_code'
//
//--------------------------------------------------------------------------------------------------

GALGAS_codeList function_pic_31__38__5F_GOTO_5F_instruction_5F_code (const GALGAS_uint & constinArgument_inTargetAddress,
                                                                     const GALGAS_lstring & constinArgument_inTargetLabel,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_codeList result_outCode ; // Returned variable
  GALGAS_uintlist var_binaryCode_24183 = GALGAS_uintlist::init (inCompiler COMMA_HERE) ;
  var_binaryCode_24183.addAssign_operation (GALGAS_uint (uint32_t (61184U)).operator_or (constinArgument_inTargetAddress.right_shift_operation (GALGAS_bigint ("1", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 650)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 650)).operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 650)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 650))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 650)) ;
  var_binaryCode_24183.addAssign_operation (GALGAS_uint (uint32_t (61440U)).operator_or (constinArgument_inTargetAddress.right_shift_operation (GALGAS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 651)), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 651)) COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 651))  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 651)) ;
  result_outCode = GALGAS_codeList::class_func_listWithValue (GALGAS_string ("    GOTO ").add_operation (constinArgument_inTargetLabel.readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 653)), var_binaryCode_24183  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 652)) ;
//---
  return result_outCode ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_GOTO_5F_instruction_5F_code [3] = {
  & kTypeDescriptor_GALGAS_uint,
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_GOTO_5F_instruction_5F_code (Compiler * inCompiler,
                                                                                           const cObjectArray & inEffectiveParameterArray,
                                                                                           const GALGAS_location & /* inErrorLocation */
                                                                                           COMMA_LOCATION_ARGS) {
  const GALGAS_uint operand0 = GALGAS_uint::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                           inCompiler
                                                           COMMA_THERE) ;
  const GALGAS_lstring operand1 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_pic_31__38__5F_GOTO_5F_instruction_5F_code (operand0,
                                                              operand1,
                                                              inCompiler
                                                              COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_GOTO_5F_instruction_5F_code ("pic18_GOTO_instruction_code",
                                                                                            functionWithGenericHeader_pic_31__38__5F_GOTO_5F_instruction_5F_code,
                                                                                            & kTypeDescriptor_GALGAS_codeList,
                                                                                            2,
                                                                                            functionArgs_pic_31__38__5F_GOTO_5F_instruction_5F_code) ;

//--------------------------------------------------------------------------------------------------
//
//Function 'pic18_definition_label'
//
//--------------------------------------------------------------------------------------------------

GALGAS_codeList function_pic_31__38__5F_definition_5F_label (const GALGAS_lstring & constinArgument_inTargetLabel,
                                                             Compiler * inCompiler
                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_codeList result_outCode ; // Returned variable
  result_outCode = GALGAS_codeList::class_func_listWithValue (constinArgument_inTargetLabel.readProperty_string ().add_operation (GALGAS_string (":"), inCompiler COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 663)), GALGAS_uintlist::init (inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("ipic18_block_representation.galgas", 662)) ;
//---
  return result_outCode ;
}


//--------------------------------------------------------------------------------------------------
//  Function introspection                                                                       
//--------------------------------------------------------------------------------------------------

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_definition_5F_label [2] = {
  & kTypeDescriptor_GALGAS_lstring,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_definition_5F_label (Compiler * inCompiler,
                                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                                   const GALGAS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_lstring operand0 = GALGAS_lstring::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                 inCompiler
                                                                 COMMA_THERE) ;
  return function_pic_31__38__5F_definition_5F_label (operand0,
                                                      inCompiler
                                                      COMMA_THERE).getter_object (THERE) ;
}

//--------------------------------------------------------------------------------------------------

C_galgas_function_descriptor functionDescriptor_pic_31__38__5F_definition_5F_label ("pic18_definition_label",
                                                                                    functionWithGenericHeader_pic_31__38__5F_definition_5F_label,
                                                                                    & kTypeDescriptor_GALGAS_codeList,
                                                                                    1,
                                                                                    functionArgs_pic_31__38__5F_definition_5F_label) ;

//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ReturnTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_ipic_31__38_ReturnTerminator::getter_terminatorDisplay (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                           Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("RETURN") ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ReturnTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38_ReturnTerminator::getter_terminatorSize (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                      Compiler */* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  result_outSize = GALGAS_uint (uint32_t (2U)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ReturnTerminator generateTerminatorCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ReturnTerminator::method_generateTerminatorCode (const GALGAS_uint /* constinArgument_inAddress */,
                                                                       const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                       const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                       GALGAS_codeList & outArgument_outCode,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCode = GALGAS_codeList::class_func_listWithValue (GALGAS_string ("    RETURN"), GALGAS_uintlist::class_func_listWithValue (GALGAS_uint (uint32_t (18U))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 48))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 46)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ReturnTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38_ReturnTerminator::getter_isEqualToTerminator (const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                           Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ReturnTerminator) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetfieTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_ipic_31__38_RetfieTerminator::getter_terminatorDisplay (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("RETFIE") ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_RetfieTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mFastReturn ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outResult.plusAssign_operation(GALGAS_string (" FAST"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 70)) ;
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

GALGAS_uint cPtr_ipic_31__38_RetfieTerminator::getter_terminatorSize (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                      Compiler */* inCompiler */
                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  result_outSize = GALGAS_uint (uint32_t (2U)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18RetfieTerminator generateTerminatorCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetfieTerminator::method_generateTerminatorCode (const GALGAS_uint /* constinArgument_inAddress */,
                                                                       const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                       const GALGAS_string constinArgument_inNextBlockLabel,
                                                                       GALGAS_codeList & outArgument_outCode,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_RetfieTerminator temp_0 = this ;
  const GALGAS_ipic_31__38_RetfieTerminator temp_1 = this ;
  GALGAS_bigint temp_2 ;
  const enumGalgasBool test_3 = temp_1.readProperty_mFastReturn ().boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_bigint ("17", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 91)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_bigint ("16", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 91)) ;
  }
  outArgument_outCode = GALGAS_codeList::class_func_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_RetfieTerminator *) temp_0.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 90)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 90)), GALGAS_uintlist::class_func_listWithValue (temp_2.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 91))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 91))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 89)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetfieTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38_RetfieTerminator::getter_isEqualToTerminator (const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                           Compiler */* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_RetfieTerminator) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetlwTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_ipic_31__38_RetlwTerminator::getter_terminatorDisplay (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_ipic_31__38_RetlwTerminator temp_0 = this ;
  result_outResult = GALGAS_string ("RETLW ").add_operation (temp_0.readProperty_mLiteralValue ().getter_hexString (SOURCE_FILE ("ipic18_terminators.galgas", 111)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 111)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetlwTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38_RetlwTerminator::getter_terminatorSize (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                     Compiler */* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  result_outSize = GALGAS_uint (uint32_t (2U)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18RetlwTerminator generateTerminatorCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_RetlwTerminator::method_generateTerminatorCode (const GALGAS_uint /* constinArgument_inAddress */,
                                                                      const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                      const GALGAS_string constinArgument_inNextBlockLabel,
                                                                      GALGAS_codeList & outArgument_outCode,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_RetlwTerminator temp_0 = this ;
  const GALGAS_ipic_31__38_RetlwTerminator temp_1 = this ;
  outArgument_outCode = GALGAS_codeList::class_func_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_RetlwTerminator *) temp_0.ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 130)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 130)), GALGAS_uintlist::class_func_listWithValue (GALGAS_uint (uint32_t (3072U)).operator_or (temp_1.readProperty_mLiteralValue () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 131))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 131))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 129)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18RetlwTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38_RetlwTerminator::getter_isEqualToTerminator (const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                          Compiler */* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_ipic_31__38_RetlwTerminator var_t_4553 (dynamic_cast <const cPtr_ipic_31__38_RetlwTerminator *> (constinArgument_inTerminator.ptr ())) ;
    if (nullptr == var_t_4553.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      const GALGAS_ipic_31__38_RetlwTerminator temp_1 = this ;
      result_outResult = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mLiteralValue ().objectCompare (var_t_4553.readProperty_mLiteralValue ())) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outResult = GALGAS_bool (false) ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18JumpTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38_JumpTerminator::getter_terminatorSize (const GALGAS_string constinArgument_inNextBlockLabel,
                                                                    Compiler */* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_JumpTerminator temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mLabel ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outSize = GALGAS_uint (uint32_t (0U)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_ipic_31__38_JumpTerminator temp_2 = this ;
    switch (temp_2.readProperty_mKind ().enumValue ()) {
    case GALGAS_jumpInstructionKind::kNotBuilt:
      break ;
    case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
    case GALGAS_jumpInstructionKind::kEnum_relative:
      {
        result_outSize = GALGAS_uint (uint32_t (2U)) ;
      }
      break ;
    case GALGAS_jumpInstructionKind::kEnum_absolute:
      {
        result_outSize = GALGAS_uint (uint32_t (4U)) ;
      }
      break ;
    }
  }
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18JumpTerminator terminatorRelativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_terminatorRelativeBranchOverflow (const GALGAS_uint constinArgument_inAddress,
                                                                               const GALGAS_string constinArgument_inBlockLabel,
                                                                               const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                               const GALGAS_string constinArgument_inNextBlockLabel,
                                                                               GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_JumpTerminator temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::notEqual, temp_1.readProperty_mLabel ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_ipic_31__38_JumpTerminator temp_2 = this ;
      switch (temp_2.readProperty_mKind ().enumValue ()) {
      case GALGAS_jumpInstructionKind::kNotBuilt:
        break ;
      case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
      case GALGAS_jumpInstructionKind::kEnum_relative:
        {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            const GALGAS_ipic_31__38_JumpTerminator temp_4 = this ;
            test_3 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_4.readProperty_mLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 185)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 185)).boolEnum () ;
            if (kBoolTrue == test_3) {
              {
              const GALGAS_ipic_31__38_JumpTerminator temp_5 = this ;
              extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_5.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 186)) ;
              }
            }
          }
        }
        break ;
      case GALGAS_jumpInstructionKind::kEnum_absolute:
        {
        }
        break ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18JumpTerminator performTerminatorRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_performTerminatorRelativeBranchResolution (const GALGAS_uint constinArgument_inAddress,
                                                                                        const GALGAS_string constinArgument_inBlockLabel,
                                                                                        const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                        const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                        GALGAS_uint & ioArgument_ioConversionCount,
                                                                                        GALGAS_string & ioArgument_ioListFileContents,
                                                                                        GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_JumpTerminator temp_0 = this ;
  outArgument_outModifiedTerminator = temp_0 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38_JumpTerminator temp_2 = this ;
    test_1 = GALGAS_bool (ComparisonKind::notEqual, constinArgument_inNextBlockLabel.objectCompare (temp_2.readProperty_mLabel ().readProperty_string ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_ipic_31__38_JumpTerminator temp_3 = this ;
      switch (temp_3.readProperty_mKind ().enumValue ()) {
      case GALGAS_jumpInstructionKind::kNotBuilt:
        break ;
      case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
        {
          enumGalgasBool test_4 = kBoolTrue ;
          if (kBoolTrue == test_4) {
            const GALGAS_ipic_31__38_JumpTerminator temp_5 = this ;
            test_4 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_5.readProperty_mLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 207)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 207)).boolEnum () ;
            if (kBoolTrue == test_4) {
              ioArgument_ioConversionCount.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 208)) ;
              const GALGAS_ipic_31__38_JumpTerminator temp_6 = this ;
              const GALGAS_ipic_31__38_JumpTerminator temp_7 = this ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)).add_operation (GALGAS_string (": JUMP "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)).add_operation (temp_6.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)).add_operation (GALGAS_string (" --> GOTO "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)).add_operation (temp_7.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 209)) ;
              const GALGAS_ipic_31__38_JumpTerminator temp_8 = this ;
              const GALGAS_ipic_31__38_JumpTerminator temp_9 = this ;
              outArgument_outModifiedTerminator = GALGAS_ipic_31__38_JumpTerminator::init_21__21__21_ (temp_8.readProperty_mInstructionLocation (), temp_9.readProperty_mLabel (), GALGAS_jumpInstructionKind::class_func_absolute (SOURCE_FILE ("ipic18_terminators.galgas", 210)), inCompiler COMMA_HERE) ;
            }
          }
        }
        break ;
      case GALGAS_jumpInstructionKind::kEnum_relative:
        {
          enumGalgasBool test_10 = kBoolTrue ;
          if (kBoolTrue == test_10) {
            const GALGAS_ipic_31__38_JumpTerminator temp_11 = this ;
            test_10 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_11.readProperty_mLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 213)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 213)).boolEnum () ;
            if (kBoolTrue == test_10) {
              const GALGAS_ipic_31__38_JumpTerminator temp_12 = this ;
              const GALGAS_ipic_31__38_JumpTerminator temp_13 = this ;
              const GALGAS_ipic_31__38_JumpTerminator temp_14 = this ;
              TC_Array <FixItDescription> fixItArray15 ;
              inCompiler->emitSemanticError (temp_12.readProperty_mInstructionLocation (), GALGAS_string ("displacement (").add_operation (function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (constinArgument_inSymbolTable, temp_13.readProperty_mLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 215)).getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 214)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 214)).add_operation (GALGAS_string (") too large for BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 215)).add_operation (temp_14.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 215)).add_operation (GALGAS_string (" instruction (limited to [-1024, 1023])"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 216)), fixItArray15  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 214)) ;
            }
          }
        }
        break ;
      case GALGAS_jumpInstructionKind::kEnum_absolute:
        {
        }
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

GALGAS_string cPtr_ipic_31__38_JumpTerminator::getter_terminatorDisplay (const GALGAS_string constinArgument_inNextBlockLabel,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outResult ; // Returned variable
  GALGAS_string var_name_7324 ;
  const GALGAS_ipic_31__38_JumpTerminator temp_0 = this ;
  switch (temp_0.readProperty_mKind ().enumValue ()) {
  case GALGAS_jumpInstructionKind::kNotBuilt:
    break ;
  case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
    {
      var_name_7324 = GALGAS_string ("JUMP ") ;
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_relative:
    {
      var_name_7324 = GALGAS_string ("BRA ") ;
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_absolute:
    {
      var_name_7324 = GALGAS_string ("GOTO ") ;
    }
    break ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38_JumpTerminator temp_2 = this ;
    test_1 = GALGAS_bool (ComparisonKind::equal, constinArgument_inNextBlockLabel.objectCompare (temp_2.readProperty_mLabel ().readProperty_string ())).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_ipic_31__38_JumpTerminator temp_3 = this ;
      result_outResult = GALGAS_string ("(").add_operation (var_name_7324, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 235)).add_operation (temp_3.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 235)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 235)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_ipic_31__38_JumpTerminator temp_4 = this ;
    result_outResult = var_name_7324.add_operation (temp_4.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 237)) ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18JumpTerminator generateTerminatorCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_JumpTerminator::method_generateTerminatorCode (const GALGAS_uint constinArgument_inAddress,
                                                                     const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                     const GALGAS_string constinArgument_inNextBlockLabel,
                                                                     GALGAS_codeList & outArgument_outCode,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_JumpTerminator temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mLabel ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outCode = GALGAS_codeList::init (inCompiler COMMA_HERE) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_uint var_targetAddress_8029 ;
    const GALGAS_ipic_31__38_JumpTerminator temp_2 = this ;
    constinArgument_inSymbolTable.method_searchKey (temp_2.readProperty_mLabel (), var_targetAddress_8029, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 251)) ;
    const GALGAS_ipic_31__38_JumpTerminator temp_3 = this ;
    switch (temp_3.readProperty_mKind ().enumValue ()) {
    case GALGAS_jumpInstructionKind::kNotBuilt:
      break ;
    case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
    case GALGAS_jumpInstructionKind::kEnum_relative:
      {
        const GALGAS_ipic_31__38_JumpTerminator temp_4 = this ;
        outArgument_outCode = function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress_8029, temp_4.readProperty_mLabel (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 254)) ;
      }
      break ;
    case GALGAS_jumpInstructionKind::kEnum_absolute:
      {
        const GALGAS_ipic_31__38_JumpTerminator temp_5 = this ;
        outArgument_outCode = function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_targetAddress_8029, temp_5.readProperty_mLabel (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 256)) ;
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

GALGAS_bool cPtr_ipic_31__38_JumpTerminator::getter_isEqualToTerminator (const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                         Compiler */* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    GALGAS_ipic_31__38_JumpTerminator var_t_8518 (dynamic_cast <const cPtr_ipic_31__38_JumpTerminator *> (constinArgument_inTerminator.ptr ())) ;
    if (nullptr == var_t_8518.ptr ()) {
      test_0 = kBoolFalse ;
    }
    if (kBoolTrue == test_0) {
      const GALGAS_ipic_31__38_JumpTerminator temp_1 = this ;
      const GALGAS_ipic_31__38_JumpTerminator temp_2 = this ;
      result_outResult = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mLabel ().readProperty_string ().objectCompare (var_t_8518.readProperty_mLabel ().readProperty_string ())).operator_and (GALGAS_bool (ComparisonKind::equal, temp_2.readProperty_mKind ().objectCompare (var_t_8518.readProperty_mKind ())) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 267)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outResult = GALGAS_bool (false) ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18AbstractConditionTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38_AbstractConditionTerminator::getter_terminatorSize (const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  const GALGAS_ipic_31__38_AbstractConditionTerminator temp_0 = this ;
  const GALGAS_ipic_31__38_AbstractConditionTerminator temp_1 = this ;
  result_outSize = GALGAS_uint (uint32_t (2U)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 283)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 282)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 284)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 283)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18AbstractConditionTerminator terminatorRelativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_AbstractConditionTerminator::method_terminatorRelativeBranchOverflow (const GALGAS_uint constinArgument_inAddress,
                                                                                            const GALGAS_string constinArgument_inBlockLabel,
                                                                                            const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                            const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                            GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                            Compiler * inCompiler
                                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_AbstractConditionTerminator temp_0 = this ;
  callExtensionMethod_terminatorRelativeBranchOverflow ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 295)) ;
  const GALGAS_ipic_31__38_AbstractConditionTerminator temp_1 = this ;
  callExtensionMethod_terminatorRelativeBranchOverflow ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 302)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18RegisterComparisonTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_pic_31__38_RegisterComparisonTerminator::getter_terminatorSize (const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_1 = this ;
  result_outSize = GALGAS_uint (uint32_t (2U)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 321)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 320)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 322)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 321)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18RegisterComparisonTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_pic_31__38_RegisterComparisonTerminator::getter_terminatorDisplay (const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  result_outResult = temp_0.readProperty_mRegisterDescription ().readProperty_mAssemblyString ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 330)) ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_1 = this ;
  switch (temp_1.readProperty_mComparison ().enumValue ()) {
  case GALGAS_ipic_31__38_RegisterComparison::kNotBuilt:
    break ;
  case GALGAS_ipic_31__38_RegisterComparison::kEnum_registerEqualsToW:
    {
      result_outResult.plusAssign_operation(GALGAS_string ("=="), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 333)) ;
    }
    break ;
  case GALGAS_ipic_31__38_RegisterComparison::kEnum_registerGreaterThanW:
    {
      result_outResult.plusAssign_operation(GALGAS_string (">"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 335)) ;
    }
    break ;
  case GALGAS_ipic_31__38_RegisterComparison::kEnum_registerLowerThanW:
    {
      result_outResult.plusAssign_operation(GALGAS_string ("<"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 337)) ;
    }
    break ;
  }
  result_outResult.plusAssign_operation(GALGAS_string (" W \? "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 339)) ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_2 = this ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 340)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 340)) ;
  result_outResult.plusAssign_operation(GALGAS_string (" : "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 341)) ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_3 = this ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_3.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 342)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 342)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18RegisterComparisonTerminator performTerminatorRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_RegisterComparisonTerminator::method_performTerminatorRelativeBranchResolution (const GALGAS_uint constinArgument_inAddress,
                                                                                                     const GALGAS_string constinArgument_inBlockLabel,
                                                                                                     const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                     const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                                     GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                     GALGAS_string & ioArgument_ioListFileContents,
                                                                                                     GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                     Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_n_11559 = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedTrueTerminator_11838 ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedTrueTerminator_11838, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 356)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedFalseTerminator_12126 ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_1 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedFalseTerminator_12126, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 365)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (ComparisonKind::equal, ioArgument_ioConversionCount.objectCompare (var_n_11559)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_pic_31__38_RegisterComparisonTerminator temp_3 = this ;
      outArgument_outModifiedTerminator = temp_3 ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_pic_31__38_RegisterComparisonTerminator temp_4 = this ;
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_5 ;
    if (var_outModifiedTrueTerminator_11838.isValid ()) {
      if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedTrueTerminator_11838.ptr ())) {
        temp_5 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedTrueTerminator_11838.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedTrueTerminator_11838.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 379)) ;
      }
    }
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_6 ;
    if (var_outModifiedFalseTerminator_12126.isValid ()) {
      if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedFalseTerminator_12126.ptr ())) {
        temp_6 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedFalseTerminator_12126.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedFalseTerminator_12126.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 380)) ;
      }
    }
    const GALGAS_pic_31__38_RegisterComparisonTerminator temp_7 = this ;
    const GALGAS_pic_31__38_RegisterComparisonTerminator temp_8 = this ;
    outArgument_outModifiedTerminator = GALGAS_pic_31__38_RegisterComparisonTerminator::init_21__21__21__21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5, temp_6, temp_7.readProperty_mRegisterDescription (), temp_8.readProperty_mComparison (), inCompiler COMMA_HERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18RegisterComparisonTerminator generateTerminatorCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_RegisterComparisonTerminator::method_generateTerminatorCode (const GALGAS_uint constinArgument_inAddress,
                                                                                  const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                  const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                  GALGAS_codeList & outArgument_outCode,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_binCode_12849 ;
  GALGAS_string var_assemblyCode_12871 ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_0 = this ;
  switch (temp_0.readProperty_mComparison ().enumValue ()) {
  case GALGAS_ipic_31__38_RegisterComparison::kNotBuilt:
    break ;
  case GALGAS_ipic_31__38_RegisterComparison::kEnum_registerEqualsToW:
    {
      var_binCode_12849 = GALGAS_uint (uint32_t (25088U)) ;
      var_assemblyCode_12871 = GALGAS_string ("    CPFSEQ") ;
    }
    break ;
  case GALGAS_ipic_31__38_RegisterComparison::kEnum_registerGreaterThanW:
    {
      var_binCode_12849 = GALGAS_uint (uint32_t (25600U)) ;
      var_assemblyCode_12871 = GALGAS_string ("    CPFSGT") ;
    }
    break ;
  case GALGAS_ipic_31__38_RegisterComparison::kEnum_registerLowerThanW:
    {
      var_binCode_12849 = GALGAS_uint (uint32_t (24576U)) ;
      var_assemblyCode_12871 = GALGAS_string ("    CPFSLT") ;
    }
    break ;
  }
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_1 = this ;
  var_assemblyCode_12871.plusAssign_operation(GALGAS_string (" ").add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 407)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 407)) ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_2 = this ;
  var_binCode_12849 = var_binCode_12849.operator_or (temp_2.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 408)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 408)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_pic_31__38_RegisterComparisonTerminator temp_4 = this ;
    test_3 = temp_4.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (kBoolTrue == test_3) {
      var_binCode_12849 = var_binCode_12849.operator_or (GALGAS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 410)) ;
      var_assemblyCode_12871.plusAssign_operation(GALGAS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 411)) ;
    }
  }
  outArgument_outCode = GALGAS_codeList::class_func_listWithValue (var_assemblyCode_12871, GALGAS_uintlist::class_func_listWithValue (var_binCode_12849  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 415))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 413)) ;
  GALGAS_codeList var_falseTerminatorCode_13658 ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_5 = this ;
  callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_5.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 418)), constinArgument_inSymbolTable, GALGAS_string::makeEmptyString (), var_falseTerminatorCode_13658, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 417)) ;
  outArgument_outCode.plusAssign_operation(var_falseTerminatorCode_13658, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 423)) ;
  GALGAS_codeList var_trueTerminatorCode_13944 ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_6 = this ;
  const GALGAS_pic_31__38_RegisterComparisonTerminator temp_7 = this ;
  callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_6.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 425)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_7.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 425)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 425)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_trueTerminatorCode_13944, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 424)) ;
  outArgument_outCode.plusAssign_operation(var_trueTerminatorCode_13944, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 430)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18RegisterComparisonTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_pic_31__38_RegisterComparisonTerminator::getter_isEqualToTerminator (const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_pic_31__38_RegisterComparisonTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_pic_31__38_RegisterComparisonTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (nullptr != dynamic_cast <const cPtr_pic_31__38_RegisterComparisonTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_pic_31__38_RegisterComparisonTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("pic_31__38_RegisterComparisonTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 440)) ;
        }
      }
      GALGAS_pic_31__38_RegisterComparisonTerminator var_t_14362 = temp_1 ;
      const GALGAS_pic_31__38_RegisterComparisonTerminator temp_2 = this ;
      result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), var_t_14362.readProperty_mSingleInstructionTerminatorIfConditionTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 441)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_pic_31__38_RegisterComparisonTerminator temp_4 = this ;
          result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_4.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), var_t_14362.readProperty_mSingleInstructionTerminatorIfConditionFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 443)) ;
        }
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_pic_31__38_RegisterComparisonTerminator temp_6 = this ;
          result_outResult = GALGAS_bool (ComparisonKind::equal, temp_6.readProperty_mComparison ().objectCompare (var_t_14362.readProperty_mComparison ())) ;
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_7) {
          const GALGAS_pic_31__38_RegisterComparisonTerminator temp_8 = this ;
          result_outResult = extensionGetter_isEqualToRegister (temp_8.readProperty_mRegisterDescription (), var_t_14362.readProperty_mRegisterDescription (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 449)) ;
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

GALGAS_uint cPtr_pic_31__38_TestRegisterTerminator::getter_terminatorSize (const GALGAS_string constinArgument_inNextBlockLabel,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  const GALGAS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_1 = this ;
  result_outSize = GALGAS_uint (uint32_t (2U)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 464)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 463)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 465)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 464)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18TestRegisterTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_pic_31__38_TestRegisterTerminator::getter_terminatorDisplay (const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  result_outResult = temp_0.readProperty_mRegisterDescription ().readProperty_mAssemblyString () ;
  result_outResult.plusAssign_operation(GALGAS_string (" Z \? "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 474)) ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_1 = this ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 475)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 475)) ;
  result_outResult.plusAssign_operation(GALGAS_string (" : "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 476)) ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_2 = this ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 477)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 477)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18TestRegisterTerminator performTerminatorRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_TestRegisterTerminator::method_performTerminatorRelativeBranchResolution (const GALGAS_uint constinArgument_inAddress,
                                                                                               const GALGAS_string constinArgument_inBlockLabel,
                                                                                               const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                               const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                               GALGAS_uint & ioArgument_ioConversionCount,
                                                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                                                               GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_n_16363 = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedTrueTerminator_16642 ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedTrueTerminator_16642, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 491)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedFalseTerminator_16930 ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_1 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedFalseTerminator_16930, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 500)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (ComparisonKind::equal, ioArgument_ioConversionCount.objectCompare (var_n_16363)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_pic_31__38_TestRegisterTerminator temp_3 = this ;
      outArgument_outModifiedTerminator = temp_3 ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_pic_31__38_TestRegisterTerminator temp_4 = this ;
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_5 ;
    if (var_outModifiedTrueTerminator_16642.isValid ()) {
      if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedTrueTerminator_16642.ptr ())) {
        temp_5 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedTrueTerminator_16642.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedTrueTerminator_16642.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 514)) ;
      }
    }
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_6 ;
    if (var_outModifiedFalseTerminator_16930.isValid ()) {
      if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedFalseTerminator_16930.ptr ())) {
        temp_6 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedFalseTerminator_16930.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedFalseTerminator_16930.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 515)) ;
      }
    }
    const GALGAS_pic_31__38_TestRegisterTerminator temp_7 = this ;
    outArgument_outModifiedTerminator = GALGAS_pic_31__38_TestRegisterTerminator::init_21__21__21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5, temp_6, temp_7.readProperty_mRegisterDescription (), inCompiler COMMA_HERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18TestRegisterTerminator generateTerminatorCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_TestRegisterTerminator::method_generateTerminatorCode (const GALGAS_uint constinArgument_inAddress,
                                                                            const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                            const GALGAS_string constinArgument_inNextBlockLabel,
                                                                            GALGAS_codeList & outArgument_outCode,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_binCode_17617 = GALGAS_uint (uint32_t (26112U)) ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_0 = this ;
  GALGAS_string var_assemblyCode_17648 = GALGAS_string ("    TSTFSZ ").add_operation (temp_0.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 528)) ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_1 = this ;
  var_binCode_17617 = var_binCode_17617.operator_or (temp_1.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 529)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 529)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_pic_31__38_TestRegisterTerminator temp_3 = this ;
    test_2 = temp_3.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (kBoolTrue == test_2) {
      var_binCode_17617 = var_binCode_17617.operator_or (GALGAS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 531)) ;
      var_assemblyCode_17648.plusAssign_operation(GALGAS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 532)) ;
    }
  }
  outArgument_outCode = GALGAS_codeList::class_func_listWithValue (var_assemblyCode_17648, GALGAS_uintlist::class_func_listWithValue (var_binCode_17617  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 536))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 534)) ;
  GALGAS_codeList var_falseTerminatorCode_18221 ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_4 = this ;
  callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_4.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 539)), constinArgument_inSymbolTable, GALGAS_string::makeEmptyString (), var_falseTerminatorCode_18221, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 538)) ;
  outArgument_outCode.plusAssign_operation(var_falseTerminatorCode_18221, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 544)) ;
  GALGAS_codeList var_trueTerminatorCode_18507 ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_5 = this ;
  const GALGAS_pic_31__38_TestRegisterTerminator temp_6 = this ;
  callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_5.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 546)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_6.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), GALGAS_string::makeEmptyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 546)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 546)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_trueTerminatorCode_18507, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 545)) ;
  outArgument_outCode.plusAssign_operation(var_trueTerminatorCode_18507, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 551)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18TestRegisterTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_pic_31__38_TestRegisterTerminator::getter_isEqualToTerminator (const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_pic_31__38_TestRegisterTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_pic_31__38_TestRegisterTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (nullptr != dynamic_cast <const cPtr_pic_31__38_TestRegisterTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_pic_31__38_TestRegisterTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("pic_31__38_TestRegisterTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 561)) ;
        }
      }
      GALGAS_pic_31__38_TestRegisterTerminator var_t_18907 = temp_1 ;
      const GALGAS_pic_31__38_TestRegisterTerminator temp_2 = this ;
      result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), var_t_18907.readProperty_mSingleInstructionTerminatorIfConditionTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 562)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_pic_31__38_TestRegisterTerminator temp_4 = this ;
          result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_4.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), var_t_18907.readProperty_mSingleInstructionTerminatorIfConditionFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 564)) ;
        }
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_pic_31__38_TestRegisterTerminator temp_6 = this ;
          result_outResult = extensionGetter_isEqualToRegister (temp_6.readProperty_mRegisterDescription (), var_t_18907.readProperty_mRegisterDescription (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 567)) ;
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

GALGAS_string cPtr_pic_31__38_BitTestTerminator::getter_terminatorDisplay (const GALGAS_string constinArgument_inNextBlockLabel,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_pic_31__38_BitTestTerminator temp_0 = this ;
  const GALGAS_pic_31__38_BitTestTerminator temp_1 = this ;
  result_outResult = temp_0.readProperty_mRegisterDescription ().readProperty_mAssemblyString ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 581)).add_operation (temp_1.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 581)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 581)).add_operation (GALGAS_string (" \? "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 581)) ;
  const GALGAS_pic_31__38_BitTestTerminator temp_2 = this ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 582)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 582)) ;
  result_outResult.plusAssign_operation(GALGAS_string (" : "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 583)) ;
  const GALGAS_pic_31__38_BitTestTerminator temp_3 = this ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_3.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 584)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 584)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18BitTestTerminator performTerminatorRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_BitTestTerminator::method_performTerminatorRelativeBranchResolution (const GALGAS_uint constinArgument_inAddress,
                                                                                          const GALGAS_string constinArgument_inBlockLabel,
                                                                                          const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                          const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                          GALGAS_uint & ioArgument_ioConversionCount,
                                                                                          GALGAS_string & ioArgument_ioListFileContents,
                                                                                          GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_n_20456 = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedTrueTerminator_20735 ;
  const GALGAS_pic_31__38_BitTestTerminator temp_0 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedTrueTerminator_20735, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 598)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedFalseTerminator_21023 ;
  const GALGAS_pic_31__38_BitTestTerminator temp_1 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedFalseTerminator_21023, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 607)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (ComparisonKind::equal, ioArgument_ioConversionCount.objectCompare (var_n_20456)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_pic_31__38_BitTestTerminator temp_3 = this ;
      outArgument_outModifiedTerminator = temp_3 ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_pic_31__38_BitTestTerminator temp_4 = this ;
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_5 ;
    if (var_outModifiedTrueTerminator_20735.isValid ()) {
      if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedTrueTerminator_20735.ptr ())) {
        temp_5 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedTrueTerminator_20735.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedTrueTerminator_20735.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 621)) ;
      }
    }
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_6 ;
    if (var_outModifiedFalseTerminator_21023.isValid ()) {
      if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedFalseTerminator_21023.ptr ())) {
        temp_6 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedFalseTerminator_21023.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedFalseTerminator_21023.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 622)) ;
      }
    }
    const GALGAS_pic_31__38_BitTestTerminator temp_7 = this ;
    const GALGAS_pic_31__38_BitTestTerminator temp_8 = this ;
    outArgument_outModifiedTerminator = GALGAS_pic_31__38_BitTestTerminator::init_21__21__21__21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5, temp_6, temp_7.readProperty_mRegisterDescription (), temp_8.readProperty_mBitNumber (), inCompiler COMMA_HERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18BitTestTerminator generateTerminatorCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_BitTestTerminator::method_generateTerminatorCode (const GALGAS_uint constinArgument_inAddress,
                                                                       const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                       const GALGAS_string constinArgument_inNextBlockLabel,
                                                                       GALGAS_codeList & outArgument_outCode,
                                                                       Compiler * inCompiler
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_pic_31__38_BitTestTerminator temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::equal, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 636)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_uint var_binCode_21882 = GALGAS_uint (uint32_t (45056U)) ;
      const GALGAS_pic_31__38_BitTestTerminator temp_2 = this ;
      const GALGAS_pic_31__38_BitTestTerminator temp_3 = this ;
      GALGAS_string var_assemblyCode_21915 = GALGAS_string ("    BTFSC ").add_operation (temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 639)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 639)).add_operation (temp_3.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 639)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 639)) ;
      const GALGAS_pic_31__38_BitTestTerminator temp_4 = this ;
      var_binCode_21882 = var_binCode_21882.operator_or (temp_4.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 640)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 640)) ;
      const GALGAS_pic_31__38_BitTestTerminator temp_5 = this ;
      var_binCode_21882 = var_binCode_21882.operator_or (temp_5.readProperty_mBitNumber ().left_shift_operation (GALGAS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 641)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 641)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 641)) ;
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        const GALGAS_pic_31__38_BitTestTerminator temp_7 = this ;
        test_6 = temp_7.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
        if (kBoolTrue == test_6) {
          var_binCode_21882 = var_binCode_21882.operator_or (GALGAS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 643)) ;
          var_assemblyCode_21915.plusAssign_operation(GALGAS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 644)) ;
        }
      }
      outArgument_outCode = GALGAS_codeList::class_func_listWithValue (var_assemblyCode_21915, GALGAS_uintlist::class_func_listWithValue (var_binCode_21882  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 648))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 646)) ;
      GALGAS_codeList var_falseTerminatorCode_22531 ;
      const GALGAS_pic_31__38_BitTestTerminator temp_8 = this ;
      callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_8.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 650)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_falseTerminatorCode_22531, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 649)) ;
      outArgument_outCode.plusAssign_operation(var_falseTerminatorCode_22531, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 655)) ;
    }
  }
  if (kBoolFalse == test_0) {
    GALGAS_uint var_binCode_22685 = GALGAS_uint (uint32_t (40960U)) ;
    const GALGAS_pic_31__38_BitTestTerminator temp_9 = this ;
    const GALGAS_pic_31__38_BitTestTerminator temp_10 = this ;
    GALGAS_string var_assemblyCode_22718 = GALGAS_string ("    BTFSS ").add_operation (temp_9.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 659)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 659)).add_operation (temp_10.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 659)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 659)) ;
    const GALGAS_pic_31__38_BitTestTerminator temp_11 = this ;
    var_binCode_22685 = var_binCode_22685.operator_or (temp_11.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 660)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 660)) ;
    const GALGAS_pic_31__38_BitTestTerminator temp_12 = this ;
    var_binCode_22685 = var_binCode_22685.operator_or (temp_12.readProperty_mBitNumber ().left_shift_operation (GALGAS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 661)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 661)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 661)) ;
    enumGalgasBool test_13 = kBoolTrue ;
    if (kBoolTrue == test_13) {
      const GALGAS_pic_31__38_BitTestTerminator temp_14 = this ;
      test_13 = temp_14.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
      if (kBoolTrue == test_13) {
        var_binCode_22685 = var_binCode_22685.operator_or (GALGAS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 663)) ;
        var_assemblyCode_22718.plusAssign_operation(GALGAS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 664)) ;
      }
    }
    outArgument_outCode = GALGAS_codeList::class_func_listWithValue (var_assemblyCode_22718, GALGAS_uintlist::class_func_listWithValue (var_binCode_22685  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 668))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 666)) ;
    GALGAS_codeList var_trueTerminatorCode_23319 ;
    const GALGAS_pic_31__38_BitTestTerminator temp_15 = this ;
    callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_15.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 670)), constinArgument_inSymbolTable, GALGAS_string::makeEmptyString (), var_trueTerminatorCode_23319, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 669)) ;
    outArgument_outCode.plusAssign_operation(var_trueTerminatorCode_23319, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 675)) ;
    GALGAS_codeList var_falseTerminatorCode_23631 ;
    const GALGAS_pic_31__38_BitTestTerminator temp_16 = this ;
    const GALGAS_pic_31__38_BitTestTerminator temp_17 = this ;
    callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_16.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 677)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_17.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 677)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 677)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_falseTerminatorCode_23631, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 676)) ;
    outArgument_outCode.plusAssign_operation(var_falseTerminatorCode_23631, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 682)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@pic18BitTestTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_pic_31__38_BitTestTerminator::getter_isEqualToTerminator (const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_pic_31__38_BitTestTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_pic_31__38_BitTestTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (nullptr != dynamic_cast <const cPtr_pic_31__38_BitTestTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_pic_31__38_BitTestTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("pic_31__38_BitTestTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 693)) ;
        }
      }
      GALGAS_pic_31__38_BitTestTerminator var_t_24028 = temp_1 ;
      const GALGAS_pic_31__38_BitTestTerminator temp_2 = this ;
      result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), var_t_24028.readProperty_mSingleInstructionTerminatorIfConditionTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 694)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_pic_31__38_BitTestTerminator temp_4 = this ;
          result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_4.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), var_t_24028.readProperty_mSingleInstructionTerminatorIfConditionFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 696)) ;
        }
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_pic_31__38_BitTestTerminator temp_6 = this ;
          result_outResult = GALGAS_bool (ComparisonKind::equal, temp_6.readProperty_mBitNumber ().objectCompare (var_t_24028.readProperty_mBitNumber ())) ;
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_7) {
          const GALGAS_pic_31__38_BitTestTerminator temp_8 = this ;
          result_outResult = extensionGetter_isEqualToRegister (temp_8.readProperty_mRegisterDescription (), var_t_24028.readProperty_mRegisterDescription (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 702)) ;
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

GALGAS_string cPtr_ipic_31__38_IncDecRegisterTerminator::getter_terminatorDisplay (const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outResult ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mIncrement ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outResult = GALGAS_string ("INCF ") ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outResult = GALGAS_string ("DECF ") ;
  }
  const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_2 = this ;
  result_outResult.plusAssign_operation(temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 721)) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_4 = this ;
    test_3 = temp_4.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (kBoolTrue == test_3) {
      result_outResult.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 723)) ;
    }
  }
  if (kBoolFalse == test_3) {
    result_outResult.plusAssign_operation(GALGAS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 725)) ;
  }
  result_outResult.plusAssign_operation(GALGAS_string (" Z \? "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 727)) ;
  const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_5 = this ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_5.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 728)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 728)) ;
  result_outResult.plusAssign_operation(GALGAS_string (" : "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 729)) ;
  const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_6 = this ;
  result_outResult.plusAssign_operation(callExtensionGetter_terminatorDisplay ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_6.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 730)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 730)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18IncDecRegisterTerminator performTerminatorRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_IncDecRegisterTerminator::method_performTerminatorRelativeBranchResolution (const GALGAS_uint constinArgument_inAddress,
                                                                                                  const GALGAS_string constinArgument_inBlockLabel,
                                                                                                  const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                  const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                                  GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                  GALGAS_string & ioArgument_ioListFileContents,
                                                                                                  GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_n_25838 = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedTrueTerminator_26117 ;
  const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_0 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_0.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedTrueTerminator_26117, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 744)) ;
  GALGAS_ipic_31__38_AbstractBlockTerminator var_outModifiedFalseTerminator_26405 ;
  const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_1 = this ;
  callExtensionMethod_performTerminatorRelativeBranchResolution ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress, constinArgument_inBlockLabel, constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedFalseTerminator_26405, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 753)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (ComparisonKind::equal, ioArgument_ioConversionCount.objectCompare (var_n_25838)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_3 = this ;
      outArgument_outModifiedTerminator = temp_3 ;
    }
  }
  if (kBoolFalse == test_2) {
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_4 = this ;
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_5 ;
    if (var_outModifiedTrueTerminator_26117.isValid ()) {
      if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedTrueTerminator_26117.ptr ())) {
        temp_5 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedTrueTerminator_26117.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedTrueTerminator_26117.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 767)) ;
      }
    }
    GALGAS_ipic_31__38_SingleInstructionTerminator temp_6 ;
    if (var_outModifiedFalseTerminator_26405.isValid ()) {
      if (nullptr != dynamic_cast <const cPtr_ipic_31__38_SingleInstructionTerminator *> (var_outModifiedFalseTerminator_26405.ptr ())) {
        temp_6 = (cPtr_ipic_31__38_SingleInstructionTerminator *) var_outModifiedFalseTerminator_26405.ptr () ;
      }else{
        inCompiler->castError ("ipic_31__38_SingleInstructionTerminator", var_outModifiedFalseTerminator_26405.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 768)) ;
      }
    }
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_7 = this ;
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_8 = this ;
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_9 = this ;
    outArgument_outModifiedTerminator = GALGAS_ipic_31__38_IncDecRegisterTerminator::init_21__21__21__21__21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5, temp_6, temp_7.readProperty_mRegisterDescription (), temp_8.readProperty_mIncrement (), temp_9.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18IncDecRegisterTerminator generateTerminatorCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_IncDecRegisterTerminator::method_generateTerminatorCode (const GALGAS_uint constinArgument_inAddress,
                                                                               const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                               const GALGAS_string constinArgument_inNextBlockLabel,
                                                                               GALGAS_codeList & outArgument_outCode,
                                                                               Compiler * inCompiler
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::equal, callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_1.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 782)).objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_2 = this ;
      GALGAS_bigint temp_3 ;
      const enumGalgasBool test_4 = temp_2.readProperty_mIncrement ().boolEnum () ;
      if (kBoolTrue == test_4) {
        temp_3 = GALGAS_bigint ("15360", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 784)) ;
      }else if (kBoolFalse == test_4) {
        temp_3 = GALGAS_bigint ("11264", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 784)) ;
      }
      GALGAS_uint var_binCode_27310 = temp_3.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 784)) ;
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_5 = this ;
      GALGAS_string temp_6 ;
      const enumGalgasBool test_7 = temp_5.readProperty_mIncrement ().boolEnum () ;
      if (kBoolTrue == test_7) {
        temp_6 = GALGAS_string ("    INCFSZ") ;
      }else if (kBoolFalse == test_7) {
        temp_6 = GALGAS_string ("    DECFSZ") ;
      }
      GALGAS_string var_assemblyCode_27392 = temp_6 ;
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_8 = this ;
      var_assemblyCode_27392.plusAssign_operation(GALGAS_string (" ").add_operation (temp_8.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 786)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 786)) ;
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_9 = this ;
      var_binCode_27310 = var_binCode_27310.operator_or (temp_9.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 787)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 787)) ;
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_11 = this ;
        test_10 = temp_11.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
        if (kBoolTrue == test_10) {
          var_assemblyCode_27392.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 789)) ;
        }
      }
      if (kBoolFalse == test_10) {
        var_binCode_27310 = var_binCode_27310.operator_or (GALGAS_uint (uint32_t (512U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 791)) ;
        var_assemblyCode_27392.plusAssign_operation(GALGAS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 792)) ;
      }
      enumGalgasBool test_12 = kBoolTrue ;
      if (kBoolTrue == test_12) {
        const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_13 = this ;
        test_12 = temp_13.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
        if (kBoolTrue == test_12) {
          var_binCode_27310 = var_binCode_27310.operator_or (GALGAS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 795)) ;
          var_assemblyCode_27392.plusAssign_operation(GALGAS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 796)) ;
        }
      }
      outArgument_outCode = GALGAS_codeList::class_func_listWithValue (var_assemblyCode_27392, GALGAS_uintlist::class_func_listWithValue (var_binCode_27310  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 800))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 798)) ;
      GALGAS_codeList var_falseTerminatorCode_28147 ;
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_14 = this ;
      callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_14.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 802)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_falseTerminatorCode_28147, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 801)) ;
      outArgument_outCode.plusAssign_operation(var_falseTerminatorCode_28147, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 807)) ;
    }
  }
  if (kBoolFalse == test_0) {
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_15 = this ;
    GALGAS_bigint temp_16 ;
    const enumGalgasBool test_17 = temp_15.readProperty_mIncrement ().boolEnum () ;
    if (kBoolTrue == test_17) {
      temp_16 = GALGAS_bigint ("18432", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 810)) ;
    }else if (kBoolFalse == test_17) {
      temp_16 = GALGAS_bigint ("19456", inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 810)) ;
    }
    GALGAS_uint var_binCode_28301 = temp_16.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 810)) ;
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_18 = this ;
    GALGAS_string temp_19 ;
    const enumGalgasBool test_20 = temp_18.readProperty_mIncrement ().boolEnum () ;
    if (kBoolTrue == test_20) {
      temp_19 = GALGAS_string ("    INFSNZ") ;
    }else if (kBoolFalse == test_20) {
      temp_19 = GALGAS_string ("    DCFSNZ") ;
    }
    GALGAS_string var_assemblyCode_28383 = temp_19 ;
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_21 = this ;
    var_assemblyCode_28383.plusAssign_operation(GALGAS_string (" ").add_operation (temp_21.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 812)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 812)) ;
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_22 = this ;
    var_binCode_28301 = var_binCode_28301.operator_or (temp_22.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 813)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 813)) ;
    enumGalgasBool test_23 = kBoolTrue ;
    if (kBoolTrue == test_23) {
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_24 = this ;
      test_23 = temp_24.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
      if (kBoolTrue == test_23) {
        var_assemblyCode_28383.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 815)) ;
      }
    }
    if (kBoolFalse == test_23) {
      var_binCode_28301 = var_binCode_28301.operator_or (GALGAS_uint (uint32_t (512U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 817)) ;
      var_assemblyCode_28383.plusAssign_operation(GALGAS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 818)) ;
    }
    enumGalgasBool test_25 = kBoolTrue ;
    if (kBoolTrue == test_25) {
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_26 = this ;
      test_25 = temp_26.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
      if (kBoolTrue == test_25) {
        var_binCode_28301 = var_binCode_28301.operator_or (GALGAS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 821)) ;
        var_assemblyCode_28383.plusAssign_operation(GALGAS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 822)) ;
      }
    }
    outArgument_outCode = GALGAS_codeList::class_func_listWithValue (var_assemblyCode_28383, GALGAS_uintlist::class_func_listWithValue (var_binCode_28301  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 826))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 824)) ;
    GALGAS_codeList var_trueTerminatorCode_29123 ;
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_27 = this ;
    callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_27.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 828)), constinArgument_inSymbolTable, GALGAS_string::makeEmptyString (), var_trueTerminatorCode_29123, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 827)) ;
    outArgument_outCode.plusAssign_operation(var_trueTerminatorCode_29123, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 833)) ;
    GALGAS_codeList var_falseTerminatorCode_29435 ;
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_28 = this ;
    const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_29 = this ;
    callExtensionMethod_generateTerminatorCode ((cPtr_ipic_31__38_SingleInstructionTerminator *) temp_28.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 835)).add_operation (callExtensionGetter_terminatorSize ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_29.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), constinArgument_inNextBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 835)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 835)), constinArgument_inSymbolTable, constinArgument_inNextBlockLabel, var_falseTerminatorCode_29435, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 834)) ;
    outArgument_outCode.plusAssign_operation(var_falseTerminatorCode_29435, inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 840)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18IncDecRegisterTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38_IncDecRegisterTerminator::getter_isEqualToTerminator (const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_IncDecRegisterTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_ipic_31__38_IncDecRegisterTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (nullptr != dynamic_cast <const cPtr_ipic_31__38_IncDecRegisterTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_ipic_31__38_IncDecRegisterTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38_IncDecRegisterTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 851)) ;
        }
      }
      GALGAS_ipic_31__38_IncDecRegisterTerminator var_t_29856 = temp_1 ;
      const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_2 = this ;
      result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_2.readProperty_mSingleInstructionTerminatorIfConditionTrue ().ptr (), var_t_29856.readProperty_mSingleInstructionTerminatorIfConditionTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 852)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_4 = this ;
          result_outResult = callExtensionGetter_isEqualToTerminator ((const cPtr_ipic_31__38_SingleInstructionTerminator *) temp_4.readProperty_mSingleInstructionTerminatorIfConditionFalse ().ptr (), var_t_29856.readProperty_mSingleInstructionTerminatorIfConditionFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 854)) ;
        }
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_6 = this ;
          result_outResult = GALGAS_bool (ComparisonKind::equal, temp_6.readProperty_mIncrement ().objectCompare (var_t_29856.readProperty_mIncrement ())) ;
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_7) {
          const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_8 = this ;
          result_outResult = GALGAS_bool (ComparisonKind::equal, temp_8.readProperty_m_5F_W_5F_isDestination ().objectCompare (var_t_29856.readProperty_m_5F_W_5F_isDestination ())) ;
        }
      }
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_ipic_31__38_IncDecRegisterTerminator temp_10 = this ;
          result_outResult = extensionGetter_isEqualToRegister (temp_10.readProperty_mRegisterDescription (), var_t_29856.readProperty_mRegisterDescription (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 863)) ;
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

GALGAS_uint cPtr_ipic_31__38_ComputedRETLWTerminator::getter_terminatorSize (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outSize = GALGAS_uint (uint32_t (2U)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outSize = GALGAS_uint (uint32_t (4U)) ;
  }
  const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_2 = this ;
  result_outSize = result_outSize.add_operation (GALGAS_uint (uint32_t (2U)).multiply_operation (temp_2.readProperty_mLiteralValues ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas", 882)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 882)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 882)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedRETLWTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_ipic_31__38_ComputedRETLWTerminator::getter_terminatorDisplay (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("COMPUTED RETLW") ;
  const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_0 = this ;
  cEnumerator_uintlist enumerator_31215 (temp_0.readProperty_mLiteralValues (), EnumerationOrder::up) ;
  while (enumerator_31215.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_31215.current_mValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_terminators.galgas", 892)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 892)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 892)) ;
    enumerator_31215.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedRETLWTerminator performTerminatorRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::method_performTerminatorRelativeBranchResolution (const GALGAS_uint constinArgument_inAddress,
                                                                                                 const GALGAS_string constinArgument_inBlockLabel,
                                                                                                 const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                 const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                                 GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                                                                 GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_0 = this ;
  outArgument_outModifiedTerminator = temp_0 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_2 = this ;
    test_1 = temp_2.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 908)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 908)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 908)).boolEnum () ;
        if (kBoolTrue == test_3) {
          ioArgument_ioConversionCount.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 909)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 910)).add_operation (GALGAS_string (": computed RETLW needs CALL _computed_goto_2\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 910)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 910)) ;
          const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_4 = this ;
          const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_5 = this ;
          outArgument_outModifiedTerminator = GALGAS_ipic_31__38_ComputedRETLWTerminator::init_21__21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mLiteralValues (), GALGAS_bool (false), inCompiler COMMA_HERE) ;
        }
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedRETLWTerminator terminatorRelativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::method_terminatorRelativeBranchOverflow (const GALGAS_uint constinArgument_inAddress,
                                                                                        const GALGAS_string constinArgument_inBlockLabel,
                                                                                        const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                        const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                        GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                        Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 925)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 925)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 925)).boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, GALGAS_string ("_computed_goto_2"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 926)) ;
          }
        }
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedRETLWTerminator generateTerminatorCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedRETLWTerminator::method_generateTerminatorCode (const GALGAS_uint constinArgument_inAddress,
                                                                              const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                              const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                              GALGAS_codeList & outArgument_outCode,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_goto_32_label_33013 = GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 938)) ;
  GALGAS_uint var_targetAddress_33105 ;
  constinArgument_inSymbolTable.method_searchKey (var_goto_32_label_33013, var_targetAddress_33105, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 939)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress_33105, var_goto_32_label_33013, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 941)) ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_targetAddress_33105, var_goto_32_label_33013, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 943)) ;
  }
  const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_2 = this ;
  cEnumerator_uintlist enumerator_33320 (temp_2.readProperty_mLiteralValues (), EnumerationOrder::up) ;
  while (enumerator_33320.hasCurrentObject ()) {
    outArgument_outCode.addAssign_operation (GALGAS_string ("    RETLW ").add_operation (enumerator_33320.current_mValue (HERE).getter_hexString (SOURCE_FILE ("ipic18_terminators.galgas", 947)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 947)), GALGAS_uintlist::class_func_listWithValue (GALGAS_uint (uint32_t (3072U)).operator_or (enumerator_33320.current_mValue (HERE) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 948))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 948))  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 946)) ;
    enumerator_33320.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedRETLWTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38_ComputedRETLWTerminator::getter_isEqualToTerminator (const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ComputedRETLWTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_ipic_31__38_ComputedRETLWTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (nullptr != dynamic_cast <const cPtr_ipic_31__38_ComputedRETLWTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_ipic_31__38_ComputedRETLWTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38_ComputedRETLWTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 959)) ;
        }
      }
      GALGAS_ipic_31__38_ComputedRETLWTerminator var_t_33818 = temp_1 ;
      const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_2 = this ;
      result_outResult = GALGAS_bool (ComparisonKind::equal, temp_2.readProperty_mLiteralValues ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas", 960)).objectCompare (var_t_33818.readProperty_mLiteralValues ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas", 960)))) ;
      const GALGAS_ipic_31__38_ComputedRETLWTerminator temp_3 = this ;
      cEnumerator_uintlist enumerator_33953 (temp_3.readProperty_mLiteralValues (), EnumerationOrder::up) ;
      cEnumerator_uintlist enumerator_33987 (var_t_33818.readProperty_mLiteralValues (), EnumerationOrder::up) ;
      bool bool_4 = result_outResult.isValidAndTrue () ;
      if (enumerator_33953.hasCurrentObject () && enumerator_33987.hasCurrentObject () && bool_4) {
        while (enumerator_33953.hasCurrentObject () && enumerator_33987.hasCurrentObject () && bool_4) {
          result_outResult = GALGAS_bool (ComparisonKind::equal, enumerator_33953.current_mValue (HERE).objectCompare (enumerator_33987.current_mValue (HERE))) ;
          enumerator_33953.gotoNextObject () ;
          enumerator_33987.gotoNextObject () ;
          if (enumerator_33953.hasCurrentObject () && enumerator_33987.hasCurrentObject ()) {
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

GALGAS_string cPtr_ipic_31__38_ComputedGotoTerminator::getter_terminatorDisplay (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("COMPUTED GOTO ") ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedGotoTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outResult.plusAssign_operation(GALGAS_string (" (uses RCALL)"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 978)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outResult.plusAssign_operation(GALGAS_string (" (uses CALL)"), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 980)) ;
  }
  const GALGAS_ipic_31__38_ComputedGotoTerminator temp_2 = this ;
  cEnumerator_lstringlist enumerator_34564 (temp_2.readProperty_mTargetLabels (), EnumerationOrder::up) ;
  while (enumerator_34564.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_34564.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 983)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 983)) ;
    enumerator_34564.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedGotoTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38_ComputedGotoTerminator::getter_terminatorSize (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedGotoTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outSize = GALGAS_uint (uint32_t (2U)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outSize = GALGAS_uint (uint32_t (4U)) ;
  }
  const GALGAS_ipic_31__38_ComputedGotoTerminator temp_2 = this ;
  result_outSize = result_outSize.add_operation (GALGAS_uint (uint32_t (4U)).multiply_operation (temp_2.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas", 997)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 997)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 997)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedGotoTerminator performTerminatorRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::method_performTerminatorRelativeBranchResolution (const GALGAS_uint constinArgument_inAddress,
                                                                                                const GALGAS_string constinArgument_inBlockLabel,
                                                                                                const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                                GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                GALGAS_string & ioArgument_ioListFileContents,
                                                                                                GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_ComputedGotoTerminator temp_0 = this ;
  outArgument_outModifiedTerminator = temp_0 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38_ComputedGotoTerminator temp_2 = this ;
    test_1 = temp_2.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_1) {
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1012)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1012)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1012)).boolEnum () ;
        if (kBoolTrue == test_3) {
          ioArgument_ioConversionCount.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1013)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1014)).add_operation (GALGAS_string (": computed GOTO needs CALL _computed_goto_4\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1014)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1014)) ;
          const GALGAS_ipic_31__38_ComputedGotoTerminator temp_4 = this ;
          const GALGAS_ipic_31__38_ComputedGotoTerminator temp_5 = this ;
          outArgument_outModifiedTerminator = GALGAS_ipic_31__38_ComputedGotoTerminator::init_21__21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mTargetLabels (), GALGAS_bool (false), inCompiler COMMA_HERE) ;
        }
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedGotoTerminator terminatorRelativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::method_terminatorRelativeBranchOverflow (const GALGAS_uint constinArgument_inAddress,
                                                                                       const GALGAS_string constinArgument_inBlockLabel,
                                                                                       const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                       const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                       GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedGotoTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1029)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1029)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1029)).boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, GALGAS_string ("_computed_goto_4"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1030)) ;
          }
        }
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedGotoTerminator generateTerminatorCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedGotoTerminator::method_generateTerminatorCode (const GALGAS_uint constinArgument_inAddress,
                                                                             const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                             const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                             GALGAS_codeList & outArgument_outCode,
                                                                             Compiler * inCompiler
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_goto_34_label_36671 = GALGAS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1042)) ;
  GALGAS_uint var_targetAddress_36763 ;
  constinArgument_inSymbolTable.method_searchKey (var_goto_34_label_36671, var_targetAddress_36763, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1043)) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedGotoTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress_36763, var_goto_34_label_36671, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1045)) ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_targetAddress_36763, var_goto_34_label_36671, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1047)) ;
  }
  const GALGAS_ipic_31__38_ComputedGotoTerminator temp_2 = this ;
  cEnumerator_lstringlist enumerator_36978 (temp_2.readProperty_mTargetLabels (), EnumerationOrder::up) ;
  while (enumerator_36978.hasCurrentObject ()) {
    GALGAS_uint var_targetLabelAddress_37060 ;
    constinArgument_inSymbolTable.method_searchKey (enumerator_36978.current_mValue (HERE), var_targetLabelAddress_37060, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1050)) ;
    outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_targetLabelAddress_37060, enumerator_36978.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1051)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1051)) ;
    enumerator_36978.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedGotoTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38_ComputedGotoTerminator::getter_isEqualToTerminator (const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                 Compiler * inCompiler
                                                                                 COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ComputedGotoTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_ipic_31__38_ComputedGotoTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (nullptr != dynamic_cast <const cPtr_ipic_31__38_ComputedGotoTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_ipic_31__38_ComputedGotoTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38_ComputedGotoTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1062)) ;
        }
      }
      GALGAS_ipic_31__38_ComputedGotoTerminator var_t_37505 = temp_1 ;
      const GALGAS_ipic_31__38_ComputedGotoTerminator temp_2 = this ;
      result_outResult = GALGAS_bool (ComparisonKind::equal, temp_2.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas", 1063)).objectCompare (var_t_37505.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas", 1063)))) ;
      const GALGAS_ipic_31__38_ComputedGotoTerminator temp_3 = this ;
      cEnumerator_lstringlist enumerator_37637 (temp_3.readProperty_mTargetLabels (), EnumerationOrder::up) ;
      cEnumerator_lstringlist enumerator_37670 (var_t_37505.readProperty_mTargetLabels (), EnumerationOrder::up) ;
      bool bool_4 = result_outResult.isValidAndTrue () ;
      if (enumerator_37637.hasCurrentObject () && enumerator_37670.hasCurrentObject () && bool_4) {
        while (enumerator_37637.hasCurrentObject () && enumerator_37670.hasCurrentObject () && bool_4) {
          result_outResult = GALGAS_bool (ComparisonKind::equal, enumerator_37637.current_mValue (HERE).readProperty_string ().objectCompare (enumerator_37670.current_mValue (HERE).readProperty_string ())) ;
          enumerator_37637.gotoNextObject () ;
          enumerator_37670.gotoNextObject () ;
          if (enumerator_37637.hasCurrentObject () && enumerator_37670.hasCurrentObject ()) {
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

GALGAS_uint cPtr_ipic_31__38_ComputedBraTerminator::getter_terminatorSize (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedBraTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outSize = GALGAS_uint (uint32_t (2U)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outSize = GALGAS_uint (uint32_t (4U)) ;
  }
  const GALGAS_ipic_31__38_ComputedBraTerminator temp_2 = this ;
  result_outSize = result_outSize.add_operation (GALGAS_uint (uint32_t (2U)).multiply_operation (temp_2.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas", 1084)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1084)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1084)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedBraTerminator terminatorDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_string cPtr_ipic_31__38_ComputedBraTerminator::getter_terminatorDisplay (const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outResult ; // Returned variable
  result_outResult = GALGAS_string ("COMPUTED BRA") ;
  const GALGAS_ipic_31__38_ComputedBraTerminator temp_0 = this ;
  cEnumerator_lstringlist enumerator_38479 (temp_0.readProperty_mTargetLabels (), EnumerationOrder::up) ;
  while (enumerator_38479.hasCurrentObject ()) {
    result_outResult.plusAssign_operation(GALGAS_string (" ").add_operation (enumerator_38479.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1094)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1094)) ;
    enumerator_38479.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedBraTerminator performTerminatorRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::method_performTerminatorRelativeBranchResolution (const GALGAS_uint constinArgument_inAddress,
                                                                                               const GALGAS_string constinArgument_inBlockLabel,
                                                                                               const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                               const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                               GALGAS_uint & ioArgument_ioConversionCount,
                                                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                                                               GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                               Compiler * inCompiler
                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_ComputedBraTerminator temp_0 = this ;
  cEnumerator_lstringlist enumerator_38989 (temp_0.readProperty_mTargetLabels (), EnumerationOrder::up) ;
  while (enumerator_38989.hasCurrentObject ()) {
    enumGalgasBool test_1 = kBoolTrue ;
    if (kBoolTrue == test_1) {
      test_1 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, enumerator_38989.current_mValue (HERE), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1109)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1109)).boolEnum () ;
      if (kBoolTrue == test_1) {
        const GALGAS_ipic_31__38_ComputedBraTerminator temp_2 = this ;
        TC_Array <FixItDescription> fixItArray3 ;
        inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("displacement (").add_operation (function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (constinArgument_inSymbolTable, enumerator_38989.current_mValue (HERE), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1111)).getter_string (SOURCE_FILE ("ipic18_terminators.galgas", 1110)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1110)).add_operation (GALGAS_string (") too large for rcall "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1111)).add_operation (enumerator_38989.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1111)).add_operation (GALGAS_string (" instruction (limited to [-1024, 1023])"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1112)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1110)) ;
      }
    }
    enumerator_38989.gotoNextObject () ;
  }
  const GALGAS_ipic_31__38_ComputedBraTerminator temp_4 = this ;
  outArgument_outModifiedTerminator = temp_4 ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_ipic_31__38_ComputedBraTerminator temp_6 = this ;
    test_5 = temp_6.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_5) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1117)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1117)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1117)).boolEnum () ;
        if (kBoolTrue == test_7) {
          ioArgument_ioConversionCount.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1118)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1119)).add_operation (GALGAS_string (": computed RETLW needs CALL _computed_goto_2\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1119)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1119)) ;
          const GALGAS_ipic_31__38_ComputedBraTerminator temp_8 = this ;
          const GALGAS_ipic_31__38_ComputedBraTerminator temp_9 = this ;
          outArgument_outModifiedTerminator = GALGAS_ipic_31__38_ComputedBraTerminator::init_21__21__21_ (temp_8.readProperty_mInstructionLocation (), temp_9.readProperty_mTargetLabels (), GALGAS_bool (false), inCompiler COMMA_HERE) ;
        }
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedBraTerminator terminatorRelativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::method_terminatorRelativeBranchOverflow (const GALGAS_uint constinArgument_inAddress,
                                                                                      const GALGAS_string constinArgument_inBlockLabel,
                                                                                      const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                      const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                                      GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_address_40099 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedBraTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_0) {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1135)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1135)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1135)).boolEnum () ;
        if (kBoolTrue == test_2) {
          {
          extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, GALGAS_string ("_computed_goto_2"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1136)) ;
          }
        }
      }
      var_address_40099 = constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1138)) ;
    }
  }
  if (kBoolFalse == test_0) {
    var_address_40099 = constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1140)) ;
  }
  const GALGAS_ipic_31__38_ComputedBraTerminator temp_3 = this ;
  cEnumerator_lstringlist enumerator_40382 (temp_3.readProperty_mTargetLabels (), EnumerationOrder::up) ;
  while (enumerator_40382.hasCurrentObject ()) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, enumerator_40382.current_mValue (HERE), var_address_40099, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1143)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1143)).boolEnum () ;
      if (kBoolTrue == test_4) {
        {
        extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, enumerator_40382.current_mValue (HERE).readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1144)) ;
        }
      }
    }
    var_address_40099 = var_address_40099.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1146)) ;
    enumerator_40382.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ComputedBraTerminator generateTerminatorCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ComputedBraTerminator::method_generateTerminatorCode (const GALGAS_uint constinArgument_inAddress,
                                                                            const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                            const GALGAS_string /* constinArgument_inNextBlockLabel */,
                                                                            GALGAS_codeList & outArgument_outCode,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_lstring var_goto_32_label_40897 = GALGAS_string ("_computed_goto_2").getter_nowhere (SOURCE_FILE ("ipic18_terminators.galgas", 1157)) ;
  GALGAS_uint var_targetAddress_40989 ;
  constinArgument_inSymbolTable.method_searchKey (var_goto_32_label_40897, var_targetAddress_40989, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1158)) ;
  GALGAS_uint var_address_41016 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ComputedBraTerminator temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_0) {
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress_40989, var_goto_32_label_40897, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1161)) ;
      var_address_41016 = constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1162)) ;
    }
  }
  if (kBoolFalse == test_0) {
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_targetAddress_40989, var_goto_32_label_40897, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1164)) ;
    var_address_41016 = constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1165)) ;
  }
  const GALGAS_ipic_31__38_ComputedBraTerminator temp_2 = this ;
  cEnumerator_lstringlist enumerator_41280 (temp_2.readProperty_mTargetLabels (), EnumerationOrder::up) ;
  while (enumerator_41280.hasCurrentObject ()) {
    GALGAS_uint var_labelAddress_41362 ;
    constinArgument_inSymbolTable.method_searchKey (enumerator_41280.current_mValue (HERE), var_labelAddress_41362, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1168)) ;
    outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (var_address_41016, var_labelAddress_41362, enumerator_41280.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1169)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1169)) ;
    var_address_41016 = var_address_41016.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1170)) ;
    enumerator_41280.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18ComputedBraTerminator isEqualToTerminator'
//
//--------------------------------------------------------------------------------------------------

GALGAS_bool cPtr_ipic_31__38_ComputedBraTerminator::getter_isEqualToTerminator (const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ComputedBraTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_ipic_31__38_ComputedBraTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (nullptr != dynamic_cast <const cPtr_ipic_31__38_ComputedBraTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_ipic_31__38_ComputedBraTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38_ComputedBraTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1181)) ;
        }
      }
      GALGAS_ipic_31__38_ComputedBraTerminator var_t_41826 = temp_1 ;
      const GALGAS_ipic_31__38_ComputedBraTerminator temp_2 = this ;
      result_outResult = GALGAS_bool (ComparisonKind::equal, temp_2.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas", 1182)).objectCompare (var_t_41826.readProperty_mTargetLabels ().getter_count (SOURCE_FILE ("ipic18_terminators.galgas", 1182)))) ;
      const GALGAS_ipic_31__38_ComputedBraTerminator temp_3 = this ;
      cEnumerator_lstringlist enumerator_41957 (temp_3.readProperty_mTargetLabels (), EnumerationOrder::up) ;
      cEnumerator_lstringlist enumerator_41990 (var_t_41826.readProperty_mTargetLabels (), EnumerationOrder::up) ;
      bool bool_4 = result_outResult.isValidAndTrue () ;
      if (enumerator_41957.hasCurrentObject () && enumerator_41990.hasCurrentObject () && bool_4) {
        while (enumerator_41957.hasCurrentObject () && enumerator_41990.hasCurrentObject () && bool_4) {
          result_outResult = GALGAS_bool (ComparisonKind::equal, enumerator_41957.current_mValue (HERE).readProperty_string ().objectCompare (enumerator_41990.current_mValue (HERE).readProperty_string ())) ;
          enumerator_41957.gotoNextObject () ;
          enumerator_41990.gotoNextObject () ;
          if (enumerator_41957.hasCurrentObject () && enumerator_41990.hasCurrentObject ()) {
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

GALGAS_string cPtr_ipic_31__38_ConditionalJumpTerminator::getter_terminatorDisplay (const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_string result_outResult ; // Returned variable
  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_0 = this ;
  switch (temp_0.readProperty_mConditionalBranch ().enumValue ()) {
  case GALGAS_conditional_5F_branch::kNotBuilt:
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bz:
    {
      result_outResult = GALGAS_string ("Z") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bn:
    {
      result_outResult = GALGAS_string ("N") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bc:
    {
      result_outResult = GALGAS_string ("C") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bov:
    {
      result_outResult = GALGAS_string ("OV") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnz:
    {
      result_outResult = GALGAS_string ("NZ") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnn:
    {
      result_outResult = GALGAS_string ("NN") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnc:
    {
      result_outResult = GALGAS_string ("NC") ;
    }
    break ;
  case GALGAS_conditional_5F_branch::kEnum_bnov:
    {
      result_outResult = GALGAS_string ("NOV") ;
    }
    break ;
  }
  result_outResult.plusAssign_operation(GALGAS_string (" \? "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1294)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
    test_1 = GALGAS_bool (ComparisonKind::equal, temp_2.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_3 = this ;
      result_outResult.plusAssign_operation(GALGAS_string ("(").add_operation (temp_3.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1296)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1296)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1296)) ;
    }
  }
  if (kBoolFalse == test_1) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
    result_outResult.plusAssign_operation(temp_4.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1298)) ;
  }
  result_outResult.plusAssign_operation(GALGAS_string (" : "), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1300)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_6 = this ;
    test_5 = GALGAS_bool (ComparisonKind::equal, temp_6.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_7 = this ;
      result_outResult.plusAssign_operation(GALGAS_string ("(").add_operation (temp_7.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1302)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1302)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1302)) ;
    }
  }
  if (kBoolFalse == test_5) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_8 = this ;
    result_outResult.plusAssign_operation(temp_8.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1304)) ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ConditionalJumpTerminator performTerminatorRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ConditionalJumpTerminator::method_performTerminatorRelativeBranchResolution (const GALGAS_uint constinArgument_inAddress,
                                                                                                   const GALGAS_string constinArgument_inBlockLabel,
                                                                                                   const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                   const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                                   GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                   GALGAS_string & ioArgument_ioListFileContents,
                                                                                                   GALGAS_ipic_31__38_AbstractBlockTerminator & outArgument_outModifiedTerminator,
                                                                                                   Compiler * inCompiler
                                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_0 = this ;
  GALGAS_conditionalBranchMode var_branchModeOnFalseLabel_47851 = temp_0.readProperty_mBranchModeOnFalseLabel () ;
  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_1 = this ;
  GALGAS_conditionalBranchMode var_branchModeOnTrueLabel_47934 = temp_1.readProperty_mBranchModeOnTrueLabel () ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_3 = this ;
    test_2 = GALGAS_bool (ComparisonKind::equal, temp_3.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
      switch (temp_4.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          enumGalgasBool test_5 = kBoolTrue ;
          if (kBoolTrue == test_5) {
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_6 = this ;
            test_5 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_6.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1323)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1323)).boolEnum () ;
            if (kBoolTrue == test_5) {
              var_branchModeOnFalseLabel_47851 = GALGAS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1324)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_7 = this ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1325)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1325)).add_operation (temp_7.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1325)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1325)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1325)) ;
            }
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
        {
          enumGalgasBool test_8 = kBoolTrue ;
          if (kBoolTrue == test_8) {
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_9 = this ;
            test_8 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_9.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1328)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1328)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1328)).boolEnum () ;
            if (kBoolTrue == test_8) {
              var_branchModeOnFalseLabel_47851 = GALGAS_conditionalBranchMode::class_func_ipicGOTO (SOURCE_FILE ("ipic18_terminators.galgas", 1329)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_10 = this ;
              ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1330)).add_operation (GALGAS_string (", terminator will use GOTO "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1330)).add_operation (temp_10.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1330)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1330)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1330)) ;
            }
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
        {
        }
        break ;
      }
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_11 = kBoolTrue ;
    if (kBoolTrue == test_11) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_12 = this ;
      test_11 = GALGAS_bool (ComparisonKind::equal, temp_12.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
      if (kBoolTrue == test_11) {
        const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_13 = this ;
        switch (temp_13.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
        case GALGAS_conditionalBranchMode::kNotBuilt:
          break ;
        case GALGAS_conditionalBranchMode::kEnum_native:
          {
            enumGalgasBool test_14 = kBoolTrue ;
            if (kBoolTrue == test_14) {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_15 = this ;
              test_14 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_15.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1337)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1337)).boolEnum () ;
              if (kBoolTrue == test_14) {
                var_branchModeOnTrueLabel_47934 = GALGAS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1338)) ;
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_16 = this ;
                ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1339)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1339)).add_operation (temp_16.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1339)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1339)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1339)) ;
              }
            }
          }
          break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
          {
            enumGalgasBool test_17 = kBoolTrue ;
            if (kBoolTrue == test_17) {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_18 = this ;
              test_17 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_18.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1342)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1342)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1342)).boolEnum () ;
              if (kBoolTrue == test_17) {
                var_branchModeOnTrueLabel_47934 = GALGAS_conditionalBranchMode::class_func_ipicGOTO (SOURCE_FILE ("ipic18_terminators.galgas", 1343)) ;
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_19 = this ;
                ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1344)).add_operation (GALGAS_string (", terminator will use GOTO "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1344)).add_operation (temp_19.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1344)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1344)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1344)) ;
              }
            }
          }
          break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
          {
          }
          break ;
        }
      }
    }
    if (kBoolFalse == test_11) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_20 = this ;
      switch (temp_20.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_21 = this ;
          switch (temp_21.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              enumGalgasBool test_22 = kBoolTrue ;
              if (kBoolTrue == test_22) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_23 = this ;
                test_22 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_23.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1353)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1353)).boolEnum () ;
                if (kBoolTrue == test_22) {
                  var_branchModeOnFalseLabel_47851 = GALGAS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1354)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_24 = this ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1355)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1355)).add_operation (temp_24.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1355)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1355)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1355)) ;
                }
              }
              enumGalgasBool test_25 = kBoolTrue ;
              if (kBoolTrue == test_25) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_26 = this ;
                test_25 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_26.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1357)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1357)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1357)).boolEnum () ;
                if (kBoolTrue == test_25) {
                  var_branchModeOnTrueLabel_47934 = GALGAS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1358)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_27 = this ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1359)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1359)).add_operation (temp_27.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1359)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1359)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1359)) ;
                }
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
            }
            break ;
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_28 = this ;
          switch (temp_28.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
            {
              enumGalgasBool test_29 = kBoolTrue ;
              if (kBoolTrue == test_29) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_30 = this ;
                test_29 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_30.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1366)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1366)).boolEnum () ;
                if (kBoolTrue == test_29) {
                  var_branchModeOnTrueLabel_47934 = GALGAS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1367)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_31 = this ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1368)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1368)).add_operation (temp_31.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1368)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1368)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1368)) ;
                }
              }
              enumGalgasBool test_32 = kBoolTrue ;
              if (kBoolTrue == test_32) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_33 = this ;
                test_32 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_33.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1370)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1370)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1370)).boolEnum () ;
                if (kBoolTrue == test_32) {
                  var_branchModeOnFalseLabel_47851 = GALGAS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1371)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_34 = this ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1372)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1372)).add_operation (temp_34.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1372)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1372)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1372)) ;
                }
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              enumGalgasBool test_35 = kBoolTrue ;
              if (kBoolTrue == test_35) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_36 = this ;
                test_35 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_36.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1375)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1375)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1375)).boolEnum () ;
                if (kBoolTrue == test_35) {
                  var_branchModeOnFalseLabel_47851 = GALGAS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1376)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_37 = this ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1377)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1377)).add_operation (temp_37.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1377)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1377)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1377)) ;
                }
              }
              enumGalgasBool test_38 = kBoolTrue ;
              if (kBoolTrue == test_38) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_39 = this ;
                test_38 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_39.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1379)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1379)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1379)).boolEnum () ;
                if (kBoolTrue == test_38) {
                  var_branchModeOnTrueLabel_47934 = GALGAS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1380)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_40 = this ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1381)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1381)).add_operation (temp_40.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1381)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1381)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1381)) ;
                }
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
              enumGalgasBool test_41 = kBoolTrue ;
              if (kBoolTrue == test_41) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_42 = this ;
                test_41 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_42.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1384)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1384)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1384)).boolEnum () ;
                if (kBoolTrue == test_41) {
                  var_branchModeOnFalseLabel_47851 = GALGAS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1385)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_43 = this ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1386)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1386)).add_operation (temp_43.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1386)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1386)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1386)) ;
                }
              }
            }
            break ;
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_44 = this ;
          switch (temp_44.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
            {
              enumGalgasBool test_45 = kBoolTrue ;
              if (kBoolTrue == test_45) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_46 = this ;
                test_45 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_46.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1392)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1392)).boolEnum () ;
                if (kBoolTrue == test_45) {
                  var_branchModeOnTrueLabel_47934 = GALGAS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1393)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_47 = this ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1394)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1394)).add_operation (temp_47.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1394)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1394)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1394)) ;
                }
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              enumGalgasBool test_48 = kBoolTrue ;
              if (kBoolTrue == test_48) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_49 = this ;
                test_48 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_49.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (6U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1397)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1397)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1397)).boolEnum () ;
                if (kBoolTrue == test_48) {
                  var_branchModeOnTrueLabel_47934 = GALGAS_conditionalBranchMode::class_func_ipicBRA (SOURCE_FILE ("ipic18_terminators.galgas", 1398)) ;
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_50 = this ;
                  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1399)).add_operation (GALGAS_string (", terminator will use BRA "), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1399)).add_operation (temp_50.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1399)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1399)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1399)) ;
                }
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
            }
            break ;
          }
        }
        break ;
      }
    }
  }
  enumGalgasBool test_51 = kBoolTrue ;
  if (kBoolTrue == test_51) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_52 = this ;
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_53 = this ;
    test_51 = GALGAS_bool (ComparisonKind::equal, var_branchModeOnFalseLabel_47851.objectCompare (temp_52.readProperty_mBranchModeOnFalseLabel ())).operator_and (GALGAS_bool (ComparisonKind::equal, var_branchModeOnTrueLabel_47934.objectCompare (temp_53.readProperty_mBranchModeOnTrueLabel ())) COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1405)).boolEnum () ;
    if (kBoolTrue == test_51) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_54 = this ;
      outArgument_outModifiedTerminator = temp_54 ;
    }
  }
  if (kBoolFalse == test_51) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_55 = this ;
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_56 = this ;
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_57 = this ;
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_58 = this ;
    outArgument_outModifiedTerminator = GALGAS_ipic_31__38_ConditionalJumpTerminator::init_21__21__21__21__21__21_ (temp_55.readProperty_mInstructionLocation (), temp_56.readProperty_mConditionalBranch (), temp_57.readProperty_mTargetLabelWhenTrue (), var_branchModeOnTrueLabel_47934, temp_58.readProperty_mTargetLabelWhenFalse (), var_branchModeOnFalseLabel_47851, inCompiler COMMA_HERE) ;
    ioArgument_ioConversionCount.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1415)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18ConditionalJumpTerminator terminatorRelativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ConditionalJumpTerminator::method_terminatorRelativeBranchOverflow (const GALGAS_uint constinArgument_inAddress,
                                                                                          const GALGAS_string constinArgument_inBlockLabel,
                                                                                          const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                          const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                          GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                          Compiler * inCompiler
                                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
      switch (temp_2.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          enumGalgasBool test_3 = kBoolTrue ;
          if (kBoolTrue == test_3) {
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
            test_3 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_4.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1430)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1430)).boolEnum () ;
            if (kBoolTrue == test_3) {
              {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_5 = this ;
              extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_5.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1431)) ;
              }
            }
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
        {
          enumGalgasBool test_6 = kBoolTrue ;
          if (kBoolTrue == test_6) {
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_7 = this ;
            test_6 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_7.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1434)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1434)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1434)).boolEnum () ;
            if (kBoolTrue == test_6) {
              {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_8 = this ;
              extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_8.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1435)) ;
              }
            }
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
        {
        }
        break ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_9 = kBoolTrue ;
    if (kBoolTrue == test_9) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_10 = this ;
      test_9 = GALGAS_bool (ComparisonKind::equal, temp_10.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
      if (kBoolTrue == test_9) {
        const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_11 = this ;
        switch (temp_11.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
        case GALGAS_conditionalBranchMode::kNotBuilt:
          break ;
        case GALGAS_conditionalBranchMode::kEnum_native:
          {
            enumGalgasBool test_12 = kBoolTrue ;
            if (kBoolTrue == test_12) {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_13 = this ;
              test_12 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_13.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1442)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1442)).boolEnum () ;
              if (kBoolTrue == test_12) {
                {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_14 = this ;
                extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_14.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1443)) ;
                }
              }
            }
          }
          break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
          {
            enumGalgasBool test_15 = kBoolTrue ;
            if (kBoolTrue == test_15) {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_16 = this ;
              test_15 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_16.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1446)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1446)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1446)).boolEnum () ;
              if (kBoolTrue == test_15) {
                {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_17 = this ;
                extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_17.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1447)) ;
                }
              }
            }
          }
          break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
          {
          }
          break ;
        }
      }
    }
    if (kBoolFalse == test_9) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_18 = this ;
      switch (temp_18.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_19 = this ;
          switch (temp_19.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              enumGalgasBool test_20 = kBoolTrue ;
              if (kBoolTrue == test_20) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_21 = this ;
                test_20 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_21.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1456)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1456)).boolEnum () ;
                if (kBoolTrue == test_20) {
                  {
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_22 = this ;
                  extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_22.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1457)) ;
                  }
                }
              }
              enumGalgasBool test_23 = kBoolTrue ;
              if (kBoolTrue == test_23) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_24 = this ;
                test_23 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_24.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1459)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1459)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1459)).boolEnum () ;
                if (kBoolTrue == test_23) {
                  {
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_25 = this ;
                  extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_25.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1460)) ;
                  }
                }
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
            }
            break ;
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_26 = this ;
          switch (temp_26.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
            {
              enumGalgasBool test_27 = kBoolTrue ;
              if (kBoolTrue == test_27) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_28 = this ;
                test_27 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_28.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1467)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1467)).boolEnum () ;
                if (kBoolTrue == test_27) {
                  {
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_29 = this ;
                  extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_29.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1468)) ;
                  }
                }
              }
              enumGalgasBool test_30 = kBoolTrue ;
              if (kBoolTrue == test_30) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_31 = this ;
                test_30 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_31.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1470)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1470)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1470)).boolEnum () ;
                if (kBoolTrue == test_30) {
                  {
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_32 = this ;
                  extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_32.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1471)) ;
                  }
                }
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              enumGalgasBool test_33 = kBoolTrue ;
              if (kBoolTrue == test_33) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_34 = this ;
                test_33 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_34.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1474)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1474)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1474)).boolEnum () ;
                if (kBoolTrue == test_33) {
                  {
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_35 = this ;
                  extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_35.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1475)) ;
                  }
                }
              }
              enumGalgasBool test_36 = kBoolTrue ;
              if (kBoolTrue == test_36) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_37 = this ;
                test_36 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_37.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1477)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1477)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1477)).boolEnum () ;
                if (kBoolTrue == test_36) {
                  {
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_38 = this ;
                  extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_38.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1478)) ;
                  }
                }
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
              enumGalgasBool test_39 = kBoolTrue ;
              if (kBoolTrue == test_39) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_40 = this ;
                test_39 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_40.readProperty_mTargetLabelWhenFalse (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1481)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1481)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1481)).boolEnum () ;
                if (kBoolTrue == test_39) {
                  {
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_41 = this ;
                  extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_41.readProperty_mTargetLabelWhenFalse ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1482)) ;
                  }
                }
              }
            }
            break ;
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_42 = this ;
          switch (temp_42.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
            {
              enumGalgasBool test_43 = kBoolTrue ;
              if (kBoolTrue == test_43) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_44 = this ;
                test_43 = function_pic_31__38__5F_checkBCC (constinArgument_inSymbolTable, temp_44.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1488)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1488)).boolEnum () ;
                if (kBoolTrue == test_43) {
                  {
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_45 = this ;
                  extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_45.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1490)) ;
                  }
                }
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              enumGalgasBool test_46 = kBoolTrue ;
              if (kBoolTrue == test_46) {
                const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_47 = this ;
                test_46 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_47.readProperty_mTargetLabelWhenTrue (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (6U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1493)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1493)).operator_not (SOURCE_FILE ("ipic18_terminators.galgas", 1493)).boolEnum () ;
                if (kBoolTrue == test_46) {
                  {
                  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_48 = this ;
                  extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_48.readProperty_mTargetLabelWhenTrue ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1495)) ;
                  }
                }
              }
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
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
//Overriding extension getter '@ipic18ConditionalJumpTerminator terminatorSize'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38_ConditionalJumpTerminator::getter_terminatorSize (const GALGAS_string constinArgument_inNextBlockLabel,
                                                                               Compiler */* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::equal, temp_1.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
      switch (temp_2.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          result_outSize = GALGAS_uint (uint32_t (2U)) ;
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
        {
          result_outSize = GALGAS_uint (uint32_t (4U)) ;
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
        {
          result_outSize = GALGAS_uint (uint32_t (6U)) ;
        }
        break ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_3 = kBoolTrue ;
    if (kBoolTrue == test_3) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
      test_3 = GALGAS_bool (ComparisonKind::equal, temp_4.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
      if (kBoolTrue == test_3) {
        const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_5 = this ;
        switch (temp_5.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
        case GALGAS_conditionalBranchMode::kNotBuilt:
          break ;
        case GALGAS_conditionalBranchMode::kEnum_native:
          {
            result_outSize = GALGAS_uint (uint32_t (2U)) ;
          }
          break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
          {
            result_outSize = GALGAS_uint (uint32_t (4U)) ;
          }
          break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
          {
            result_outSize = GALGAS_uint (uint32_t (6U)) ;
          }
          break ;
        }
      }
    }
    if (kBoolFalse == test_3) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_6 = this ;
      switch (temp_6.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_7 = this ;
          switch (temp_7.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              result_outSize = GALGAS_uint (uint32_t (4U)) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
              result_outSize = GALGAS_uint (uint32_t (6U)) ;
            }
            break ;
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_8 = this ;
          switch (temp_8.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
            {
              result_outSize = GALGAS_uint (uint32_t (4U)) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              result_outSize = GALGAS_uint (uint32_t (6U)) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
              result_outSize = GALGAS_uint (uint32_t (8U)) ;
            }
            break ;
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_9 = this ;
          switch (temp_9.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
            {
              result_outSize = GALGAS_uint (uint32_t (6U)) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              result_outSize = GALGAS_uint (uint32_t (8U)) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
              result_outSize = GALGAS_uint (uint32_t (10U)) ;
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
//
//Overriding extension method '@ipic18ConditionalJumpTerminator generateTerminatorCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_ConditionalJumpTerminator::method_generateTerminatorCode (const GALGAS_uint constinArgument_inAddress,
                                                                                const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                const GALGAS_string constinArgument_inNextBlockLabel,
                                                                                GALGAS_codeList & outArgument_outCode,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_trueTargetAddress_59172 ;
  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_0 = this ;
  constinArgument_inSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabelWhenTrue (), var_trueTargetAddress_59172, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1550)) ;
  GALGAS_uint var_falseTargetAddress_59257 ;
  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_1 = this ;
  constinArgument_inSymbolTable.method_searchKey (temp_1.readProperty_mTargetLabelWhenFalse (), var_falseTargetAddress_59257, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1551)) ;
  const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
  GALGAS_lstring var_Zlabel_59283 = GALGAS_lstring::init_21__21_ (GALGAS_string ("_Bcc_").add_operation (constinArgument_inAddress.getter_xString (SOURCE_FILE ("ipic18_terminators.galgas", 1552)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1552)), temp_2.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
    test_3 = GALGAS_bool (ComparisonKind::equal, temp_4.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
    if (kBoolTrue == test_3) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_5 = this ;
      switch (temp_5.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_6 = this ;
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_7 = this ;
          outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_falseTargetAddress_59257, temp_6.readProperty_mTargetLabelWhenFalse (), temp_7.readProperty_mConditionalBranch (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1556)) ;
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_8 = this ;
          outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1558)), var_Zlabel_59283, temp_8.readProperty_mConditionalBranch (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1558)) ;
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_9 = this ;
          outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1559)), var_falseTargetAddress_59257, temp_9.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1559)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1559)) ;
          outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59283, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1560)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1560)) ;
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_10 = this ;
          outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (6U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1562)), var_Zlabel_59283, temp_10.readProperty_mConditionalBranch (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1562)) ;
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_11 = this ;
          outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_falseTargetAddress_59257, temp_11.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1563)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1563)) ;
          outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59283, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1564)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1564)) ;
        }
        break ;
      }
    }
  }
  if (kBoolFalse == test_3) {
    enumGalgasBool test_12 = kBoolTrue ;
    if (kBoolTrue == test_12) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_13 = this ;
      test_12 = GALGAS_bool (ComparisonKind::equal, temp_13.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (constinArgument_inNextBlockLabel)).boolEnum () ;
      if (kBoolTrue == test_12) {
        const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_14 = this ;
        switch (temp_14.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
        case GALGAS_conditionalBranchMode::kNotBuilt:
          break ;
        case GALGAS_conditionalBranchMode::kEnum_native:
          {
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_15 = this ;
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_16 = this ;
            outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_trueTargetAddress_59172, temp_15.readProperty_mTargetLabelWhenTrue (), temp_16.readProperty_mConditionalBranch (), GALGAS_bool (false), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1569)) ;
          }
          break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
          {
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_17 = this ;
            outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1571)), var_Zlabel_59283, temp_17.readProperty_mConditionalBranch (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1571)) ;
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_18 = this ;
            outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1572)), var_trueTargetAddress_59172, temp_18.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1572)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1572)) ;
            outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59283, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1573)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1573)) ;
          }
          break ;
        case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
          {
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_19 = this ;
            outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (6U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1575)), var_Zlabel_59283, temp_19.readProperty_mConditionalBranch (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1575)) ;
            const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_20 = this ;
            outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_trueTargetAddress_59172, temp_20.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1576)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1576)) ;
            outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59283, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1577)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1577)) ;
          }
          break ;
        }
      }
    }
    if (kBoolFalse == test_12) {
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_21 = this ;
      switch (temp_21.readProperty_mBranchModeOnFalseLabel ().enumValue ()) {
      case GALGAS_conditionalBranchMode::kNotBuilt:
        break ;
      case GALGAS_conditionalBranchMode::kEnum_native:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_22 = this ;
          switch (temp_22.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_23 = this ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_24 = this ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_falseTargetAddress_59257, temp_23.readProperty_mTargetLabelWhenFalse (), temp_24.readProperty_mConditionalBranch (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1584)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_25 = this ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1585)), var_trueTargetAddress_59172, temp_25.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1585)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1585)) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_26 = this ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_27 = this ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_falseTargetAddress_59257, temp_26.readProperty_mTargetLabelWhenFalse (), temp_27.readProperty_mConditionalBranch (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1587)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_28 = this ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_trueTargetAddress_59172, temp_28.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1588)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1588)) ;
            }
            break ;
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_29 = this ;
          switch (temp_29.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
            {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_30 = this ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_31 = this ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_trueTargetAddress_59172, temp_30.readProperty_mTargetLabelWhenTrue (), temp_31.readProperty_mConditionalBranch (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1593)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_32 = this ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1594)), var_falseTargetAddress_59257, temp_32.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1594)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1594)) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_33 = this ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1596)), var_Zlabel_59283, temp_33.readProperty_mConditionalBranch (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1596)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_34 = this ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1597)), var_falseTargetAddress_59257, temp_34.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1597)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1597)) ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59283, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1598)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1598)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_35 = this ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress, var_trueTargetAddress_59172, temp_35.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1599)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1599)) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_36 = this ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1601)), var_Zlabel_59283, temp_36.readProperty_mConditionalBranch (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1601)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_37 = this ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1602)), var_falseTargetAddress_59257, temp_37.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1602)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1602)) ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59283, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1603)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1603)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_38 = this ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_trueTargetAddress_59172, temp_38.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1604)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1604)) ;
            }
            break ;
          }
        }
        break ;
      case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
        {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_39 = this ;
          switch (temp_39.readProperty_mBranchModeOnTrueLabel ().enumValue ()) {
          case GALGAS_conditionalBranchMode::kNotBuilt:
            break ;
          case GALGAS_conditionalBranchMode::kEnum_native:
            {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_40 = this ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_41 = this ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, var_trueTargetAddress_59172, temp_40.readProperty_mTargetLabelWhenTrue (), temp_41.readProperty_mConditionalBranch (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1609)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_42 = this ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_falseTargetAddress_59257, temp_42.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1610)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1610)) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicBRA:
            {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_43 = this ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (6U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1612)), var_Zlabel_59283, temp_43.readProperty_mConditionalBranch (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1612)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_44 = this ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_falseTargetAddress_59257, temp_44.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1613)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1613)) ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59283, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1614)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1614)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_45 = this ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (6U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1615)), var_trueTargetAddress_59172, temp_45.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1615)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1615)) ;
            }
            break ;
          case GALGAS_conditionalBranchMode::kEnum_ipicGOTO:
            {
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_46 = this ;
              outArgument_outCode = function_pic_31__38__5F_Bcc_5F_instruction_5F_code (constinArgument_inAddress, constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (6U)), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1617)), var_Zlabel_59283, temp_46.readProperty_mConditionalBranch (), GALGAS_bool (true), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1617)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_47 = this ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_falseTargetAddress_59257, temp_47.readProperty_mTargetLabelWhenFalse (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1618)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1618)) ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_Zlabel_59283, inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1619)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1619)) ;
              const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_48 = this ;
              outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_GOTO_5F_instruction_5F_code (var_trueTargetAddress_59172, temp_48.readProperty_mTargetLabelWhenTrue (), inCompiler COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1620)), inCompiler  COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1620)) ;
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

GALGAS_bool cPtr_ipic_31__38_ConditionalJumpTerminator::getter_isEqualToTerminator (const GALGAS_ipic_31__38_AbstractBlockTerminator constinArgument_inTerminator,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_bool result_outResult ; // Returned variable
  result_outResult = GALGAS_bool (constinArgument_inTerminator.dynamicTypeDescriptor () == & kTypeDescriptor_GALGAS_ipic_31__38_ConditionalJumpTerminator) ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = result_outResult.boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_ipic_31__38_ConditionalJumpTerminator temp_1 ;
      if (constinArgument_inTerminator.isValid ()) {
        if (nullptr != dynamic_cast <const cPtr_ipic_31__38_ConditionalJumpTerminator *> (constinArgument_inTerminator.ptr ())) {
          temp_1 = (cPtr_ipic_31__38_ConditionalJumpTerminator *) constinArgument_inTerminator.ptr () ;
        }else{
          inCompiler->castError ("ipic_31__38_ConditionalJumpTerminator", constinArgument_inTerminator.ptr ()->classDescriptor () COMMA_SOURCE_FILE ("ipic18_terminators.galgas", 1633)) ;
        }
      }
      GALGAS_ipic_31__38_ConditionalJumpTerminator var_t_64533 = temp_1 ;
      const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_2 = this ;
      result_outResult = GALGAS_bool (ComparisonKind::equal, temp_2.readProperty_mConditionalBranch ().objectCompare (var_t_64533.readProperty_mConditionalBranch ())) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_3) {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_4 = this ;
          result_outResult = GALGAS_bool (ComparisonKind::equal, temp_4.readProperty_mTargetLabelWhenTrue ().readProperty_string ().objectCompare (var_t_64533.readProperty_mTargetLabelWhenTrue ().readProperty_string ())) ;
        }
      }
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_6 = this ;
          result_outResult = GALGAS_bool (ComparisonKind::equal, temp_6.readProperty_mBranchModeOnTrueLabel ().objectCompare (var_t_64533.readProperty_mBranchModeOnTrueLabel ())) ;
        }
      }
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_7) {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_8 = this ;
          result_outResult = GALGAS_bool (ComparisonKind::equal, temp_8.readProperty_mTargetLabelWhenFalse ().readProperty_string ().objectCompare (var_t_64533.readProperty_mTargetLabelWhenFalse ().readProperty_string ())) ;
        }
      }
      enumGalgasBool test_9 = kBoolTrue ;
      if (kBoolTrue == test_9) {
        test_9 = result_outResult.boolEnum () ;
        if (kBoolTrue == test_9) {
          const GALGAS_ipic_31__38_ConditionalJumpTerminator temp_10 = this ;
          result_outResult = GALGAS_bool (ComparisonKind::equal, temp_10.readProperty_mBranchModeOnFalseLabel ().objectCompare (var_t_64533.readProperty_mBranchModeOnFalseLabel ())) ;
        }
      }
    }
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_condition_skip_instruction instructionSize'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::getter_instructionSize (Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  const GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction temp_0 = this ;
  result_outSize = GALGAS_uint (uint32_t (2U)).add_operation (callExtensionGetter_instructionSize ((const cPtr_ipic_31__38_SequentialInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 18)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 18)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_condition_skip_instruction instructionRelativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_condition_5F_skip_5F_instruction::method_instructionRelativeBranchOverflow (const GALGAS_uint constinArgument_inAddress,
                                                                                                      const GALGAS_string constinArgument_inBlockLabel,
                                                                                                      const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                      GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                                      Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38__5F_condition_5F_skip_5F_instruction temp_0 = this ;
  callExtensionMethod_instructionRelativeBranchOverflow ((cPtr_ipic_31__38_SequentialInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 45)), constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 44)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18InstructionWithNoOperand instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_ipic_31__38_InstructionWithNoOperand::getter_instructionDisplay (Compiler * inCompiler
                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result_outResult ; // Returned variable
  const GALGAS_ipic_31__38_InstructionWithNoOperand temp_0 = this ;
  result_outResult = GALGAS_stringlist::class_func_listWithValue (extensionGetter_mnemonic (temp_0.readProperty_mKind (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 84))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 84)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18InstructionWithNoOperand generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38_InstructionWithNoOperand::method_generateCode (const GALGAS_uint /* constinArgument_inAddress */,
                                                                     const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                     const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                     GALGAS_codeList & outArgument_outCode,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_c_2918 ;
  const GALGAS_ipic_31__38_InstructionWithNoOperand temp_0 = this ;
  switch (temp_0.readProperty_mKind ().enumValue ()) {
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kNotBuilt:
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_CLRWDT:
    {
      var_c_2918 = GALGAS_uint (uint32_t (4U)) ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_DAW:
    {
      var_c_2918 = GALGAS_uint (uint32_t (7U)) ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_NOP:
    {
      var_c_2918 = GALGAS_uint (uint32_t (0U)) ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_POP:
    {
      var_c_2918 = GALGAS_uint (uint32_t (6U)) ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_PUSH:
    {
      var_c_2918 = GALGAS_uint (uint32_t (5U)) ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_RESET:
    {
      var_c_2918 = GALGAS_uint (uint32_t (255U)) ;
    }
    break ;
  case GALGAS_pic_31__38_InstructionWithNoOperandKind::kEnum_SLEEP:
    {
      var_c_2918 = GALGAS_uint (uint32_t (3U)) ;
    }
    break ;
  }
  const GALGAS_ipic_31__38_InstructionWithNoOperand temp_1 = this ;
  GALGAS_uintlist temp_2 = GALGAS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 113)) ;
  temp_2.enterElement (GALGAS_uintlist_2D_element::init_21_ (var_c_2918, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 113)) ;
  outArgument_outCode = GALGAS_codeList::class_func_listWithValue (GALGAS_string ("    ").add_operation (extensionGetter_mnemonic (temp_1.readProperty_mKind (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 112)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 112)), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 111)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_FDA instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::getter_instructionDisplay (Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result_outResult ; // Returned variable
  GALGAS_string var_s_3576 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_0 = this ;
  switch (temp_0.readProperty_mInstruction_5F_FDA_5F_base_5F_code ().enumValue ()) {
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kNotBuilt:
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_ADDWF:
    {
      var_s_3576 = GALGAS_string ("ADDWF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_ADDWFC:
    {
      var_s_3576 = GALGAS_string ("ADDWFC") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_ANDWF:
    {
      var_s_3576 = GALGAS_string ("ANDWF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_COMF:
    {
      var_s_3576 = GALGAS_string ("COMF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_DECF:
    {
      var_s_3576 = GALGAS_string ("DECF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_INCF:
    {
      var_s_3576 = GALGAS_string ("INCF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_IORWF:
    {
      var_s_3576 = GALGAS_string ("IORWF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_MOVF:
    {
      var_s_3576 = GALGAS_string ("MOVF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RLCF:
    {
      var_s_3576 = GALGAS_string ("RLCF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RLNCF:
    {
      var_s_3576 = GALGAS_string ("RLNCF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RRCF:
    {
      var_s_3576 = GALGAS_string ("RRCF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RRNCF:
    {
      var_s_3576 = GALGAS_string ("RRNCF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SUBFWB:
    {
      var_s_3576 = GALGAS_string ("SUBFWB") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SUBWF:
    {
      var_s_3576 = GALGAS_string ("SUBWF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SUBWFB:
    {
      var_s_3576 = GALGAS_string ("SUBWFB") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SWAPF:
    {
      var_s_3576 = GALGAS_string ("SWAPF") ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_XORWF:
    {
      var_s_3576 = GALGAS_string ("XORWF") ;
    }
    break ;
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_1 = this ;
  var_s_3576.plusAssign_operation(GALGAS_string (" ").add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 145)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 145)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_3 = this ;
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_4 = this ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().operator_and (temp_4.readProperty_mRegisterDescription ().readProperty_mNeedsBSR () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 146)).boolEnum () ;
    if (kBoolTrue == test_2) {
      var_s_3576.plusAssign_operation(GALGAS_string (", W, BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 147)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_6 = this ;
      test_5 = temp_6.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
      if (kBoolTrue == test_5) {
        var_s_3576.plusAssign_operation(GALGAS_string (", F, BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 149)) ;
      }
    }
    if (kBoolFalse == test_5) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_8 = this ;
        test_7 = temp_8.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
        if (kBoolTrue == test_7) {
          var_s_3576.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 151)) ;
        }
      }
      if (kBoolFalse == test_7) {
        var_s_3576.plusAssign_operation(GALGAS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 153)) ;
      }
    }
  }
  result_outResult = GALGAS_stringlist::class_func_listWithValue (var_s_3576  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 155)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_FDA generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::method_generateCode (const GALGAS_uint /* constinArgument_inAddress */,
                                                                                   const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                   const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                   GALGAS_codeList & outArgument_outCode,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_code_4797 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_0 = this ;
  switch (temp_0.readProperty_mInstruction_5F_FDA_5F_base_5F_code ().enumValue ()) {
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kNotBuilt:
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_ADDWF:
    {
      var_code_4797 = GALGAS_uint (uint32_t (9216U)) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_ADDWFC:
    {
      var_code_4797 = GALGAS_uint (uint32_t (8192U)) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_ANDWF:
    {
      var_code_4797 = GALGAS_uint (uint32_t (5120U)) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_COMF:
    {
      var_code_4797 = GALGAS_uint (uint32_t (7168U)) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_DECF:
    {
      var_code_4797 = GALGAS_uint (uint32_t (1024U)) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_INCF:
    {
      var_code_4797 = GALGAS_uint (uint32_t (10240U)) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_IORWF:
    {
      var_code_4797 = GALGAS_uint (uint32_t (4096U)) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_MOVF:
    {
      var_code_4797 = GALGAS_uint (uint32_t (20480U)) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RLCF:
    {
      var_code_4797 = GALGAS_uint (uint32_t (13312U)) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RLNCF:
    {
      var_code_4797 = GALGAS_uint (uint32_t (17408U)) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RRCF:
    {
      var_code_4797 = GALGAS_uint (uint32_t (12288U)) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_RRNCF:
    {
      var_code_4797 = GALGAS_uint (uint32_t (16384U)) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SUBFWB:
    {
      var_code_4797 = GALGAS_uint (uint32_t (21504U)) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SUBWF:
    {
      var_code_4797 = GALGAS_uint (uint32_t (23552U)) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SUBWFB:
    {
      var_code_4797 = GALGAS_uint (uint32_t (22528U)) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_SWAPF:
    {
      var_code_4797 = GALGAS_uint (uint32_t (14336U)) ;
    }
    break ;
  case GALGAS_pic_31__38_Instruction_5F_FDA_5F_base_5F_code_5F_AST::kEnum_XORWF:
    {
      var_code_4797 = GALGAS_uint (uint32_t (6144U)) ;
    }
    break ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_2 = this ;
    test_1 = temp_2.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (kBoolTrue == test_1) {
      var_code_4797 = var_code_4797.operator_or (GALGAS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 187)) ;
    }
  }
  enumGalgasBool test_3 = kBoolTrue ;
  if (kBoolTrue == test_3) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_4 = this ;
    test_3 = temp_4.readProperty_m_5F_W_5F_isDestination ().operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 189)).boolEnum () ;
    if (kBoolTrue == test_3) {
      var_code_4797 = var_code_4797.operator_or (GALGAS_uint (uint32_t (512U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 190)) ;
    }
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_5 = this ;
  var_code_4797 = var_code_4797.operator_or (temp_5.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 192)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 192)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA temp_6 = this ;
  GALGAS_uintlist temp_7 = GALGAS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 195)) ;
  temp_7.enterElement (GALGAS_uintlist_2D_element::init_21_ (var_code_4797, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 195)) ;
  outArgument_outCode = GALGAS_codeList::class_func_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA *) temp_6.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 194)).getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 194)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 194)), temp_7  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 193)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_FA instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::getter_instructionDisplay (Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result_outResult ; // Returned variable
  GALGAS_string var_s_6003 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_0 = this ;
  switch (temp_0.readProperty_mFAinstruction ().enumValue ()) {
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_CLRF:
    {
      var_s_6003 = GALGAS_string ("CLRF") ;
    }
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_MOVWF:
    {
      var_s_6003 = GALGAS_string ("MOVWF") ;
    }
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_MULWF:
    {
      var_s_6003 = GALGAS_string ("MULWF") ;
    }
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_NEGF:
    {
      var_s_6003 = GALGAS_string ("NEGF") ;
    }
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_SETF:
    {
      var_s_6003 = GALGAS_string ("SETF") ;
    }
    break ;
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_1 = this ;
  var_s_6003.plusAssign_operation(GALGAS_string (" ").add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 215)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 215)) ;
  result_outResult = GALGAS_stringlist::class_func_listWithValue (var_s_6003  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 216)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_FA generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::method_generateCode (const GALGAS_uint /* constinArgument_inAddress */,
                                                                                  const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                  const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                  GALGAS_codeList & outArgument_outCode,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_code_6609 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_0 = this ;
  switch (temp_0.readProperty_mFAinstruction ().enumValue ()) {
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_CLRF:
    {
      var_code_6609 = GALGAS_uint (uint32_t (27136U)) ;
    }
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_MOVWF:
    {
      var_code_6609 = GALGAS_uint (uint32_t (28160U)) ;
    }
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_MULWF:
    {
      var_code_6609 = GALGAS_uint (uint32_t (512U)) ;
    }
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_NEGF:
    {
      var_code_6609 = GALGAS_uint (uint32_t (27648U)) ;
    }
    break ;
  case GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::kEnum_SETF:
    {
      var_code_6609 = GALGAS_uint (uint32_t (26624U)) ;
    }
    break ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_2 = this ;
    test_1 = temp_2.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (kBoolTrue == test_1) {
      var_code_6609 = var_code_6609.operator_or (GALGAS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 236)) ;
    }
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_3 = this ;
  var_code_6609 = var_code_6609.operator_or (temp_3.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 238)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 238)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA temp_4 = this ;
  GALGAS_uintlist temp_5 = GALGAS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 241)) ;
  temp_5.enterElement (GALGAS_uintlist_2D_element::init_21_ (var_code_6609, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 241)) ;
  outArgument_outCode = GALGAS_codeList::class_func_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FA *) temp_4.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 240)).getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 240)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 240)), temp_5  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 239)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_MOVFF instructionSize'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::getter_instructionSize (Compiler */* inCompiler */
                                                                                               COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  result_outSize = GALGAS_uint (uint32_t (4U)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_MOVFF instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::getter_instructionDisplay (Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result_outResult ; // Returned variable
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF temp_0 = this ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF temp_1 = this ;
  GALGAS_string var_s_7588 = GALGAS_string ("MOVFF ").add_operation (temp_0.readProperty_mSourceRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 259)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 259)).add_operation (temp_1.readProperty_mDestinationRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 260)) ;
  result_outResult = GALGAS_stringlist::class_func_listWithValue (var_s_7588  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 261)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_MOVFF generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::method_generateCode (const GALGAS_uint /* constinArgument_inAddress */,
                                                                                     const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                     const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                     GALGAS_codeList & outArgument_outCode,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uintlist var_code_8088 = GALGAS_uintlist::init (inCompiler COMMA_HERE) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF temp_0 = this ;
  var_code_8088.addAssign_operation (GALGAS_uint (uint32_t (49152U)).operator_or (temp_0.readProperty_mSourceRegisterDescription ().readProperty_mRegisterAddress () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 272))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 272)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF temp_1 = this ;
  var_code_8088.addAssign_operation (GALGAS_uint (uint32_t (61440U)).operator_or (temp_1.readProperty_mDestinationRegisterDescription ().readProperty_mRegisterAddress () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 273))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 273)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF temp_2 = this ;
  outArgument_outCode = GALGAS_codeList::class_func_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF *) temp_2.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 275)).getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 275)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 275)), var_code_8088  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 274)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_literalOperation instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::getter_instructionDisplay (Compiler * inCompiler
                                                                                                                   COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result_outResult ; // Returned variable
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_0 = this ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_1 = this ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_2 = this ;
  GALGAS_string var_s_8713 = extensionGetter_mnemonic (temp_0.readProperty_mLiteralInstruction (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 286)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 286)).add_operation (temp_1.readProperty_mLiteralValue ().getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 286)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 286)).add_operation (GALGAS_string (" ; "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 286)).add_operation (temp_2.readProperty_mLiteralValue ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 286)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 286)) ;
  GALGAS_stringlist temp_3 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 287)) ;
  temp_3.enterElement (GALGAS_stringlist_2D_element::init_21_ (var_s_8713, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 287)) ;
  result_outResult = temp_3 ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_literalOperation generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::method_generateCode (const GALGAS_uint /* constinArgument_inAddress */,
                                                                                                const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                                const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                                GALGAS_codeList & outArgument_outCode,
                                                                                                Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_code_9191 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_0 = this ;
  switch (temp_0.readProperty_mLiteralInstruction ().enumValue ()) {
  case GALGAS_literal_5F_instruction_5F_opcode::kNotBuilt:
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_ADDLW:
    {
      var_code_9191 = GALGAS_uint (uint32_t (3840U)) ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_ANDLW:
    {
      var_code_9191 = GALGAS_uint (uint32_t (2816U)) ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_IORLW:
    {
      var_code_9191 = GALGAS_uint (uint32_t (2304U)) ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_MOVLW:
    {
      var_code_9191 = GALGAS_uint (uint32_t (3584U)) ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_MULLW:
    {
      var_code_9191 = GALGAS_uint (uint32_t (3328U)) ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_SUBLW:
    {
      var_code_9191 = GALGAS_uint (uint32_t (2048U)) ;
    }
    break ;
  case GALGAS_literal_5F_instruction_5F_opcode::kEnum_XORLW:
    {
      var_code_9191 = GALGAS_uint (uint32_t (2560U)) ;
    }
    break ;
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_1 = this ;
  var_code_9191 = var_code_9191.operator_or (temp_1.readProperty_mLiteralValue () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 307)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation temp_2 = this ;
  GALGAS_uintlist temp_3 = GALGAS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 310)) ;
  temp_3.enterElement (GALGAS_uintlist_2D_element::init_21_ (var_code_9191, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 310)) ;
  outArgument_outCode = GALGAS_codeList::class_func_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation *) temp_2.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 309)).getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 309)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 309)), temp_3  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 308)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_LFSR instructionSize'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::getter_instructionSize (Compiler */* inCompiler */
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  result_outSize = GALGAS_uint (uint32_t (4U)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_LFSR instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::getter_instructionDisplay (Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result_outResult ; // Returned variable
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_0 = this ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_1 = this ;
  GALGAS_string var_s_10112 = GALGAS_string ("LFSR ").add_operation (temp_0.readProperty_mFSRindex ().readProperty_uint ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 327)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 327)).add_operation (temp_1.readProperty_mValue ().getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 327)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 327)) ;
  result_outResult = GALGAS_stringlist::class_func_listWithValue (var_s_10112  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 328)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_LFSR generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::method_generateCode (const GALGAS_uint /* constinArgument_inAddress */,
                                                                                    const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                    const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                    GALGAS_codeList & outArgument_outCode,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uintlist var_code_10560 = GALGAS_uintlist::init (inCompiler COMMA_HERE) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_0 = this ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_1 = this ;
  var_code_10560.addAssign_operation (GALGAS_uint (uint32_t (60928U)).operator_or (temp_0.readProperty_mFSRindex ().readProperty_uint ().left_shift_operation (GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 339)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 339)).operator_or (temp_1.readProperty_mValue ().right_shift_operation (GALGAS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 339)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 339)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 339))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 339)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_2 = this ;
  var_code_10560.addAssign_operation (GALGAS_uint (uint32_t (61440U)).operator_or (temp_2.readProperty_mValue ().operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 340)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 340))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 340)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR temp_3 = this ;
  outArgument_outCode = GALGAS_codeList::class_func_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR *) temp_3.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 342)).getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 342)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 342)), var_code_10560  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 341)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_FBA instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::getter_instructionDisplay (Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result_outResult ; // Returned variable
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_0 = this ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_1 = this ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_2 = this ;
  GALGAS_string var_s_11124 = extensionGetter_mnemonic (temp_0.readProperty_mBitOrientedOp (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 353)).add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 353)).add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 353)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 353)).add_operation (temp_2.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 353)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 353)) ;
  result_outResult = GALGAS_stringlist::class_func_listWithValue (var_s_11124  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 354)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_FBA generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::method_generateCode (const GALGAS_uint /* constinArgument_inAddress */,
                                                                                   const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                   const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                   GALGAS_codeList & outArgument_outCode,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_code_11620 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_0 = this ;
  switch (temp_0.readProperty_mBitOrientedOp ().enumValue ()) {
  case GALGAS_bit_5F_oriented_5F_op::kNotBuilt:
    break ;
  case GALGAS_bit_5F_oriented_5F_op::kEnum_BCF:
    {
      var_code_11620 = GALGAS_uint (uint32_t (36864U)) ;
    }
    break ;
  case GALGAS_bit_5F_oriented_5F_op::kEnum_BSF:
    {
      var_code_11620 = GALGAS_uint (uint32_t (32768U)) ;
    }
    break ;
  case GALGAS_bit_5F_oriented_5F_op::kEnum_BTG:
    {
      var_code_11620 = GALGAS_uint (uint32_t (28672U)) ;
    }
    break ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_2 = this ;
    test_1 = temp_2.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (kBoolTrue == test_1) {
      var_code_11620 = var_code_11620.operator_or (GALGAS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 371)) ;
    }
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_3 = this ;
  var_code_11620 = var_code_11620.operator_or (temp_3.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 373)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 373)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_4 = this ;
  var_code_11620 = var_code_11620.operator_or (temp_4.readProperty_mBitNumber ().left_shift_operation (GALGAS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 374)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 374)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 374)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA temp_5 = this ;
  GALGAS_uintlist temp_6 = GALGAS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 377)) ;
  temp_6.enterElement (GALGAS_uintlist_2D_element::init_21_ (var_code_11620, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 377)) ;
  outArgument_outCode = GALGAS_codeList::class_func_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA *) temp_5.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 376)).getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 376)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 376)), temp_6  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 375)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_MOVLB instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::getter_instructionDisplay (Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result_outResult ; // Returned variable
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB temp_0 = this ;
  GALGAS_string var_s_12379 = GALGAS_string ("MOVLB ").add_operation (temp_0.readProperty_mBankIndex ().readProperty_uint ().getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 388)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 388)) ;
  result_outResult = GALGAS_stringlist::class_func_listWithValue (var_s_12379  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 389)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_MOVLB generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::method_generateCode (const GALGAS_uint /* constinArgument_inAddress */,
                                                                                     const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                     const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                     GALGAS_codeList & outArgument_outCode,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB temp_0 = this ;
  GALGAS_uint var_code_12806 = GALGAS_uint (uint32_t (256U)).operator_or (temp_0.readProperty_mBankIndex ().readProperty_uint () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 399)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB temp_1 = this ;
  GALGAS_uintlist temp_2 = GALGAS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 402)) ;
  temp_2.enterElement (GALGAS_uintlist_2D_element::init_21_ (var_code_12806, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 402)) ;
  outArgument_outCode = GALGAS_codeList::class_func_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 401)).getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 401)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 401)), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 400)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_TBLRD instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::getter_instructionDisplay (Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result_outResult ; // Returned variable
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD temp_0 = this ;
  GALGAS_string var_s_13298 = GALGAS_string ("TBLRD ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mOption (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 413)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 413)) ;
  result_outResult = GALGAS_stringlist::class_func_listWithValue (var_s_13298  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 414)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_TBLRD generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD::method_generateCode (const GALGAS_uint /* constinArgument_inAddress */,
                                                                                     const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                     const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                     GALGAS_codeList & outArgument_outCode,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_code_13716 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD temp_0 = this ;
  switch (temp_0.readProperty_mOption ().enumValue ()) {
  case GALGAS_tableAccessOption::kNotBuilt:
    break ;
  case GALGAS_tableAccessOption::kEnum_simpleAccess:
    {
      var_code_13716 = GALGAS_uint (uint32_t (8U)) ;
    }
    break ;
  case GALGAS_tableAccessOption::kEnum_postIncrement:
    {
      var_code_13716 = GALGAS_uint (uint32_t (9U)) ;
    }
    break ;
  case GALGAS_tableAccessOption::kEnum_postDecrement:
    {
      var_code_13716 = GALGAS_uint (uint32_t (10U)) ;
    }
    break ;
  case GALGAS_tableAccessOption::kEnum_preIncrement:
    {
      var_code_13716 = GALGAS_uint (uint32_t (11U)) ;
    }
    break ;
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD temp_1 = this ;
  GALGAS_uintlist temp_2 = GALGAS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 433)) ;
  temp_2.enterElement (GALGAS_uintlist_2D_element::init_21_ (var_code_13716, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 433)) ;
  outArgument_outCode = GALGAS_codeList::class_func_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLRD *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 432)).getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 432)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 432)), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 431)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_TBLWT instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::getter_instructionDisplay (Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result_outResult ; // Returned variable
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT temp_0 = this ;
  GALGAS_string var_s_14352 = GALGAS_string ("TBLWT ").add_operation (extensionGetter_mnemonic (temp_0.readProperty_mOption (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 444)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 444)) ;
  result_outResult = GALGAS_stringlist::class_func_listWithValue (var_s_14352  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 445)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_TBLWT generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT::method_generateCode (const GALGAS_uint /* constinArgument_inAddress */,
                                                                                     const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                     const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                     GALGAS_codeList & outArgument_outCode,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_code_14770 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT temp_0 = this ;
  switch (temp_0.readProperty_mOption ().enumValue ()) {
  case GALGAS_tableAccessOption::kNotBuilt:
    break ;
  case GALGAS_tableAccessOption::kEnum_simpleAccess:
    {
      var_code_14770 = GALGAS_uint (uint32_t (12U)) ;
    }
    break ;
  case GALGAS_tableAccessOption::kEnum_postIncrement:
    {
      var_code_14770 = GALGAS_uint (uint32_t (13U)) ;
    }
    break ;
  case GALGAS_tableAccessOption::kEnum_postDecrement:
    {
      var_code_14770 = GALGAS_uint (uint32_t (14U)) ;
    }
    break ;
  case GALGAS_tableAccessOption::kEnum_preIncrement:
    {
      var_code_14770 = GALGAS_uint (uint32_t (15U)) ;
    }
    break ;
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT temp_1 = this ;
  GALGAS_uintlist temp_2 = GALGAS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 464)) ;
  temp_2.enterElement (GALGAS_uintlist_2D_element::init_21_ (var_code_14770, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 464)) ;
  outArgument_outCode = GALGAS_codeList::class_func_listWithValue (GALGAS_string ("    ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_TBLWT *) temp_1.ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 463)).getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 463)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 463)), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 462)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_MNOP instructionSize'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::getter_instructionSize (Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP temp_0 = this ;
  result_outSize = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().multiply_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 477)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_MNOP instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::getter_instructionDisplay (Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result_outResult ; // Returned variable
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP temp_0 = this ;
  GALGAS_string var_s_15614 = GALGAS_string ("MNOP ").add_operation (temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 483)) ;
  result_outResult = GALGAS_stringlist::class_func_listWithValue (var_s_15614  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 484)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_MNOP generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP::method_generateCode (const GALGAS_uint /* constinArgument_inAddress */,
                                                                                    const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                    const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                    GALGAS_codeList & outArgument_outCode,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCode = GALGAS_codeList::init (inCompiler COMMA_HERE) ;
  GALGAS_uint var_idx_16059 = GALGAS_uint (uint32_t (0U)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP temp_0 = this ;
  if (temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().isValid ()) {
    uint32_t variant_16069 = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().uintValue () ;
    bool loop_16069 = true ;
    while (loop_16069) {
      const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MNOP temp_1 = this ;
      loop_16069 = GALGAS_bool (ComparisonKind::lowerThan, var_idx_16059.objectCompare (temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ())).isValid () ;
      if (loop_16069) {
        loop_16069 = GALGAS_bool (ComparisonKind::lowerThan, var_idx_16059.objectCompare (temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ())).boolValue () ;
      }
      if (loop_16069 && (0 == variant_16069)) {
        loop_16069 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_regular_instructions.galgas", 497)) ;
      }
      if (loop_16069) {
        variant_16069 -- ;
        GALGAS_uintlist temp_2 = GALGAS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 500)) ;
        temp_2.enterElement (GALGAS_uintlist_2D_element::init_21_ (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 500)) ;
        outArgument_outCode.addAssign_operation (GALGAS_string ("    NOP"), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 500)) ;
        var_idx_16059.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 501)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_NOPBRA instructionSize'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::getter_instructionSize (Compiler * inCompiler
                                                                                                COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA temp_0 = this ;
  result_outSize = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().multiply_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 513)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_NOPBRA instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::getter_instructionDisplay (Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result_outResult ; // Returned variable
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA temp_0 = this ;
  GALGAS_string var_s_16761 = GALGAS_string ("NOPBRA ").add_operation (temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 519)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 519)) ;
  GALGAS_stringlist temp_1 = GALGAS_stringlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 520)) ;
  temp_1.enterElement (GALGAS_stringlist_2D_element::init_21_ (var_s_16761, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 520)) ;
  result_outResult = temp_1 ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_NOPBRA generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA::method_generateCode (const GALGAS_uint /* constinArgument_inAddress */,
                                                                                      const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                      const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                      GALGAS_codeList & outArgument_outCode,
                                                                                      Compiler * inCompiler
                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outCode = GALGAS_codeList::init (inCompiler COMMA_HERE) ;
  GALGAS_uint var_idx_17181 = GALGAS_uint (uint32_t (0U)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA temp_0 = this ;
  if (temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().isValid ()) {
    uint32_t variant_17191 = temp_0.readProperty_mOccurrenceFactor ().readProperty_uint ().uintValue () ;
    bool loop_17191 = true ;
    while (loop_17191) {
      const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_NOPBRA temp_1 = this ;
      loop_17191 = GALGAS_bool (ComparisonKind::lowerThan, var_idx_17181.objectCompare (temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ())).isValid () ;
      if (loop_17191) {
        loop_17191 = GALGAS_bool (ComparisonKind::lowerThan, var_idx_17181.objectCompare (temp_1.readProperty_mOccurrenceFactor ().readProperty_uint ())).boolValue () ;
      }
      if (loop_17191 && (0 == variant_17191)) {
        loop_17191 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_regular_instructions.galgas", 533)) ;
      }
      if (loop_17191) {
        variant_17191 -- ;
        GALGAS_uintlist temp_2 = GALGAS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 536)) ;
        temp_2.enterElement (GALGAS_uintlist_2D_element::init_21_ (GALGAS_uint (uint32_t (53248U)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 536)) ;
        outArgument_outCode.addAssign_operation (GALGAS_string ("    BRA $+2"), temp_2  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 536)) ;
        var_idx_17181.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 537)) ;
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_MOV_LABEL_W instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::getter_instructionDisplay (Compiler * inCompiler
                                                                                                     COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result_outResult ; // Returned variable
  const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_0 = this ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_1 = this ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_2 = this ;
  GALGAS_string var_s_17661 = GALGAS_string ("MOVLW ((").add_operation (temp_0.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 548)).add_operation (GALGAS_string (" + "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 548)).add_operation (temp_1.readProperty_mOffset ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 548)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 548)).add_operation (GALGAS_string (") >> "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 548)).add_operation (temp_2.readProperty_mRightShift ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 548)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 548)).add_operation (GALGAS_string (") & 0xFF"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 548)) ;
  result_outResult = GALGAS_stringlist::class_func_listWithValue (var_s_17661  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 549)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_MOV_LABEL_W generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W::method_generateCode (const GALGAS_uint /* constinArgument_inAddress */,
                                                                                  const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                  const GALGAS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                                  GALGAS_codeList & outArgument_outCode,
                                                                                  Compiler * inCompiler
                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_address_18163 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_0 = this ;
  constinArgument_inDataAddressMap.method_searchKey (temp_0.readProperty_mLabel (), var_address_18163, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 559)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_1 = this ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_2 = this ;
  GALGAS_uint var_code_18184 = var_address_18163.add_operation (temp_1.readProperty_mOffset (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 560)).right_shift_operation (temp_2.readProperty_mRightShift (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 560)).operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 560)) ;
  GALGAS_uint var_code_5F_MOVLW_18257 = GALGAS_uint (uint32_t (3584U)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_3 = this ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_4 = this ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_MOV_5F_LABEL_5F_W temp_5 = this ;
  GALGAS_uintlist temp_6 = GALGAS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 564)) ;
  temp_6.enterElement (GALGAS_uintlist_2D_element::init_21_ (var_code_18184.operator_or (var_code_5F_MOVLW_18257 COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 564)), inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 564)) ;
  outArgument_outCode = GALGAS_codeList::class_func_listWithValue (GALGAS_string ("    MOVLW ((_data_").add_operation (temp_3.readProperty_mLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 563)).add_operation (GALGAS_string (" + "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 563)).add_operation (temp_4.readProperty_mOffset ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 563)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 563)).add_operation (GALGAS_string (") >> "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 563)).add_operation (temp_5.readProperty_mRightShift ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 563)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 563)).add_operation (GALGAS_string (") & 0xFF"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 563)), temp_6  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 562)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_BLANK instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::getter_instructionDisplay (Compiler * inCompiler
                                                                                                        COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result_outResult ; // Returned variable
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK temp_0 = this ;
  GALGAS_string var_s_18779 = GALGAS_string ("BLANK ").add_operation (temp_0.readProperty_mBlankValue ().getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 575)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 575)) ;
  result_outResult = GALGAS_stringlist::class_func_listWithValue (var_s_18779  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 576)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_BLANK generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK::method_generateCode (const GALGAS_uint /* constinArgument_inAddress */,
                                                                                     const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                     const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                     GALGAS_codeList & outArgument_outCode,
                                                                                     Compiler * inCompiler
                                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_BLANK temp_0 = this ;
  GALGAS_uint var_code_19202 = GALGAS_uint (uint32_t (61440U)).operator_or (temp_0.readProperty_mBlankValue () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 586)) ;
  GALGAS_uintlist temp_1 = GALGAS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 589)) ;
  temp_1.enterElement (GALGAS_uintlist_2D_element::init_21_ (var_code_19202, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 589)) ;
  outArgument_outCode = GALGAS_codeList::class_func_listWithValue (GALGAS_string ("    DW ").add_operation (var_code_19202.getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 588)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 588)), temp_1  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 587)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_FNOP instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::getter_instructionDisplay (Compiler * inCompiler
                                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result_outResult ; // Returned variable
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP temp_0 = this ;
  GALGAS_string var_s_19663 = GALGAS_string ("FNOP ").add_operation (temp_0.readProperty_mBlankValue ().getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 600)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 600)) ;
  result_outResult = GALGAS_stringlist::class_func_listWithValue (var_s_19663  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 601)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_FNOP generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::method_generateCode (const GALGAS_uint /* constinArgument_inAddress */,
                                                                                    const GALGAS_symbolTableForRelativesResolution /* constinArgument_inSymbolTable */,
                                                                                    const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                                    GALGAS_codeList & outArgument_outCode,
                                                                                    Compiler * inCompiler
                                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP temp_0 = this ;
  GALGAS_uint var_code_20084 = GALGAS_uint (uint32_t (61440U)).operator_or (temp_0.readProperty_mBlankValue () COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 611)) ;
  GALGAS_uintlist temp_1 = GALGAS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 614)) ;
  temp_1.enterElement (GALGAS_uintlist_2D_element::init_21_ (var_code_20084, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 614)) ;
  outArgument_outCode = GALGAS_codeList::class_func_listWithValue (GALGAS_string ("    DW ").add_operation (var_code_20084.getter_hexString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 613)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 613)), temp_1  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 612)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_skip_instruction_compare_register instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::getter_instructionDisplay (Compiler * inCompiler
                                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result_outResult ; // Returned variable
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_0 = this ;
  GALGAS_string var_s_20553 = temp_0.readProperty_mRegisterDescription ().readProperty_mAssemblyString ().add_operation (GALGAS_string (" "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 625)) ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_1 = this ;
  switch (temp_1.readProperty_mCompareInstruction ().enumValue ()) {
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSEQ:
    {
      var_s_20553.plusAssign_operation(GALGAS_string ("!= W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 627)) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSGT:
    {
      var_s_20553.plusAssign_operation(GALGAS_string ("<= W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 628)) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSLT:
    {
      var_s_20553.plusAssign_operation(GALGAS_string (">= W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 629)) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_TSTFSZ:
    {
      var_s_20553.plusAssign_operation(GALGAS_string ("!= 0"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 630)) ;
    }
    break ;
  }
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_2 = this ;
  var_s_20553.plusAssign_operation(GALGAS_string (" \? ").add_operation (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) temp_2.readProperty_mEmbeddedInstruction ().ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 632)).getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 632)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 632)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 632)) ;
  result_outResult = GALGAS_stringlist::class_func_listWithValue (var_s_20553  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 633)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_skip_instruction_compare_register generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::method_generateCode (const GALGAS_uint constinArgument_inAddress,
                                                                                           const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                           const GALGAS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                                           GALGAS_codeList & outArgument_outCode,
                                                                                           Compiler * inCompiler
                                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_code_21199 ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_0 = this ;
  switch (temp_0.readProperty_mCompareInstruction ().enumValue ()) {
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSEQ:
    {
      var_code_21199 = GALGAS_uint (uint32_t (25088U)) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSGT:
    {
      var_code_21199 = GALGAS_uint (uint32_t (25600U)) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSLT:
    {
      var_code_21199 = GALGAS_uint (uint32_t (24576U)) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_TSTFSZ:
    {
      var_code_21199 = GALGAS_uint (uint32_t (26112U)) ;
    }
    break ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_2 = this ;
    test_1 = temp_2.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (kBoolTrue == test_1) {
      var_code_21199 = var_code_21199.operator_or (GALGAS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 652)) ;
    }
  }
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_3 = this ;
  var_code_21199 = var_code_21199.operator_or (temp_3.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 654)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 654)) ;
  GALGAS_string var_s_21544 = GALGAS_string ("    ") ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_4 = this ;
  switch (temp_4.readProperty_mCompareInstruction ().enumValue ()) {
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSEQ:
    {
      var_s_21544.plusAssign_operation(GALGAS_string ("CPFSEQ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 658)) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSGT:
    {
      var_s_21544.plusAssign_operation(GALGAS_string ("CPFSGT"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 659)) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_CPFSLT:
    {
      var_s_21544.plusAssign_operation(GALGAS_string ("CPFSLT"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 660)) ;
    }
    break ;
  case GALGAS_ipic_31__38__5F_compare_5F_register_5F_instruction_5F_base_5F_code::kEnum_TSTFSZ:
    {
      var_s_21544.plusAssign_operation(GALGAS_string ("TSTFSZ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 661)) ;
    }
    break ;
  }
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_5 = this ;
  var_s_21544.plusAssign_operation(GALGAS_string (" ").add_operation (temp_5.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 663)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 663)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_7 = this ;
    test_6 = temp_7.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (kBoolTrue == test_6) {
      var_s_21544.plusAssign_operation(GALGAS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 665)) ;
    }
  }
  GALGAS_uintlist temp_8 = GALGAS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 670)) ;
  temp_8.enterElement (GALGAS_uintlist_2D_element::init_21_ (var_code_21199, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 670)) ;
  outArgument_outCode = GALGAS_codeList::class_func_listWithValue (var_s_21544, temp_8  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 668)) ;
  GALGAS_codeList var_c_22043 ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_9 = this ;
  callExtensionMethod_generateCode ((cPtr_ipic_31__38_SequentialInstruction *) temp_9.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 673)), constinArgument_inSymbolTable, constinArgument_inDataAddressMap, var_c_22043, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 672)) ;
  outArgument_outCode.plusAssign_operation(var_c_22043, inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 678)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_skip_instruction_compare_register performInstructionRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::method_performInstructionRelativeBranchResolution (const GALGAS_uint constinArgument_inAddress,
                                                                                                                         const GALGAS_string constinArgument_inBlockLabel,
                                                                                                                         const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                                         GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                         GALGAS_ipic_31__38_SequentialInstruction & outArgument_outModifiedInstruction,
                                                                                                                         Compiler * inCompiler
                                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_0 = this ;
  outArgument_outModifiedInstruction = temp_0 ;
  GALGAS_uint var_n_22515 = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_SequentialInstruction var_outModifiedEmbeddedInstruction_22752 ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_1 = this ;
  callExtensionMethod_performInstructionRelativeBranchResolution ((cPtr_ipic_31__38_SequentialInstruction *) temp_1.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 693)), constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedEmbeddedInstruction_22752, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 692)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (ComparisonKind::notEqual, var_n_22515.objectCompare (ioArgument_ioConversionCount)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_3 = this ;
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_4 = this ;
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register temp_5 = this ;
      outArgument_outModifiedInstruction = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_compare_5F_register::init_21__21__21__21_ (temp_3.readProperty_mInstructionLocation (), var_outModifiedEmbeddedInstruction_22752, temp_4.readProperty_mCompareInstruction (), temp_5.readProperty_mRegisterDescription (), inCompiler COMMA_HERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_skip_instruction_BitTestSkip instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::getter_instructionDisplay (Compiler * inCompiler
                                                                                                      COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result_outResult ; // Returned variable
  GALGAS_string var_s_23372 = GALGAS_string::makeEmptyString () ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (kBoolTrue == test_0) {
      var_s_23372.plusAssign_operation(GALGAS_string ("!"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 718)) ;
    }
  }
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_2 = this ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_3 = this ;
  var_s_23372.plusAssign_operation(temp_2.readProperty_mRegisterDescription ().readProperty_mAssemblyString ().add_operation (GALGAS_string ("."), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 720)).add_operation (temp_3.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 720)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 720)).add_operation (GALGAS_string (" \? "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 720)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 720)) ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_4 = this ;
  GALGAS_stringlist var_x_23534 = callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) temp_4.readProperty_mEmbeddedInstruction ().ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 722)) ;
  var_s_23372.plusAssign_operation(var_x_23534.getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 723)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 723)) ;
  result_outResult = GALGAS_stringlist::class_func_listWithValue (var_s_23372  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 724)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_skip_instruction_BitTestSkip generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::method_generateCode (const GALGAS_uint constinArgument_inAddress,
                                                                                   const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                   const GALGAS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                                   GALGAS_codeList & outArgument_outCode,
                                                                                   Compiler * inCompiler
                                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_code_23969 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_1 = this ;
    test_0 = temp_1.readProperty_mSkipIfSet ().boolEnum () ;
    if (kBoolTrue == test_0) {
      var_code_23969 = GALGAS_uint (uint32_t (40960U)) ;
    }
  }
  if (kBoolFalse == test_0) {
    var_code_23969 = GALGAS_uint (uint32_t (45056U)) ;
  }
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_3 = this ;
    test_2 = temp_3.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (kBoolTrue == test_2) {
      var_code_23969 = var_code_23969.operator_or (GALGAS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 741)) ;
    }
  }
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_4 = this ;
  var_code_23969 = var_code_23969.operator_or (temp_4.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 743)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 743)) ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_5 = this ;
  var_code_23969 = var_code_23969.operator_or (temp_5.readProperty_mBitNumber ().left_shift_operation (GALGAS_bigint ("9", inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 744)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 744)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 744)) ;
  GALGAS_string var_s_24283 = GALGAS_string ("    ") ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_7 = this ;
    test_6 = temp_7.readProperty_mSkipIfSet ().boolEnum () ;
    if (kBoolTrue == test_6) {
      var_s_24283.plusAssign_operation(GALGAS_string ("BTFSS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 748)) ;
    }
  }
  if (kBoolFalse == test_6) {
    var_s_24283.plusAssign_operation(GALGAS_string ("BTFSC"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 750)) ;
  }
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_8 = this ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_9 = this ;
  var_s_24283.plusAssign_operation(GALGAS_string (" ").add_operation (temp_8.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 752)).add_operation (GALGAS_string (", "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 752)).add_operation (temp_9.readProperty_mBitNumber ().getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 752)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 752)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 752)) ;
  GALGAS_uintlist temp_10 = GALGAS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 756)) ;
  temp_10.enterElement (GALGAS_uintlist_2D_element::init_21_ (var_code_23969, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 756)) ;
  outArgument_outCode = GALGAS_codeList::class_func_listWithValue (var_s_24283, temp_10  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 754)) ;
  GALGAS_codeList var_c_24653 ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_11 = this ;
  callExtensionMethod_generateCode ((cPtr_ipic_31__38_SequentialInstruction *) temp_11.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 759)), constinArgument_inSymbolTable, constinArgument_inDataAddressMap, var_c_24653, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 758)) ;
  outArgument_outCode.plusAssign_operation(var_c_24653, inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 764)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_skip_instruction_BitTestSkip performInstructionRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::method_performInstructionRelativeBranchResolution (const GALGAS_uint constinArgument_inAddress,
                                                                                                                 const GALGAS_string constinArgument_inBlockLabel,
                                                                                                                 const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                                 GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                                 GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                 GALGAS_ipic_31__38_SequentialInstruction & outArgument_outModifiedInstruction,
                                                                                                                 Compiler * inCompiler
                                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_0 = this ;
  outArgument_outModifiedInstruction = temp_0 ;
  GALGAS_uint var_n_25120 = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_SequentialInstruction var_outModifiedEmbeddedInstruction_25357 ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_1 = this ;
  callExtensionMethod_performInstructionRelativeBranchResolution ((cPtr_ipic_31__38_SequentialInstruction *) temp_1.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 779)), constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedEmbeddedInstruction_25357, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 778)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (ComparisonKind::notEqual, var_n_25120.objectCompare (ioArgument_ioConversionCount)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_3 = this ;
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_4 = this ;
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_5 = this ;
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip temp_6 = this ;
      outArgument_outModifiedInstruction = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_BitTestSkip::init_21__21__21__21__21_ (temp_3.readProperty_mInstructionLocation (), var_outModifiedEmbeddedInstruction_25357, temp_4.readProperty_mSkipIfSet (), temp_5.readProperty_mRegisterDescription (), temp_6.readProperty_mBitNumber (), inCompiler COMMA_HERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_skip_instruction_FDA instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::getter_instructionDisplay (Compiler * inCompiler
                                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result_outResult ; // Returned variable
  GALGAS_string var_s_25970 ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_0 = this ;
  switch (temp_0.readProperty_mInstruction_5F_FDA_5F_base_5F_code ().enumValue ()) {
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_DECFSZ:
    {
      var_s_25970 = GALGAS_string ("DECFSZ") ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_DCFSNZ:
    {
      var_s_25970 = GALGAS_string ("DCFSNZ") ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_INCFSZ:
    {
      var_s_25970 = GALGAS_string ("INCFSZ") ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_INFSNZ:
    {
      var_s_25970 = GALGAS_string ("INFSNZ") ;
    }
    break ;
  }
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_1 = this ;
  var_s_25970.plusAssign_operation(GALGAS_string (" ").add_operation (temp_1.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 810)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 810)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_3 = this ;
    test_2 = temp_3.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (kBoolTrue == test_2) {
      var_s_25970.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 812)) ;
    }
  }
  var_s_25970.plusAssign_operation(GALGAS_string (" \? "), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 814)) ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_4 = this ;
  GALGAS_stringlist var_x_26275 = callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) temp_4.readProperty_mEmbeddedInstruction ().ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 815)) ;
  var_s_25970.plusAssign_operation(var_x_26275.getter_mValueAtIndex (GALGAS_uint (uint32_t (0U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 816)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 816)) ;
  result_outResult = GALGAS_stringlist::class_func_listWithValue (var_s_25970  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 817)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_skip_instruction_FDA generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::method_generateCode (const GALGAS_uint constinArgument_inAddress,
                                                                           const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                           const GALGAS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                           GALGAS_codeList & outArgument_outCode,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_binCode_26702 ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_0 = this ;
  switch (temp_0.readProperty_mInstruction_5F_FDA_5F_base_5F_code ().enumValue ()) {
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_DECFSZ:
    {
      var_binCode_26702 = GALGAS_uint (uint32_t (11264U)) ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_DCFSNZ:
    {
      var_binCode_26702 = GALGAS_uint (uint32_t (19456U)) ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_INCFSZ:
    {
      var_binCode_26702 = GALGAS_uint (uint32_t (15360U)) ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_INFSNZ:
    {
      var_binCode_26702 = GALGAS_uint (uint32_t (18432U)) ;
    }
    break ;
  }
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_2 = this ;
    test_1 = temp_2.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (kBoolTrue == test_1) {
      var_binCode_26702 = var_binCode_26702.operator_or (GALGAS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 835)) ;
    }
  }
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_3 = this ;
  var_binCode_26702 = var_binCode_26702.operator_or (temp_3.readProperty_mRegisterDescription ().readProperty_mRegisterAddress ().operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 837)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 837)) ;
  GALGAS_string var_assemblyCode_27080 = GALGAS_string ("    ") ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_4 = this ;
  switch (temp_4.readProperty_mInstruction_5F_FDA_5F_base_5F_code ().enumValue ()) {
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_DECFSZ:
    {
      var_assemblyCode_27080.plusAssign_operation(GALGAS_string ("DECFSZ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 841)) ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_DCFSNZ:
    {
      var_assemblyCode_27080.plusAssign_operation(GALGAS_string ("DCFSNZ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 842)) ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_INCFSZ:
    {
      var_assemblyCode_27080.plusAssign_operation(GALGAS_string ("INCFSZ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 843)) ;
    }
    break ;
  case GALGAS_skip_5F_instruction_5F_FDA_5F_base_5F_code::kEnum_INFSNZ:
    {
      var_assemblyCode_27080.plusAssign_operation(GALGAS_string ("INFSNZ"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 844)) ;
    }
    break ;
  }
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_5 = this ;
  var_assemblyCode_27080.plusAssign_operation(GALGAS_string (" ").add_operation (temp_5.readProperty_mRegisterDescription ().readProperty_mAssemblyString (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 846)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 846)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_7 = this ;
    test_6 = temp_7.readProperty_m_5F_W_5F_isDestination ().boolEnum () ;
    if (kBoolTrue == test_6) {
      var_assemblyCode_27080.plusAssign_operation(GALGAS_string (", W"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 848)) ;
    }
  }
  if (kBoolFalse == test_6) {
    var_binCode_26702 = var_binCode_26702.operator_or (GALGAS_uint (uint32_t (512U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 850)) ;
    var_assemblyCode_27080.plusAssign_operation(GALGAS_string (", F"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 851)) ;
  }
  enumGalgasBool test_8 = kBoolTrue ;
  if (kBoolTrue == test_8) {
    const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_9 = this ;
    test_8 = temp_9.readProperty_mRegisterDescription ().readProperty_mNeedsBSR ().boolEnum () ;
    if (kBoolTrue == test_8) {
      var_binCode_26702 = var_binCode_26702.operator_or (GALGAS_uint (uint32_t (256U)) COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 854)) ;
      var_assemblyCode_27080.plusAssign_operation(GALGAS_string (", BSR_ACCESS"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 855)) ;
    }
  }
  GALGAS_uintlist temp_10 = GALGAS_uintlist::init (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 860)) ;
  temp_10.enterElement (GALGAS_uintlist_2D_element::init_21_ (var_binCode_26702, inCompiler COMMA_HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 860)) ;
  outArgument_outCode = GALGAS_codeList::class_func_listWithValue (var_assemblyCode_27080, temp_10  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 858)) ;
  GALGAS_codeList var_c_27837 ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_11 = this ;
  callExtensionMethod_generateCode ((cPtr_ipic_31__38_SequentialInstruction *) temp_11.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 863)), constinArgument_inSymbolTable, constinArgument_inDataAddressMap, var_c_27837, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 862)) ;
  outArgument_outCode.plusAssign_operation(var_c_27837, inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 868)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_skip_instruction_FDA performInstructionRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_skip_5F_instruction_5F_FDA::method_performInstructionRelativeBranchResolution (const GALGAS_uint constinArgument_inAddress,
                                                                                                         const GALGAS_string constinArgument_inBlockLabel,
                                                                                                         const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                         GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                         GALGAS_string & ioArgument_ioListFileContents,
                                                                                                         GALGAS_ipic_31__38_SequentialInstruction & outArgument_outModifiedInstruction,
                                                                                                         Compiler * inCompiler
                                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_0 = this ;
  outArgument_outModifiedInstruction = temp_0 ;
  GALGAS_uint var_n_28296 = ioArgument_ioConversionCount ;
  GALGAS_ipic_31__38_SequentialInstruction var_outModifiedEmbeddedInstruction_28533 ;
  const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_1 = this ;
  callExtensionMethod_performInstructionRelativeBranchResolution ((cPtr_ipic_31__38_SequentialInstruction *) temp_1.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 883)), constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioConversionCount, ioArgument_ioListFileContents, var_outModifiedEmbeddedInstruction_28533, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 882)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (ComparisonKind::notEqual, var_n_28296.objectCompare (ioArgument_ioConversionCount)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_3 = this ;
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_4 = this ;
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_5 = this ;
      const GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA temp_6 = this ;
      outArgument_outModifiedInstruction = GALGAS_ipic_31__38__5F_skip_5F_instruction_5F_FDA::init_21__21__21__21__21_ (temp_3.readProperty_mInstructionLocation (), var_outModifiedEmbeddedInstruction_28533, temp_4.readProperty_mInstruction_5F_FDA_5F_base_5F_code (), temp_5.readProperty_mRegisterDescription (), temp_6.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_JSR instructionSize'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38__5F_intermediate_5F_JSR::getter_instructionSize (Compiler */* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = this ;
  switch (temp_0.readProperty_mKind ().enumValue ()) {
  case GALGAS_jumpInstructionKind::kNotBuilt:
    break ;
  case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
  case GALGAS_jumpInstructionKind::kEnum_relative:
    {
      result_outSize = GALGAS_uint (uint32_t (2U)) ;
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_absolute:
    {
      result_outSize = GALGAS_uint (uint32_t (4U)) ;
    }
    break ;
  }
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_JSR instructionRelativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_JSR::method_instructionRelativeBranchOverflow (const GALGAS_uint constinArgument_inAddress,
                                                                                         const GALGAS_string constinArgument_inBlockLabel,
                                                                                         const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                         GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                         Compiler * inCompiler
                                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = this ;
  switch (temp_0.readProperty_mKind ().enumValue ()) {
  case GALGAS_jumpInstructionKind::kNotBuilt:
    break ;
  case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
  case GALGAS_jumpInstructionKind::kEnum_relative:
    {
      enumGalgasBool test_1 = kBoolTrue ;
      if (kBoolTrue == test_1) {
        const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_2 = this ;
        test_1 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_2.readProperty_mTargetLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 925)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 925)).boolEnum () ;
        if (kBoolTrue == test_1) {
          {
          const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_3 = this ;
          extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, temp_3.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 927)) ;
          }
        }
      }
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_absolute:
    {
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_JSR performInstructionRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_JSR::method_performInstructionRelativeBranchResolution (const GALGAS_uint constinArgument_inAddress,
                                                                                                  const GALGAS_string constinArgument_inBlockLabel,
                                                                                                  const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                  GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                  GALGAS_string & ioArgument_ioListFileContents,
                                                                                                  GALGAS_ipic_31__38_SequentialInstruction & outArgument_outModifiedInstruction,
                                                                                                  Compiler * inCompiler
                                                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = this ;
  outArgument_outModifiedInstruction = temp_0 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_1 = this ;
  switch (temp_1.readProperty_mKind ().enumValue ()) {
  case GALGAS_jumpInstructionKind::kNotBuilt:
    break ;
  case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
    {
      enumGalgasBool test_2 = kBoolTrue ;
      if (kBoolTrue == test_2) {
        const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_3 = this ;
        test_2 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_3.readProperty_mTargetLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 945)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 945)).boolEnum () ;
        if (kBoolTrue == test_2) {
          ioArgument_ioConversionCount.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 946)) ;
          const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_4 = this ;
          const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_5 = this ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 947)).add_operation (GALGAS_string (": JSR "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 947)).add_operation (temp_4.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 947)).add_operation (GALGAS_string (" --> CALL "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 947)).add_operation (temp_5.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 947)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 947)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 947)) ;
          const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_6 = this ;
          const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_7 = this ;
          outArgument_outModifiedInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_JSR::init_21__21__21_ (temp_6.readProperty_mInstructionLocation (), temp_7.readProperty_mTargetLabel (), GALGAS_jumpInstructionKind::class_func_absolute (SOURCE_FILE ("ipic18_regular_instructions.galgas", 948)), inCompiler COMMA_HERE) ;
        }
      }
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_relative:
    {
      enumGalgasBool test_8 = kBoolTrue ;
      if (kBoolTrue == test_8) {
        const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_9 = this ;
        test_8 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, temp_9.readProperty_mTargetLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 951)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 951)).boolEnum () ;
        if (kBoolTrue == test_8) {
          const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_10 = this ;
          const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_11 = this ;
          const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_12 = this ;
          TC_Array <FixItDescription> fixItArray13 ;
          inCompiler->emitSemanticError (temp_10.readProperty_mInstructionLocation (), GALGAS_string ("displacement (").add_operation (function_pic_31__38__5F_BRA_5F_RCALL_5F_displacement (constinArgument_inSymbolTable, temp_11.readProperty_mTargetLabel (), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 953)).getter_string (SOURCE_FILE ("ipic18_regular_instructions.galgas", 952)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 952)).add_operation (GALGAS_string (") too large for RCALL "), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 953)).add_operation (temp_12.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 954)).add_operation (GALGAS_string (" instruction (limited to [-1024, 1023])"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 954)), fixItArray13  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 952)) ;
        }
      }
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_absolute:
    {
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_JSR instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_JSR::getter_instructionDisplay (Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result_outResult ; // Returned variable
  GALGAS_string var_s_31279 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = this ;
  switch (temp_0.readProperty_mKind ().enumValue ()) {
  case GALGAS_jumpInstructionKind::kNotBuilt:
    break ;
  case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
    {
      const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_1 = this ;
      var_s_31279 = GALGAS_string ("JSR ").add_operation (temp_1.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 965)) ;
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_relative:
    {
      const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_2 = this ;
      var_s_31279 = GALGAS_string ("RCALL ").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 966)) ;
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_absolute:
    {
      const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_3 = this ;
      var_s_31279 = GALGAS_string ("CALL ").add_operation (temp_3.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 967)) ;
    }
    break ;
  }
  result_outResult = GALGAS_stringlist::class_func_listWithValue (var_s_31279  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 969)) ;
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_JSR generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_JSR::method_generateCode (const GALGAS_uint constinArgument_inAddress,
                                                                    const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                    const GALGAS_pic_31__38__5F_dataAddressMap /* constinArgument_inDataAddressMap */,
                                                                    GALGAS_codeList & outArgument_outCode,
                                                                    Compiler * inCompiler
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_uint var_targetAddress_31873 ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_0 = this ;
  constinArgument_inSymbolTable.method_searchKey (temp_0.readProperty_mTargetLabel (), var_targetAddress_31873, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 979)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_1 = this ;
  switch (temp_1.readProperty_mKind ().enumValue ()) {
  case GALGAS_jumpInstructionKind::kNotBuilt:
    break ;
  case GALGAS_jumpInstructionKind::kEnum_ipicRelative:
  case GALGAS_jumpInstructionKind::kEnum_relative:
    {
      const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_2 = this ;
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_targetAddress_31873, temp_2.readProperty_mTargetLabel (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 982)) ;
    }
    break ;
  case GALGAS_jumpInstructionKind::kEnum_absolute:
    {
      const GALGAS_ipic_31__38__5F_intermediate_5F_JSR temp_3 = this ;
      outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_targetAddress_31873, temp_3.readProperty_mTargetLabel (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 984)) ;
    }
    break ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_computed_rcall instructionSize'
//
//--------------------------------------------------------------------------------------------------

GALGAS_uint cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::getter_instructionSize (Compiler * inCompiler
                                                                                                           COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_uint result_outSize ; // Returned variable
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_0) {
      result_outSize = GALGAS_uint (uint32_t (2U)) ;
    }
  }
  if (kBoolFalse == test_0) {
    result_outSize = GALGAS_uint (uint32_t (4U)) ;
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_2 = this ;
  result_outSize = result_outSize.add_operation (GALGAS_uint (uint32_t (4U)).multiply_operation (temp_2.readProperty_mTargetInstructions ().getter_count (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1001)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1001)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1001)).substract_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1001)) ;
//---
  return result_outSize ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension getter '@ipic18_intermediate_instruction_computed_rcall instructionDisplay'
//
//--------------------------------------------------------------------------------------------------

GALGAS_stringlist cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::getter_instructionDisplay (Compiler * inCompiler
                                                                                                                    COMMA_UNUSED_LOCATION_ARGS) const {
  GALGAS_stringlist result_outResult ; // Returned variable
  GALGAS_string var_s_32800 = GALGAS_string ("COMPUTED ") ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_1 = this ;
    test_0 = temp_1.readProperty_mUsesRCALL ().operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1008)).boolEnum () ;
    if (kBoolTrue == test_0) {
      var_s_32800.plusAssign_operation(GALGAS_string ("(uses CALL)"), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1009)) ;
    }
  }
  result_outResult = GALGAS_stringlist::class_func_listWithValue (var_s_32800  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1011)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_2 = this ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_32944 (temp_2.readProperty_mTargetInstructions (), EnumerationOrder::up) ;
  while (enumerator_32944.hasCurrentObject ()) {
    cEnumerator_stringlist enumerator_32988 (callExtensionGetter_instructionDisplay ((const cPtr_ipic_31__38_SequentialInstruction *) enumerator_32944.current_mInstruction (HERE).ptr (), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1013)), EnumerationOrder::up) ;
    while (enumerator_32988.hasCurrentObject ()) {
      result_outResult.addAssign_operation (GALGAS_string ("   ").add_operation (enumerator_32988.current_mValue (HERE), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1014))  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1014)) ;
      enumerator_32988.gotoNextObject () ;
    }
    enumerator_32944.gotoNextObject () ;
  }
//---
  return result_outResult ;
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_computed_rcall instructionRelativeBranchOverflow'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::method_instructionRelativeBranchOverflow (const GALGAS_uint constinArgument_inAddress,
                                                                                                                      const GALGAS_string constinArgument_inBlockLabel,
                                                                                                                      const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                                      GALGAS_branchOverflowMap & ioArgument_ioOverflowMap,
                                                                                                                      Compiler * inCompiler
                                                                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_0 = this ;
  GALGAS_bigint temp_1 ;
  const enumGalgasBool test_2 = temp_0.readProperty_mUsesRCALL ().boolEnum () ;
  if (kBoolTrue == test_2) {
    temp_1 = GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1026)) ;
  }else if (kBoolFalse == test_2) {
    temp_1 = GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1026)) ;
  }
  GALGAS_uint var_address_33425 = constinArgument_inAddress.add_operation (temp_1.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1026)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1026)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_3 = this ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_33506 (temp_3.readProperty_mTargetInstructions (), EnumerationOrder::up) ;
  while (enumerator_33506.hasCurrentObject ()) {
    callExtensionMethod_instructionRelativeBranchOverflow ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_33506.current_mInstruction (HERE).ptr (), var_address_33425, constinArgument_inBlockLabel, constinArgument_inSymbolTable, ioArgument_ioOverflowMap, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1028)) ;
    var_address_33425 = var_address_33425.add_operation (GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1034)) ;
    enumerator_33506.gotoNextObject () ;
  }
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_5 = this ;
    test_4 = temp_5.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_4) {
      enumGalgasBool test_6 = kBoolTrue ;
      if (kBoolTrue == test_6) {
        test_6 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1037)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1037)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1037)).boolEnum () ;
        if (kBoolTrue == test_6) {
          {
          extensionSetter_insertKey (ioArgument_ioOverflowMap, constinArgument_inBlockLabel, GALGAS_string ("_computed_goto_4"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1039)) ;
          }
        }
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_computed_rcall performInstructionRelativeBranchResolution'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::method_performInstructionRelativeBranchResolution (const GALGAS_uint constinArgument_inAddress,
                                                                                                                               const GALGAS_string constinArgument_inBlockLabel,
                                                                                                                               const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                                               GALGAS_uint & ioArgument_ioConversionCount,
                                                                                                                               GALGAS_string & ioArgument_ioListFileContents,
                                                                                                                               GALGAS_ipic_31__38_SequentialInstruction & outArgument_outModifiedInstruction,
                                                                                                                               Compiler * inCompiler
                                                                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_0 = this ;
  outArgument_outModifiedInstruction = temp_0 ;
  GALGAS_uint var_unusedConversionCount_34427 = GALGAS_uint (uint32_t (0U)) ;
  GALGAS_string var_unusedListing_34467 = GALGAS_string::makeEmptyString () ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_1 = this ;
  GALGAS_bigint temp_2 ;
  const enumGalgasBool test_3 = temp_1.readProperty_mUsesRCALL ().boolEnum () ;
  if (kBoolTrue == test_3) {
    temp_2 = GALGAS_bigint ("2", inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1056)) ;
  }else if (kBoolFalse == test_3) {
    temp_2 = GALGAS_bigint ("4", inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1056)) ;
  }
  GALGAS_uint var_address_34498 = constinArgument_inAddress.add_operation (temp_2.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1056)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1056)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_4 = this ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_34579 (temp_4.readProperty_mTargetInstructions (), EnumerationOrder::up) ;
  while (enumerator_34579.hasCurrentObject ()) {
    GALGAS_ipic_31__38_SequentialInstruction joker_34835 ; // Joker input parameter
    callExtensionMethod_performInstructionRelativeBranchResolution ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_34579.current_mInstruction (HERE).ptr (), var_address_34498, constinArgument_inBlockLabel, constinArgument_inSymbolTable, var_unusedConversionCount_34427, var_unusedListing_34467, joker_34835, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1059)) ;
    var_address_34498 = var_address_34498.add_operation (GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1067)) ;
    enumerator_34579.gotoNextObject () ;
  }
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_6 = this ;
    test_5 = temp_6.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_5) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        test_7 = function_pic_31__38__5F_checkBRA_5F_RCALL (constinArgument_inSymbolTable, GALGAS_string ("_computed_goto_4").getter_nowhere (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1070)), constinArgument_inAddress, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1070)).operator_not (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1070)).boolEnum () ;
        if (kBoolTrue == test_7) {
          ioArgument_ioConversionCount.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1071)) ;
          ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("  ").add_operation (constinArgument_inBlockLabel, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1072)).add_operation (GALGAS_string (": computed rcall needs to use CALL _computed_goto_4\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1072)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1072)) ;
          const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_8 = this ;
          const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_9 = this ;
          outArgument_outModifiedInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::init_21__21__21_ (temp_8.readProperty_mInstructionLocation (), temp_9.readProperty_mTargetInstructions (), GALGAS_bool (false), inCompiler COMMA_HERE) ;
        }
      }
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@ipic18_intermediate_instruction_computed_rcall generateCode'
//
//--------------------------------------------------------------------------------------------------

void cPtr_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall::method_generateCode (const GALGAS_uint constinArgument_inAddress,
                                                                                                 const GALGAS_symbolTableForRelativesResolution constinArgument_inSymbolTable,
                                                                                                 const GALGAS_pic_31__38__5F_dataAddressMap constinArgument_inDataAddressMap,
                                                                                                 GALGAS_codeList & outArgument_outCode,
                                                                                                 Compiler * inCompiler
                                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_0 = this ;
  GALGAS_lstring var_target_35686 = GALGAS_lstring::init_21__21_ (GALGAS_string ("_computed_goto_4"), temp_0.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  GALGAS_uint var_computetedGoto_34_Address_35806 ;
  constinArgument_inSymbolTable.method_searchKey (var_target_35686, var_computetedGoto_34_Address_35806, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1090)) ;
  GALGAS_uint var_currentInstructionAddress_35843 ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_2 = this ;
    test_1 = temp_2.readProperty_mUsesRCALL ().boolEnum () ;
    if (kBoolTrue == test_1) {
      var_currentInstructionAddress_35843 = constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1094)) ;
      outArgument_outCode = function_pic_31__38__5F_RCALL_5F_instruction_5F_code (constinArgument_inAddress, var_computetedGoto_34_Address_35806, var_target_35686, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1095)) ;
    }
  }
  if (kBoolFalse == test_1) {
    var_currentInstructionAddress_35843 = constinArgument_inAddress.add_operation (GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1097)) ;
    outArgument_outCode = function_pic_31__38__5F_CALL_5F_instruction_5F_code (var_computetedGoto_34_Address_35806, var_target_35686, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1098)) ;
  }
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_3 = this ;
  GALGAS_uint var_instructionFollowingComputedRcallAddress_36176 = var_currentInstructionAddress_35843.add_operation (temp_3.readProperty_mTargetInstructions ().getter_count (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1100)).multiply_operation (GALGAS_uint (uint32_t (4U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1100)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1100)).substract_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1100)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_4 = this ;
  GALGAS_lstring var_nextInstructionLabel_36294 = GALGAS_lstring::init_21__21_ (GALGAS_string ("_computed_").add_operation (constinArgument_inAddress.getter_xString (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1101)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1101)), temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_HERE) ;
  GALGAS_uint var_idx_36409 = GALGAS_uint (uint32_t (0U)) ;
  const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_5 = this ;
  cEnumerator_ipic_31__38_SequentialInstructionList enumerator_36439 (temp_5.readProperty_mTargetInstructions (), EnumerationOrder::up) ;
  while (enumerator_36439.hasCurrentObject ()) {
    var_idx_36409.plusAssign_operation(GALGAS_uint (uint32_t (1U)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1104)) ;
    GALGAS_codeList var_instructionCode_36617 ;
    callExtensionMethod_generateCode ((cPtr_ipic_31__38_SequentialInstruction *) enumerator_36439.current_mInstruction (HERE).ptr (), var_currentInstructionAddress_35843, constinArgument_inSymbolTable, constinArgument_inDataAddressMap, var_instructionCode_36617, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1105)) ;
    outArgument_outCode.plusAssign_operation(var_instructionCode_36617, inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1111)) ;
    var_currentInstructionAddress_35843 = var_currentInstructionAddress_35843.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1112)) ;
    enumGalgasBool test_6 = kBoolTrue ;
    if (kBoolTrue == test_6) {
      const GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_computed_5F_rcall temp_7 = this ;
      test_6 = GALGAS_bool (ComparisonKind::lowerThan, var_idx_36409.objectCompare (temp_7.readProperty_mTargetInstructions ().getter_count (SOURCE_FILE ("ipic18_regular_instructions.galgas", 1113)))).boolEnum () ;
      if (kBoolTrue == test_6) {
        outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_BRA_5F_instruction_5F_code (var_currentInstructionAddress_35843, var_instructionFollowingComputedRcallAddress_36176, var_nextInstructionLabel_36294, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1114)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1114)) ;
        var_currentInstructionAddress_35843 = var_currentInstructionAddress_35843.add_operation (GALGAS_uint (uint32_t (2U)), inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1115)) ;
      }
    }
    enumerator_36439.gotoNextObject () ;
  }
  outArgument_outCode.plusAssign_operation(function_pic_31__38__5F_definition_5F_label (var_nextInstructionLabel_36294, inCompiler COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1119)), inCompiler  COMMA_SOURCE_FILE ("ipic18_regular_instructions.galgas", 1119)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_IF_BitTest addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_IF_5F_BitTest::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                           GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_BitTest temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 15)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_IF_FA_SEMI_COLON addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                       GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_FA_5F_SEMI_5F_COLON temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 24)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_IF_IncDec addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_IF_5F_IncDec::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                          GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_pic_31__38_Instruction_5F_IF_5F_IncDec temp_0 = this ;
  callExtensionMethod_addUsedRoutines ((cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_0.readProperty_mEmbeddedInstruction ().ptr (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 33)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_JUMP addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_JUMP::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                  GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_pic_31__38_Instruction_5F_JUMP temp_0 = this ;
  ioArgument_ioUsedRoutines.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 42)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_JUMPCC addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_JUMPCC::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                    GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_pic_31__38_Instruction_5F_JUMPCC temp_0 = this ;
  ioArgument_ioUsedRoutines.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 51)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FOREVER addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FOREVER::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                     GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_0 = this ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (temp_0.readProperty_mInstructionList (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 60)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_repetitionStatique addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_repetitionStatique::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                                GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                                Compiler * inCompiler
                                                                                COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_0 = this ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (temp_0.readProperty_mInstructionList (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 69)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_checkbank addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_checkbank::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                       GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_LDATA16PTR addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LDATA_31__36_PTR::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                              GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_LDATA8PTR addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LDATA_38_PTR::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                          GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                          Compiler * /* inCompiler */
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_LTBLPTR addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LTBLPTR::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                     GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_MNOP addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_MNOP::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                  GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_NOPBRA addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_NOPBRA::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                    GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                    Compiler * /* inCompiler */
                                                                    COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_banksel addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_banksel::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                     GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                     Compiler * /* inCompiler */
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_checknobank addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_checknobank::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                         GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                         Compiler * /* inCompiler */
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_banksel_register addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_banksel_5F_register::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                                 GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                                 Compiler * /* inCompiler */
                                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_computed_bra addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_computed_5F_bra::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                             GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                             Compiler * /* inCompiler */
                                                                             COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_bra temp_0 = this ;
  cEnumerator_lstringlist enumerator_4391 (temp_0.readProperty_mTargetLabels (), EnumerationOrder::up) ;
  while (enumerator_4391.hasCurrentObject ()) {
    ioArgument_ioUsedRoutines.addAssign_operation (enumerator_4391.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 151)) ;
    enumerator_4391.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_computed_goto addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_computed_5F_goto::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                              GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_goto temp_0 = this ;
  cEnumerator_lstringlist enumerator_4693 (temp_0.readProperty_mTargetLabels (), EnumerationOrder::up) ;
  while (enumerator_4693.hasCurrentObject ()) {
    ioArgument_ioUsedRoutines.addAssign_operation (enumerator_4693.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 162)) ;
    enumerator_4693.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_computed_rcall addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_computed_5F_rcall::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                               GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_pic_31__38_Instruction_5F_computed_5F_rcall temp_0 = this ;
  cEnumerator_lstringlist enumerator_4996 (temp_0.readProperty_mTargetLabels (), EnumerationOrder::up) ;
  while (enumerator_4996.hasCurrentObject ()) {
    ioArgument_ioUsedRoutines.addAssign_operation (enumerator_4996.current_mValue (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 173)) ;
    enumerator_4996.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_computed_retlw addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_computed_5F_retlw::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                               GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                               Compiler * /* inCompiler */
                                                                               COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_do_while addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_do_5F_while::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                         GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_0 = this ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (temp_0.readProperty_mRepeatedInstructionList (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 191)) ;
  }
  const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_1 = this ;
  cEnumerator_pic_31__38_DoWhilePartList enumerator_5636 (temp_1.readProperty_mWhilePartList (), EnumerationOrder::up) ;
  while (enumerator_5636.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (enumerator_5636.current_mInstructionList (HERE), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 193)) ;
    }
    enumerator_5636.gotoNextObject () ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_nobanksel addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_nobanksel::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                       GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                       Compiler * /* inCompiler */
                                                                       COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_savebank addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_savebank::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                      GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_pic_31__38_Instruction_5F_savebank temp_0 = this ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (temp_0.readProperty_mInstructionList (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 211)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_structured_if addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_structured_5F_if::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                              GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  {
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_0 = this ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (temp_0.readProperty_mThenInstructionList (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 220)) ;
  }
  {
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_1 = this ;
  routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (temp_1.readProperty_mElseInstructionList (), constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 221)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_macro addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_macro::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                   GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_InstructionList var_instructionList_6956 ;
  const GALGAS_pic_31__38_Instruction_5F_macro temp_0 = this ;
  GALGAS_lstringlist joker_6948 ; // Joker input parameter
  constinArgument_inMacroMap.method_searchKey (temp_0.readProperty_mMacroName (), joker_6948, var_instructionList_6956, inCompiler COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 230)) ;
  {
  routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (var_instructionList_6956, constinArgument_inMacroMap, ioArgument_ioUsedRoutines, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 231)) ;
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FA addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FA::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                Compiler * /* inCompiler */
                                                                COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FBA addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FBA::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                 GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FDA addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FDA::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                 GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_JSR addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_JSR::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                 GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                 Compiler * /* inCompiler */
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_pic_31__38_Instruction_5F_JSR temp_0 = this ;
  ioArgument_ioUsedRoutines.addAssign_operation (temp_0.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 264)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_LFSR addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LFSR::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                  GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_MOVFF addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_MOVFF::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                   GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_TBLWT addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_TBLWT::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                   GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_TBLRD addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_TBLRD::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                   GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                   Compiler * /* inCompiler */
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_literalOperation addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_literalOperation::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                              GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                              Compiler * /* inCompiler */
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_fnop addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_fnop::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                  GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                  Compiler * /* inCompiler */
                                                                  COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_withNoOperand addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_withNoOperand::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap /* constinArgument_inMacroMap */,
                                                                           GALGAS_stringset & /* ioArgument_ioUsedRoutines */,
                                                                           Compiler * /* inCompiler */
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_block addUsedRoutines'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_block::method_addUsedRoutines (const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                   GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  const GALGAS_pic_31__38_Instruction_5F_block temp_0 = this ;
  cEnumerator_pic_31__38_BlockInstructionBlockList enumerator_9728 (temp_0.readProperty_mBlockList (), EnumerationOrder::up) ;
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

void routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (const GALGAS_pic_31__38_InstructionList constinArgument_inInstructionList,
                                                                        const GALGAS_pic_31__38_MacroMap constinArgument_inMacroMap,
                                                                        GALGAS_stringset & ioArgument_ioUsedRoutines,
                                                                        Compiler * inCompiler
                                                                        COMMA_UNUSED_LOCATION_ARGS) {
  cEnumerator_pic_31__38_InstructionList enumerator_10100 (constinArgument_inInstructionList, EnumerationOrder::up) ;
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

GALGAS_stringset function_pic_31__38__5F_computeUsedRoutines (const GALGAS_pic_31__38_InterruptDefinitionList & constinArgument_inInterruptDefinitionList,
                                                              const GALGAS_pic_31__38_RoutineDefinitionList & constinArgument_inRoutineDefinitionList,
                                                              const GALGAS_pic_31__38_MacroMap & constinArgument_inMacroMap,
                                                              const GALGAS_routineDeclarationList & constinArgument_inBootloaderRoutineDeclarationListForBootloaderImplementation,
                                                              const GALGAS_routineDeclarationList & constinArgument_inUserRoutineDeclarationListForUserProgramImplementation,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_stringset result_outUsedRoutineSet ; // Returned variable
  result_outUsedRoutineSet = GALGAS_stringset::class_func_setWithString (GALGAS_string ("main")  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 356)) ;
  cEnumerator_pic_31__38_InterruptDefinitionList enumerator_10859 (constinArgument_inInterruptDefinitionList, EnumerationOrder::up) ;
  while (enumerator_10859.hasCurrentObject ()) {
    {
    routine_addPic_31__38_UsedRoutinesFromInstructionList_3F__3F__26_ (enumerator_10859.current_mInstructionList (HERE), constinArgument_inMacroMap, result_outUsedRoutineSet, inCompiler  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 359)) ;
    }
    enumerator_10859.gotoNextObject () ;
  }
  cEnumerator_routineDeclarationList enumerator_11083 (constinArgument_inBootloaderRoutineDeclarationListForBootloaderImplementation, EnumerationOrder::up) ;
  while (enumerator_11083.hasCurrentObject ()) {
    result_outUsedRoutineSet.addAssign_operation (enumerator_11083.current_mRoutineName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 367)) ;
    enumerator_11083.gotoNextObject () ;
  }
  cEnumerator_routineDeclarationList enumerator_11261 (constinArgument_inUserRoutineDeclarationListForUserProgramImplementation, EnumerationOrder::up) ;
  while (enumerator_11261.hasCurrentObject ()) {
    result_outUsedRoutineSet.addAssign_operation (enumerator_11261.current_mRoutineName (HERE).readProperty_string ()  COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 371)) ;
    enumerator_11261.gotoNextObject () ;
  }
  GALGAS_stringset var_s_11427 = GALGAS_stringset::init (inCompiler COMMA_HERE) ;
  if (constinArgument_inRoutineDefinitionList.getter_count (SOURCE_FILE ("pic18_used_routines.galgas", 375)).isValid ()) {
    uint32_t variant_11446 = constinArgument_inRoutineDefinitionList.getter_count (SOURCE_FILE ("pic18_used_routines.galgas", 375)).uintValue () ;
    bool loop_11446 = true ;
    while (loop_11446) {
      loop_11446 = GALGAS_bool (ComparisonKind::notEqual, var_s_11427.objectCompare (result_outUsedRoutineSet)).isValid () ;
      if (loop_11446) {
        loop_11446 = GALGAS_bool (ComparisonKind::notEqual, var_s_11427.objectCompare (result_outUsedRoutineSet)).boolValue () ;
      }
      if (loop_11446 && (0 == variant_11446)) {
        loop_11446 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("pic18_used_routines.galgas", 375)) ;
      }
      if (loop_11446) {
        variant_11446 -- ;
        var_s_11427 = result_outUsedRoutineSet ;
        cEnumerator_pic_31__38_RoutineDefinitionList enumerator_11592 (constinArgument_inRoutineDefinitionList, EnumerationOrder::up) ;
        while (enumerator_11592.hasCurrentObject ()) {
          enumGalgasBool test_0 = kBoolTrue ;
          if (kBoolTrue == test_0) {
            test_0 = result_outUsedRoutineSet.getter_hasKey (enumerator_11592.current_mRoutineName (HERE).readProperty_string () COMMA_SOURCE_FILE ("pic18_used_routines.galgas", 379)).boolEnum () ;
            if (kBoolTrue == test_0) {
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

static const C_galgas_type_descriptor * functionArgs_pic_31__38__5F_computeUsedRoutines [6] = {
  & kTypeDescriptor_GALGAS_pic_31__38_InterruptDefinitionList,
  & kTypeDescriptor_GALGAS_pic_31__38_RoutineDefinitionList,
  & kTypeDescriptor_GALGAS_pic_31__38_MacroMap,
  & kTypeDescriptor_GALGAS_routineDeclarationList,
  & kTypeDescriptor_GALGAS_routineDeclarationList,
  nullptr
} ;

//--------------------------------------------------------------------------------------------------

static GALGAS_object functionWithGenericHeader_pic_31__38__5F_computeUsedRoutines (Compiler * inCompiler,
                                                                                   const cObjectArray & inEffectiveParameterArray,
                                                                                   const GALGAS_location & /* inErrorLocation */
                                                                                   COMMA_LOCATION_ARGS) {
  const GALGAS_pic_31__38_InterruptDefinitionList operand0 = GALGAS_pic_31__38_InterruptDefinitionList::extractObject (inEffectiveParameterArray.objectAtIndex (0 COMMA_HERE),
                                                                                                                       inCompiler
                                                                                                                       COMMA_THERE) ;
  const GALGAS_pic_31__38_RoutineDefinitionList operand1 = GALGAS_pic_31__38_RoutineDefinitionList::extractObject (inEffectiveParameterArray.objectAtIndex (1 COMMA_HERE),
                                                                                                                   inCompiler
                                                                                                                   COMMA_THERE) ;
  const GALGAS_pic_31__38_MacroMap operand2 = GALGAS_pic_31__38_MacroMap::extractObject (inEffectiveParameterArray.objectAtIndex (2 COMMA_HERE),
                                                                                         inCompiler
                                                                                         COMMA_THERE) ;
  const GALGAS_routineDeclarationList operand3 = GALGAS_routineDeclarationList::extractObject (inEffectiveParameterArray.objectAtIndex (3 COMMA_HERE),
                                                                                               inCompiler
                                                                                               COMMA_THERE) ;
  const GALGAS_routineDeclarationList operand4 = GALGAS_routineDeclarationList::extractObject (inEffectiveParameterArray.objectAtIndex (4 COMMA_HERE),
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
//
//Overriding extension method '@pic18Instruction_block performInlining'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_block::method_performInlining (const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                   const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                   const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                   GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_BlockInstructionBlockList var_inlinedBlockList_1147 = GALGAS_pic_31__38_BlockInstructionBlockList::init (inCompiler COMMA_HERE) ;
  const GALGAS_pic_31__38_Instruction_5F_block temp_0 = this ;
  cEnumerator_pic_31__38_BlockInstructionBlockList enumerator_1241 (temp_0.readProperty_mBlockList (), EnumerationOrder::up) ;
  while (enumerator_1241.hasCurrentObject ()) {
    GALGAS_pic_31__38_InstructionList var_instructionList_1463 ;
    {
    routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (enumerator_1241.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList_1463, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 35)) ;
    }
    var_inlinedBlockList_1147.addAssign_operation (enumerator_1241.current_mBlockName (HERE), var_instructionList_1463, enumerator_1241.current_mBlockTerminaisonForBlockInstruction (HERE), enumerator_1241.current_mEndOfBlock (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 42)) ;
    enumerator_1241.gotoNextObject () ;
  }
  const GALGAS_pic_31__38_Instruction_5F_block temp_1 = this ;
  const GALGAS_pic_31__38_Instruction_5F_block temp_2 = this ;
  const GALGAS_pic_31__38_Instruction_5F_block temp_3 = this ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_block::init_21__21__21__21_ (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mStartBlockName (), var_inlinedBlockList_1147, temp_3.readProperty_mEndOfBlockInstruction (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 48)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FOREVER performInlining'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FOREVER::method_performInlining (const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                     const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                     const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                     GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                     Compiler * inCompiler
                                                                     COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_InstructionList var_instructionList_2290 ;
  {
  const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_0 = this ;
  routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (temp_0.readProperty_mInstructionList (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList_2290, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 64)) ;
  }
  const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_1 = this ;
  const GALGAS_pic_31__38_Instruction_5F_FOREVER temp_2 = this ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_FOREVER::init_21__21__21_ (temp_1.readProperty_mInstructionLocation (), var_instructionList_2290, temp_2.readProperty_mEndOfInstructionList (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 71)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_do_while performInlining'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_do_5F_while::method_performInlining (const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                         const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                         const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                         GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_InstructionList var_repeatedInstructionList_2960 ;
  {
  const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_0 = this ;
  routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (temp_0.readProperty_mRepeatedInstructionList (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_repeatedInstructionList_2960, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 84)) ;
  }
  GALGAS_pic_31__38_DoWhilePartList var_whilePartList_2994 = GALGAS_pic_31__38_DoWhilePartList::init (inCompiler COMMA_HERE) ;
  const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_1 = this ;
  cEnumerator_pic_31__38_DoWhilePartList enumerator_3069 (temp_1.readProperty_mWhilePartList (), EnumerationOrder::up) ;
  while (enumerator_3069.hasCurrentObject ()) {
    GALGAS_pic_31__38_InstructionList var_instructionList_3303 ;
    {
    routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (enumerator_3069.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList_3303, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 93)) ;
    }
    var_whilePartList_2994.addAssign_operation (enumerator_3069.current_mCondition (HERE), var_instructionList_3303, enumerator_3069.current_mEndOfPartLocation (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 100)) ;
    enumerator_3069.gotoNextObject () ;
  }
  const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_2 = this ;
  const GALGAS_pic_31__38_Instruction_5F_do_5F_while temp_3 = this ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_do_5F_while::init_21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), var_repeatedInstructionList_2960, temp_3.readProperty_mEndOfRepeatedInstructionList (), var_whilePartList_2994, inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 102)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_savebank performInlining'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_savebank::method_performInlining (const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                      const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                      const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                      GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                      Compiler * inCompiler
                                                                      COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_InstructionList var_instructionList_4079 ;
  {
  const GALGAS_pic_31__38_Instruction_5F_savebank temp_0 = this ;
  routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (temp_0.readProperty_mInstructionList (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_instructionList_4079, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 116)) ;
  }
  const GALGAS_pic_31__38_Instruction_5F_savebank temp_1 = this ;
  const GALGAS_pic_31__38_Instruction_5F_savebank temp_2 = this ;
  const GALGAS_pic_31__38_Instruction_5F_savebank temp_3 = this ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_savebank::init_21__21__21__21_ (temp_1.readProperty_mInstructionLocation (), temp_2.readProperty_mRegister (), var_instructionList_4079, temp_3.readProperty_mEndOfSaveBankInstruction (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 123)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_structured_if performInlining'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_structured_5F_if::method_performInlining (const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                              const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                              const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                              GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                              Compiler * inCompiler
                                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_InstructionList var_thenInstructionList_4775 ;
  {
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_0 = this ;
  routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (temp_0.readProperty_mThenInstructionList (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_thenInstructionList_4775, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 137)) ;
  }
  GALGAS_pic_31__38_InstructionList var_elseInstructionList_4983 ;
  {
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_1 = this ;
  routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (temp_1.readProperty_mElseInstructionList (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, var_elseInstructionList_4983, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 144)) ;
  }
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_2 = this ;
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_3 = this ;
  const GALGAS_pic_31__38_Instruction_5F_structured_5F_if temp_4 = this ;
  ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_structured_5F_if::init_21__21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mIfCondition (), var_thenInstructionList_4775, var_elseInstructionList_4983, temp_4.readProperty_mEndOfElsePartLocation (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 151)) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_JSR performInlining'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_JSR::method_performInlining (const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                 const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                 const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                 GALGAS_pic_31__38_InstructionList & ioArgument_ioInstructionList,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_inlineDone_5615 ;
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_pic_31__38_Instruction_5F_JSR temp_1 = this ;
    const GALGAS_pic_31__38_Instruction_5F_JSR temp_2 = this ;
    const GALGAS_pic_31__38_Instruction_5F_JSR temp_3 = this ;
    test_0 = constinArgument_inDeclaredRoutineMap.getter_hasKey (temp_1.readProperty_mTargetLabel ().readProperty_string () COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 167)).operator_and (constinArgument_inInlinedRoutineSet.getter_hasKey (temp_2.readProperty_mTargetLabel ().readProperty_string () COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 168)) COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 167)).operator_and (constinArgument_inCurrentlyInlinedRoutineSet.getter_hasKey (temp_3.readProperty_mTargetLabel ().readProperty_string () COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 169)).operator_not (SOURCE_FILE ("pic18_routine_inlining.galgas", 169)) COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 168)).boolEnum () ;
    if (kBoolTrue == test_0) {
      GALGAS_luint var_requiredBank_5904 ;
      GALGAS_bool var_isNoReturn_5998 ;
      GALGAS_pic_31__38_InstructionList var_instructionList_6042 ;
      const GALGAS_pic_31__38_Instruction_5F_JSR temp_4 = this ;
      GALGAS_luint joker_5923 ; // Joker input parameter
      GALGAS_bool joker_5955 ; // Joker input parameter
      constinArgument_inDeclaredRoutineMap.method_searchKey (temp_4.readProperty_mTargetLabel (), var_requiredBank_5904, joker_5923, joker_5955, var_isNoReturn_5998, var_instructionList_6042, inCompiler COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 170)) ;
      enumGalgasBool test_5 = kBoolTrue ;
      if (kBoolTrue == test_5) {
        test_5 = var_isNoReturn_5998.boolEnum () ;
        if (kBoolTrue == test_5) {
          const GALGAS_pic_31__38_Instruction_5F_JSR temp_6 = this ;
          TC_Array <FixItDescription> fixItArray7 ;
          inCompiler->emitSemanticError (temp_6.readProperty_mTargetLabel ().readProperty_location (), GALGAS_string ("a \"noreturn\" routine cannot be inlined"), fixItArray7  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 179)) ;
          var_inlineDone_5615.drop () ; // Release error dropped variable
        }
      }
      if (kBoolFalse == test_5) {
        enumGalgasBool test_8 = kBoolTrue ;
        if (kBoolTrue == test_8) {
          test_8 = GALGAS_bool (ComparisonKind::notEqual, var_requiredBank_5904.readProperty_uint ().objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("pic18_routine_inlining.galgas", 181)))).boolEnum () ;
          if (kBoolTrue == test_8) {
            const GALGAS_pic_31__38_Instruction_5F_JSR temp_9 = this ;
            ioArgument_ioInstructionList.addAssign_operation (GALGAS_pic_31__38_Instruction_5F_checkbank::init_21__21_ (temp_9.readProperty_mInstructionLocation (), var_requiredBank_5904.readProperty_uint (), inCompiler COMMA_HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 182)) ;
          }
        }
        GALGAS_stringset var_currentlyInlinedRoutineSet_6372 = constinArgument_inCurrentlyInlinedRoutineSet ;
        const GALGAS_pic_31__38_Instruction_5F_JSR temp_10 = this ;
        var_currentlyInlinedRoutineSet_6372.addAssign_operation (temp_10.readProperty_mTargetLabel ().readProperty_string ()  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 185)) ;
        cEnumerator_pic_31__38_InstructionList enumerator_6549 (var_instructionList_6042, EnumerationOrder::up) ;
        while (enumerator_6549.hasCurrentObject ()) {
          callExtensionMethod_performInlining ((cPtr_pic_31__38_PiccoloInstruction *) enumerator_6549.current_mInstruction (HERE).ptr (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, var_currentlyInlinedRoutineSet_6372, ioArgument_ioInstructionList, inCompiler COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 188)) ;
          enumerator_6549.gotoNextObject () ;
        }
        var_inlineDone_5615 = GALGAS_bool (true) ;
      }
    }
  }
  if (kBoolFalse == test_0) {
    var_inlineDone_5615 = GALGAS_bool (false) ;
  }
  enumGalgasBool test_11 = kBoolTrue ;
  if (kBoolTrue == test_11) {
    test_11 = var_inlineDone_5615.operator_not (SOURCE_FILE ("pic18_routine_inlining.galgas", 200)).boolEnum () ;
    if (kBoolTrue == test_11) {
      const GALGAS_pic_31__38_Instruction_5F_JSR temp_12 = this ;
      ioArgument_ioInstructionList.addAssign_operation (temp_12  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 201)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Routine 'performInlineFromInstructionList????!'
//
//--------------------------------------------------------------------------------------------------

void routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (const GALGAS_pic_31__38_InstructionList constinArgument_inInstructionList,
                                                                   const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                                   const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                                   const GALGAS_stringset constinArgument_inCurrentlyInlinedRoutineSet,
                                                                   GALGAS_pic_31__38_InstructionList & outArgument_outInstructionList,
                                                                   Compiler * inCompiler
                                                                   COMMA_UNUSED_LOCATION_ARGS) {
  outArgument_outInstructionList.drop () ; // Release 'out' argument
  outArgument_outInstructionList = GALGAS_pic_31__38_InstructionList::init (inCompiler COMMA_HERE) ;
  cEnumerator_pic_31__38_InstructionList enumerator_7307 (constinArgument_inInstructionList, EnumerationOrder::up) ;
  while (enumerator_7307.hasCurrentObject ()) {
    callExtensionMethod_performInlining ((cPtr_pic_31__38_PiccoloInstruction *) enumerator_7307.current_mInstruction (HERE).ptr (), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, constinArgument_inCurrentlyInlinedRoutineSet, outArgument_outInstructionList, inCompiler COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 215)) ;
    enumerator_7307.gotoNextObject () ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'pic18PerformRoutineInline??&&'
//
//--------------------------------------------------------------------------------------------------

void routine_pic_31__38_PerformRoutineInline_3F__3F__26__26_ (const GALGAS_stringset constinArgument_inInlinedRoutineSet,
                                                              const GALGAS_declaredRoutineMap constinArgument_inDeclaredRoutineMap,
                                                              GALGAS_pic_31__38_InterruptDefinitionList & ioArgument_ioInterruptDefinitionList,
                                                              GALGAS_pic_31__38_RoutineDefinitionList & ioArgument_ioRoutineDefinitionList,
                                                              Compiler * inCompiler
                                                              COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_pic_31__38_InterruptDefinitionList var_interruptDefinitionList_7856 = GALGAS_pic_31__38_InterruptDefinitionList::init (inCompiler COMMA_HERE) ;
  cEnumerator_pic_31__38_InterruptDefinitionList enumerator_7965 (ioArgument_ioInterruptDefinitionList, EnumerationOrder::up) ;
  while (enumerator_7965.hasCurrentObject ()) {
    GALGAS_pic_31__38_InstructionList var_instructionList_8202 ;
    {
    routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (enumerator_7965.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("pic18_routine_inlining.galgas", 239)), var_instructionList_8202, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 235)) ;
    }
    var_interruptDefinitionList_7856.addAssign_operation (enumerator_7965.current_mInterruptName (HERE), enumerator_7965.current_mFastReturn (HERE), var_instructionList_8202, enumerator_7965.current_mEndOfInterruptLocation (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 242)) ;
    enumerator_7965.gotoNextObject () ;
  }
  ioArgument_ioInterruptDefinitionList = var_interruptDefinitionList_7856 ;
  GALGAS_pic_31__38_RoutineDefinitionList var_routineDefinitionList_8438 = GALGAS_pic_31__38_RoutineDefinitionList::init (inCompiler COMMA_HERE) ;
  cEnumerator_pic_31__38_RoutineDefinitionList enumerator_8584 (ioArgument_ioRoutineDefinitionList, EnumerationOrder::up) ;
  while (enumerator_8584.hasCurrentObject ()) {
    GALGAS_pic_31__38_InstructionList var_instructionList_8817 ;
    {
    routine_performInlineFromInstructionList_3F__3F__3F__3F__21_ (enumerator_8584.current_mInstructionList (HERE), constinArgument_inInlinedRoutineSet, constinArgument_inDeclaredRoutineMap, GALGAS_stringset::class_func_emptySet (SOURCE_FILE ("pic18_routine_inlining.galgas", 256)), var_instructionList_8817, inCompiler  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 252)) ;
    }
    var_routineDefinitionList_8438.addAssign_operation (enumerator_8584.current_mRoutineName (HERE), enumerator_8584.current_mRequiredBank (HERE), enumerator_8584.current_mReturnedBank (HERE), enumerator_8584.current_mPreservesBank (HERE), enumerator_8584.current_mIsNoReturn (HERE), var_instructionList_8817, enumerator_8584.current_mEndOfRoutineLocation (HERE)  COMMA_SOURCE_FILE ("pic18_routine_inlining.galgas", 259)) ;
    enumerator_8584.gotoNextObject () ;
  }
  ioArgument_ioRoutineDefinitionList = var_routineDefinitionList_8438 ;
}


//--------------------------------------------------------------------------------------------------
//
//Routine 'displayBlockList?&?'
//
//--------------------------------------------------------------------------------------------------

void routine_displayBlockList_3F__26__3F_ (const GALGAS_string constinArgument_inTitle,
                                           GALGAS_string & ioArgument_ioListFileContents,
                                           const GALGAS_ipic_31__38_BlockList constinArgument_inGeneratedBlockList,
                                           Compiler * inCompiler
                                           COMMA_UNUSED_LOCATION_ARGS) {
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 40)).add_operation (GALGAS_string ("\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 40)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 40)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string ("*").add_operation (constinArgument_inTitle.getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (117U)), GALGAS_char (TO_UNICODE (32)) COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 41)), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 41)).add_operation (GALGAS_string ("*\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 41)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 41)) ;
  ioArgument_ioListFileContents.plusAssign_operation(GALGAS_string::makeEmptyString ().getter_stringByLeftAndRightPadding (GALGAS_uint (uint32_t (119U)), GALGAS_char (TO_UNICODE (42)) COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 42)).add_operation (GALGAS_string ("\n\n"), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 42)), inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 42)) ;
  cEnumerator_ipic_31__38_BlockList enumerator_1388 (constinArgument_inGeneratedBlockList, EnumerationOrder::up) ;
  GALGAS_uint index_1383 (uint32_t (0)) ;
  while (enumerator_1388.hasCurrentObject ()) {
    GALGAS_string var_nextBlockLabel_1452 ;
    enumGalgasBool test_0 = kBoolTrue ;
    if (kBoolTrue == test_0) {
      test_0 = GALGAS_bool (ComparisonKind::lowerThan, index_1383.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 45)).objectCompare (constinArgument_inGeneratedBlockList.getter_count (SOURCE_FILE ("ipic18_display_block_list.galgas", 45)))).boolEnum () ;
      if (kBoolTrue == test_0) {
        var_nextBlockLabel_1452 = constinArgument_inGeneratedBlockList.getter_mBlockAtIndex (index_1383.add_operation (GALGAS_uint (uint32_t (1U)), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 46)), inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 46)).readProperty_mLabel ().readProperty_string () ;
      }
    }
    if (kBoolFalse == test_0) {
      var_nextBlockLabel_1452 = GALGAS_string::makeEmptyString () ;
    }
    extensionMethod_display (enumerator_1388.current_mBlock (HERE), var_nextBlockLabel_1452, ioArgument_ioListFileContents, inCompiler COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 50)) ;
    enumerator_1388.gotoNextObject () ;
    index_1383.increment_operation (inCompiler  COMMA_SOURCE_FILE ("ipic18_display_block_list.galgas", 43)) ;
  }
}


//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_withNoOperand analyzeSimpleInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_withNoOperand::method_analyzeSimpleInstruction (const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
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
  const GALGAS_pic_31__38_Instruction_5F_withNoOperand temp_0 = this ;
  const GALGAS_pic_31__38_Instruction_5F_withNoOperand temp_1 = this ;
  outArgument_outInstruction = GALGAS_ipic_31__38_InstructionWithNoOperand::init_21__21_ (temp_0.readProperty_mInstructionLocation (), temp_1.readProperty_mKind (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FDA analyzeSimpleInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FDA::method_analyzeSimpleInstruction (const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                          const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                          const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                          const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                          const GALGAS_constantMap constinArgument_inConstantMap,
                                                                          GALGAS_uint & ioArgument_ioCurrentBank,
                                                                          const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                          GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                          GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_6678 ;
  const GALGAS_pic_31__38_Instruction_5F_FDA temp_0 = this ;
  const GALGAS_pic_31__38_Instruction_5F_FDA temp_1 = this ;
  GALGAS_bitSliceTable joker_6706 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, temp_1.readProperty_m_5F_W_5F_isDestination ().operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 178)), var_IPICregisterDescription_6678, joker_6706, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 173)) ;
  const GALGAS_pic_31__38_Instruction_5F_FDA temp_2 = this ;
  const GALGAS_pic_31__38_Instruction_5F_FDA temp_3 = this ;
  const GALGAS_pic_31__38_Instruction_5F_FDA temp_4 = this ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FDA::init_21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mInstruction_5F_FDA_5F_base_5F_code (), var_IPICregisterDescription_6678, temp_4.readProperty_m_5F_W_5F_isDestination (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FA analyzeSimpleInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FA::method_analyzeSimpleInstruction (const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                         const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                         const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                         const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                         const GALGAS_constantMap constinArgument_inConstantMap,
                                                                         GALGAS_uint & ioArgument_ioCurrentBank,
                                                                         const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                         GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                         GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                         Compiler * inCompiler
                                                                         COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_7616 ;
  const GALGAS_pic_31__38_Instruction_5F_FA temp_0 = this ;
  GALGAS_bitSliceTable joker_7644 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_IPICregisterDescription_7616, joker_7644, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 203)) ;
  GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code var_code_7716 ;
  const GALGAS_pic_31__38_Instruction_5F_FA temp_1 = this ;
  switch (temp_1.readProperty_mFAinstruction ().enumValue ()) {
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kNotBuilt:
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CLRF:
    {
      var_code_7716 = GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 215)) ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_MOVWF:
    {
      var_code_7716 = GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 216)) ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_MULWF:
    {
      var_code_7716 = GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MULWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 217)) ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_NEGF:
    {
      var_code_7716 = GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_NEGF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 218)) ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_SETF:
    {
      var_code_7716 = GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 219)) ;
    }
    break ;
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CPFSEQ:
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CPFSGT:
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_CPFSLT:
  case GALGAS_FA_5F_instruction_5F_base_5F_code::kEnum_TSTFSZ:
    {
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (GALGAS_location::class_func_nowhere (SOURCE_FILE ("ipic18_build_block_representation.galgas", 221)), GALGAS_string ("*** INTERNAL ERROR ***"), fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 221)) ;
      var_code_7716.drop () ; // Release error dropped variable
    }
    break ;
  }
  const GALGAS_pic_31__38_Instruction_5F_FA temp_3 = this ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_3.readProperty_mInstructionLocation (), var_code_7716, var_IPICregisterDescription_7616, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_MOVFF analyzeSimpleInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_MOVFF::method_analyzeSimpleInstruction (const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                            const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                            const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                            const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                            const GALGAS_constantMap constinArgument_inConstantMap,
                                                                            GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                            const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                            GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                            GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                            Compiler * inCompiler
                                                                            COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_sourceIPICregisterDescription_9014 ;
  const GALGAS_pic_31__38_Instruction_5F_MOVFF temp_0 = this ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((cPtr_registerExpression *) temp_0.readProperty_mSourceRegisterName ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (false), var_sourceIPICregisterDescription_9014, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 241)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_destinationIPICregisterDescription_9279 ;
  const GALGAS_pic_31__38_Instruction_5F_MOVFF temp_1 = this ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((cPtr_registerExpression *) temp_1.readProperty_mDestinationRegisterName ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_destinationIPICregisterDescription_9279, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 248)) ;
  const GALGAS_pic_31__38_Instruction_5F_MOVFF temp_2 = this ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::init_21__21__21_ (temp_2.readProperty_mInstructionLocation (), var_sourceIPICregisterDescription_9014, var_destinationIPICregisterDescription_9279, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_FBA analyzeSimpleInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_FBA::method_analyzeSimpleInstruction (const GALGAS_uint constinArgument_inAccessBankSplitOffset,
                                                                          const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                          const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                          const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                          const GALGAS_constantMap constinArgument_inConstantMap,
                                                                          GALGAS_uint & ioArgument_ioCurrentBank,
                                                                          const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                          GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                          GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_IPICregisterDescription_10178 ;
  GALGAS_bitSliceTable var_bitSliceTable_10226 ;
  const GALGAS_pic_31__38_Instruction_5F_FBA temp_0 = this ;
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) temp_0.readProperty_mRegisterExpression ().ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_IPICregisterDescription_10178, var_bitSliceTable_10226, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 273)) ;
  GALGAS_uint var_bitNumber_10394 ;
  const GALGAS_pic_31__38_Instruction_5F_FBA temp_1 = this ;
  callExtensionMethod_getBitNumber ((cPtr_bitNumberExpression *) temp_1.readProperty_mBitNumber ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, ioArgument_ioUsedRegisters, var_bitSliceTable_10226, var_bitNumber_10394, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 283)) ;
  const GALGAS_pic_31__38_Instruction_5F_FBA temp_2 = this ;
  const GALGAS_pic_31__38_Instruction_5F_FBA temp_3 = this ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FBA::init_21__21__21__21_ (temp_2.readProperty_mInstructionLocation (), temp_3.readProperty_mBitOrientedOp (), var_IPICregisterDescription_10178, var_bitNumber_10394, inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_literalOperation analyzeSimpleInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_literalOperation::method_analyzeSimpleInstruction (const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                                       const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                                       const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                                       const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                                       const GALGAS_constantMap constinArgument_inConstantMap,
                                                                                       GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                                       const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                                       GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                                       GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                                       Compiler * inCompiler
                                                                                       COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_36__34_ var_result_11130 ;
  const GALGAS_pic_31__38_Instruction_5F_literalOperation temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mImmediatExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_11130, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 309)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::greaterThan, var_result_11130.objectCompare (GALGAS_sint_36__34_ (int64_t (255LL)))).operator_or (GALGAS_bool (ComparisonKind::lowerThan, var_result_11130.objectCompare (GALGAS_sint_36__34_ (int64_t (-128LL)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 311)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_pic_31__38_Instruction_5F_literalOperation temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("immediate value is evaluated as ").add_operation (var_result_11130.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 312)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 312)).add_operation (GALGAS_string (" (should be between -128 and 255)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 312)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 312)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_literalOperation temp_4 = this ;
  const GALGAS_pic_31__38_Instruction_5F_literalOperation temp_5 = this ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_4.readProperty_mInstructionLocation (), temp_5.readProperty_mLiteralInstruction (), var_result_11130.operator_and (GALGAS_sint_36__34_ (int64_t (255LL)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 318)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 318)), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_fnop analyzeSimpleInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_fnop::method_analyzeSimpleInstruction (const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                           const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                           const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                           const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                           const GALGAS_constantMap constinArgument_inConstantMap,
                                                                           GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                           const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                           GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                           GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_sint_36__34_ var_result_12063 ;
  const GALGAS_pic_31__38_Instruction_5F_fnop temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mImmediatExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_12063, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 333)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::greaterThan, var_result_12063.objectCompare (GALGAS_sint_36__34_ (int64_t (4095LL)))).operator_or (GALGAS_bool (ComparisonKind::lowerThan, var_result_12063.objectCompare (GALGAS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 335)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_pic_31__38_Instruction_5F_fnop temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("immediate value is evaluated as ").add_operation (var_result_12063.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 336)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 336)).add_operation (GALGAS_string (" (should be between 0 and 4095)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 336)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 336)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_fnop temp_4 = this ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FNOP::init_21__21_ (temp_4.readProperty_mInstructionLocation (), var_result_12063.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 341)), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_LFSR analyzeSimpleInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_LFSR::method_analyzeSimpleInstruction (const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                           const GALGAS_routineMap /* constinArgument_inRoutineMap */,
                                                                           const GALGAS_registerTable constinArgument_inRegisterTable,
                                                                           const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                           const GALGAS_constantMap constinArgument_inConstantMap,
                                                                           GALGAS_uint & /* ioArgument_ioCurrentBank */,
                                                                           const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                           GALGAS_stringset & ioArgument_ioUsedRegisters,
                                                                           GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                           Compiler * inCompiler
                                                                           COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_pic_31__38_Instruction_5F_LFSR temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mFSRindex ().readProperty_uint ().objectCompare (GALGAS_uint (uint32_t (2U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_pic_31__38_Instruction_5F_LFSR temp_2 = this ;
      const GALGAS_pic_31__38_Instruction_5F_LFSR temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mFSRindex ().readProperty_location (), GALGAS_string ("the LFSR register idx (").add_operation (temp_3.readProperty_mFSRindex ().readProperty_uint ().getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 357)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 357)).add_operation (GALGAS_string (") should be lower or equal to 2"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 357)), fixItArray4  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 357)) ;
    }
  }
  GALGAS_sint_36__34_ var_result_13101 ;
  const GALGAS_pic_31__38_Instruction_5F_LFSR temp_5 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_5.readProperty_mImmediatExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_13101, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 360)) ;
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = GALGAS_bool (ComparisonKind::greaterThan, var_result_13101.objectCompare (GALGAS_sint_36__34_ (int64_t (4095LL)))).operator_or (GALGAS_bool (ComparisonKind::lowerThan, var_result_13101.objectCompare (GALGAS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 362)).boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_pic_31__38_Instruction_5F_LFSR temp_7 = this ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mInstructionLocation (), GALGAS_string ("immediate value is evaluated as ").add_operation (var_result_13101.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 363)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 363)).add_operation (GALGAS_string (" (should be between 0 and 4095)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 363)), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 363)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_LFSR temp_9 = this ;
  const GALGAS_pic_31__38_Instruction_5F_LFSR temp_10 = this ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_LFSR::init_21__21__21_ (temp_9.readProperty_mInstructionLocation (), temp_10.readProperty_mFSRindex (), var_result_13101.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 368)), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_JSR analyzeSimpleInstruction'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_JSR::method_analyzeSimpleInstruction (const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
                                                                          const GALGAS_routineMap constinArgument_inRoutineMap,
                                                                          const GALGAS_registerTable /* constinArgument_inRegisterTable */,
                                                                          const GALGAS_pic_31__38__5F_dataMap /* constinArgument_inDataMap */,
                                                                          const GALGAS_constantMap /* constinArgument_inConstantMap */,
                                                                          GALGAS_uint & ioArgument_ioCurrentBank,
                                                                          const GALGAS_bool constinArgument_inShouldPreserveBSR,
                                                                          GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                          GALGAS_ipic_31__38_SequentialInstruction & outArgument_outInstruction,
                                                                          Compiler * inCompiler
                                                                          COMMA_UNUSED_LOCATION_ARGS) {
  GALGAS_bool var_isNoReturn_13986 ;
  GALGAS_uint var_requiredBank_14008 ;
  GALGAS_uint var_returnedBank_14032 ;
  GALGAS_bool var_preservesBank_14056 ;
  const GALGAS_pic_31__38_Instruction_5F_JSR temp_0 = this ;
  constinArgument_inRoutineMap.method_searchKey (temp_0.readProperty_mTargetLabel (), var_isNoReturn_13986, var_requiredBank_14008, var_returnedBank_14032, var_preservesBank_14056, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 384)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::notEqual, var_requiredBank_14008.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 385)))).operator_and (GALGAS_bool (ComparisonKind::notEqual, var_requiredBank_14008.objectCompare (ioArgument_ioCurrentBank)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 385)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_pic_31__38_Instruction_5F_JSR temp_2 = this ;
      GALGAS_string var_errorMessage_14160 = GALGAS_string ("the routine '").add_operation (temp_2.readProperty_mTargetLabel ().readProperty_string (), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 386)).add_operation (GALGAS_string ("' requires bank selection to be set to "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 386)).add_operation (var_requiredBank_14008.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 386)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 386)) ;
      var_errorMessage_14160.plusAssign_operation(GALGAS_string (", but bank selection "), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 387)) ;
      enumGalgasBool test_3 = kBoolTrue ;
      if (kBoolTrue == test_3) {
        test_3 = GALGAS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 388)))).boolEnum () ;
        if (kBoolTrue == test_3) {
          var_errorMessage_14160.plusAssign_operation(GALGAS_string ("is not defined"), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 389)) ;
        }
      }
      if (kBoolFalse == test_3) {
        var_errorMessage_14160.plusAssign_operation(GALGAS_string ("is set to ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 391)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 391)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 391)) ;
      }
      const GALGAS_pic_31__38_Instruction_5F_JSR temp_4 = this ;
      TC_Array <FixItDescription> fixItArray5 ;
      inCompiler->emitSemanticError (temp_4.readProperty_mTargetLabel ().readProperty_location (), var_errorMessage_14160, fixItArray5  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 393)) ;
    }
  }
  enumGalgasBool test_6 = kBoolTrue ;
  if (kBoolTrue == test_6) {
    test_6 = var_isNoReturn_13986.boolEnum () ;
    if (kBoolTrue == test_6) {
      const GALGAS_pic_31__38_Instruction_5F_JSR temp_7 = this ;
      TC_Array <FixItDescription> fixItArray8 ;
      inCompiler->emitSemanticError (temp_7.readProperty_mTargetLabel ().readProperty_location (), GALGAS_string ("a \"noreturn\" routine should be called with a BRA, GOTO, Bcc or JUMP instruction"), fixItArray8  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 396)) ;
    }
  }
  enumGalgasBool test_9 = kBoolTrue ;
  if (kBoolTrue == test_9) {
    test_9 = var_preservesBank_14056.operator_not (SOURCE_FILE ("ipic18_build_block_representation.galgas", 398)).boolEnum () ;
    if (kBoolTrue == test_9) {
      ioArgument_ioCurrentBank = var_returnedBank_14032 ;
      enumGalgasBool test_10 = kBoolTrue ;
      if (kBoolTrue == test_10) {
        test_10 = constinArgument_inShouldPreserveBSR.boolEnum () ;
        if (kBoolTrue == test_10) {
          const GALGAS_pic_31__38_Instruction_5F_JSR temp_11 = this ;
          TC_Array <FixItDescription> fixItArray12 ;
          inCompiler->emitSemanticError (temp_11.readProperty_mTargetLabel ().readProperty_location (), GALGAS_string ("the routine call should preserve bank selection"), fixItArray12  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 401)) ;
        }
      }
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_JSR temp_13 = this ;
  const GALGAS_pic_31__38_Instruction_5F_JSR temp_14 = this ;
  const GALGAS_pic_31__38_Instruction_5F_JSR temp_15 = this ;
  outArgument_outInstruction = GALGAS_ipic_31__38__5F_intermediate_5F_JSR::init_21__21__21_ (temp_13.readProperty_mInstructionLocation (), temp_14.readProperty_mTargetLabel (), temp_15.readProperty_mKind (), inCompiler COMMA_HERE) ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_checkbank analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_checkbank::method_analyze (const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
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
                                                               const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                               const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                               GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                               Compiler * inCompiler
                                                               COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    const GALGAS_pic_31__38_Instruction_5F_checkbank temp_1 = this ;
    test_0 = GALGAS_bool (ComparisonKind::greaterThan, temp_1.readProperty_mBankIndex ().objectCompare (GALGAS_uint (uint32_t (15U)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_pic_31__38_Instruction_5F_checkbank temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("Bank index should be <= 15"), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 454)) ;
    }
  }
  if (kBoolFalse == test_0) {
    enumGalgasBool test_4 = kBoolTrue ;
    if (kBoolTrue == test_4) {
      test_4 = GALGAS_bool (ComparisonKind::equal, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 455)))).boolEnum () ;
      if (kBoolTrue == test_4) {
        const GALGAS_pic_31__38_Instruction_5F_checkbank temp_5 = this ;
        TC_Array <FixItDescription> fixItArray6 ;
        inCompiler->emitSemanticError (temp_5.readProperty_mInstructionLocation (), GALGAS_string ("checkbank fail: there is no selected bank"), fixItArray6  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 456)) ;
      }
    }
    if (kBoolFalse == test_4) {
      enumGalgasBool test_7 = kBoolTrue ;
      if (kBoolTrue == test_7) {
        const GALGAS_pic_31__38_Instruction_5F_checkbank temp_8 = this ;
        test_7 = GALGAS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (temp_8.readProperty_mBankIndex ())).boolEnum () ;
        if (kBoolTrue == test_7) {
          const GALGAS_pic_31__38_Instruction_5F_checkbank temp_9 = this ;
          const GALGAS_pic_31__38_Instruction_5F_checkbank temp_10 = this ;
          TC_Array <FixItDescription> fixItArray11 ;
          inCompiler->emitSemanticError (temp_9.readProperty_mInstructionLocation (), GALGAS_string ("checkbank fail: the selected bank is ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 458)).add_operation (GALGAS_string (", required bank is "), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 458)).add_operation (temp_10.readProperty_mBankIndex ().getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 458)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 458)), fixItArray11  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 458)) ;
        }
      }
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_checkbank temp_12 = this ;
  ioArgument_ioCurrentBank = temp_12.readProperty_mBankIndex () ;
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18Instruction_checknobank analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_Instruction_5F_checknobank::method_analyze (const GALGAS_uint /* constinArgument_inAccessBankSplitOffset */,
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
                                                                 const GALGAS_bool /* constinArgument_inShouldPreserveBSR */,
                                                                 const GALGAS_routineKind /* constinArgument_inRoutineKind */,
                                                                 GALGAS_stringset & /* ioArgument_ioUsedRegisters */,
                                                                 Compiler * inCompiler
                                                                 COMMA_UNUSED_LOCATION_ARGS) {
  enumGalgasBool test_0 = kBoolTrue ;
  if (kBoolTrue == test_0) {
    test_0 = GALGAS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 482)))).boolEnum () ;
    if (kBoolTrue == test_0) {
      const GALGAS_pic_31__38_Instruction_5F_checknobank temp_1 = this ;
      TC_Array <FixItDescription> fixItArray2 ;
      inCompiler->emitSemanticError (temp_1.readProperty_mInstructionLocation (), GALGAS_string ("checknobank fail: the ").add_operation (ioArgument_ioCurrentBank.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 483)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 483)).add_operation (GALGAS_string (" bank is selected"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 483)), fixItArray2  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 483)) ;
      ioArgument_ioCurrentBank = GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 484)) ;
    }
  }
}
//--------------------------------------------------------------------------------------------------
//
//Overriding extension method '@pic18PiccoloSimpleInstruction analyze'
//
//--------------------------------------------------------------------------------------------------

void cPtr_pic_31__38_PiccoloSimpleInstruction::method_analyze (const GALGAS_uint constinArgument_inAccessBankSplitOffset,
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
  GALGAS_ipic_31__38_SequentialInstruction var_instruction_18792 ;
  const GALGAS_pic_31__38_PiccoloSimpleInstruction temp_0 = this ;
  callExtensionMethod_analyzeSimpleInstruction ((cPtr_pic_31__38_PiccoloSimpleInstruction *) temp_0.ptr (), constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, ioArgument_ioCurrentBank, constinArgument_inShouldPreserveBSR, ioArgument_ioUsedRegisters, var_instruction_18792, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 506)) ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (var_instruction_18792, GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 517)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 517)) ;
}
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
  ioArgument_ioGeneratedInstructionList = GALGAS_ipic_31__38_SequentialInstructionList::init (inCompiler COMMA_HERE) ;
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
  GALGAS_registerExpression var_BSRregister_23145 = GALGAS_registerExpression::init_21__21__21_ (GALGAS_lstring::init_21__21_ (GALGAS_string ("BSR"), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 646)), inCompiler COMMA_HERE), GALGAS_immediatInteger::init_21_ (GALGAS_luint::init_21__21_ (GALGAS_uint (uint32_t (0U)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 647)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 648)), inCompiler COMMA_HERE) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_BSR_5F_IPICregisterDescription_23468 ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((cPtr_registerExpression *) var_BSRregister_23145.ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_BSR_5F_IPICregisterDescription_23468, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 650)) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpressionWithoutBSRIndication var_save_5F_IPICregisterDescription_23761 ;
  const GALGAS_pic_31__38_Instruction_5F_savebank temp_0 = this ;
  callExtensionMethod_analyzeRegisterExpressionWithoutCheckingBank ((cPtr_registerExpression *) temp_0.readProperty_mRegister ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_save_5F_IPICregisterDescription_23761, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 658)) ;
  const GALGAS_pic_31__38_Instruction_5F_savebank temp_1 = this ;
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::init_21__21__21_ (temp_1.readProperty_mInstructionLocation (), var_BSR_5F_IPICregisterDescription_23468, var_save_5F_IPICregisterDescription_23761, inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 671)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 666)) ;
  GALGAS_uint var_finalBank_24111 = ioArgument_ioCurrentBank ;
  {
  const GALGAS_pic_31__38_Instruction_5F_savebank temp_2 = this ;
  routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (temp_2.readProperty_mInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, constinArgument_inConstantMap, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_finalBank_24111, GALGAS_bool (false), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 675)) ;
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
  ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVFF::init_21__21__21_ (temp_6.readProperty_mInstructionLocation (), var_save_5F_IPICregisterDescription_23761, var_BSR_5F_IPICregisterDescription_23468, inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 702)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 697)) ;
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
  GALGAS_sint_36__34_ var_lowerBound_25715 ;
  const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mLowerBoundExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_lowerBound_25715, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 725)) ;
  GALGAS_sint_36__34_ var_upperBound_25825 ;
  const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_1 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_1.readProperty_mUpperBoundExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_upperBound_25825, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 726)) ;
  enumGalgasBool test_2 = kBoolTrue ;
  if (kBoolTrue == test_2) {
    test_2 = GALGAS_bool (ComparisonKind::greaterThan, var_lowerBound_25715.objectCompare (var_upperBound_25825)).boolEnum () ;
    if (kBoolTrue == test_2) {
      const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_3 = this ;
      TC_Array <FixItDescription> fixItArray4 ;
      inCompiler->emitSemanticError (temp_3.readProperty_mInstructionLocation (), GALGAS_string ("lower bound (").add_operation (var_lowerBound_25715.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)).add_operation (GALGAS_string (") greater then upper bound ("), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)).add_operation (var_upperBound_25825.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)).add_operation (GALGAS_string (")"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)), fixItArray4  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 729)) ;
    }
  }
  if (kBoolFalse == test_2) {
    enumGalgasBool test_5 = kBoolTrue ;
    if (kBoolTrue == test_5) {
      test_5 = GALGAS_bool (ComparisonKind::greaterThan, var_upperBound_25825.substract_operation (var_lowerBound_25715, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 730)).objectCompare (GALGAS_sint_36__34_ (int64_t (16777215LL)))).boolEnum () ;
      if (kBoolTrue == test_5) {
        const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_6 = this ;
        TC_Array <FixItDescription> fixItArray7 ;
        inCompiler->emitSemanticError (temp_6.readProperty_mInstructionLocation (), GALGAS_string ("repeat count (").add_operation (var_upperBound_25825.substract_operation (var_lowerBound_25715, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 731)).getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 731)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 731)).add_operation (GALGAS_string (") too large (should be <= 0xFF_FFFF)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 731)), fixItArray7  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 731)) ;
      }
    }
  }
  GALGAS_uint var_finalBank_26264 = ioArgument_ioCurrentBank ;
  GALGAS_constantMap var_tempConstantMap_26296 = constinArgument_inConstantMap ;
  {
  const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_8 = this ;
  var_tempConstantMap_26296.setter_insertKey (temp_8.readProperty_mConstantName (), var_lowerBound_25715, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 736)) ;
  }
  {
  const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_9 = this ;
  routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (temp_9.readProperty_mInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, var_tempConstantMap_26296, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, var_finalBank_26264, GALGAS_bool (true), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 737)) ;
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
    test_13 = GALGAS_bool (ComparisonKind::notEqual, var_finalBank_26264.objectCompare (ioArgument_ioCurrentBank)).boolEnum () ;
    if (kBoolTrue == test_13) {
      const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_14 = this ;
      TC_Array <FixItDescription> fixItArray15 ;
      inCompiler->emitSemanticError (temp_14.readProperty_mEndOfInstruction (), GALGAS_string ("enclosed instruction list should not modify bank selection"), fixItArray15  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 759)) ;
    }
  }
  GALGAS_sint_36__34_ var_idx_27126 = var_lowerBound_25715.add_operation (GALGAS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 762)) ;
  if (var_upperBound_25825.substract_operation (var_lowerBound_25715, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).add_operation (GALGAS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).isValid ()) {
    uint32_t variant_27149 = var_upperBound_25825.substract_operation (var_lowerBound_25715, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).add_operation (GALGAS_sint_36__34_ (int64_t (1LL)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).uintValue () ;
    bool loop_27149 = true ;
    while (loop_27149) {
      GALGAS_bool test_16 = GALGAS_bool (ComparisonKind::lowerOrEqual, var_idx_27126.objectCompare (var_upperBound_25825)) ;
      if (kBoolTrue == test_16.boolEnum ()) {
        test_16 = GALGAS_bool (ComparisonKind::equal, GALGAS_uint::class_func_errorCount (SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)).objectCompare (GALGAS_uint (uint32_t (0U)))) ;
      }
      loop_27149 = test_16.isValid () ;
      if (loop_27149) {
        loop_27149 = test_16.boolValue () ;
      }
      if (loop_27149 && (0 == variant_27149)) {
        loop_27149 = false ;
        inCompiler->loopRunTimeVariantError (SOURCE_FILE ("ipic18_build_block_representation.galgas", 763)) ;
      }
      if (loop_27149) {
        variant_27149 -- ;
        GALGAS_constantMap var_constantMap_27255 = constinArgument_inConstantMap ;
        {
        const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_17 = this ;
        var_constantMap_27255.setter_insertKey (temp_17.readProperty_mConstantName (), var_idx_27126, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 765)) ;
        }
        {
        const GALGAS_pic_31__38_Instruction_5F_repetitionStatique temp_18 = this ;
        routine_analyzeInstructionList_3F__26__3F__3F__3F__3F__3F__3F__26__26__26__26__26__3F__3F__26_ (temp_18.readProperty_mInstructionList (), ioArgument_ioGeneratedBlockList, constinArgument_inAccessBankSplitOffset, constinArgument_inRoutineMap, constinArgument_inRegisterTable, constinArgument_inDataMap, var_constantMap_27255, constinArgument_inMacroMap, ioArgument_ioLocalLabelIndex, ioArgument_ioGeneratedInstructionList, ioArgument_ioBlockLabel, ioArgument_ioListFileContents, ioArgument_ioCurrentBank, GALGAS_bool (true), constinArgument_inRoutineKind, ioArgument_ioUsedRegisters, inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 766)) ;
        }
        var_idx_27126.plusAssign_operation(GALGAS_sint_36__34_ (int64_t (1LL)), inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 784)) ;
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
  GALGAS_uint var_registerAddress_30239 ;
  const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register temp_3 = this ;
  callExtensionMethod_getRegisterAddress ((cPtr_registerExpression *) temp_3.readProperty_mRegisterExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (false), ioArgument_ioUsedRegisters, var_registerAddress_30239, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 842)) ;
  GALGAS_uint var_newBank_30360 = var_registerAddress_30239.right_shift_operation (GALGAS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 850)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 850)) ;
  enumGalgasBool test_4 = kBoolTrue ;
  if (kBoolTrue == test_4) {
    test_4 = GALGAS_bool (ComparisonKind::notEqual, ioArgument_ioCurrentBank.objectCompare (var_newBank_30360)).boolEnum () ;
    if (kBoolTrue == test_4) {
      ioArgument_ioCurrentBank = var_newBank_30360 ;
      const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register temp_5 = this ;
      const GALGAS_pic_31__38_Instruction_5F_banksel_5F_register temp_6 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_MOVLB::init_21__21_ (temp_5.readProperty_mInstructionLocation (), GALGAS_luint::init_21__21_ (var_newBank_30360, temp_6.readProperty_mRegisterExpression ().readProperty_mRegisterName ().readProperty_location (), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 857)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 853)) ;
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
        inCompiler->emitSemanticWarning (temp_9.readProperty_mRegisterExpression ().readProperty_mRegisterName ().readProperty_location (), GALGAS_string ("useless instruction: the bank ").add_operation (var_newBank_30360.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 860)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 860)).add_operation (GALGAS_string (" is already selected"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 860)), fixItArray10  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 860)) ;
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
  GALGAS_sint_36__34_ var_result_34883 ;
  const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_0 = this ;
  callExtensionMethod_eval ((cPtr_immediatExpression *) temp_0.readProperty_mImmediatExpression ().ptr (), constinArgument_inRegisterTable, constinArgument_inConstantMap, var_result_34883, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 980)) ;
  enumGalgasBool test_1 = kBoolTrue ;
  if (kBoolTrue == test_1) {
    test_1 = GALGAS_bool (ComparisonKind::greaterThan, var_result_34883.objectCompare (GALGAS_sint_36__34_ (int64_t (16777215LL)))).operator_or (GALGAS_bool (ComparisonKind::lowerThan, var_result_34883.objectCompare (GALGAS_sint_36__34_ (int64_t (0LL)))) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 982)).boolEnum () ;
    if (kBoolTrue == test_1) {
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_2 = this ;
      TC_Array <FixItDescription> fixItArray3 ;
      inCompiler->emitSemanticError (temp_2.readProperty_mInstructionLocation (), GALGAS_string ("immediate value is evaluated as ").add_operation (var_result_34883.getter_string (SOURCE_FILE ("ipic18_build_block_representation.galgas", 983)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 983)).add_operation (GALGAS_string (" (should be between 0 and 0xFF_FFFF)"), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 983)), fixItArray3  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 983)) ;
    }
  }
  GALGAS_uint var_address_35108 = var_result_34883.getter_uint (inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 985)) ;
  const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_4 = this ;
  GALGAS_registerExpression var_TBLPTRU_35154 = GALGAS_registerExpression::init_21__21__21_ (GALGAS_lstring::init_21__21_ (GALGAS_string ("TBLPTRU"), temp_4.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GALGAS_immediatInteger::init_21_ (GALGAS_luint::init_21__21_ (GALGAS_uint (uint32_t (0U)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 989)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 990)), inCompiler COMMA_HERE) ;
  GALGAS_ipic_31__38__5F_intermediate_5F_registerExpression var_outIPICregisterDescription_35510 ;
  GALGAS_bitSliceTable joker_35541 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRU_35154.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_35510, joker_35541, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 992)) ;
  GALGAS_uint var_upper_35582 = var_address_35108.right_shift_operation (GALGAS_bigint ("16", inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1002)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1002)) ;
  enumGalgasBool test_5 = kBoolTrue ;
  if (kBoolTrue == test_5) {
    test_5 = GALGAS_bool (ComparisonKind::equal, var_upper_35582.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_5) {
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_6 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_6.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1006)), var_outIPICregisterDescription_35510, inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1009)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1004)) ;
    }
  }
  if (kBoolFalse == test_5) {
    enumGalgasBool test_7 = kBoolTrue ;
    if (kBoolTrue == test_7) {
      test_7 = GALGAS_bool (ComparisonKind::equal, var_upper_35582.objectCompare (GALGAS_uint (uint32_t (255U)))).boolEnum () ;
      if (kBoolTrue == test_7) {
        const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_8 = this ;
        ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_8.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1014)), var_outIPICregisterDescription_35510, inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1017)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1012)) ;
      }
    }
    if (kBoolFalse == test_7) {
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_9 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_9.readProperty_mInstructionLocation (), GALGAS_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1022)), var_upper_35582, inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1025)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1020)) ;
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_10 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_10.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1029)), var_outIPICregisterDescription_35510, inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1032)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1027)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_11 = this ;
  GALGAS_registerExpression var_TBLPTRH_36570 = GALGAS_registerExpression::init_21__21__21_ (GALGAS_lstring::init_21__21_ (GALGAS_string ("TBLPTRH"), temp_11.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GALGAS_immediatInteger::init_21_ (GALGAS_luint::init_21__21_ (GALGAS_uint (uint32_t (0U)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1038)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1039)), inCompiler COMMA_HERE) ;
  GALGAS_bitSliceTable joker_36913 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRH_36570.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_35510, joker_36913, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1041)) ;
  GALGAS_uint var_high_36954 = var_address_35108.right_shift_operation (GALGAS_bigint ("8", inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1051)), inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1051)).operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1051)) ;
  enumGalgasBool test_12 = kBoolTrue ;
  if (kBoolTrue == test_12) {
    test_12 = GALGAS_bool (ComparisonKind::equal, var_high_36954.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_12) {
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_13 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_13.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1055)), var_outIPICregisterDescription_35510, inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1058)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1053)) ;
    }
  }
  if (kBoolFalse == test_12) {
    enumGalgasBool test_14 = kBoolTrue ;
    if (kBoolTrue == test_14) {
      test_14 = GALGAS_bool (ComparisonKind::equal, var_high_36954.objectCompare (GALGAS_uint (uint32_t (255U)))).boolEnum () ;
      if (kBoolTrue == test_14) {
        const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_15 = this ;
        ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_15.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1063)), var_outIPICregisterDescription_35510, inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1066)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1061)) ;
      }
    }
    if (kBoolFalse == test_14) {
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_16 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_16.readProperty_mInstructionLocation (), GALGAS_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1071)), var_high_36954, inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1074)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1069)) ;
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_17 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_17.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1078)), var_outIPICregisterDescription_35510, inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1081)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1076)) ;
    }
  }
  const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_18 = this ;
  GALGAS_registerExpression var_TBLPTRL_37945 = GALGAS_registerExpression::init_21__21__21_ (GALGAS_lstring::init_21__21_ (GALGAS_string ("TBLPTRL"), temp_18.readProperty_mInstructionLocation (), inCompiler COMMA_HERE), GALGAS_immediatInteger::init_21_ (GALGAS_luint::init_21__21_ (GALGAS_uint (uint32_t (0U)), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1087)), inCompiler COMMA_HERE), inCompiler COMMA_HERE), GALGAS_location::class_func_here (inCompiler  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1088)), inCompiler COMMA_HERE) ;
  GALGAS_bitSliceTable joker_38287 ; // Joker input parameter
  callExtensionMethod_analyzeRegisterExpression ((cPtr_registerExpression *) var_TBLPTRL_37945.ptr (), constinArgument_inAccessBankSplitOffset, ioArgument_ioCurrentBank, constinArgument_inRegisterTable, constinArgument_inConstantMap, GALGAS_bool (true), var_outIPICregisterDescription_35510, joker_38287, ioArgument_ioUsedRegisters, inCompiler COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1090)) ;
  GALGAS_uint var_low_38328 = var_address_35108.operator_and (GALGAS_uint (uint32_t (255U)) COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1100)) ;
  enumGalgasBool test_19 = kBoolTrue ;
  if (kBoolTrue == test_19) {
    test_19 = GALGAS_bool (ComparisonKind::equal, var_low_38328.objectCompare (GALGAS_uint (uint32_t (0U)))).boolEnum () ;
    if (kBoolTrue == test_19) {
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_20 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_20.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_CLRF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1104)), var_outIPICregisterDescription_35510, inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1107)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1102)) ;
    }
  }
  if (kBoolFalse == test_19) {
    enumGalgasBool test_21 = kBoolTrue ;
    if (kBoolTrue == test_21) {
      test_21 = GALGAS_bool (ComparisonKind::equal, var_low_38328.objectCompare (GALGAS_uint (uint32_t (255U)))).boolEnum () ;
      if (kBoolTrue == test_21) {
        const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_22 = this ;
        ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_22.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_SETF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1112)), var_outIPICregisterDescription_35510, inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1115)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1110)) ;
      }
    }
    if (kBoolFalse == test_21) {
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_23 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_literalOperation::init_21__21__21_ (temp_23.readProperty_mInstructionLocation (), GALGAS_literal_5F_instruction_5F_opcode::class_func_MOVLW (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1120)), var_low_38328, inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1123)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1118)) ;
      const GALGAS_pic_31__38_Instruction_5F_LTBLPTR temp_24 = this ;
      ioArgument_ioGeneratedInstructionList.addAssign_operation (GALGAS_ipic_31__38__5F_intermediate_5F_instruction_5F_FA::init_21__21__21_ (temp_24.readProperty_mInstructionLocation (), GALGAS_FA_5F_sequential_5F_instruction_5F_base_5F_code::class_func_MOVWF (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1127)), var_outIPICregisterDescription_35510, inCompiler COMMA_HERE), GALGAS_uint::class_func_max (SOURCE_FILE ("ipic18_build_block_representation.galgas", 1130)), GALGAS_uint (uint32_t (0U))  COMMA_SOURCE_FILE ("ipic18_build_block_representation.galgas", 1125)) ;
    }
  }
}
